MODULE L7Sort;

(* Baby version of the UNIX sort utility *)

IMPORT In, Out, Strings, Err;

CONST MAX = 3;			(* Max no. of lines *)

(* We'll store lines from the input file in variable-length arrays
   that are dynamically allocated, so as to avoid a compromise
   between storage economy and maximum length of line. *)

TYPE line = POINTER TO ARRAY OF CHAR;

VAR 
  nlines: INTEGER;
  lines: ARRAY MAX OF line;

(* |ReadFile| -- read standard input into |lines| *)
PROCEDURE ReadFile;
  VAR 
    buf: ARRAY 1024 OF CHAR;
    len: INTEGER;
    p: line;
BEGIN
  nlines := 0;
  LOOP
    In.Line(buf);
    IF ~In.Done THEN EXIT END;
    IF nlines = MAX THEN
      Err.String("Sorry, I can only handle files of ");
      Err.Int(MAX, 0); Err.String(" lines or less"); Err.Ln;
      HALT(1)
    END;
    len := Strings.Length(buf);
    NEW(p, len+1); 
    COPY(buf, p^);
    lines[nlines] := p; 
    nlines := nlines+1
  END
END ReadFile;

(* |CompareLt| -- test if one string is less than another *)
PROCEDURE CompareLt(p, q: line): BOOLEAN;
  VAR i: INTEGER;
BEGIN
  (* For fairness, we implement the comparison explicitly, rather 
     than relying on Oberon's built-in string comparison, which
     is much faster. *)

  (* |RETURN p^ < q^| *)

  i := 0;
  WHILE (p^[i] # 0X) & (p^[i] = q^[i]) DO 
    i := i+1 
  END;

  RETURN p^[i] < q^[i]
END CompareLt;

(* |Partition| -- partition |lines[a..b)|; return index of pivot *)
PROCEDURE Partition(a, b: INTEGER): INTEGER;
  VAR i, j: INTEGER;
    pivot, temp: line;
BEGIN
  pivot := lines[a];
  i := a+1; j := b;
  WHILE i < j DO
    IF CompareLt(lines[i], pivot) THEN
      i := i+1
    ELSE
      j := j-1;
      temp := lines[i]; lines[i] := lines[j]; lines[j] := temp
    END
  END;

  lines[a] := lines[i-1]; lines[i-1] := pivot;
  RETURN i-1
END Partition;

(* |QuickSort| -- sort |lines[a..b)| *)
PROCEDURE QuickSort(a, b: INTEGER);
  VAR k: INTEGER;
BEGIN
  IF b - a > 1 THEN
    k := Partition(a, b);
    QuickSort(a, k);
    QuickSort(k+1, b)
  END
END QuickSort;

(* |WriteFile| -- write |lines| on standard output *)
PROCEDURE WriteFile;
  VAR i: INTEGER;
BEGIN
  FOR i := 0 TO nlines-1 DO
    Out.String(lines[i]^); Out.Ln
  END
END WriteFile;

BEGIN
  ReadFile;
  QuickSort(0, nlines);
  WriteFile
END L7Sort.
