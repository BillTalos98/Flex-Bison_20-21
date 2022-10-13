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

#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    FUNCTION = 259,
    VARS = 260,
    PR_INTEGER = 261,
    PR_CHAR = 262,
    END_FUNCTION = 263,
    PR_RETURN = 264,
    PR_STARTMAIN = 265,
    PR_ENDMAIN = 266,
    STRUCT = 267,
    ENDSTRUCT = 268,
    TYPEDEF = 269,
    PR_IF = 270,
    PR_THEN = 271,
    PR_ENDIF = 272,
    PR_ELSEIF = 273,
    PR_ELSE = 274,
    PR_FOR = 275,
    PR_STEP = 276,
    PR_TO = 277,
    PR_ENDFOR = 278,
    PR_WHILE = 279,
    PR_ENDWHILE = 280,
    PR_SWITCH = 281,
    PR_CASE = 282,
    PR_DEFAULT = 283,
    PR_ENDSWITCH = 284,
    PR_END = 285,
    PR_BEGIN = 286,
    PR_PRINT = 287,
    PR_BREAK = 288,
    PR_CONT = 289,
    INTEGER = 290,
    CHAR = 291,
    NW_LINE = 292,
    EQUAL = 293,
    CLN = 294,
    DBL_QUOTE = 295,
    SEMICLN = 296,
    COMMA = 297,
    OPEN_BR = 298,
    CLOSE_BR = 299,
    OPEN_HK = 300,
    CLOSE_HK = 301,
    OPEN_PAR = 302,
    CLOSE_PAR = 303,
    PLUS = 304,
    SUB = 305,
    MUL = 306,
    DIV = 307,
    DBL_EQUAL = 308,
    GREQUAL = 309,
    LSEQUAL = 310,
    GRTHAN = 311,
    LSTHAN = 312,
    INEQ = 313,
    AND = 314,
    S_AND = 315,
    OR = 316,
    S_OR = 317,
    NOT = 318,
    S_NOT = 319,
    IDENTIFIERS = 320,
    INTEGERS = 321,
    FLOATS = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "myparser.y" /* yacc.c:1909  */

	char* str;
  int num;

#line 127 "myparser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */
