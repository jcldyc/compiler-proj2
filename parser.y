%{
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

extern tree root;
%}
 
%union { tree p; int i; float f; char* string;}
 
%start program
%token <i> Ident 1 IntConst 2 RealConst 3

%token <f> FloatingPoint 4 FloatExponent 5

%token Var 6 Int 7 Real 8 Boolean 9 Record 10 While 11

%token Do 12 End 13 Begin 14 Loop 15 Exit 16 Bind 17 To 18

%token Assert 19 When 20 If 21 Then 22 Elsif 23 Else 24

%token Put 25 Or 26 And 27 Not 28 NotEqual 29 

%token Div 30 Mod 31 Colon 32 Definition 33

%token LesserThan 34 GreaterThan35 LesserThanOrEqual 36 GreaterThanOrEqual 37

%token Period 38 Comma 39 Assign 40 Plus 41 Minus 42 Multiply 43 Divide 44

%token Semicolon 45 LeftPar 46 RightPar 47 Prog 48 NoType 49 Field 50

 
%type <p> pStateDeclSeq idlist type field_list state_decls declaration statement ref end expr and_expr not_expr rel_expr sum prod factor basic


%%
 
program:		 pStateDeclSeq
					{ root = buildTree (Prog, $1, NULL, NULL); }

pStateDeclSeq: 	 /* empty */
					{$$ = NULL;}
				| statement ";" pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, NULL, NULL); $$->next = $3}
				| "var" idlist Colon type Semicolon pStateDeclSeq
					{$$ = buildTree(Var, $2, $4, NULL); $$->next = $6;}
				;



idlist: 		Ident 
					{$$ = buildIntTree(Ident, $1);}
				| Ident Comma idlist
					{$$ = buildIntTree(Ident, $1); $$->next = $3;}

type: 			Int
					{$$ = buildTree(Int, 0);}
				| Real
					{$$ = buildTree(Real, 0);}
				| Boolean					{$$ = buildTree(Boolean, 0);}
				| Record field_list End Record
					{$$ = buildTree(Record, $2, NULL, NULL);}
				;

field_list: 	idlist Colon type
					{$$ = buildTree(Colon, $1, $3, NULL);}
				| idlist Colon type Semicolon field_list
					{$$ = buildTree(Colon, $1, buildTree(Semicolon, $3), NULL); $$->next = $5;}
				;

state_decls: 	/* empty */
					{$$ = NULL;}
				| statement Semicolon pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, $3, NULL);}
				| declaration Semicolon pStateDeclSeq
					{$$ = buildTree(Semicolon, $1, $3, NULL);}
				;

declaration: 	var idlist Colon type
					{$$ = buildTree(Var, $2, $4, NULL);}
				| Bind idlist To ref
					{$$ = buildTree(Bind, buildTree(Ident, $2), $4, NULL);}
				| Bind Var idlist To ref
					{$$ = buildTree(Bind, buildTree(Ident, $3), $5);}
				;

statement: 	 	ref Definition expr
					{$$ = buildTree(Definition, $1, $3, NULL);}

				| Assert bool_expr
					{$$ = buildTree(Assert, $2, NULL, NULL);}

				| Begin state_decls End
					{$$ = buildTree(Begin, $2, NULL, NULL);}
				| Loop state_decls End Loop
					{$$ = buildTree(Loop, $2, NULL, NULL);}
				| Exit 
					{}
				| Exit When bool_expr
					{$$ = buildTree(Exit, $3, NULL, NULL);}
				| If bool_expr Then state_decls end_if
					{$$ = buildTree(If, $2, $4, NULL);}
				;

ref: 			Ident
					{$$ = buildIntTree(Ident, $1);}
				| Ident Period Ident
					{$$ = buildTree(Dot, buildTree(Ident, $1), buildTree(Ident, $3), NULL);}
				;

end_if: 		End If
					{}
				| Else state_decls End If
					{$$ = buildTree(Else,$2,NULL,NULL);}
				| Elsif bool_expr Then state_decls end_if
					{$$ = buildTree(Elsif, $3, $5, NULL); $$->next = $6;}
				;

expr: 			expr Or and_expr
					{$$ = buildTree(Or, $1, $3, NULL);} 
				| and_expr
					{$$ = $1}
				;

and_expr: 		and_expr And not_expr 
					{$$ = buildTree(And, $1, $3, NULL)}
				| not_expr
					{$$ = $1}
				;

not_expr: 		Not not_expr 
					{$$ = buildTree(Not, $2, NULL, NULL)}
				| rel_expr
					{$$ = $1}
				;

rel_expr: 		Sum 
					{$$ = $1;}
				| rel_expr Assign sum 
					{$$ = buildTree(Assign, $1 ,$3, NULL);}
				| rel_expr Not= sum
					{$$ = buildTree(NotEqual, $1 ,$3, NULL);}
				| rel_expr LesserThan sum 
					{$$ = buildTree(LesserThan, $1 ,$3, NULL);}
				| rel_expr LesserThanOrEqual sum
					{$$ = buildTree(LesserThanOrEqual, $1 ,$3, NULL);}
				| rel_expr GreaterThan sum 
					{$$ = buildTree(GreaterThan, $1 ,$3, NULL);}
				| rel_expr GreaterThanOrEqual sum
					{$$ = buildTree(GreaterThanOrEqual, $1 ,$3, NULL);}
				;

sum: 			prod 
					{$$ = $1;}
				| sum Plus prod 
					{$$ = buildTree(Plus, $1 ,$3, NULL);}
				| sum Minus prod
					{$$ = buildTree(Minus, $1 ,$3, NULL);}
				;

prod: 			factor 
					{$$ = $1;}
				| prod Multiply factor 
					{$$ = buildTree(Multiply, $1 ,$3, NULL);}
				| prod Divide factor
					{$$ = buildTree(Divide, $1 ,$3, NULL);}
				| prod Div factor
					{$$ = buildTree(Div, $1 ,$3, NULL);} 
				| prod Mod factor
					{$$ = buildTree(Mod, $1 ,$3, NULL);}
				;

factor: 		Plus basic 
					{$$ = buildTree(Plus, $2, NULL, NULL)}
				| Minus basic 
					{$$ = buildTree(Minus, $2, NULL, NULL)}
				| basic
					{$$ = $1;}
				;

basic: 			ref 
					{$$ = $1;}
				| LeftPar expr RightPar 
					{$$ = $2;}
				| IntConst
					{$$ = buildTree(IntConst, $1);}
				| RealConst
					{$$ = buildTree(RealConst, $1);}
				;



 
%%
