/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     PUB = 259,
     STATIC = 260,
     NOT = 261,
     OR = 262,
     AND = 263,
     EQ = 264,
     LE = 265,
     LT = 266,
     MINUS = 267,
     ADD = 268,
     TIMES = 269,
     LBP = 270,
     RBP = 271,
     LSP = 272,
     RSP = 273,
     LP = 274,
     RP = 275,
     INT = 276,
     IF = 277,
     ELSE = 278,
     WHILE = 279,
     PRINT = 280,
     ASSIGN = 281,
     VOID = 282,
     MAIN = 283,
     STR = 284,
     RETURN = 285,
     SEMI = 286,
     COMMA = 287,
     THIS = 288,
     NEW = 289,
     DOT = 290,
     ID = 291,
     LIT = 292,
     TRUE = 293,
     FALSE = 294,
     COMMENT = 295,
     BOOLEAN = 296
   };
#endif
/* Tokens.  */
#define CLASS 258
#define PUB 259
#define STATIC 260
#define NOT 261
#define OR 262
#define AND 263
#define EQ 264
#define LE 265
#define LT 266
#define MINUS 267
#define ADD 268
#define TIMES 269
#define LBP 270
#define RBP 271
#define LSP 272
#define RSP 273
#define LP 274
#define RP 275
#define INT 276
#define IF 277
#define ELSE 278
#define WHILE 279
#define PRINT 280
#define ASSIGN 281
#define VOID 282
#define MAIN 283
#define STR 284
#define RETURN 285
#define SEMI 286
#define COMMA 287
#define THIS 288
#define NEW 289
#define DOT 290
#define ID 291
#define LIT 292
#define TRUE 293
#define FALSE 294
#define COMMENT 295
#define BOOLEAN 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

