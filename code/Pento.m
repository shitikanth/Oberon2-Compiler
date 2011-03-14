MODULE Pento;

(* Flags: -v: increase verbosity, -p: select unplaced pieces,
    -q: select unoccupied squares *)

IMPORT Out, Strings, Args;

TYPE 
  CellPtr = POINTER TO Cell;
  ColumnPtr = POINTER TO Column;

  Cell = RECORD 
      up, down, left, right: CellPtr; 	(* Neighbours *)
      column: ColumnPtr;		(* Top of the column *)
    END;

  Column = RECORD
      name: CHAR;			(* Piece, or 0X if a square *)
      x, y: INTEGER;			(* Coords of square *)
      size: INTEGER;			(* No. of intersecting rows *)
      prev, next: ColumnPtr;		(* Links to adjacent columns *)
      head: CellPtr;			(* Dummy node for this column *)
    END;

VAR 
  root: ColumnPtr; 			(* Root of the entire matrix *)
  ncols, nrows: INTEGER;		(* Statistics *)

(* |PrintCol| -- print the name of a column *)
PROCEDURE PrintCol(c: ColumnPtr);
BEGIN
  IF c.name # 0X THEN
    Out.Char(c.name)
  ELSE
    Out.String("("); Out.Int(c.x, 0); Out.String(",");
    Out.Int(c.y, 0); Out.String(")")
  END
END PrintCol;
    
(* |PrintRow| -- print all columns in a given row *)
PROCEDURE PrintRow(p: CellPtr);
  VAR q, r: CellPtr; n: INTEGER; 
BEGIN
  (* Find the piece |r| *)
  r := p;
  WHILE r.column.name = 0X DO r := r.right END;

  (* Print the columns that intersect the row *)
  q := r;
  REPEAT
    Out.String(" "); PrintCol(q.column); q := q.right
  UNTIL q = r;

  (* Print position in column *)
  n := 0; q := p.column.head;
  WHILE q # p DO n := n+1; q := q.down END;
  Out.String("; # "); Out.Int(n,0); Out.String(" of ");
  Out.Int(p.column.size, 0); Out.String(" choices for ");
  PrintCol(p.column); Out.Ln
END PrintRow;

CONST MAX = 20;				(* Max dimension of board *)

TYPE Coords = ARRAY 10 OF INTEGER;

VAR 
  boundx, boundy: INTEGER;		(* Bounds for the board *)
  square: ARRAY MAX OF ARRAY MAX OF ColumnPtr; 	(* The board *)
  piece: ARRAY 256 OF ColumnPtr;	(* The pieces *)

(* |MakeSquare| -- create column for a square *)
PROCEDURE MakeSquare(i, j: INTEGER);
  VAR p: ColumnPtr;
BEGIN
  Out.String(" ("); Out.Int(i, 0); Out.String(","); 
  Out.Int(j, 0); Out.String(")");

  NEW(p); p.name := 0X; p.x := i; p.y := j; p.size := 0;
  NEW(p.head); p.head.down := p.head; p.head.up := p.head;
  p.prev := root.prev; p.next := root; 
  root.prev.next := p; root.prev := p;
  square[i][j] := p; ncols := ncols+1
END MakeSquare;

(* |MakePiece| -- create column for a piece *)
PROCEDURE MakePiece(name: CHAR);
  VAR p: ColumnPtr;
BEGIN
  NEW(p); p.name := name; p.size := 0;
  NEW(p.head); p.head.down := p.head; p.head.up := p.head;
  p.prev := root.prev; p.next := root;
  root.prev.next := p; root.prev := p;
  piece[ORD(name)] := p; ncols := ncols+1
END MakePiece;

(* |MakeMove| -- create row for a move *)
PROCEDURE MakeMove(name: CHAR; n: INTEGER; xx, yy: Coords);
  VAR k: INTEGER; p, q: CellPtr; r: ColumnPtr;
BEGIN
  (* Link to the piece *)
  r := piece[ORD(name)];
  NEW(p); p.left := p; p.right := p;
  p.up := r.head.up; p.down := r.head;
  r.head.up.down := p; r.head.up := p;
  p.column := r; r.size := r.size+1;

  (* Link to each square *)
  FOR k := 0 TO n-1 DO
    r := square[xx[k]][yy[k]];
    NEW(q); q.left := p; q.right := p.right;
    p.right.left := q; p.right := q;
    q.up := r.head.up; q.down := r.head;
    r.head.up.down := q; r.head.up := q;
    q.column := r; r.size := r.size+1;
    p := q
  END;

  nrows := nrows+1
