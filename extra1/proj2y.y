%{
#include "tree.h"
#include <stdlib.h>

extern tree root2; //declared in the driver program
%}

%union {int num; tree t;}   
%start program
%token <num> IntConst Ident 
%token FALSE 51 TRUE 52 NOT 53 mod 54 and 55 xor 56 
%token elsif 57 or 58 dotdot 59 Exit 60 When 61 For 62 
%token semicolon 63 colon 64 array 65 declare 66 coleq 67 
%token procedure 68 SignedNumber 69 of 70 comma 71 begin 72 
%token loop 73 in 74 is 75 LBraket 76 RBraket 77
%token If 78 Then 79 End 80 While 81 Do 82 Else 83 
%token LParen 84 RParen 85 
%token Plus 86 Minus 87 Star 88 Slash 89
%token Eq 90 Ne 91 Lt 92 Le 93 Gt 94 Ge 95 
%token Boolean 96 Comma 97 Eoln 45

%token INTEGER 98 BOOLEAN 99 OPERATOR 50 IDENTIFIER 49 RESERVEDWORD 48

%type <t> decls id_list type const_range stmts statement range ref end_if expr relation sum sign prod factor declaration basic

%%
program : 		"procedure" Ident "is" decls "begin" stmts "end" ";"	{root2 = buildTree(procedure, $4, $6, NULL); root2->next = buildIntTree(Ident, $2);}
decls :		 	"" 														{}
				| declaration semicolon decls							{$$ = buildTree(semicolon, $1, $3, NULL);}
declaration : 	id_list colon type										{$$ = buildTree(colon, $1, $3, NULL);}
id_list : 		Ident 													{$$ = buildIntTree(Ident, $1);}
				| Ident comma id_list										{$$ = buildIntTree(Ident, $1); $$->next = $3;}
type : 			INTEGER 												{}
				| BOOLEAN 												{}
				| array "[" const_range "]" of type						{$$ = buildTree(array,$3,$6,NULL);}
const_range : 	IntConst dotdot IntConst 								{$$ = buildIntTree(IntConst,$1); $$->next = buildIntTree(IntConst,$1);}
				| ""													{}
stmts : 		"" 														{}
				| statement colon stmts									{$$ = buildTree(colon,$1,$3,NULL);}
statement : 	ref coleq expr 											{$$ = buildTree(coleq,$1,$3,NULL);}
				| declare decls begin stmts End 						{$$ = buildTree(declare, $2, $4,NULL);}
				| For Ident in range loop stmts End loop		 		{$$ = buildTree(For, buildIntTree(Ident,$2),$4, $6);}
				| Exit 													{}
				| Exit When Boolean expr 								{$$ = buildTree(Exit,$4,NULL,NULL);}
				| If Boolean expr Then stmts end_if						{$$ = buildTree(If, $3, $5, $6);}
range : 		sum dotdot sum											{$$ = buildTree(dotdot,$1,$3,NULL);}
ref : 			Ident 													{$$ = buildIntTree(Ident,$1);}
				| Ident "[" expr "]"									{$$ = buildIntTree(Ident,$1); $$->next = $3;}
end_if : 		End If													{}
				| Else stmts End If	 									{$$ = buildTree(Else,$2,NULL,NULL);}
				| elsif Boolean expr Then stmts end_if					{$$ = buildTree(elsif, $3, $5, $6);}
expr : 			relation or relation 									{$$ = buildTree(or, $1, $3, NULL);}
				| relation and relation 								{$$ = buildTree(and, $1, $3, NULL);}
				| relation xor relation									{$$ = buildTree(xor, $1, $3, NULL);}
				| relation												{$$ = $1;}
relation : 		sum 													{$$ = $1;}
				| sum Eq sum 											{$$ = buildTree(Eq, $1, $3, NULL);}
				| sum Ne sum 											{$$ = buildTree(Ne, $1, $3, NULL);}
				| sum Lt sum 											{$$ = buildTree(Lt, $1, $3, NULL);}
				| sum Le sum 											{$$ = buildTree(Le, $1, $3, NULL);}
				| sum Gt sum 											{$$ = buildTree(Gt, $1, $3, NULL);}
				| sum Ge sum											{$$ = buildTree(Ge, $1, $3, NULL);}
sum : 			sign prod 												{$$ = buildTree(SignedNumber, $1, $2, NULL);}
				| sum Plus prod 										{$$ = buildTree(Plus, $1, $3, NULL);}
				| sum Minus prod										{$$ = buildTree(Minus, $1, $3, NULL);}
sign : 			Plus 													{}
				| Minus 												{}
				| ""													{}
prod : 			factor  												{$$ = $1;}
				| prod Star factor  									{$$ = buildTree(Star, $1, $3, NULL);}
				| prod Slash factor  									{$$ = buildTree(Slash, $1, $3, NULL);}
				| prod mod factor 										{$$ = buildTree(mod, $1, $3, NULL);}
factor : 		NOT basic  												{$$ = buildTree(NOT ,$2 ,NULL, NULL);}
				| basic 												{$$ = $1;}
basic : 		ref 													{$$ = $1;}
				| LParen expr RParen 									{$$ = $2;}
				| IntConst 												{$$ = buildIntTree (IntConst, $1);}
				| TRUE 													{}
				| FALSE													{}
%%

