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
    FOR = 258,
    UNTIL = 259,
    WHILE = 260,
    TIP_DATA = 261,
    START_PROGRAM = 262,
    CONSTANTA = 263,
    STOP_PROGRAM = 264,
    IDENTIFICATOR = 265,
    ATRIBUIRE = 266,
    NUMAR = 267,
    BOOL = 268,
    OPERATOR_LOGIC = 269,
    OPERATOR_RELATIONAL = 270,
    OPERATOR_ARITMETIC = 271,
    IF = 272,
    THEN = 273,
    ELSE = 274,
    ENDIF = 275,
    DO_FOR = 276,
    DO_WHILE = 277,
    ENDFOR = 278,
    ENDWHILE = 279,
    VOID = 280,
    RETURN = 281,
    STRUCT = 282,
    START_DECLARATII = 283,
    SFARSIT_DECLARATII = 284,
    START_DECLARATII_FUNCTIE = 285,
    SFARSIT_DECLARATII_FUNCTIE = 286
  };
#endif
/* Tokens.  */
#define FOR 258
#define UNTIL 259
#define WHILE 260
#define TIP_DATA 261
#define START_PROGRAM 262
#define CONSTANTA 263
#define STOP_PROGRAM 264
#define IDENTIFICATOR 265
#define ATRIBUIRE 266
#define NUMAR 267
#define BOOL 268
#define OPERATOR_LOGIC 269
#define OPERATOR_RELATIONAL 270
#define OPERATOR_ARITMETIC 271
#define IF 272
#define THEN 273
#define ELSE 274
#define ENDIF 275
#define DO_FOR 276
#define DO_WHILE 277
#define ENDFOR 278
#define ENDWHILE 279
#define VOID 280
#define RETURN 281
#define STRUCT 282
#define START_DECLARATII 283
#define SFARSIT_DECLARATII 284
#define START_DECLARATII_FUNCTIE 285
#define SFARSIT_DECLARATII_FUNCTIE 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
