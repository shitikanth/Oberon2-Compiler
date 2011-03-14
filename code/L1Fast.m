MODULE L1Fast;

(* Compute x^n using an O(log n) algorithm *)

IMPORT Out, Args, Conv;

VAR
  x, y, z: REAL;
  k, n: INTEGER;
  buf: ARRAY 256 OF CHAR;

BEGIN
  (* Get values of x and n from the command line *)
  IF Args.argc # 3 THEN 
    Out.String("Usage: fast x n"); Out.Ln;
    HALT(1)
  END;

  Args.GetArg(1, buf);
  x := Conv.RealVal(buf);
  Args.GetArg(2, buf);
  n := Conv.IntVal(buf);

  (* Compute y = x^n using invariant x^n = z^k * y *)
  k := n; y := 1.0; z := x;
  WHILE k > 0 DO
    IF ODD(k) THEN 
      y := z * y; k := k - 1;
    END;
    z := z * z; k := k DIV 2;
  END;

  (* Output y *)
  Out.Real(y); Out.Ln
END L1Fast.
