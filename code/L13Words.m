MODULE L13Words;

(* Count occurrences of words in a text: hash table version. *)

(* This program expects a sequence of lower-case words on the standard
   input.  It outputs on standard output a table of words and their
   frequency of occurrence in the input.

   An ordinary text file can be prepared for input to this program
   with the unix commands "tr -cs A-Za-z '\n' | tr A-Z a-z".  The
   program itself performs the same function as "sort | uniq -c". *)

IMPORT In, Out;

CONST HSIZE = 1000000;

TYPE List = POINTER TO Cell;
  Cell = RECORD 
      word: ARRAY 20 OF CHAR; 
      count: INTEGER; 
      next: List;
    END;

VAR table: ARRAY HSIZE OF List;

(* |Hash| -- compute hash function of string *)
PROCEDURE Hash(VAR s: ARRAY OF CHAR): INTEGER;
  VAR h, i: INTEGER;
BEGIN
  h := 0; i := 0;
  WHILE s[i] # 0X DO
    h := 5 * h + ORD(s[i]);
    i := i+1
  END;
  RETURN h MOD HSIZE
END Hash;

PROCEDURE IncWord(VAR s: ARRAY OF CHAR);
  VAR h: INTEGER; p: List;
BEGIN
  h := Hash(s); p := table[h];

  WHILE (p # NIL) & (s # p.word) DO 
    p := p.next 
  END;
  
  IF p # NIL THEN
    p.count := p.count + 1
  ELSE
    NEW(p); 
    COPY(s, p.word); p.count := 1;
    p.next := table[h]; table[h] := p
  END
END IncWord;

(* Hash tables are not naturally sorted. So to get the output in 
   alphabetical order, we use insertion sort on each bucket, and 
   recursively merge together all the buckets into one big list. *)

PROCEDURE InSort(p: List): List;
  VAR head, q, r, t: List;
BEGIN
  NEW(head); head.word := "Foo"; head.next := NIL;
  WHILE p # NIL DO
    r := head; q := r.next;
    WHILE (q # NIL) & (q.word < p.word) DO
      r := q; q := r.next
    END;
    t := p.next; p.next := q; r.next := p; p := t
  END;
  RETURN head.next
END InSort;

PROCEDURE Merge(p, q: List): List;
  VAR head, tail: List;
BEGIN
  NEW(head); tail := head;
  LOOP
    IF p = NIL THEN
      tail.next := q; EXIT
    ELSIF q = NIL THEN
      tail.next := p; EXIT
    ELSIF p.word < q.word THEN
      tail.next := p; tail := p; p := p.next
    ELSE
      tail.next := q; tail := q; q := q.next
    END
  END;
  RETURN head.next
END Merge;

(* Sort -- recursively merge |table[a..b)| into a single list *)
PROCEDURE Sort(a, b: INTEGER): List;
  VAR m: INTEGER;
BEGIN
  IF a+1 = b THEN
    RETURN InSort(table[a])
  ELSE
    m := (a+b) DIV 2;
    RETURN Merge(Sort(a, m), Sort(m, b))
  END
END Sort;

PROCEDURE Output;
  VAR p: List;
BEGIN
  p := Sort(0, HSIZE);
  WHILE p # NIL DO
    Out.Int(p.count, 7); Out.Char(' '); Out.String(p.word); Out.Ln;
    p := p.next
  END
END Output;
    
PROCEDURE Print;
  VAR i: INTEGER; p: List;
BEGIN
  FOR i := 0 TO HSIZE-1 DO
    p := table[i];
    IF p # NIL THEN
      Out.Int(i, 0); Out.Char(':');
      WHILE p # NIL DO
        Out.Char(' '); Out.String(p.word);
        p := p.next
      END;
      Out.Ln
    END
  END
END Print;

PROCEDURE Main;
  VAR word: ARRAY 20 OF CHAR;
BEGIN
  LOOP
    In.Line(word);
    IF ~In.Done THEN EXIT END;
    IncWord(word)
  END;
  Print
END Main;

BEGIN
  Main
END L13Words.
