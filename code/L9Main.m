MODULE L9Main;

(* Provides a simple (but alas, fragile) command interface for
   the phone book. *)

IMPORT In, Out, Conv, Store := L9Store;

(* |Split| -- split an input line into blank-separated words *)
PROCEDURE Split(VAR line: ARRAY OF CHAR; 
			VAR words: ARRAY OF Store.String): INTEGER;
  VAR i, j, n: INTEGER;
BEGIN
  n := 0; i := 0;
  LOOP
    WHILE line[i] = ' ' DO i := i+1 END;
    IF line[i] = 0X THEN EXIT END;
    
    (* Add one more word *)
    j := 0;
    REPEAT
      words[n][j] := line[i];
      i := i+1; j := j+1
    UNTIL (line[i] = ' ') OR (line[i] = 0X);
    words[n][j] := 0X;
    n := n+1
  END;
  RETURN n
END Split;

PROCEDURE Interact;
  VAR 
    line: ARRAY 128 OF CHAR;
    words: ARRAY 32 OF Store.String;
    nwords: INTEGER;
    value: INTEGER;
BEGIN
  LOOP
    Out.String("* ");
    In.Line(line);
    IF ~In.Done THEN EXIT END;

    nwords := Split(line, words);

    IF nwords > 0 THEN
      IF (words[0] = "get") & (nwords >= 2) THEN
	value := Store.Recall(words[1]);
	Out.Int(value, 0); Out.Ln
      ELSIF (words[0] = "put") & (nwords >= 3) THEN
        value := Conv.IntVal(words[2]);
        Store.Store(words[1], value)
      ELSIF words[0] = "quit" THEN
        EXIT
      ELSE
        Out.String("Eh?"); Out.Ln
      END
    END
  END
END Interact;

BEGIN
  Interact
END L9Main.