END MakeMove;

(* |CreateBoard| -- set up the playing area *)
PROCEDURE CreateBoard;
  VAR i, j: INTEGER;
BEGIN
  (* Make rhombus shape *)
  boundx := 14; boundy := 5;
  Out.String("bounds "); Out.Int(boundx, 0); Out.String(" ");
  Out.Int(boundy, 0); Out.Ln;

  Out.String("squares");
  FOR i := 0 TO 9 DO 
    FOR j := 0 TO 5 DO 
      MakeSquare(i+j, j) 
    END
  END;
  Out.Ln
END CreateBoard;

(* |Feasible| -- test if a proposed move lies inside the board *)
PROCEDURE Feasible(n: INTEGER; xx, yy: Coords): BOOLEAN;
  VAR k: INTEGER;
BEGIN
  FOR k := 0 TO n-1 DO
    IF square[xx[k]][yy[k]] = NIL THEN RETURN FALSE END
  END;
  RETURN TRUE
END Feasible;

(* |CreatePiece| -- create a piece and all its placements *)
PROCEDURE CreatePiece(name: CHAR; rots, refls: INTEGER; 
					layout: ARRAY OF CHAR);
  VAR i, j, k, n, m, r, z: INTEGER;
    xmin, xmax, ymin, ymax: INTEGER;
    xx, yy, uu, vv: Coords;
BEGIN
  MakePiece(name);
  Out.String(" "); Out.Char(name);

  (* Convert the piece description into coordinates *)
  xmin := 0; xmax := 0; ymin := 0; ymax := 0; 
  i := 0; j := 0; n := 0;
  FOR k := 0 TO Strings.Length(layout)-1 DO
    CASE layout[k] OF
      'x': 				(* Fill a square *)
	xx[n] := i; yy[n] := j; n := n+1;
	IF i > xmax THEN xmax := i END;
        IF j > ymax THEN ymax := j END;
        i := i+1
    | '.': i := i+1			(* Skip a square *)
    | '/': j := j+1; i := 0		(* Move to a new row *)
    END
  END;

  (* Make |refls| reflections of the piece *)
  FOR r := 0 TO refls-1 DO
    (* Make |rots| rotations *)
    FOR m := 0 TO rots-1 DO
      (* Create all feasible translations *)
      FOR j := -ymin TO boundy - ymax DO
        FOR i := -xmin TO boundx - xmax DO
          FOR k := 0 TO n-1 DO 
            uu[k] := xx[k]+i; vv[k] := yy[k]+j 
          END;

          IF Feasible(n, uu, vv) THEN MakeMove(name, n, uu, vv) END
        END
      END;

      (* Rotate by 90 degrees *)
      FOR k := 0 TO n-1 DO 
        z := xx[k]; xx[k] := (MAX-1) - yy[k]; yy[k] := z 
      END;
      z := xmax; xmax := (MAX-1) - ymin; ymin := xmin;
      xmin := (MAX-1) - ymax; ymax := z
    END;

    (* Reflect about vertical axis *)
    FOR k := 0 TO n-1 DO 
      xx[k] := (MAX-1) - xx[k] 
    END;
    z := xmax; xmax := (MAX-1) - xmin; xmin := (MAX-1) - z
  END
END CreatePiece;

(* |CreateGame| -- create the puzzle *)
PROCEDURE CreateGame;
BEGIN
  NEW(root);
  root.prev := root; root.next := root;
  CreateBoard;

  Out.String("pieces");
  CreatePiece('F', 4, 2, "xx/.xx/.x");
  CreatePiece('I', 2, 1, "xxxxx");
  CreatePiece('L', 4, 2, "xxxx/x");
  CreatePiece('N', 4, 2, "xxx/..xx");
  CreatePiece('P', 4, 2, "xxx/xx.");
  CreatePiece('T', 4, 1, "xxx/.x/.x");
  CreatePiece('U', 4, 1, "xx/x/xx");
  CreatePiece('V', 4, 1, "xxx/x/x");
  CreatePiece('W', 4, 1, "x/xx/.xx");
  CreatePiece('X', 1, 1, ".x/xxx/.x");
  CreatePiece('Y', 4, 2, "xxxx/.x");
  CreatePiece('Z', 2, 2, ".xx/.x/xx");
  Out.Ln;

  Out.String("# "); Out.Int(ncols, 0); Out.String(" columns, ");
  Out.Int(nrows, 0); Out.String(" rows"); Out.Ln
