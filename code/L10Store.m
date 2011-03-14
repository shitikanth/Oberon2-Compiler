MODULE L10Store;

(* A module for storing names and telephone numbers *)

CONST MAXSTR = 20;			(* Maximum length of a name *)

TYPE String* = ARRAY MAXSTR OF CHAR;

TYPE
  List = POINTER TO Cell;
  Cell = RECORD 
      name: String; 
      value: INTEGER; 
      next: List 
    END;

VAR entries: List;

(* |Find| -- find cell for |s| or return |NIL| *)
PROCEDURE Find(s: String): List;
  VAR p: List;
BEGIN
  p := entries;
  WHILE p # NIL DO
    IF p.name = s THEN RETURN p END;
    p := p.next
  END;
  RETURN NIL
END Find;

(** |Store| -- add or update an entry *)
PROCEDURE Store*(s: String; v: INTEGER);
  VAR p: List;  
BEGIN
  p := Find(s);
  IF p = NIL THEN
    NEW(p);
    p.name := s;
    p.next := entries;
    entries := p
  END;
  p.value := v
END Store;

(** |Recall| -- find an entry and return the value, or return 0 *)
PROCEDURE Recall*(s: String): INTEGER;
  VAR p: List;
BEGIN
  p := Find(s);
  IF p # NIL THEN
    RETURN p.value
  ELSE
    RETURN 0
  END
END Recall;

BEGIN
  entries := NIL
END L10Store.
