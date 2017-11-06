%{
#include <stdlib.h>
#include "tree.h"

extern tree root;
%}
 
%union { tree p; int i; }
 
%start program
%token Ident 1 IntConst 2 RealConst 3 FloatingPoint 4 FloatExponent 5
%token Var 11 Int 12 Real 13 Boolean 14
%token Record 21 While 22 Do 23 End 24 Begin 25 Loop 26 Exit 27
%token Bind 31 To 32 Assert 33
%token When 41 If 42 Then 53 Elsif 44 Else 45 Put 46
%token Or 51 And 52 Not 53 NotEqual 54 Div 55 Mod 56
%token Colon 61 Definition 62
%token LessThan 63 GreaterThan 64 LessThanEq 65 GreaterThanEq 66
%token Dot 67 Comma 68
%token Assign 71 Plus 72 Minus 73 Star 74 Slash 75 Semicolon 76 LPar 77 RPar 78
%token Prog 80
 
%type <t> pStateDeclSeq idlist type field_list state_decls declaration statement ref end expr and_expr not_expr rel_expr sum prod factor basic

%%
 





program:		| pStateDeclSeq
					{ root = buildTree (Prog, $1, NULL, NULL); }

pStateDeclSeq: 	| ""
					{$$ = NULL;}
				| statement ";" pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, NULL, NULL); $$->next = $3}
				| "var" idlist ":" type ";" pStateDeclSeq
					{$$ = buildTree(Var, $2, $4, NULL); $$->next = $6;}
				;



idlist: 		Ident 
					{$$ = buildIntTree(Ident, $1);}
				| Ident "," idlist
					{$$ = buildIntTree(Ident, $1); $$->next = $3;}

type: 			| "int"
					{$$ = buildTree(Int, 0);}
				| "real"
					{$$ = buildTree(Real, 0);}
				| "boolean"
					{$$ = buildTree(Boolean, 0);}
				| "record" field_list "end" "record"
					{$$ = buildTree(Record, $2, NULL, NULL);}
				;

field_list: 	idlist ":" type
					{$$ = buildTree(Colon, $1, $3, NULL);}
				| idlist ":" type ";" field_list
					{$$ = buildTree(Colon, $1, buildTree(SemiColon, $3), NULL); $$->next = $5;}
				;

state_decls: 	""
					{$$ = NULL;}
				| statement ";" pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, $3, NULL);}
				| declaration ";" pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, $3, NULL);}
				;

declaration: 	"var" idlist ":" type
					{$$ = buildTree(Var, $2, $4, NULL);}
				| "bind" idlist "to" ref
					{$$ = buildTree(Bind, buildTree(Ident, $2), $4, NULL);}
				| "bind" "var" idlist "to" ref
					{$$ = buildTree(Bind, buildTree(Ident, $3), $5);}
				;

statement: 	 	ref ":=" expr
					{$$ = buildTree(Definition, $1, $3, NULL);}

				| "assert" bool_expr
					{$$ = buildTree(Assert, $2, NULL, NULL);}

				| "begin" state_decls "end"
					{$$ = buildTree(Begin, $2, NULL, NULL);}
				| "loop" state_decls "end" "loop"
					{$$ = buildTree(Loop, $2, NULL, NULL);}
				| "exit" 
					{}
				| "exit" "when" bool_expr
					{$$ = buildTree(Exit, $3, NULL, NULL);}
				| "if" bool_expr "then" state_decls end_if
					{$$ = buildTree(If, $2, $4, NULL);}
				;

ref: 			Ident
					{$$ = buildIntTree(Ident, $1);}
				| Ident "." Ident
					{$$ = buildTree(Dot, buildTree(Ident, $1), buildTree(Ident, $3), NULL);}
				;

end_if: 		"end" "if"
					{}
				| "else" state_decls "end" "if"
					{$$ = buildTree(Else,$2,NULL,NULL);}
				| "elsif" bool_expr "then" state_decls end_if
					{$$ = buildTree(Elsif, $3, $5, NULL); $$->next = $6;}
				;

expr: 			expr "or" and_expr
					{$$ = buildTree(Or, $1, $3, NULL);} 
				| and_expr
					{$$ = $1}
				;

and_expr: 		and_expr "and" not_expr 
					{$$ = buildTree(And, $1, $3, NULL)}
				| not_expr
					{$$ = $1}
				;

not_expr: 		"not" not_expr 
					{$$ = buildTree(Not, $2, NULL, NULL)}
				| rel_expr
					{$$ = $1}
				;

rel_expr: 		sum 
					{$$ = $1;}
				| rel_expr "=" sum 
					{$$ = buildTree(Assign, $1 ,$3, NULL);}
				| rel_expr "not=" sum
					{$$ = buildTree(NotEqual, $1 ,$3, NULL);}
				| rel_expr "<" sum 
					{$$ = buildTree(LessThan, $1 ,$3, NULL);}
				| rel_expr "<=" sum
					{$$ = buildTree(LessThanEq, $1 ,$3, NULL);}
				| rel_expr ">" sum 
					{$$ = buildTree(GreaterThan, $1 ,$3, NULL);}
				| rel_expr ">=" sum
					{$$ = buildTree(GreaterThanEq, $1 ,$3, NULL);}
				;

sum: 			prod 
					{$$ = $1;}
				| sum "+" prod 
					{$$ = buildTree(Plus, $1 ,$3, NULL);}
				| sum "-" prod
					{$$ = buildTree(Minus, $1 ,$3, NULL);}
				;

prod: 			factor 
					{$$ = $1;}
				| prod "*" factor 
					{$$ = buildTree(Star, $1 ,$3, NULL);}
				| prod "/" factor
					{$$ = buildTree(Slash, $1 ,$3, NULL);}
				| prod "div" factor
					{$$ = buildTree(Div, $1 ,$3, NULL);} 
				| prod "mod" factor
					{$$ = buildTree(Mod, $1 ,$3, NULL);}
				;

factor: 		"+" basic 
					{$$ = buildTree(Plus, $2, NULL, NULL)}
				| "-" basic 
					{$$ = buildTree(Minus, $2, NULL, NULL)}
				| basic
					{$$ = $1;}
				;

basic: 			ref 
					{$$ = $1;}
				| "(" expr ")" 
					{$$ = $2;}
				| IntConst
					{$$ = buildTree(IntConst, $1);}
				| RealConst
					{$$ = buildTree(RealConst, $1);}
				;



 
%%
