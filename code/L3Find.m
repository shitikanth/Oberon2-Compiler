MODULE L3Find;

(* A simple version of the unix utility \pn{grep} *)

IMPORT In, Out, Args, Strings;

VAR 
  K, N, j, k: INTEGER;
  found: BOOLEAN;
  patt: ARRAY 64 OF CHAR;
  line: ARRAY 1024 OF CHAR;
  
BEGIN
  IF Args.argc < 2 THEN
    Out.String("usage: grep pattern <input"); Out.Ln;
    HALT(1)
  END;

  Args.GetArg(1, patt);
  K := Strings.Length(patt);

  LOOP
    In.Line(line);
    IF ~In.Done THEN EXIT END;
    N := Strings.Length(line);

    j := 0; found := FALSE;
    WHILE (j <= N-K) & ~found DO
      k := 0;
      WHILE (k < K) & (patt[k] = line[j+k]) DO 
        k := k+1 
      END;
      found := (k = K);
      j := j+1
    END;

    IF found THEN 
      Out.String(line); Out.Ln 
    END
  END
END L3Find.
