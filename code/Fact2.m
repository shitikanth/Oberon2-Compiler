MODULE Fact2;
IMPORT Out;

VAR
    N, x:   INTEGER;

BEGIN
    N:=25;
    x:=1;
    WHILE (N>1) DO
      x := x+N;
      N := N-1;
    END;
END Fact2.
