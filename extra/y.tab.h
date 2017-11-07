/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IntConst = 258,
    Ident = 259,
    FALSE = 51,
    TRUE = 52,
    NOT = 53,
    mod = 54,
    and = 55,
    xor = 56,
    elsif = 57,
    or = 58,
    dotdot = 59,
    Exit = 60,
    When = 61,
    For = 62,
    semicolon = 63,
    colon = 64,
    array = 65,
    declare = 66,
    coleq = 67,
    procedure = 68,
    SignedNumber = 69,
    of = 70,
    comma = 71,
    begin = 72,
    loop = 73,
    in = 74,
    is = 75,
    LBraket = 76,
    RBraket = 77,
    If = 78,
    Then = 79,
    End = 80,
    While = 81,
    Do = 82,
    Else = 83,
    LParen = 84,
    RParen = 85,
    Plus = 86,
    Minus = 87,
    Star = 88,
    Slash = 89,
    Eq = 90,
    Ne = 91,
    Lt = 92,
    Le = 93,
    Gt = 94,
    Ge = 95,
    Boolean = 96,
    Comma = 97,
    Eoln = 47,
    INTEGER = 98,
    BOOLEAN = 99,
    OPERATOR = 50,
    IDENTIFIER = 49,
    RESERVEDWORD = 48
  };
#endif
/* Tokens.  */
#define IntConst 258
#define Ident 259
#define FALSE 51
#define TRUE 52
#define NOT 53
#define mod 54
#define and 55
#define xor 56
#define elsif 57
#define or 58
#define dotdot 59
#define Exit 60
#define When 61
#define For 62
#define semicolon 63
#define colon 64
#define array 65
#define declare 66
#define coleq 67
#define procedure 68
#define SignedNumber 69
#define of 70
#define comma 71
#define begin 72
#define loop 73
#define in 74
#define is 75
#define LBraket 76
#define RBraket 77
#define If 78
#define Then 79
#define End 80
#define While 81
#define Do 82
#define Else 83
#define LParen 84
#define RParen 85
#define Plus 86
#define Minus 87
#define Star 88
#define Slash 89
#define Eq 90
#define Ne 91
#define Lt 92
#define Le 93
#define Gt 94
#define Ge 95
#define Boolean 96
#define Comma 97
#define Eoln 47
#define INTEGER 98
#define BOOLEAN 99
#define OPERATOR 50
#define IDENTIFIER 49
#define RESERVEDWORD 48

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "proj2y.y" /* yacc.c:1909  */
int num; tree t;

#line 171 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
