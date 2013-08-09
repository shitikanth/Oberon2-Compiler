MODULE Fact;
IMPORT In, Out;

VAR N, S : INTEGER;

BEGIN
    N := 5;
    S := 1;
    WHILE (N>0) DO
      S := S + N;
    END;
END Fact.
