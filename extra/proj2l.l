%{
#include <stdio.h>
#include "tree.h"
#include "y.tab.h" 

int line_no = 1, pos = 1;
%}
%option nounput yylineno
  
%%


"TRUE"					{pos += 4;return TRUE;}
"FALSE"					{pos += 5;return FALSE;}
”and” 					{pos += 3;return and;}
”array” 				{pos += 5;return array;}
”begin” 				{pos += 5;return begin;}
”declare” 				{pos += 7;return declare;}
”else” 					{pos += 4;return Else;}
”elsif” 				{pos += 5;return elsif;}
”end” 					{pos += 3;return End;}
”exit” 					{pos += 4;return Exit;}
”for” 					{pos += 3;return For;}
”if” 					{pos += 2;return If;}
”in” 					{pos += 2;return in;}
”is” 					{pos += 2;return is;}
”loop” 					{pos += 4;return loop;}
”mod” 					{pos += 3;return mod;}
”not” 					{pos += 3;return NOT;}
”of” 					{pos += 2;return of;}
”or” 					{pos += 2;return or;}
”procedure” 			{pos += 9;return procedure;}
”then” 					{pos += 4;return Then;}
”when” 					{pos += 4;return When;}
”while” 				{pos += 5;return While;}
”xor” 					{pos += 3;return xor;}
\= 						{pos += 1;return Eq;}
\/=” 					{pos += 1;return Ne;}
\/ 						{pos += 1;return Slash;}
\(  					{pos += 1;return LParen;}
\) 						{pos += 1;return RParen;}
\[ 						{pos += 1;return LBraket;}
\] 						{pos += 1;return RBraket;}
\< 						{pos += 1;return Lt;}
\<= 					{pos += 1;return Le;}
\> 						{pos += 1;return Gt;}
\>= 					{pos += 1;return Ge;}
\+ 						{pos += 1;return Plus;}
\- 						{pos += 1;return Minus;}
\* 						{pos += 1;return Star;}
\:= 					{pos += 1;return coleq;}
\.. 					{pos += 1;return dotdot;}
\; 						{pos += 1;return semicolon;}
\: 						{pos += 1;return colon;}
\, 						{pos += 1;return comma;}

[a-zA-Z][_a-zA-Z0-9]*	{pos += yyleng;return IDENTIFIER;}
[1-9][0-9]*				{pos += yyleng;return INTEGER;}
[ \t\n]					{line_no ++; pos = 1; return Eoln;}
.						{printf("unexpected character\n");}

%%

char TokName[][12] = {"<eof>", "Ident", "IntConst", "FALSE", "TRUE", "NOT", "mod", "and", "xor", "elsif", "or", "dotdot", "Exit", "When", "For", "semicolon", "colon", "array", "declare", "coleq", "procedure", "SignedNumber", "of", "in", "LBraket", "RBraket", "=", "(", ")", "+", "-", "*", "/", ".EQ.", ".NE.", ".LT.", ".LE.", "comma", "begin", "loop", ".GT.", ".GE.", "+", "-", "If","Then","End","While","Do","Else","NoType", "Integer", "Boolean", "Prog", "Comma","Eoln", "UPlus", "UMinus","Eq", "Ne", "Lt", "Le", "Gt", "Ge","Plus", "Minus", "Star", "Slash","Assign", "LParen", "RParen"};

int indent = 0;
static char Names[200][15] = {"<no name>"};

tree buildTree (int kind, tree one, tree two, tree three)
{
	tree p = (tree)malloc(sizeof (node));
	p->kind = kind;
	p->first = one;
	p->second = two;
	p->third = three;
	p->next = NULL;
	return p;
}

tree buildIntTree (int kind, int val)
{
	tree p = (tree)malloc(sizeof (node));
	p->kind = kind;
	p->value = val;
	p->first = p->second = p->third = NULL;
	p->next = NULL;
	return p;
}

tree root2;

int yyerror (char s[])
{
	printf ("Error: %s at line %d, position %d, token %s\n", s, line_no, pos, yytext);
}

int yywrap() {

   return 1;
}

void printTree (tree p)
{
	if (p == NULL) return;
	for (; p != NULL; p = p->next) {
		printf ("%*s%s", indent, "", TokName[p->kind]);
		switch (p->kind) {
			case Ident: 
				printf ("  %s (%d)\n", Names[p->value], p->value);
				break;
			case IntConst:
				printf ("  %d\n", p->value);
				break;
			default:
				printf ("\n");
				indent += 2;
				printTree (p->first);
				printTree (p->second);
				printTree (p->third);
				indent -= 2;
			}
		}
}

main (int argc, char **argv)
{
	yyparse();
	printTree (root2);
}