END CreateGame;

VAR 
  count: INTEGER;			(* Number of solutions found *)
  steps: INTEGER;			(* Number of steps taken *)
  choice: ARRAY 20 OF CellPtr;		(* Current set of choices *)
  pflag, qflag: BOOLEAN;		(* Flags controlling strategy *)
  verbosity: INTEGER;			(* Interval for showing progress *)
	
(* |Cover| -- temporarily remove a column *)
PROCEDURE Cover(p: ColumnPtr);
  VAR q, r: CellPtr;
BEGIN
  (* Remove p from the list of columns *)
  p.prev.next := p.next; p.next.prev := p.prev;

  (* Block each row that intersects p *)
  q := p.head.down;
  WHILE q # p.head DO
    r := q.right;
    WHILE r # q DO
      r.up.down := r.down; r.down.up := r.up;
      r.column.size := r.column.size - 1; 
      r := r.right
    END;
    q := q.down
  END
END Cover;

(* |Uncover| -- reverse the effect of |Cover| *)
PROCEDURE Uncover(p: ColumnPtr);
  VAR q, r: CellPtr;
BEGIN
  (* Restore p to the list of columns *)
  p.prev.next := p; p.next.prev := p;

  (* Unblock each row that intersects p *)
  q := p.head.up;
  WHILE q # p.head DO
    r := q.left;
    WHILE r # q DO
      r.up.down := r; r.down.up := r;
      r.column.size := r.column.size + 1; 
      r := r.left
    END;
    q := q.up
  END
END Uncover;

(* |ChooseColumn| -- select a column according to stratregy *)
PROCEDURE ChooseColumn(): ColumnPtr;
  VAR c, col: ColumnPtr;
BEGIN
  IF qflag THEN
    (* Choose the first unoccupied square *)
    col := root.next
  ELSIF pflag THEN
    (* Choose the first unplaced piece *)
    col := root.next;
    WHILE col.name = 0X DO col := col.next END
  ELSE
    (* Find smallest column |col| *)
    col := root.next;
    c := col.next;
    WHILE c # root DO
      IF c.size < col.size THEN col := c END;
      c := c.next
    END
  END;

  RETURN col
END ChooseColumn;

(* |PrintState| -- print a (partial) solution as display commands *)
PROCEDURE PrintState(cmd: ARRAY OF CHAR; count, level: INTEGER);
  VAR k: INTEGER;
BEGIN
  Out.String(cmd);
  IF count > 0 THEN Out.String(" "); Out.Int(count, 0) END; 
  Out.Ln;
  FOR k := 0 TO level-1 DO 
    Out.String("place"); PrintRow(choice[k]) 
  END;
  Out.String("done"); Out.Ln
END PrintState;

(* |Solve| -- find an exact cover by backtracking search *)
PROCEDURE Solve(level: INTEGER);
  VAR col: ColumnPtr; p, q: CellPtr;
BEGIN
  IF root.next = root THEN
    count := count+1; PrintState("solution", count, level); RETURN
  END;

  col := ChooseColumn();
  IF col.size = 0 THEN RETURN END;
  Cover(col);

  (* Try each row that intersects column col *)
  p := col.head.down;
  WHILE p # col.head DO
    steps := steps+1;
    choice[level] := p;
    IF (verbosity > 0) & (steps MOD verbosity = 0) THEN
      PrintState("progress", 0, level+1)
    END;

    (* Cover other columns in row |p| *)
    q := p.right;
    WHILE q # p DO Cover(q.column); q := q.right END;

    Solve(level+1);

    (* Uncover other columns in row |p| *)
    q := p.left;
    WHILE q # p DO Uncover(q.column); q := q.left END;

    p := p.down
  END;

  Uncover(col)
END Solve;

(* |ReadArgs| -- interpret command-line arguments *)
PROCEDURE ReadArgs;
  VAR i: INTEGER; buf: ARRAY 64 OF CHAR;
BEGIN
  FOR i := 1 TO Args.argc-1 DO
    Args.GetArg(i, buf);
    IF buf = "-p" THEN
      pflag := TRUE
    ELSIF buf = "-q" THEN
      qflag := TRUE
    ELSIF buf = "-v" THEN
      IF verbosity = 0 THEN
        verbosity := 1000
      ELSE
	verbosity := verbosity DIV 10
      END
    END
  END
END ReadArgs;

(* Main program *)
BEGIN
  ReadArgs;
  CreateGame;
  Solve(0);
  Out.String("finish"); Out.Ln
END Pento.
