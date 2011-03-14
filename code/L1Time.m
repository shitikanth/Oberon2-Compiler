MODULE L1Time;

IMPORT Out, Math, Timer;

PROCEDURE Method1(n: INTEGER): REAL;
BEGIN
  RETURN Math.Exp(n * Math.Ln(1.0 + 1.0/n))
END Method1;

PROCEDURE SlowExp(x: REAL; n: INTEGER): REAL;
  VAR k: INTEGER; y: REAL;
BEGIN
  k := 0; y := 1;
  WHILE k < n DO
    y := y * x;
    k := k + 1
  END;
  RETURN y
END SlowExp;

PROCEDURE Method2(n: INTEGER): REAL;
BEGIN
  RETURN SlowExp(1.0 + 1.0/n, n);
END Method2;

PROCEDURE FastExp(x: REAL; n: INTEGER): REAL;
  VAR k: INTEGER; u, v: REAL;
BEGIN
  k := n; u := x; v := 1;
  WHILE k > 0 DO
    WHILE ~ ODD(k) DO u := u * u; k := k DIV 2 END;
    v := v * u; k := k - 1
  END;
  RETURN v
END FastExp;

PROCEDURE Method3(n: INTEGER): REAL;
BEGIN
  RETURN FastExp(1.0 + 1.0/n, n);
END Method3;

PROCEDURE Method4(n: INTEGER): REAL;
BEGIN
  RETURN Math.e * (1.0 - 1.0/(2*n))
END Method4;

PROCEDURE Method5(n: INTEGER): REAL;
BEGIN
  RETURN Math.e * (1.0 - 1.0/(2*n) + 11.0/(24.0*n*n))
END Method5;

PROCEDURE Trial(name: ARRAY OF CHAR; 
		method: PROCEDURE (n: INTEGER): REAL;
		count, rep: INTEGER);
  VAR k, n, r: INTEGER; y: REAL; t0, t1: INTEGER;
BEGIN
  Out.String(name); 
  IF rep # 1 THEN 
    Out.String(" (repeated "); Out.Int(rep, 0); Out.String(" times)")
  END;
  Out.Ln;

  n := 1; k := 0;
  WHILE k < count DO
    y := 0;
    t0 := Timer.Now();
    FOR r := 1 TO rep DO y := method(n) END;
    t1 := Timer.Now();
    Out.Int(n, 9);
    Out.Fixed(y, 13, 10);
    Out.Int(t1-t0, 6);
    Out.Ln;
    k := k+1; n := 10 * n
  END;
  Out.Ln
END Trial;

BEGIN
  Trial("Library functions", Method1, 9, 1);
  Trial("Slow exponentiation", Method2, 9, 1);
  Trial("Fast exponentiation", Method3, 9, 1000000);
  Trial("First-order approximation", Method4, 9, 1);
  Trial("Second-order approximation", Method5, 9, 1)
END L1Time.




