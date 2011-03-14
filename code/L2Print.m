MODULE L2Print;

IMPORT Args, Conv, Out;

VAR 
  t: INTEGER; 
  buf: ARRAY 128 OF CHAR;

  n, k, u, x: INTEGER; 
  d, dd: ARRAY 20 OF INTEGER;

BEGIN
  Args.GetArg(1, buf);
  t := Conv.IntVal(buf);

(* METHOD 1: compute the digits from right to left *)

  (* Invariant: n >= 0  &  t = val d[0..n) + u * 10^n *)
  n := 0; u := t;
  WHILE u # 0 DO
    d[n] := u MOD 10;
    u := u DIV 10;
    n := n+1
  END;

  (* Invariant: output = rev d[k..n) *)
  k := n;
  WHILE k > 0 DO
    k := k-1;
    Out.Char(CHR(d[k] + ORD('0')))
  END;
  Out.Ln;


(* METHOD 2: compute the digits from left to right *)

  (* Invariant: n >= 0  &  x = 10^n  &  x <= 10 * t *)
  n := 0; x := 1;
  WHILE t >= x DO 
    n := n+1; x := 10*x
  END;

  (* n >= 0  &  x = 10^n  &  t < x *)

  (* Invariant: 0 <= k <= n  &  0 <= u < x = 10^k  &
                t = u + val d[k..n) *)
  k := n; u := t;
  WHILE k > 0 DO
    k := k-1; x := x DIV 10;
    dd[k] := u DIV x;
    u := u MOD x;

    Out.Char(CHR(dd[k] + ORD('0')))
  END;
  Out.Ln
END L2Print.
