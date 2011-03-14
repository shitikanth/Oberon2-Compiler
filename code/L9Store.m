MODULE L9Store;

(* A module for storing names and telephone numbers *)

CONST 
  MAXSTR = 20;			(* Maximum length of a name *)
  MAX = 1000;			(* Maximum number of entries *)

TYPE String* = ARRAY MAXSTR OF CHAR;

VAR
  size: INTEGER;
  keys: ARRAY MAX OF String;
  values: ARRAY MAX OF INTEGER;

(** |Store| -- add or update an entry *)
PROCEDURE Store*(k: String; v: INTEGER);
  VAR i: INTEGER;
BEGIN
  i := Find(k);
  IF i = size THEN
    ASSERT(size < MAX);
    keys[i] := k;
    size := size+1
  END;
  values[i] := v
END Store;

(** |Recall| -- find an entry and return the value, or return |-1| *)
PROCEDURE Recall*(k: String): INTEGER;
  VAR i: INTEGER;
BEGIN
  i := Find(k);
  IF i = size THEN
    RETURN -1
  ELSE
    RETURN values[i]
  END
END Recall;

(** |Find| -- find index of |k| or return |size| *)
PROCEDURE Find(k: String): INTEGER;
  VAR j: INTEGER;
BEGIN
  j := 0;
  WHILE (j < size) & (keys[j] # k) DO
    j := j+1
  END;
  RETURN j
END Find;

BEGIN
  size := 0
END L9Store.
