MODULE L0Total;

(* Read a file of integers from standard 
   input and print the total *)

IMPORT In, Out;

CONST MAX = 10;

TYPE
  z = INT;
  y = z;

VAR 
  k, N, x, total: INT;
  pints: ARRAY MAX OF INT;

BEGIN
  (* Read in the numbers *)
  N := 0;
  In.Int(x);
  WHILE In.Done DO
    pints[N] := x;
    N := N + 1;
    In.Int(x)
  END;

  (* Compute the total *)
  k := 0; total := 0;
  WHILE k < N DO
    total := total + pints[k];
    k := k + 1;
  END;

  (* Print the total *)
  Out.Int(total, 0); Out.Ln
END L0Total.
