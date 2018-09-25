/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse sqlparse
#define yylex   sqllex
#define yyerror sqlerror
#define yylval  sqllval
#define yychar  sqlchar
#define yydebug sqldebug
#define yynerrs sqlnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     X_BODY = 259,
     IDENT = 260,
     aTYPE = 261,
     ALIAS = 262,
     AGGR = 263,
     AGGR2 = 264,
     RANK = 265,
     sqlINT = 266,
     OIDNUM = 267,
     HEXADECIMAL = 268,
     INTNUM = 269,
     APPROXNUM = 270,
     USING = 271,
     GLOBAL = 272,
     CAST = 273,
     CONVERT = 274,
     CHARACTER = 275,
     VARYING = 276,
     LARGE = 277,
     OBJECT = 278,
     VARCHAR = 279,
     CLOB = 280,
     sqlTEXT = 281,
     BINARY = 282,
     sqlBLOB = 283,
     sqlDECIMAL = 284,
     sqlFLOAT = 285,
     TINYINT = 286,
     SMALLINT = 287,
     BIGINT = 288,
     HUGEINT = 289,
     sqlINTEGER = 290,
     sqlDOUBLE = 291,
     sqlREAL = 292,
     PRECISION = 293,
     PARTIAL = 294,
     SIMPLE = 295,
     ACTION = 296,
     CASCADE = 297,
     RESTRICT = 298,
     BOOL_FALSE = 299,
     BOOL_TRUE = 300,
     CURRENT_DATE = 301,
     CURRENT_TIMESTAMP = 302,
     CURRENT_TIME = 303,
     LOCALTIMESTAMP = 304,
     LOCALTIME = 305,
     LEX_ERROR = 306,
     sqlASC = 307,
     GEOMETRY = 308,
     GEOMETRYSUBTYPE = 309,
     GEOMETRYA = 310,
     USER = 311,
     CURRENT_USER = 312,
     SESSION_USER = 313,
     LOCAL = 314,
     LOCKED = 315,
     BEST = 316,
     EFFORT = 317,
     CURRENT_ROLE = 318,
     sqlSESSION = 319,
     sqlDELETE = 320,
     UPDATE = 321,
     SELECT = 322,
     INSERT = 323,
     LATERAL = 324,
     LEFT = 325,
     RIGHT = 326,
     FULL = 327,
     OUTER = 328,
     NATURAL = 329,
     CROSS = 330,
     JOIN = 331,
     INNER = 332,
     COMMIT = 333,
     ROLLBACK = 334,
     SAVEPOINT = 335,
     RELEASE = 336,
     WORK = 337,
     CHAIN = 338,
     NO = 339,
     PRESERVE = 340,
     ROWS = 341,
     START = 342,
     TRANSACTION = 343,
     READ = 344,
     WRITE = 345,
     ONLY = 346,
     ISOLATION = 347,
     LEVEL = 348,
     UNCOMMITTED = 349,
     COMMITTED = 350,
     sqlREPEATABLE = 351,
     SERIALIZABLE = 352,
     DIAGNOSTICS = 353,
     sqlSIZE = 354,
     STORAGE = 355,
     ASYMMETRIC = 356,
     SYMMETRIC = 357,
     ORDER = 358,
     ORDERED = 359,
     BY = 360,
     IMPRINTS = 361,
     EXISTS = 362,
     ESCAPE = 363,
     HAVING = 364,
     sqlGROUP = 365,
     sqlNULL = 366,
     FROM = 367,
     FOR = 368,
     MATCH = 369,
     EXTRACT = 370,
     SEQUENCE = 371,
     INCREMENT = 372,
     RESTART = 373,
     CONTINUE = 374,
     MAXVALUE = 375,
     MINVALUE = 376,
     CYCLE = 377,
     NOMAXVALUE = 378,
     NOMINVALUE = 379,
     NOCYCLE = 380,
     NEXT = 381,
     VALUE = 382,
     CACHE = 383,
     GENERATED = 384,
     ALWAYS = 385,
     IDENTITY = 386,
     SERIAL = 387,
     BIGSERIAL = 388,
     AUTO_INCREMENT = 389,
     SCOLON = 390,
     AT = 391,
     XMLCOMMENT = 392,
     XMLCONCAT = 393,
     XMLDOCUMENT = 394,
     XMLELEMENT = 395,
     XMLATTRIBUTES = 396,
     XMLFOREST = 397,
     XMLPARSE = 398,
     STRIP = 399,
     WHITESPACE = 400,
     XMLPI = 401,
     XMLQUERY = 402,
     PASSING = 403,
     XMLTEXT = 404,
     NIL = 405,
     REF = 406,
     ABSENT = 407,
     EMPTY = 408,
     DOCUMENT = 409,
     ELEMENT = 410,
     CONTENT = 411,
     XMLNAMESPACES = 412,
     NAMESPACE = 413,
     XMLVALIDATE = 414,
     RETURNING = 415,
     LOCATION = 416,
     ID = 417,
     ACCORDING = 418,
     XMLSCHEMA = 419,
     URI = 420,
     XMLAGG = 421,
     FILTER = 422,
     UNIONJOIN = 423,
     CORRESPONDING = 424,
     INTERSECT = 425,
     EXCEPT = 426,
     UNION = 427,
     DATA = 428,
     WITH = 429,
     FILTER_FUNC = 430,
     NOT = 431,
     SOME = 432,
     OR = 433,
     ILIKE = 434,
     NOT_ILIKE = 435,
     LIKE = 436,
     NOT_LIKE = 437,
     sqlIN = 438,
     NOT_IN = 439,
     BETWEEN = 440,
     NOT_BETWEEN = 441,
     ANY = 442,
     ALL = 443,
     AND = 444,
     COMPARISON = 445,
     SPLIT_PART = 446,
     POSITION = 447,
     SUBSTRING = 448,
     CONCATSTRING = 449,
     RIGHT_SHIFT_ASSIGN = 450,
     LEFT_SHIFT_ASSIGN = 451,
     RIGHT_SHIFT = 452,
     LEFT_SHIFT = 453,
     UMINUS = 454,
     GEOM_OVERLAP_OR_LEFT = 455,
     GEOM_OVERLAP_OR_BELOW = 456,
     GEOM_OVERLAP_OR_ABOVE = 457,
     GEOM_OVERLAP = 458,
     GEOM_MBR_EQUAL = 459,
     GEOM_DIST = 460,
     GEOM_ABOVE = 461,
     GEOM_BELOW = 462,
     GEOM_OVERLAP_OR_RIGHT = 463,
     TEMP = 464,
     TEMPORARY = 465,
     STREAM = 466,
     MERGE = 467,
     REMOTE = 468,
     REPLICA = 469,
     DESC = 470,
     AUTHORIZATION = 471,
     CHECK = 472,
     CONSTRAINT = 473,
     CREATE = 474,
     COMMENT = 475,
     TYPE = 476,
     PROCEDURE = 477,
     FUNCTION = 478,
     sqlLOADER = 479,
     AGGREGATE = 480,
     RETURNS = 481,
     EXTERNAL = 482,
     sqlNAME = 483,
     DECLARE = 484,
     CALL = 485,
     LANGUAGE = 486,
     ANALYZE = 487,
     MINMAX = 488,
     SQL_EXPLAIN = 489,
     SQL_PLAN = 490,
     SQL_DEBUG = 491,
     SQL_TRACE = 492,
     PREP = 493,
     PREPARE = 494,
     EXEC = 495,
     EXECUTE = 496,
     DEFAULT = 497,
     DISTINCT = 498,
     DROP = 499,
     TRUNCATE = 500,
     FOREIGN = 501,
     RENAME = 502,
     ENCRYPTED = 503,
     UNENCRYPTED = 504,
     PASSWORD = 505,
     GRANT = 506,
     REVOKE = 507,
     ROLE = 508,
     ADMIN = 509,
     INTO = 510,
     IS = 511,
     KEY = 512,
     ON = 513,
     OPTION = 514,
     OPTIONS = 515,
     PATH = 516,
     PRIMARY = 517,
     PRIVILEGES = 518,
     PUBLIC = 519,
     REFERENCES = 520,
     SCHEMA = 521,
     SET = 522,
     AUTO_COMMIT = 523,
     RETURN = 524,
     ALTER = 525,
     ADD = 526,
     TABLE = 527,
     COLUMN = 528,
     TO = 529,
     UNIQUE = 530,
     VALUES = 531,
     VIEW = 532,
     WHERE = 533,
     sqlDATE = 534,
     TIME = 535,
     TIMESTAMP = 536,
     INTERVAL = 537,
     YEAR = 538,
     QUARTER = 539,
     MONTH = 540,
     WEEK = 541,
     DAY = 542,
     HOUR = 543,
     MINUTE = 544,
     SECOND = 545,
     ZONE = 546,
     LIMIT = 547,
     OFFSET = 548,
     SAMPLE = 549,
     CASE = 550,
     WHEN = 551,
     THEN = 552,
     ELSE = 553,
     NULLIF = 554,
     COALESCE = 555,
     IF = 556,
     ELSEIF = 557,
     WHILE = 558,
     DO = 559,
     ATOMIC = 560,
     BEGIN = 561,
     END = 562,
     COPY = 563,
     RECORDS = 564,
     DELIMITERS = 565,
     STDIN = 566,
     STDOUT = 567,
     FWF = 568,
     INDEX = 569,
     REPLACE = 570,
     AS = 571,
     TRIGGER = 572,
     OF = 573,
     BEFORE = 574,
     AFTER = 575,
     ROW = 576,
     STATEMENT = 577,
     sqlNEW = 578,
     OLD = 579,
     EACH = 580,
     REFERENCING = 581,
     OVER = 582,
     PARTITION = 583,
     CURRENT = 584,
     EXCLUDE = 585,
     FOLLOWING = 586,
     PRECEDING = 587,
     OTHERS = 588,
     TIES = 589,
     RANGE = 590,
     UNBOUNDED = 591
   };
#endif
/* Tokens.  */
#define STRING 258
#define X_BODY 259
#define IDENT 260
#define aTYPE 261
#define ALIAS 262
#define AGGR 263
#define AGGR2 264
#define RANK 265
#define sqlINT 266
#define OIDNUM 267
#define HEXADECIMAL 268
#define INTNUM 269
#define APPROXNUM 270
#define USING 271
#define GLOBAL 272
#define CAST 273
#define CONVERT 274
#define CHARACTER 275
#define VARYING 276
#define LARGE 277
#define OBJECT 278
#define VARCHAR 279
#define CLOB 280
#define sqlTEXT 281
#define BINARY 282
#define sqlBLOB 283
#define sqlDECIMAL 284
#define sqlFLOAT 285
#define TINYINT 286
#define SMALLINT 287
#define BIGINT 288
#define HUGEINT 289
#define sqlINTEGER 290
#define sqlDOUBLE 291
#define sqlREAL 292
#define PRECISION 293
#define PARTIAL 294
#define SIMPLE 295
#define ACTION 296
#define CASCADE 297
#define RESTRICT 298
#define BOOL_FALSE 299
#define BOOL_TRUE 300
#define CURRENT_DATE 301
#define CURRENT_TIMESTAMP 302
#define CURRENT_TIME 303
#define LOCALTIMESTAMP 304
#define LOCALTIME 305
#define LEX_ERROR 306
#define sqlASC 307
#define GEOMETRY 308
#define GEOMETRYSUBTYPE 309
#define GEOMETRYA 310
#define USER 311
#define CURRENT_USER 312
#define SESSION_USER 313
#define LOCAL 314
#define LOCKED 315
#define BEST 316
#define EFFORT 317
#define CURRENT_ROLE 318
#define sqlSESSION 319
#define sqlDELETE 320
#define UPDATE 321
#define SELECT 322
#define INSERT 323
#define LATERAL 324
#define LEFT 325
#define RIGHT 326
#define FULL 327
#define OUTER 328
#define NATURAL 329
#define CROSS 330
#define JOIN 331
#define INNER 332
#define COMMIT 333
#define ROLLBACK 334
#define SAVEPOINT 335
#define RELEASE 336
#define WORK 337
#define CHAIN 338
#define NO 339
#define PRESERVE 340
#define ROWS 341
#define START 342
#define TRANSACTION 343
#define READ 344
#define WRITE 345
#define ONLY 346
#define ISOLATION 347
#define LEVEL 348
#define UNCOMMITTED 349
#define COMMITTED 350
#define sqlREPEATABLE 351
#define SERIALIZABLE 352
#define DIAGNOSTICS 353
#define sqlSIZE 354
#define STORAGE 355
#define ASYMMETRIC 356
#define SYMMETRIC 357
#define ORDER 358
#define ORDERED 359
#define BY 360
#define IMPRINTS 361
#define EXISTS 362
#define ESCAPE 363
#define HAVING 364
#define sqlGROUP 365
#define sqlNULL 366
#define FROM 367
#define FOR 368
#define MATCH 369
#define EXTRACT 370
#define SEQUENCE 371
#define INCREMENT 372
#define RESTART 373
#define CONTINUE 374
#define MAXVALUE 375
#define MINVALUE 376
#define CYCLE 377
#define NOMAXVALUE 378
#define NOMINVALUE 379
#define NOCYCLE 380
#define NEXT 381
#define VALUE 382
#define CACHE 383
#define GENERATED 384
#define ALWAYS 385
#define IDENTITY 386
#define SERIAL 387
#define BIGSERIAL 388
#define AUTO_INCREMENT 389
#define SCOLON 390
#define AT 391
#define XMLCOMMENT 392
#define XMLCONCAT 393
#define XMLDOCUMENT 394
#define XMLELEMENT 395
#define XMLATTRIBUTES 396
#define XMLFOREST 397
#define XMLPARSE 398
#define STRIP 399
#define WHITESPACE 400
#define XMLPI 401
#define XMLQUERY 402
#define PASSING 403
#define XMLTEXT 404
#define NIL 405
#define REF 406
#define ABSENT 407
#define EMPTY 408
#define DOCUMENT 409
#define ELEMENT 410
#define CONTENT 411
#define XMLNAMESPACES 412
#define NAMESPACE 413
#define XMLVALIDATE 414
#define RETURNING 415
#define LOCATION 416
#define ID 417
#define ACCORDING 418
#define XMLSCHEMA 419
#define URI 420
#define XMLAGG 421
#define FILTER 422
#define UNIONJOIN 423
#define CORRESPONDING 424
#define INTERSECT 425
#define EXCEPT 426
#define UNION 427
#define DATA 428
#define WITH 429
#define FILTER_FUNC 430
#define NOT 431
#define SOME 432
#define OR 433
#define ILIKE 434
#define NOT_ILIKE 435
#define LIKE 436
#define NOT_LIKE 437
#define sqlIN 438
#define NOT_IN 439
#define BETWEEN 440
#define NOT_BETWEEN 441
#define ANY 442
#define ALL 443
#define AND 444
#define COMPARISON 445
#define SPLIT_PART 446
#define POSITION 447
#define SUBSTRING 448
#define CONCATSTRING 449
#define RIGHT_SHIFT_ASSIGN 450
#define LEFT_SHIFT_ASSIGN 451
#define RIGHT_SHIFT 452
#define LEFT_SHIFT 453
#define UMINUS 454
#define GEOM_OVERLAP_OR_LEFT 455
#define GEOM_OVERLAP_OR_BELOW 456
#define GEOM_OVERLAP_OR_ABOVE 457
#define GEOM_OVERLAP 458
#define GEOM_MBR_EQUAL 459
#define GEOM_DIST 460
#define GEOM_ABOVE 461
#define GEOM_BELOW 462
#define GEOM_OVERLAP_OR_RIGHT 463
#define TEMP 464
#define TEMPORARY 465
#define STREAM 466
#define MERGE 467
#define REMOTE 468
#define REPLICA 469
#define DESC 470
#define AUTHORIZATION 471
#define CHECK 472
#define CONSTRAINT 473
#define CREATE 474
#define COMMENT 475
#define TYPE 476
#define PROCEDURE 477
#define FUNCTION 478
#define sqlLOADER 479
#define AGGREGATE 480
#define RETURNS 481
#define EXTERNAL 482
#define sqlNAME 483
#define DECLARE 484
#define CALL 485
#define LANGUAGE 486
#define ANALYZE 487
#define MINMAX 488
#define SQL_EXPLAIN 489
#define SQL_PLAN 490
#define SQL_DEBUG 491
#define SQL_TRACE 492
#define PREP 493
#define PREPARE 494
#define EXEC 495
#define EXECUTE 496
#define DEFAULT 497
#define DISTINCT 498
#define DROP 499
#define TRUNCATE 500
#define FOREIGN 501
#define RENAME 502
#define ENCRYPTED 503
#define UNENCRYPTED 504
#define PASSWORD 505
#define GRANT 506
#define REVOKE 507
#define ROLE 508
#define ADMIN 509
#define INTO 510
#define IS 511
#define KEY 512
#define ON 513
#define OPTION 514
#define OPTIONS 515
#define PATH 516
#define PRIMARY 517
#define PRIVILEGES 518
#define PUBLIC 519
#define REFERENCES 520
#define SCHEMA 521
#define SET 522
#define AUTO_COMMIT 523
#define RETURN 524
#define ALTER 525
#define ADD 526
#define TABLE 527
#define COLUMN 528
#define TO 529
#define UNIQUE 530
#define VALUES 531
#define VIEW 532
#define WHERE 533
#define sqlDATE 534
#define TIME 535
#define TIMESTAMP 536
#define INTERVAL 537
#define YEAR 538
#define QUARTER 539
#define MONTH 540
#define WEEK 541
#define DAY 542
#define HOUR 543
#define MINUTE 544
#define SECOND 545
#define ZONE 546
#define LIMIT 547
#define OFFSET 548
#define SAMPLE 549
#define CASE 550
#define WHEN 551
#define THEN 552
#define ELSE 553
#define NULLIF 554
#define COALESCE 555
#define IF 556
#define ELSEIF 557
#define WHILE 558
#define DO 559
#define ATOMIC 560
#define BEGIN 561
#define END 562
#define COPY 563
#define RECORDS 564
#define DELIMITERS 565
#define STDIN 566
#define STDOUT 567
#define FWF 568
#define INDEX 569
#define REPLACE 570
#define AS 571
#define TRIGGER 572
#define OF 573
#define BEFORE 574
#define AFTER 575
#define ROW 576
#define STATEMENT 577
#define sqlNEW 578
#define OLD 579
#define EACH 580
#define REFERENCING 581
#define OVER 582
#define PARTITION 583
#define CURRENT 584
#define EXCLUDE 585
#define FOLLOWING 586
#define PRECEDING 587
#define OTHERS 588
#define TIES 589
#define RANGE 590
#define UNBOUNDED 591




/* Copy the first part of user declarations.  */
#line 9 "src/sql/server/sql_parser.y"

#include "monetdb_config.h"
#include "sql_mem.h"
#include "sql_parser.h"
#include "sql_symbol.h"
#include "sql_datetime.h"
#include "sql_decimal.h"	/* for decimal_from_str() */
#include "sql_semantic.h"	/* for sql_add_param() & sql_add_arg() */
#include "sql_env.h"
#include "rel_sequence.h"	/* for sql_next_seq_name() */
#ifdef HAVE_HGE
#include "mal.h"		/* for have_hge */
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <string.h>

#define SA 	m->sa
#define _symbol_create(t,d)         symbol_create( SA, t, d)
#define _symbol_create_list(t,d)    symbol_create_list( SA, t, d)
#define _symbol_create_int(t,d)     symbol_create_int( SA, t, d)
#define _symbol_create_lng(t,d)     symbol_create_lng( SA, t, d)
#define _symbol_create_symbol(t,d)  symbol_create_symbol( SA, t, d)
#define _symbol_create_hexa(t,d)    symbol_create_hexa( SA, t, d)
#define _newAtomNode(d)		    newAtomNode( SA, d)

#define L()                  dlist_create( SA )

#define append_list(l,d)     dlist_append_list( SA, l, d)
#define append_int(l,d)      dlist_append_int( SA, l, d)
#define append_lng(l,d)      dlist_append_lng( SA, l, d)
#define append_symbol(l,d)   dlist_append_symbol( SA, l, d)
#define append_string(l,d)   dlist_append_string( SA, l, d)
#define append_type(l,d)     dlist_append_type( SA, l, d)

#define _atom_string(t, v)   atom_string(SA, t, v)

#define YYMALLOC GDKmalloc
#define YYFREE GDKfree

#define YY_parse_LSP_NEEDED	/* needed for bison++ 1.21.11-3 */

#define SET_Z(info)(info = info | 0x02)
#define SET_M(info)(info = info | 0x01)

#ifdef HAVE_HGE
#define MAX_DEC_DIGITS (have_hge ? 38 : 18)
#define MAX_HEX_DIGITS (have_hge ? 32 : 16)
#else
#define MAX_DEC_DIGITS 18
#define MAX_HEX_DIGITS 16
#endif

static inline int
UTF8_strlen(const char *val)
{
	const unsigned char *s = (const unsigned char *) val;
	int pos = 0;

	while (*s) {
		int c = *s++;

		pos++;
		if (c < 0xC0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xE0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF8)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xFC)
			continue;
		if (*s++ < 0x80)
			return int_nil;
	}
	return pos;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 111 "src/sql/server/sql_parser.y"
{
	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;
}
/* Line 193 of yacc.c.  */
#line 876 "src/sql/server/sql_parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 120 "src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 895 "src/sql/server/sql_parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  415
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   591

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   209,   196,     2,
     175,   176,   207,   194,   349,   195,   350,   208,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   351,     2,
       2,   179,     2,   354,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   352,     2,   353,   198,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   197,     2,   211,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     177,   178,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   199,   200,   201,   202,
     203,   204,   205,   206,   210,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    12,    13,    18,    19,    24,
      25,    29,    30,    34,    37,    38,    40,    43,    45,    47,
      49,    53,    54,    57,    58,    62,    64,    66,    68,    70,
      72,    74,    76,    78,    80,    82,    84,    90,    92,    94,
      95,    97,   100,   103,   106,   111,   116,   121,   126,   130,
     135,   139,   144,   149,   157,   163,   165,   168,   172,   174,
     175,   180,   181,   183,   185,   188,   190,   192,   194,   196,
     198,   199,   203,   205,   207,   214,   221,   223,   227,   228,
     232,   233,   237,   238,   241,   248,   255,   256,   260,   261,
     265,   267,   271,   273,   277,   280,   283,   286,   288,   290,
     293,   295,   297,   299,   303,   305,   307,   309,   312,   315,
     318,   320,   322,   326,   328,   330,   337,   344,   350,   356,
     363,   370,   377,   382,   389,   400,   405,   409,   417,   423,
     428,   434,   439,   445,   451,   455,   459,   463,   465,   466,
     469,   472,   474,   476,   478,   480,   482,   484,   489,   493,
     498,   500,   503,   505,   508,   511,   515,   517,   520,   522,
     526,   530,   532,   536,   539,   541,   544,   546,   549,   551,
     553,   563,   565,   567,   569,   570,   574,   585,   586,   588,
     590,   591,   595,   601,   608,   614,   620,   626,   635,   642,
     643,   650,   655,   657,   659,   662,   665,   668,   671,   672,
     677,   682,   686,   690,   692,   697,   698,   702,   705,   707,
     711,   713,   715,   717,   719,   721,   723,   725,   729,   732,
     733,   735,   737,   740,   747,   749,   753,   755,   757,   759,
     762,   764,   767,   773,   775,   776,   780,   783,   784,   787,
     790,   792,   794,   797,   800,   804,   808,   809,   811,   813,
     816,   819,   820,   822,   824,   826,   827,   830,   833,   835,
     837,   840,   846,   848,   851,   855,   864,   869,   871,   875,
     878,   886,   888,   892,   894,   896,   897,   901,   902,   904,
     908,   915,   919,   921,   923,   935,   945,   957,   968,   980,
     992,  1002,  1010,  1020,  1022,  1028,  1035,  1036,  1040,  1041,
    1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1089,  1091,  1093,  1095,  1097,  1100,  1103,  1108,
    1110,  1111,  1113,  1117,  1120,  1122,  1124,  1129,  1136,  1142,
    1147,  1149,  1152,  1157,  1159,  1162,  1163,  1166,  1174,  1175,
    1178,  1184,  1193,  1194,  1197,  1198,  1200,  1203,  1208,  1213,
    1215,  1217,  1219,  1220,  1225,  1228,  1238,  1240,  1242,  1244,
    1246,  1248,  1250,  1254,  1255,  1258,  1260,  1263,  1268,  1273,
    1278,  1283,  1284,  1286,  1287,  1289,  1293,  1294,  1298,  1300,
    1302,  1303,  1308,  1310,  1315,  1319,  1324,  1328,  1332,  1336,
    1341,  1347,  1352,  1357,  1362,  1368,  1372,  1378,  1385,  1391,
    1397,  1403,  1409,  1414,  1418,  1422,  1426,  1431,  1432,  1436,
    1439,  1441,  1445,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1466,  1470,  1473,  1477,  1482,  1486,  1491,
    1495,  1496,  1498,  1500,  1504,  1507,  1510,  1514,  1518,  1521,
    1524,  1527,  1529,  1531,  1532,  1535,  1539,  1540,  1541,  1545,
    1560,  1574,  1581,  1591,  1598,  1605,  1606,  1611,  1613,  1617,
    1618,  1622,  1624,  1628,  1630,  1633,  1634,  1638,  1644,  1652,
    1653,  1655,  1656,  1659,  1662,  1667,  1672,  1673,  1677,  1678,
    1680,  1681,  1684,  1685,  1688,  1690,  1694,  1696,  1700,  1705,
    1706,  1709,  1712,  1718,  1723,  1730,  1735,  1741,  1742,  1745,
    1748,  1750,  1754,  1760,  1762,  1766,  1768,  1772,  1774,  1776,
    1778,  1780,  1782,  1784,  1785,  1787,  1789,  1791,  1795,  1797,
    1801,  1805,  1809,  1810,  1813,  1817,  1822,  1827,  1833,  1839,
    1840,  1842,  1845,  1846,  1848,  1850,  1852,  1854,  1857,  1860,
    1862,  1866,  1870,  1872,  1877,  1879,  1881,  1883,  1888,  1895,
    1901,  1903,  1907,  1909,  1915,  1921,  1927,  1931,  1933,  1934,
    1936,  1938,  1939,  1941,  1947,  1949,  1954,  1955,  1958,  1960,
    1964,  1967,  1970,  1974,  1977,  1981,  1983,  1985,  1986,  1992,
    1998,  2001,  2006,  2008,  2009,  2011,  2012,  2016,  2018,  2022,
    2023,  2026,  2030,  2032,  2036,  2038,  2039,  2043,  2044,  2047,
    2050,  2051,  2054,  2057,  2058,  2061,  2064,  2067,  2069,  2073,
    2076,  2077,  2079,  2081,  2083,  2085,  2087,  2089,  2091,  2093,
    2095,  2097,  2099,  2102,  2104,  2108,  2112,  2119,  2126,  2127,
    2129,  2131,  2135,  2139,  2143,  2147,  2149,  2153,  2158,  2162,
    2168,  2174,  2182,  2190,  2192,  2196,  2201,  2206,  2208,  2210,
    2212,  2215,  2217,  2221,  2225,  2229,  2233,  2238,  2242,  2246,
    2251,  2255,  2257,  2261,  2265,  2269,  2273,  2277,  2281,  2285,
    2289,  2293,  2297,  2301,  2305,  2309,  2313,  2317,  2321,  2325,
    2329,  2333,  2336,  2340,  2344,  2348,  2352,  2355,  2358,  2362,
    2364,  2366,  2368,  2370,  2372,  2374,  2376,  2378,  2380,  2382,
    2387,  2389,  2391,  2393,  2395,  2397,  2399,  2401,  2403,  2409,
    2413,  2415,  2419,  2420,  2424,  2425,  2429,  2430,  2434,  2436,
    2438,  2440,  2442,  2445,  2447,  2450,  2453,  2458,  2461,  2463,
    2466,  2469,  2470,  2474,  2477,  2480,  2484,  2487,  2491,  2496,
    2498,  2502,  2504,  2506,  2508,  2510,  2517,  2520,  2523,  2526,
    2529,  2532,  2533,  2536,  2545,  2554,  2561,  2568,  2575,  2579,
    2588,  2590,  2594,  2596,  2600,  2604,  2607,  2608,  2611,  2613,
    2615,  2617,  2621,  2623,  2627,  2629,  2633,  2638,  2645,  2651,
    2657,  2662,  2669,  2671,  2673,  2675,  2676,  2680,  2681,  2685,
    2686,  2690,  2691,  2693,  2697,  2701,  2703,  2705,  2707,  2709,
    2711,  2713,  2715,  2717,  2719,  2721,  2724,  2726,  2729,  2732,
    2735,  2739,  2741,  2744,  2746,  2748,  2750,  2752,  2754,  2756,
    2758,  2760,  2762,  2765,  2770,  2775,  2777,  2780,  2783,  2786,
    2789,  2791,  2793,  2798,  2800,  2804,  2810,  2812,  2816,  2822,
    2829,  2836,  2838,  2845,  2850,  2856,  2861,  2863,  2867,  2871,
    2875,  2880,  2882,  2885,  2890,  2892,  2895,  2896,  2899,  2901,
    2903,  2905,  2907,  2909,  2911,  2913,  2915,  2920,  2925,  2930,
    2932,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2954,  2961,
    2963,  2968,  2975,  2977,  2980,  2982,  2984,  2986,  2988,  2993,
    2995,  3000,  3007,  3009,  3014,  3016,  3021,  3028,  3030,  3032,
    3034,  3036,  3038,  3040,  3043,  3045,  3047,  3051,  3053,  3057,
    3059,  3061,  3063,  3065,  3067,  3069,  3071,  3073,  3075,  3077,
    3079,  3081,  3083,  3085,  3087,  3089,  3091,  3093,  3095,  3097,
    3099,  3101,  3103,  3105,  3107,  3109,  3111,  3113,  3115,  3117,
    3119,  3121,  3123,  3125,  3127,  3129,  3131,  3133,  3135,  3137,
    3139,  3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,  3157,
    3159,  3161,  3163,  3165,  3167,  3169,  3171,  3173,  3175,  3177,
    3179,  3181,  3183,  3185,  3187,  3189,  3191,  3193,  3195,  3197,
    3199,  3201,  3203,  3205,  3207,  3209,  3211,  3213,  3215,  3217,
    3219,  3221,  3223,  3225,  3227,  3229,  3231,  3233,  3235,  3237,
    3239,  3241,  3243,  3245,  3249,  3251,  3253,  3255,  3257,  3260,
    3263,  3267,  3272,  3273,  3275,  3278,  3280,  3286,  3292,  3295,
    3298,  3301,  3306,  3313,  3316,  3319,  3321,  3323,  3325,  3329,
    3331,  3333,  3335,  3337,  3339,  3341,  3343,  3345,  3347,  3349,
    3351,  3357,  3363,  3369,  3377,  3378,  3381,  3386,  3393,  3398,
    3401,  3406,  3409,  3411,  3416,  3418,  3422,  3425,  3426,  3429,
    3431,  3433,  3436,  3438,  3442,  3444,  3445,  3448,  3452,  3456,
    3460,  3464,  3469,  3477,  3478,  3481,  3483,  3487,  3490,  3492,
    3493,  3496,  3498,  3505,  3508,  3511,  3519,  3521,  3522,  3525,
    3534,  3536,  3537,  3541,  3543,  3545,  3549,  3551,  3553,  3556,
    3561,  3562,  3564,  3568,  3572,  3578,  3585,  3587,  3589,  3591,
    3593,  3594,  3597,  3600,  3605,  3607,  3611,  3613,  3615,  3617,
    3619,  3623,  3626,  3629,  3630,  3632,  3635,  3638,  3639,  3641,
    3647,  3649,  3651,  3655,  3659,  3661,  3663,  3664,  3667,  3669,
    3672,  3674,  3675,  3677,  3679,  3682,  3683,  3685,  3688,  3691,
    3694,  3696,  3698
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     356,     0,    -1,   369,   135,    -1,    -1,   251,   357,   369,
     135,    -1,    -1,   247,   358,   369,   135,    -1,    -1,   246,
     359,   369,   135,    -1,    -1,   248,   360,   356,    -1,    -1,
     249,   361,   356,    -1,   688,   135,    -1,    -1,   135,    -1,
       1,   135,    -1,    51,    -1,   231,    -1,   362,    -1,   231,
     181,   327,    -1,    -1,   313,   107,    -1,    -1,   313,   178,
     107,    -1,   256,    -1,   279,    -1,   241,    -1,   374,    -1,
     383,    -1,   388,    -1,   405,    -1,   505,    -1,   400,    -1,
     371,    -1,   373,    -1,   244,   656,   456,   585,   370,    -1,
     469,    -1,   693,    -1,    -1,   245,    -1,   368,   372,    -1,
     368,   417,    -1,   450,   673,    -1,   372,   349,   450,   673,
      -1,   367,   682,   179,   580,    -1,   367,   457,   179,   606,
      -1,   367,    64,   228,   682,    -1,   367,   278,   682,    -1,
     367,   653,   179,   682,    -1,   367,   265,   682,    -1,   367,
     292,   303,    59,    -1,   367,   292,   303,   655,    -1,   362,
     278,   365,   375,   377,   690,   378,    -1,   366,   278,   364,
     656,   508,    -1,   682,    -1,   228,   376,    -1,   682,   228,
     376,    -1,   682,    -1,    -1,   254,    20,   279,   682,    -1,
      -1,   379,    -1,   380,    -1,   379,   380,    -1,   383,    -1,
     388,    -1,   405,    -1,   505,    -1,   400,    -1,    -1,   174,
     266,   382,    -1,    57,    -1,    63,    -1,   263,   391,   286,
     398,   385,   387,    -1,   263,   384,   286,   398,   386,   387,
      -1,   680,    -1,   384,   349,   680,    -1,    -1,   174,   263,
     271,    -1,    -1,   174,   266,   271,    -1,    -1,   112,   382,
      -1,   264,   389,   391,   112,   398,   387,    -1,   264,   390,
     384,   112,   398,   387,    -1,    -1,   263,   271,   113,    -1,
      -1,   266,   271,   113,    -1,   392,    -1,   395,   270,   394,
      -1,   393,    -1,   393,   349,   393,    -1,   320,   112,    -1,
     320,   267,    -1,   284,   656,    -1,   656,    -1,   503,    -1,
     191,   275,    -1,   191,    -1,   396,    -1,   397,    -1,   396,
     349,   397,    -1,    68,    -1,    65,    -1,   257,    -1,    66,
     456,    -1,    67,   456,    -1,   277,   456,    -1,   253,    -1,
     399,    -1,   398,   349,   399,    -1,   276,    -1,   680,    -1,
     282,   284,   656,   283,   404,   425,    -1,   282,   284,   656,
     283,   284,   656,    -1,   282,   284,   656,   282,   402,    -1,
     282,   284,   656,   256,   403,    -1,   282,   284,   656,   279,
      89,    91,    -1,   282,   284,   656,   279,    68,    91,    -1,
     282,   284,   656,   279,    89,    90,    -1,   282,    56,   682,
     401,    -1,   282,    56,   682,   259,   286,   682,    -1,   282,
      56,   279,   415,   262,   687,    16,   336,   262,   687,    -1,
     174,   415,   262,   687,    -1,   279,   278,   682,    -1,   174,
     415,   262,   687,   279,   278,   682,    -1,   404,   682,   279,
     254,   435,    -1,   404,   682,   279,   111,    -1,   404,   682,
     279,   178,   111,    -1,   404,   682,   256,   254,    -1,   404,
     682,   279,   100,     3,    -1,   404,   682,   279,   100,   111,
      -1,   404,   682,   508,    -1,   230,   682,   508,    -1,   284,
     656,   508,    -1,   285,    -1,    -1,   362,   414,    -1,   362,
     417,    -1,   452,    -1,   458,    -1,   461,    -1,   412,    -1,
     406,    -1,   490,    -1,   362,   116,   656,   407,    -1,   366,
     116,   656,    -1,   282,   116,   656,   408,    -1,   409,    -1,
     407,   409,    -1,   410,    -1,   408,   410,    -1,   328,   673,
      -1,    87,   174,   671,    -1,   411,    -1,   328,   673,    -1,
     118,    -1,   118,   174,   671,    -1,   118,   174,   606,    -1,
     411,    -1,   117,   105,   670,    -1,   121,   670,    -1,   124,
      -1,   120,   670,    -1,   123,    -1,   128,   670,    -1,   122,
      -1,   125,    -1,   362,   413,   326,   682,   270,   656,   175,
     450,   176,    -1,   287,    -1,   104,    -1,   106,    -1,    -1,
     265,   682,   381,    -1,    56,   682,   174,   415,   262,   687,
     240,   687,   278,   682,    -1,    -1,   261,    -1,   260,    -1,
      -1,   100,   682,     3,    -1,   284,   365,   656,   421,   416,
      -1,   284,   365,   656,   112,   236,   626,    -1,   223,   284,
     365,   656,   421,    -1,   224,   284,   365,   656,   421,    -1,
     226,   284,   365,   656,   421,    -1,   225,   284,   365,   656,
     421,   270,     3,   418,    -1,   419,   284,   365,   656,   421,
     420,    -1,    -1,   174,    56,   687,   415,   262,   687,    -1,
     174,   415,   262,   687,    -1,   222,    -1,   221,    -1,    59,
     222,    -1,    59,   221,    -1,    17,   222,    -1,    17,   221,
      -1,    -1,   270,    78,    65,    86,    -1,   270,    78,    85,
      86,    -1,   270,    78,   256,    -1,   175,   424,   176,    -1,
     422,    -1,   456,   328,   453,   423,    -1,    -1,   174,    84,
     173,    -1,   174,   173,    -1,   426,    -1,   424,   349,   426,
      -1,   428,    -1,   439,    -1,   425,    -1,   431,    -1,   451,
      -1,   132,    -1,   133,    -1,   679,   673,   429,    -1,   679,
     427,    -1,    -1,   430,    -1,   433,    -1,   430,   433,    -1,
     682,   174,   272,   175,   432,   176,    -1,   433,    -1,   432,
     349,   433,    -1,   434,    -1,   436,    -1,   437,    -1,   254,
     435,    -1,   607,    -1,   440,   447,    -1,   129,   130,   328,
     131,   438,    -1,   134,    -1,    -1,   175,   407,   176,    -1,
     440,   448,    -1,    -1,   230,   682,    -1,    84,    41,    -1,
      42,    -1,    43,    -1,   279,   111,    -1,   279,   254,    -1,
     270,    66,   441,    -1,   270,    65,   441,    -1,    -1,   442,
      -1,   443,    -1,   443,   442,    -1,   442,   443,    -1,    -1,
      72,    -1,    39,    -1,    40,    -1,    -1,   114,   445,    -1,
     178,   111,    -1,   111,    -1,   287,    -1,   274,   269,    -1,
     277,   656,   456,   446,   444,    -1,   449,    -1,   287,   457,
      -1,   274,   269,   457,    -1,   258,   269,   457,   277,   656,
     456,   446,   444,    -1,   229,   175,   580,   176,    -1,   682,
      -1,   450,   349,   682,    -1,   184,   656,    -1,   363,   289,
     656,   456,   328,   453,   455,    -1,   454,    -1,   175,   453,
     176,    -1,   563,    -1,   557,    -1,    -1,   174,   229,   271,
      -1,    -1,   457,    -1,   175,   450,   176,    -1,   362,   233,
     656,   239,   240,   682,    -1,   682,   350,   682,    -1,     4,
      -1,   687,    -1,   363,   235,   656,   175,   488,   176,   238,
     487,   239,   240,   459,    -1,   363,   235,   656,   175,   488,
     176,   238,   487,   462,    -1,   363,   235,   656,   175,   488,
     176,   238,   487,   243,     5,   460,    -1,   363,   167,   235,
     656,   175,   488,   176,   239,   240,   459,    -1,   363,   237,
     656,   175,   488,   176,   238,   487,   239,   240,   459,    -1,
     363,   237,   656,   175,   488,   176,   238,   487,   243,     5,
     460,    -1,   363,   234,   656,   175,   488,   176,   239,   240,
     459,    -1,   363,   234,   656,   175,   488,   176,   462,    -1,
     363,   236,   656,   175,   488,   176,   243,     5,   460,    -1,
     465,    -1,   318,   463,   465,   135,   319,    -1,   318,   317,
     463,   465,   135,   319,    -1,    -1,   463,   465,   135,    -1,
      -1,   464,   466,   135,    -1,   510,    -1,   509,    -1,   374,
      -1,   383,    -1,   388,    -1,   405,    -1,   505,    -1,   400,
      -1,   371,    -1,   373,    -1,   467,    -1,   562,    -1,   510,
      -1,   509,    -1,   383,    -1,   388,    -1,   371,    -1,   373,
      -1,   467,    -1,   562,    -1,   469,    -1,   468,    -1,   483,
      -1,   481,    -1,   475,    -1,   473,    -1,   242,   470,    -1,
     242,   626,    -1,   471,   175,   472,   176,    -1,   656,    -1,
      -1,   608,    -1,   472,   349,   608,    -1,   281,   474,    -1,
     454,    -1,   580,    -1,   284,   175,   454,   176,    -1,   307,
     608,   477,   480,   319,   307,    -1,   307,   479,   480,   319,
     307,    -1,   308,   608,   309,   463,    -1,   476,    -1,   477,
     476,    -1,   308,   580,   309,   463,    -1,   478,    -1,   479,
     478,    -1,    -1,   310,   463,    -1,   313,   580,   309,   463,
     482,   319,   313,    -1,    -1,   310,   463,    -1,   314,   580,
     309,   463,   482,    -1,   484,   315,   580,   316,   463,   319,
     315,   485,    -1,    -1,   682,   351,    -1,    -1,   682,    -1,
     679,   673,    -1,   486,   349,   679,   673,    -1,   284,   175,
     486,   176,    -1,   673,    -1,   489,    -1,   207,    -1,    -1,
     489,   349,   682,   673,    -1,   682,   673,    -1,   363,   329,
     656,   491,   492,   270,   656,   493,   498,    -1,   331,    -1,
     332,    -1,    68,    -1,    65,    -1,   257,    -1,    66,    -1,
      66,   330,   450,    -1,    -1,   338,   494,    -1,   495,    -1,
     494,   495,    -1,   336,   497,   496,   682,    -1,   335,   497,
     496,   682,    -1,   336,   284,   496,   682,    -1,   335,   284,
     496,   682,    -1,    -1,   328,    -1,    -1,   333,    -1,   499,
     501,   502,    -1,    -1,   113,   337,   500,    -1,   333,    -1,
     334,    -1,    -1,   308,   175,   580,   176,    -1,   466,    -1,
     318,   317,   464,   319,    -1,   235,   656,   506,    -1,   167,
     235,   656,   506,    -1,   237,   656,   506,    -1,   234,   656,
     506,    -1,   236,   656,   506,    -1,   235,   364,   656,   506,
      -1,   167,   235,   364,   656,   506,    -1,   237,   364,   656,
     506,    -1,   234,   364,   656,   506,    -1,   236,   364,   656,
     506,    -1,   366,   284,   364,   656,   508,    -1,   366,   504,
     508,    -1,   366,   191,   235,   656,   508,    -1,   366,   191,
     167,   235,   656,   508,    -1,   366,   191,   237,   656,   508,
      -1,   366,   191,   234,   656,   508,    -1,   366,   191,   236,
     656,   508,    -1,   366,   289,   364,   656,   508,    -1,   366,
     233,   656,   508,    -1,   366,   265,   682,    -1,   366,    56,
     682,    -1,   366,   326,   656,    -1,   366,   329,   364,   656,
      -1,    -1,   175,   507,   176,    -1,   175,   176,    -1,   673,
      -1,   673,   349,   507,    -1,    -1,    43,    -1,    42,    -1,
     510,    -1,   509,    -1,   534,    -1,   536,    -1,   538,    -1,
     537,    -1,   519,    -1,   511,    -1,    78,   516,   517,    -1,
      80,   682,    -1,    81,    80,   682,    -1,    79,   516,   517,
     518,    -1,    87,    88,   512,    -1,   279,    59,    88,   512,
      -1,   279,    88,   512,    -1,    -1,   513,    -1,   514,    -1,
     513,   349,   514,    -1,    89,    91,    -1,    89,    90,    -1,
      92,    93,   515,    -1,    98,    99,   686,    -1,    89,    94,
      -1,    89,    95,    -1,    96,    89,    -1,    97,    -1,    82,
      -1,    -1,   192,    83,    -1,   192,    84,    83,    -1,    -1,
      -1,   286,    80,   682,    -1,   320,   527,   267,   656,   456,
     112,   532,   522,   525,   528,   529,   530,   531,   520,    -1,
     320,   527,   267,   656,   456,   112,   323,   522,   525,   528,
     529,   530,   531,    -1,   320,   236,   267,   656,   112,   626,
      -1,   320,   527,    27,   267,   656,   456,   112,   532,   531,
      -1,   320,   453,   267,   687,   525,   528,    -1,   320,   453,
     267,   324,   525,   528,    -1,    -1,   325,   175,   521,   176,
      -1,   671,    -1,   521,   349,   671,    -1,    -1,   175,   523,
     176,    -1,   524,    -1,   523,   349,   524,    -1,   682,    -1,
     682,     3,    -1,    -1,   526,   322,   687,    -1,   526,   322,
     687,   349,   687,    -1,   526,   322,   687,   349,   687,   349,
     687,    -1,    -1,    16,    -1,    -1,   671,   321,    -1,   305,
     671,    -1,   671,   305,   671,   321,    -1,   671,   321,   305,
     671,    -1,    -1,   111,   496,   687,    -1,    -1,    60,    -1,
      -1,    61,    62,    -1,    -1,    84,   230,    -1,   533,    -1,
     175,   533,   176,    -1,   687,    -1,   533,   349,   687,    -1,
      65,   112,   656,   551,    -1,    -1,   119,   131,    -1,   118,
     131,    -1,   257,   284,   656,   535,   508,    -1,   257,   656,
     535,   508,    -1,    66,   656,   279,   548,   571,   551,    -1,
      68,   267,   656,   539,    -1,    68,   267,   656,   457,   539,
      -1,    -1,   254,   288,    -1,   288,   540,    -1,   454,    -1,
     175,   541,   176,    -1,   540,   349,   175,   541,   176,    -1,
     545,    -1,   541,   349,   545,    -1,   546,    -1,   542,   349,
     546,    -1,   111,    -1,   608,    -1,   544,    -1,   254,    -1,
     544,    -1,   566,    -1,    -1,   191,    -1,   255,    -1,   550,
      -1,   548,   349,   550,    -1,   254,    -1,   679,   179,   549,
      -1,   679,   179,   580,    -1,   457,   179,   606,    -1,    -1,
     290,   580,    -1,   175,   552,   176,    -1,   573,    75,    76,
     573,    -1,   573,   168,   573,   556,    -1,   573,   553,    76,
     573,   556,    -1,   573,    74,   553,    76,   573,    -1,    -1,
      77,    -1,   555,   554,    -1,    -1,    73,    -1,    70,    -1,
      71,    -1,    72,    -1,   270,   580,    -1,    16,   457,    -1,
     557,    -1,   174,   558,   560,    -1,   558,   349,   559,    -1,
     559,    -1,   682,   456,   328,   605,    -1,   563,    -1,   562,
      -1,   563,    -1,    67,   547,   569,   570,    -1,    67,   547,
     569,   267,   564,   570,    -1,   566,   582,   583,   584,   585,
      -1,   565,    -1,   564,   349,   565,    -1,   682,    -1,   566,
     172,   567,   568,   566,    -1,   566,   171,   567,   568,   566,
      -1,   566,   170,   567,   568,   566,    -1,   175,   566,   176,
      -1,   561,    -1,    -1,   191,    -1,   255,    -1,    -1,   169,
      -1,   169,   105,   175,   578,   176,    -1,   632,    -1,   571,
     551,   577,   579,    -1,    -1,   112,   572,    -1,   573,    -1,
     572,   349,   573,    -1,   656,   576,    -1,   626,   576,    -1,
      69,   626,   576,    -1,   605,   575,    -1,    69,   606,   575,
      -1,   605,    -1,   552,    -1,    -1,   352,   574,   566,   353,
     575,    -1,   328,   682,   175,   684,   176,    -1,   328,   682,
      -1,   682,   175,   684,   176,    -1,   682,    -1,    -1,   575,
      -1,    -1,   110,   105,   578,    -1,   657,    -1,   578,   349,
     657,    -1,    -1,   109,   580,    -1,   580,   181,   581,    -1,
     581,    -1,   581,   192,   590,    -1,   590,    -1,    -1,   103,
     105,   586,    -1,    -1,   304,   670,    -1,   304,   610,    -1,
      -1,   305,   671,    -1,   305,   610,    -1,    -1,   306,   671,
      -1,   306,    14,    -1,   306,   610,    -1,   587,    -1,   586,
     349,   587,    -1,   608,   588,    -1,    -1,    52,    -1,   227,
      -1,   591,    -1,   592,    -1,   594,    -1,   596,    -1,   597,
      -1,   599,    -1,   601,    -1,   604,    -1,   608,    -1,   178,
     590,    -1,   589,    -1,   590,   193,   590,    -1,   590,   179,
     590,    -1,   590,   189,   593,   590,   192,   590,    -1,   590,
     188,   593,   590,   192,   590,    -1,    -1,   101,    -1,   102,
      -1,   590,   185,   595,    -1,   590,   183,   595,    -1,   590,
     184,   595,    -1,   590,   182,   595,    -1,   608,    -1,   608,
     108,   687,    -1,   608,   268,   178,   111,    -1,   608,   268,
     111,    -1,   590,   187,   175,   542,   176,    -1,   590,   186,
     175,   542,   176,    -1,   175,   598,   176,   187,   175,   542,
     176,    -1,   175,   598,   176,   186,   175,   542,   176,    -1,
     590,    -1,   598,   349,   590,    -1,   590,   193,   600,   606,
      -1,   590,   179,   600,   590,    -1,   190,    -1,   180,    -1,
     191,    -1,   107,   606,    -1,   590,    -1,   602,   349,   590,
      -1,   352,   602,   353,    -1,   603,   656,   603,    -1,   175,
     563,   176,    -1,   175,   288,   540,   176,    -1,   175,   557,
     176,    -1,   175,   563,   176,    -1,   175,   288,   540,   176,
      -1,   175,   557,   176,    -1,   609,    -1,   608,   194,   608,
      -1,   608,   195,   608,    -1,   608,   207,   608,    -1,   608,
     208,   608,    -1,   608,   209,   608,    -1,   608,   198,   608,
      -1,   608,   196,   608,    -1,   608,   215,   608,    -1,   608,
     212,   608,    -1,   608,   220,   608,    -1,   608,   213,   608,
      -1,   608,   219,   608,    -1,   608,   214,   608,    -1,   608,
     218,   608,    -1,   608,   217,   608,    -1,   608,   136,   608,
      -1,   608,   197,   608,    -1,   608,   211,   608,    -1,   608,
     216,   608,    -1,   211,   608,    -1,   608,   206,   608,    -1,
     608,   205,   608,    -1,   608,   204,   608,    -1,   608,   203,
     608,    -1,   194,   608,    -1,   195,   608,    -1,   175,   580,
     176,    -1,   607,    -1,   606,    -1,   635,    -1,   653,    -1,
      63,    -1,   611,    -1,   657,    -1,   625,    -1,   639,    -1,
     626,    -1,   126,   127,   113,   656,    -1,   629,    -1,   631,
      -1,   660,    -1,   658,    -1,   698,    -1,   610,    -1,   543,
      -1,   354,    -1,   612,   339,   175,   613,   176,    -1,   636,
     175,   176,    -1,   639,    -1,   614,   615,   616,    -1,    -1,
     340,   105,   578,    -1,    -1,   103,   105,   586,    -1,    -1,
     617,   618,   624,    -1,    86,    -1,   347,    -1,   619,    -1,
     621,    -1,   348,   344,    -1,   620,    -1,   341,   333,    -1,
     609,   344,    -1,   188,   619,   192,   622,    -1,   348,   343,
      -1,   623,    -1,   341,   333,    -1,   609,   344,    -1,    -1,
     342,   341,   333,    -1,   342,   110,    -1,   342,   346,    -1,
     342,    84,   345,    -1,   136,   682,    -1,   627,   175,   176,
      -1,   627,   175,   661,   176,    -1,   628,    -1,   682,   350,
     628,    -1,   682,    -1,    70,    -1,    71,    -1,    68,    -1,
     115,   175,   647,   112,   608,   176,    -1,    46,   630,    -1,
      48,   630,    -1,    47,   630,    -1,    50,   630,    -1,    49,
     630,    -1,    -1,   175,   176,    -1,   201,   175,   608,   112,
     608,   113,   608,   176,    -1,   201,   175,   608,   349,   608,
     349,   608,   176,    -1,   201,   175,   608,   112,   608,   176,
      -1,   201,   175,   608,   349,   608,   176,    -1,   200,   175,
     608,   186,   608,   176,    -1,   608,   202,   608,    -1,   199,
     175,   608,   349,   608,   349,   608,   176,    -1,   633,    -1,
     632,   349,   633,    -1,   207,    -1,   682,   350,   207,    -1,
     626,   350,   207,    -1,   580,   634,    -1,    -1,   328,   682,
      -1,   682,    -1,   654,    -1,    10,    -1,   682,   350,    10,
      -1,     8,    -1,   682,   350,     8,    -1,     9,    -1,   682,
     350,     9,    -1,   637,   175,   207,   176,    -1,   637,   175,
     682,   350,   207,   176,    -1,   637,   175,   255,   668,   176,
      -1,   637,   175,   191,   668,   176,    -1,   637,   175,   668,
     176,    -1,   638,   175,   668,   349,   668,   176,    -1,   769,
      -1,   194,    -1,   195,    -1,    -1,   174,   292,   303,    -1,
      -1,   175,   686,   176,    -1,    -1,   175,   686,   176,    -1,
      -1,   291,    -1,   292,   642,   641,    -1,   293,   643,   641,
      -1,   295,    -1,   297,    -1,   299,    -1,   300,    -1,   301,
      -1,   645,    -1,   302,    -1,   646,    -1,   296,    -1,   298,
      -1,   645,   642,    -1,   645,    -1,   302,   643,    -1,   645,
     642,    -1,   302,   643,    -1,   648,   286,   649,    -1,   650,
      -1,   294,   651,    -1,    56,    -1,    58,    -1,    57,    -1,
     687,    -1,    13,    -1,    12,    -1,    11,    -1,    14,    -1,
      15,    -1,   291,   687,    -1,   292,   642,   641,   687,    -1,
     293,   643,   641,   687,    -1,   655,    -1,   678,   687,    -1,
       6,   687,    -1,   675,   687,    -1,     5,   687,    -1,    44,
      -1,    45,    -1,   294,   640,   687,   651,    -1,   682,    -1,
     682,   350,   682,    -1,   682,   350,   682,   350,   682,    -1,
     682,    -1,   682,   350,   682,    -1,   682,   350,   682,   350,
     682,    -1,    18,   175,   659,   328,   673,   176,    -1,    19,
     175,   659,   349,   673,   176,    -1,   580,    -1,   311,   175,
     608,   349,   608,   176,    -1,   312,   175,   662,   176,    -1,
     307,   608,   664,   667,   319,    -1,   307,   666,   667,   319,
      -1,   544,    -1,   661,   349,   544,    -1,   544,   349,   544,
      -1,   662,   349,   544,    -1,   308,   608,   309,   544,    -1,
     663,    -1,   664,   663,    -1,   308,   580,   309,   544,    -1,
     665,    -1,   666,   665,    -1,    -1,   310,   608,    -1,   608,
      -1,   686,    -1,   685,    -1,   685,    -1,   686,    -1,    20,
      -1,   676,    -1,   677,    -1,    20,   175,   669,   176,    -1,
     676,   175,   669,   176,    -1,   677,   175,   669,   176,    -1,
     678,    -1,   678,   175,   669,   176,    -1,    31,    -1,    32,
      -1,    35,    -1,    33,    -1,    34,    -1,    29,    -1,    29,
     175,   669,   176,    -1,    29,   175,   669,   349,   672,   176,
      -1,    30,    -1,    30,   175,   669,   176,    -1,    30,   175,
     686,   349,   686,   176,    -1,    36,    -1,    36,    38,    -1,
      37,    -1,   644,    -1,   652,    -1,     6,    -1,     6,   175,
     669,   176,    -1,   675,    -1,   675,   175,   669,   176,    -1,
     675,   175,   686,   349,   686,   176,    -1,     5,    -1,     5,
     175,   669,   176,    -1,    53,    -1,    53,   175,   674,   176,
      -1,    53,   175,   674,   349,   686,   176,    -1,    55,    -1,
      54,    -1,    54,    -1,   687,    -1,     7,    -1,    24,    -1,
      20,    21,    -1,    25,    -1,    26,    -1,    20,    22,    23,
      -1,    28,    -1,    27,    22,    23,    -1,   682,    -1,   681,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,     5,    -1,     6,    -1,   177,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,   683,    -1,    22,
      -1,   240,    -1,    23,    -1,   262,    -1,   273,    -1,    38,
      -1,   275,    -1,   265,    -1,    99,    -1,   233,    -1,    81,
      -1,   127,    -1,   303,    -1,    41,    -1,   328,    -1,   228,
      -1,   285,    -1,   122,    -1,   255,    -1,   117,    -1,   120,
      -1,   121,    -1,   247,    -1,   278,    -1,    87,    -1,   334,
      -1,   284,    -1,   128,    -1,   173,    -1,    98,    -1,   114,
      -1,   272,    -1,   333,    -1,   269,    -1,   243,    -1,    93,
      -1,    64,    -1,   291,    -1,   292,    -1,   293,    -1,   294,
      -1,   296,    -1,   298,    -1,   106,    -1,   251,    -1,   253,
      -1,   246,    -1,   248,    -1,   249,    -1,    26,    -1,   280,
      -1,    84,    -1,   144,    -1,   145,    -1,   148,    -1,   150,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   156,    -1,   158,    -1,   160,    -1,   161,    -1,   162,
      -1,   163,    -1,   165,    -1,   167,    -1,   222,    -1,   221,
      -1,   244,    -1,   245,    -1,   100,    -1,    53,    -1,   327,
      -1,   232,    -1,   682,    -1,   684,   349,   682,    -1,    11,
      -1,    11,    -1,     5,    -1,     3,    -1,     3,   687,    -1,
     253,   689,    -1,   686,   175,   176,    -1,   686,   175,   542,
     176,    -1,    -1,   691,    -1,   273,   692,    -1,   684,    -1,
     232,   270,   694,   268,   687,    -1,   232,   270,   694,   268,
     111,    -1,   278,   682,    -1,   284,   656,    -1,   289,   656,
      -1,   285,   682,   350,   682,    -1,   285,   682,   350,   682,
     350,   682,    -1,   326,   656,    -1,   116,   656,    -1,   503,
      -1,   697,    -1,   695,    -1,   696,   349,   695,    -1,   608,
      -1,   699,    -1,   700,    -1,   701,    -1,   702,    -1,   716,
      -1,   723,    -1,   725,    -1,   728,    -1,   738,    -1,   739,
      -1,   137,   175,   609,   742,   176,    -1,   138,   175,   696,
     742,   176,    -1,   139,   175,   695,   742,   176,    -1,   140,
     175,   240,   704,   703,   742,   176,    -1,    -1,   349,   743,
      -1,   349,   743,   349,   705,    -1,   349,   743,   349,   705,
     349,   711,    -1,   349,   743,   349,   711,    -1,   349,   705,
      -1,   349,   705,   349,   711,    -1,   349,   711,    -1,   682,
      -1,   141,   175,   706,   176,    -1,   707,    -1,   706,   349,
     707,    -1,   709,   708,    -1,    -1,   328,   710,    -1,   608,
      -1,   682,    -1,   712,   714,    -1,   713,    -1,   712,   349,
     713,    -1,   608,    -1,    -1,   271,   715,    -1,   111,   270,
     111,    -1,   153,   270,   111,    -1,   152,   270,   111,    -1,
     150,   270,   111,    -1,   150,   270,    84,   156,    -1,   142,
     175,   717,   718,   714,   742,   176,    -1,    -1,   743,   349,
      -1,   719,    -1,   718,   349,   719,    -1,   720,   721,    -1,
     608,    -1,    -1,   328,   722,    -1,   682,    -1,   143,   175,
     741,   609,   724,   176,    -1,    85,   145,    -1,   144,   145,
      -1,   146,   175,   240,   726,   727,   742,   176,    -1,   682,
      -1,    -1,   349,   609,    -1,   147,   175,   729,   730,   742,
     736,   737,   176,    -1,     3,    -1,    -1,   148,   731,   732,
      -1,   751,    -1,   733,    -1,   732,   349,   733,    -1,   734,
      -1,   735,    -1,   609,   750,    -1,   609,   328,   682,   750,
      -1,    -1,   751,    -1,   111,   270,   153,    -1,   153,   270,
     153,    -1,   149,   175,   609,   742,   176,    -1,   159,   175,
     740,   695,   752,   176,    -1,   741,    -1,   116,    -1,   154,
      -1,   156,    -1,    -1,   160,   156,    -1,   160,   116,    -1,
     157,   175,   744,   176,    -1,   745,    -1,   744,   349,   745,
      -1,   748,    -1,   749,    -1,   682,    -1,   608,    -1,   747,
     328,   746,    -1,   254,   747,    -1,    84,   254,    -1,    -1,
     751,    -1,   105,   151,    -1,   105,   127,    -1,    -1,   753,
      -1,   163,   286,   164,   754,   762,    -1,   755,    -1,   760,
      -1,   165,   756,   758,    -1,    84,   158,   758,    -1,   757,
      -1,     3,    -1,    -1,   161,   759,    -1,   757,    -1,   162,
     761,    -1,   682,    -1,    -1,   763,    -1,   765,    -1,   766,
     764,    -1,    -1,   765,    -1,   155,   768,    -1,    84,   158,
      -1,   158,   767,    -1,   757,    -1,   682,    -1,   166,   175,
     695,   582,   742,   176,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   628,   628,   639,   639,   653,   653,   668,   668,   683,
     683,   693,   693,   699,   700,   701,   702,   703,   708,   711,
     712,   716,   717,   721,   722,   726,   729,   732,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   751,   752,   756,
     757,   761,   763,   767,   772,   781,   786,   791,   799,   807,
     815,   823,   829,   837,   846,   855,   859,   863,   870,   873,
     874,   878,   879,   883,   884,   888,   888,   888,   888,   888,
     891,   892,   896,   897,   901,   910,   921,   922,   927,   928,
     932,   933,   938,   939,   943,   951,   961,   962,   966,   967,
     971,   975,   982,   983,   988,   989,   993,   994,   995,  1006,
    1007,  1008,  1012,  1013,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1028,  1029,  1034,  1035,  1041,  1047,  1052,  1057,  1062,
    1067,  1072,  1077,  1082,  1087,  1100,  1106,  1112,  1122,  1127,
    1131,  1135,  1137,  1145,  1153,  1158,  1163,  1173,  1174,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,  1185,  1201,  1212,  1229,
    1239,  1240,  1244,  1245,  1249,  1250,  1251,  1255,  1256,  1257,
    1258,  1259,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,
    1277,  1287,  1288,  1289,  1290,  1310,  1315,  1326,  1327,  1328,
    1332,  1333,  1337,  1350,  1357,  1369,  1381,  1396,  1408,  1426,
    1431,  1437,  1446,  1447,  1448,  1449,  1450,  1451,  1455,  1456,
    1457,  1458,  1462,  1463,  1467,  1477,  1478,  1479,  1483,  1485,
    1489,  1489,  1490,  1490,  1490,  1493,  1494,  1498,  1506,  1559,
    1560,  1564,  1566,  1571,  1580,  1582,  1586,  1586,  1586,  1589,
    1593,  1597,  1606,  1635,  1673,  1674,  1679,  1690,  1691,  1695,
    1696,  1697,  1698,  1699,  1703,  1707,  1711,  1712,  1713,  1714,
    1715,  1719,  1720,  1721,  1722,  1726,  1727,  1731,  1732,  1733,
    1734,  1735,  1745,  1749,  1751,  1753,  1768,  1772,  1774,  1779,
    1783,  1796,  1797,  1801,  1802,  1806,  1807,  1811,  1812,  1816,
    1820,  1828,  1833,  1834,  1839,  1853,  1867,  1918,  1932,  1946,
    1996,  2009,  2022,  2046,  2048,  2052,  2070,  2071,  2076,  2077,
    2082,  2083,  2084,  2085,  2086,  2087,  2088,  2089,  2090,  2091,
    2092,  2093,  2097,  2098,  2099,  2100,  2101,  2102,  2103,  2104,
    2108,  2109,  2110,  2111,  2112,  2113,  2126,  2130,  2134,  2143,
    2146,  2147,  2148,  2154,  2158,  2159,  2160,  2165,  2171,  2179,
    2187,  2189,  2194,  2202,  2204,  2209,  2210,  2217,  2231,  2232,
    2234,  2245,  2266,  2267,  2271,  2272,  2277,  2281,  2289,  2291,
    2296,  2297,  2301,  2305,  2310,  2359,  2374,  2375,  2380,  2381,
    2382,  2383,  2384,  2388,  2389,  2393,  2394,  2400,  2401,  2402,
    2403,  2406,  2408,  2411,  2413,  2417,  2425,  2426,  2430,  2431,
    2435,  2436,  2440,  2442,  2448,  2454,  2460,  2466,  2472,  2481,
    2488,  2495,  2502,  2509,  2519,  2525,  2530,  2539,  2548,  2557,
    2566,  2575,  2581,  2586,  2587,  2588,  2589,  2598,  2599,  2600,
    2604,  2607,  2612,  2613,  2614,  2619,  2620,  2625,  2626,  2627,
    2628,  2629,  2633,  2640,  2642,  2644,  2646,  2650,  2652,  2654,
    2659,  2660,  2664,  2666,  2672,  2673,  2674,  2675,  2679,  2680,
    2681,  2682,  2686,  2687,  2691,  2692,  2693,  2697,  2698,  2702,
    2716,  2730,  2735,  2746,  2753,  2765,  2766,  2771,  2772,  2778,
    2779,  2783,  2784,  2788,  2792,  2801,  2805,  2810,  2815,  2824,
    2825,  2829,  2830,  2831,  2832,  2834,  2839,  2840,  2844,  2845,
    2849,  2850,  2854,  2855,  2859,  2860,  2864,  2865,  2870,  2879,
    2880,  2881,  2885,  2891,  2900,  2942,  2950,  2961,  2962,  2964,
    2966,  2971,  2972,  2977,  2978,  2983,  2984,  2989,  3011,  3015,
    3016,  3020,  3021,  3025,  3026,  3027,  3031,  3032,  3037,  3041,
    3046,  3051,  3059,  3060,  3066,  3068,  3073,  3081,  3089,  3100,
    3101,  3102,  3106,  3107,  3111,  3112,  3113,  3117,  3118,  3138,
    3142,  3152,  3153,  3157,  3170,  3175,  3177,  3181,  3192,  3203,
    3234,  3235,  3240,  3244,  3253,  3262,  3270,  3271,  3275,  3276,
    3277,  3282,  3283,  3285,  3290,  3294,  3304,  3305,  3309,  3310,
    3315,  3319,  3325,  3331,  3341,  3353,  3358,  3362,  3361,  3374,
    3379,  3384,  3389,  3397,  3398,  3402,  3403,  3407,  3409,  3415,
    3416,  3421,  3426,  3430,  3435,  3439,  3440,  3445,  3446,  3450,
    3454,  3455,  3459,  3463,  3464,  3468,  3472,  3476,  3477,  3482,
    3491,  3492,  3493,  3497,  3498,  3499,  3500,  3501,  3502,  3503,
    3504,  3505,  3509,  3526,  3530,  3537,  3547,  3554,  3564,  3565,
    3566,  3570,  3577,  3584,  3591,  3601,  3605,  3621,  3622,  3626,
    3632,  3638,  3643,  3651,  3653,  3658,  3666,  3676,  3677,  3678,
    3682,  3686,  3687,  3691,  3695,  3705,  3706,  3708,  3713,  3714,
    3716,  3722,  3723,  3730,  3737,  3744,  3751,  3758,  3765,  3772,
    3779,  3786,  3793,  3800,  3806,  3813,  3820,  3827,  3834,  3841,
    3848,  3855,  3861,  3868,  3875,  3882,  3889,  3891,  3913,  3917,
    3918,  3922,  3923,  3925,  3927,  3928,  3929,  3930,  3931,  3932,
    3933,  3934,  3935,  3936,  3937,  3938,  3939,  3943,  4013,  4019,
    4020,  4024,  4029,  4030,  4035,  4036,  4041,  4042,  4047,  4048,
    4052,  4053,  4057,  4058,  4059,  4063,  4067,  4072,  4073,  4074,
    4078,  4082,  4083,  4084,  4085,  4086,  4090,  4094,  4098,  4126,
    4127,  4132,  4133,  4134,  4135,  4139,  4146,  4151,  4156,  4161,
    4166,  4174,  4175,  4179,  4189,  4199,  4206,  4213,  4220,  4227,
    4240,  4241,  4246,  4251,  4256,  4261,  4269,  4270,  4271,  4275,
    4302,  4303,  4308,  4309,  4314,  4315,  4321,  4327,  4333,  4339,
    4345,  4351,  4358,  4362,  4363,  4364,  4368,  4369,  4380,  4382,
    4386,  4388,  4392,  4393,  4399,  4408,  4409,  4410,  4411,  4412,
    4416,  4417,  4421,  4422,  4423,  4427,  4433,  4436,  4442,  4445,
    4451,  4454,  4459,  4479,  4480,  4481,  4485,  4491,  4555,  4586,
    4647,  4686,  4703,  4719,  4735,  4751,  4752,  4769,  4786,  4803,
    4824,  4828,  4835,  4880,  4881,  4885,  4896,  4899,  4903,  4911,
    4917,  4925,  4929,  4934,  4936,  4942,  4950,  4952,  4957,  4961,
    4967,  4975,  4977,  4982,  4990,  4992,  4997,  4998,  5002,  5007,
    5018,  5029,  5039,  5049,  5051,  5056,  5057,  5059,  5061,  5070,
    5071,  5080,  5081,  5082,  5083,  5084,  5086,  5087,  5100,  5118,
    5119,  5133,  5153,  5154,  5155,  5156,  5157,  5158,  5159,  5161,
    5162,  5164,  5176,  5190,  5204,  5211,  5226,  5241,  5248,  5274,
    5291,  5311,  5326,  5327,  5331,  5332,  5333,  5336,  5337,  5340,
    5342,  5345,  5346,  5347,  5348,  5349,  5350,  5354,  5355,  5356,
    5357,  5358,  5359,  5360,  5361,  5365,  5366,  5367,  5368,  5369,
    5370,  5371,  5372,  5373,  5374,  5375,  5376,  5377,  5379,  5380,
    5381,  5382,  5383,  5384,  5385,  5386,  5387,  5388,  5389,  5390,
    5391,  5392,  5394,  5395,  5396,  5397,  5398,  5399,  5400,  5401,
    5402,  5403,  5404,  5405,  5406,  5407,  5408,  5409,  5410,  5412,
    5413,  5414,  5415,  5416,  5417,  5418,  5419,  5421,  5422,  5423,
    5424,  5425,  5426,  5427,  5428,  5429,  5430,  5431,  5432,  5433,
    5434,  5435,  5436,  5437,  5438,  5439,  5440,  5441,  5442,  5443,
    5444,  5445,  5449,  5450,  5455,  5478,  5499,  5531,  5533,  5541,
    5548,  5553,  5568,  5569,  5573,  5576,  5580,  5586,  5595,  5596,
    5597,  5598,  5604,  5611,  5612,  5613,  5617,  5621,  5623,  5628,
    5632,  5633,  5634,  5635,  5636,  5637,  5638,  5639,  5640,  5641,
    5645,  5653,  5661,  5668,  5682,  5683,  5687,  5691,  5695,  5699,
    5703,  5707,  5714,  5718,  5722,  5723,  5733,  5741,  5742,  5746,
    5750,  5754,  5761,  5763,  5768,  5772,  5773,  5777,  5778,  5779,
    5780,  5781,  5785,  5798,  5799,  5803,  5805,  5810,  5816,  5820,
    5821,  5825,  5830,  5839,  5840,  5844,  5855,  5859,  5860,  5865,
    5875,  5878,  5880,  5884,  5888,  5889,  5893,  5894,  5898,  5902,
    5905,  5907,  5911,  5912,  5916,  5924,  5933,  5934,  5938,  5939,
    5943,  5944,  5945,  5960,  5964,  5965,  5975,  5976,  5980,  5984,
    5988,  5998,  6002,  6005,  6007,  6011,  6012,  6015,  6017,  6021,
    6026,  6027,  6031,  6032,  6036,  6040,  6043,  6045,  6049,  6053,
    6057,  6060,  6062,  6066,  6067,  6071,  6073,  6077,  6081,  6082,
    6086,  6090,  6094
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "X_BODY", "IDENT", "aTYPE",
  "ALIAS", "AGGR", "AGGR2", "RANK", "sqlINT", "OIDNUM", "HEXADECIMAL",
  "INTNUM", "APPROXNUM", "USING", "GLOBAL", "CAST", "CONVERT", "CHARACTER",
  "VARYING", "LARGE", "OBJECT", "VARCHAR", "CLOB", "sqlTEXT", "BINARY",
  "sqlBLOB", "sqlDECIMAL", "sqlFLOAT", "TINYINT", "SMALLINT", "BIGINT",
  "HUGEINT", "sqlINTEGER", "sqlDOUBLE", "sqlREAL", "PRECISION", "PARTIAL",
  "SIMPLE", "ACTION", "CASCADE", "RESTRICT", "BOOL_FALSE", "BOOL_TRUE",
  "CURRENT_DATE", "CURRENT_TIMESTAMP", "CURRENT_TIME", "LOCALTIMESTAMP",
  "LOCALTIME", "LEX_ERROR", "sqlASC", "GEOMETRY", "GEOMETRYSUBTYPE",
  "GEOMETRYA", "USER", "CURRENT_USER", "SESSION_USER", "LOCAL", "LOCKED",
  "BEST", "EFFORT", "CURRENT_ROLE", "sqlSESSION", "sqlDELETE", "UPDATE",
  "SELECT", "INSERT", "LATERAL", "LEFT", "RIGHT", "FULL", "OUTER",
  "NATURAL", "CROSS", "JOIN", "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT",
  "RELEASE", "WORK", "CHAIN", "NO", "PRESERVE", "ROWS", "START",
  "TRANSACTION", "READ", "WRITE", "ONLY", "ISOLATION", "LEVEL",
  "UNCOMMITTED", "COMMITTED", "sqlREPEATABLE", "SERIALIZABLE",
  "DIAGNOSTICS", "sqlSIZE", "STORAGE", "ASYMMETRIC", "SYMMETRIC", "ORDER",
  "ORDERED", "BY", "IMPRINTS", "EXISTS", "ESCAPE", "HAVING", "sqlGROUP",
  "sqlNULL", "FROM", "FOR", "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT",
  "RESTART", "CONTINUE", "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE",
  "NOMINVALUE", "NOCYCLE", "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS",
  "IDENTITY", "SERIAL", "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT",
  "XMLCOMMENT", "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES",
  "XMLFOREST", "XMLPARSE", "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY",
  "PASSING", "XMLTEXT", "NIL", "REF", "ABSENT", "EMPTY", "DOCUMENT",
  "ELEMENT", "CONTENT", "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE",
  "RETURNING", "LOCATION", "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG",
  "FILTER", "UNIONJOIN", "CORRESPONDING", "INTERSECT", "EXCEPT", "UNION",
  "DATA", "WITH", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "SOME", "OR",
  "ILIKE", "NOT_ILIKE", "LIKE", "NOT_LIKE", "sqlIN", "NOT_IN", "BETWEEN",
  "NOT_BETWEEN", "ANY", "ALL", "AND", "COMPARISON", "'+'", "'-'", "'&'",
  "'|'", "'^'", "SPLIT_PART", "POSITION", "SUBSTRING", "CONCATSTRING",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT", "LEFT_SHIFT",
  "'*'", "'/'", "'%'", "UMINUS", "'~'", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP",
  "GEOM_MBR_EQUAL", "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW",
  "GEOM_OVERLAP_OR_RIGHT", "TEMP", "TEMPORARY", "STREAM", "MERGE",
  "REMOTE", "REPLICA", "DESC", "AUTHORIZATION", "CHECK", "CONSTRAINT",
  "CREATE", "COMMENT", "TYPE", "PROCEDURE", "FUNCTION", "sqlLOADER",
  "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE", "CALL",
  "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN", "SQL_DEBUG",
  "SQL_TRACE", "PREP", "PREPARE", "EXEC", "EXECUTE", "DEFAULT", "DISTINCT",
  "DROP", "TRUNCATE", "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED",
  "PASSWORD", "GRANT", "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY",
  "ON", "OPTION", "OPTIONS", "PATH", "PRIMARY", "PRIVILEGES", "PUBLIC",
  "REFERENCES", "SCHEMA", "SET", "AUTO_COMMIT", "RETURN", "ALTER", "ADD",
  "TABLE", "COLUMN", "TO", "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE",
  "TIME", "TIMESTAMP", "INTERVAL", "YEAR", "QUARTER", "MONTH", "WEEK",
  "DAY", "HOUR", "MINUTE", "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE",
  "CASE", "WHEN", "THEN", "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF",
  "WHILE", "DO", "ATOMIC", "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS",
  "STDIN", "STDOUT", "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF",
  "BEFORE", "AFTER", "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH",
  "REFERENCING", "OVER", "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING",
  "PRECEDING", "OTHERS", "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'",
  "'['", "']'", "'?'", "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5",
  "create", "create_or_replace", "if_exists", "if_not_exists", "drop",
  "set", "declare", "sql", "opt_minmax", "declare_statement",
  "variable_list", "set_statement", "schema", "schema_name_clause",
  "authorization_identifier", "opt_schema_default_char_set",
  "opt_schema_element_list", "schema_element_list", "schema_element",
  "opt_grantor", "grantor", "grant", "authid_list", "opt_with_grant",
  "opt_with_admin", "opt_from_grantor", "revoke", "opt_grant_for",
  "opt_admin_for", "privileges", "global_privileges", "global_privilege",
  "object_name", "object_privileges", "operation_commalist", "operation",
  "grantee_commalist", "grantee", "alter_statement", "passwd_schema",
  "alter_table_element", "drop_table_element", "opt_column",
  "create_statement", "seq_def", "opt_seq_params", "opt_alt_seq_params",
  "opt_seq_param", "opt_alt_seq_param", "opt_seq_common_param",
  "index_def", "opt_index_type", "role_def", "opt_encrypted",
  "table_opt_storage", "table_def", "with_opt_credentials", "opt_temp",
  "opt_on_commit", "table_content_source", "as_subquery_clause",
  "with_or_without_data", "table_element_list", "add_table_element",
  "table_element", "serial_or_bigserial", "column_def",
  "opt_column_def_opt_list", "column_def_opt_list", "column_options",
  "column_option_list", "column_option", "default", "default_value",
  "column_constraint", "generated_column", "serial_opt_params",
  "table_constraint", "opt_constraint_name", "ref_action", "ref_on_update",
  "ref_on_delete", "opt_ref_action", "opt_match_type", "opt_match",
  "column_constraint_type", "table_constraint_type",
  "domain_constraint_type", "ident_commalist", "like_table", "view_def",
  "query_expression_def", "query_expression", "opt_with_check_option",
  "opt_column_list", "column_commalist_parens", "type_def",
  "external_function_name", "function_body", "func_def", "routine_body",
  "procedure_statement_list", "trigger_procedure_statement_list",
  "procedure_statement", "trigger_procedure_statement",
  "control_statement", "call_statement", "call_procedure_statement",
  "routine_invocation", "routine_name", "argument_list",
  "return_statement", "return_value", "case_statement", "when_statement",
  "when_statements", "when_search_statement", "when_search_statements",
  "case_opt_else_statement", "if_statement", "if_opt_else",
  "while_statement", "opt_begin_label", "opt_end_label",
  "table_function_column_list", "func_data_type", "opt_paramlist",
  "paramlist", "trigger_def", "trigger_action_time", "trigger_event",
  "opt_referencing_list", "old_or_new_values_alias_list",
  "old_or_new_values_alias", "opt_as", "opt_row", "triggered_action",
  "opt_for_each", "row_or_statement", "opt_when", "triggered_statement",
  "routine_designator", "drop_routine_designator", "drop_statement",
  "opt_typelist", "typelist", "drop_action", "update_statement",
  "transaction_statement", "_transaction_stmt", "transaction_mode_list",
  "_transaction_mode_list", "transaction_mode", "iso_level", "opt_work",
  "opt_chain", "opt_to_savepoint", "copyfrom_stmt", "opt_fwf_widths",
  "fwf_widthlist", "opt_header_list", "header_list", "header", "opt_seps",
  "opt_using", "opt_nr", "opt_null_string", "opt_locked",
  "opt_best_effort", "opt_constraint", "string_commalist",
  "string_commalist_contents", "delete_stmt", "check_identity",
  "truncate_stmt", "update_stmt", "insert_stmt", "values_or_query_spec",
  "row_commalist", "atom_commalist", "value_commalist", "null",
  "simple_atom", "insert_atom", "value", "opt_distinct",
  "assignment_commalist", "assign_default", "assignment",
  "opt_where_clause", "joined_table", "join_type", "opt_outer",
  "outer_join_type", "join_spec", "with_query", "with_list",
  "with_list_element", "with_query_expression", "simple_select",
  "select_statement_single_row", "select_no_parens_orderby",
  "select_target_list", "target_specification", "select_no_parens",
  "set_distinct", "opt_corresponding", "selection", "table_exp",
  "opt_from_clause", "table_ref_commalist", "table_ref", "@6",
  "table_name", "opt_table_name", "opt_group_by_clause",
  "column_ref_commalist", "opt_having_clause", "search_condition",
  "and_exp", "opt_order_by_clause", "opt_limit", "opt_offset",
  "opt_sample", "sort_specification_list", "ordering_spec", "opt_asc_desc",
  "predicate", "pred_exp", "comparison_predicate", "between_predicate",
  "opt_bounds", "like_predicate", "like_exp", "test_for_null",
  "in_predicate", "pred_exp_list", "all_or_any_predicate", "any_all_some",
  "existence_test", "filter_arg_list", "filter_args", "filter_exp",
  "subquery_with_orderby", "subquery", "simple_scalar_exp", "scalar_exp",
  "value_exp", "param", "window_function", "window_function_type",
  "window_specification", "window_partition_clause", "window_order_clause",
  "window_frame_clause", "window_frame_units", "window_frame_extent",
  "window_frame_start", "window_frame_preceding", "window_frame_between",
  "window_frame_end", "window_frame_following", "window_frame_exclusion",
  "var_ref", "func_ref", "qfunc", "func_ident", "datetime_funcs",
  "opt_brackets", "string_funcs", "column_exp_commalist", "column_exp",
  "opt_alias_name", "atom", "qrank", "qaggr", "qaggr2", "aggr_ref",
  "opt_sign", "tz", "time_precision", "timestamp_precision",
  "datetime_type", "non_second_datetime_field", "datetime_field",
  "extract_datetime_field", "start_field", "end_field",
  "single_datetime_field", "interval_qualifier", "interval_type", "user",
  "literal", "interval_expression", "qname", "column_ref", "cast_exp",
  "cast_value", "case_exp", "scalar_exp_list", "case_scalar_exp_list",
  "when_value", "when_value_list", "when_search", "when_search_list",
  "case_opt_else", "case_scalar_exp", "nonzero", "nonzerolng", "poslng",
  "posint", "data_type", "subgeometry_type", "type_alias", "varchar",
  "clob", "blob", "column", "authid", "restricted_ident", "ident",
  "non_reserved_word", "name_commalist", "lngval", "intval", "string",
  "exec", "exec_ref", "opt_path_specification", "path_specification",
  "schema_name_list", "comment_on_statement", "catalog_object",
  "XML_value_expression", "XML_value_expression_list", "XML_primary",
  "XML_value_function", "XML_comment", "XML_concatenation", "XML_document",
  "XML_element",
  "opt_comma_XML_namespace_declaration_attributes_element_content",
  "XML_element_name", "XML_attributes", "XML_attribute_list",
  "XML_attribute", "opt_XML_attribute_name", "XML_attribute_value",
  "XML_attribute_name", "XML_element_content_and_option",
  "XML_element_content_list", "XML_element_content",
  "opt_XML_content_option", "XML_content_option", "XML_forest",
  "opt_XML_namespace_declaration_and_comma", "forest_element_list",
  "forest_element", "forest_element_value", "opt_forest_element_name",
  "forest_element_name", "XML_parse", "XML_whitespace_option", "XML_PI",
  "XML_PI_target", "opt_comma_string_value_expression", "XML_query",
  "XQuery_expression", "opt_XML_query_argument_list",
  "XML_query_default_passing_mechanism", "XML_query_argument_list",
  "XML_query_argument", "XML_query_context_item", "XML_query_variable",
  "opt_XML_query_returning_mechanism", "XML_query_empty_handling_option",
  "XML_text", "XML_validate", "document_or_content_or_sequence",
  "document_or_content", "opt_XML_returning_clause",
  "XML_namespace_declaration", "XML_namespace_declaration_item_list",
  "XML_namespace_declaration_item", "XML_namespace_prefix",
  "XML_namespace_URI", "XML_regular_namespace_declaration_item",
  "XML_default_namespace_declaration_item", "opt_XML_passing_mechanism",
  "XML_passing_mechanism", "opt_XML_valid_according_to_clause",
  "XML_valid_according_to_clause", "XML_valid_according_to_what",
  "XML_valid_according_to_URI", "XML_valid_target_namespace_URI",
  "XML_URI", "opt_XML_valid_schema_location",
  "XML_valid_schema_location_URI", "XML_valid_according_to_identifier",
  "registered_XML_Schema_name", "opt_XML_valid_element_clause",
  "XML_valid_element_clause", "opt_XML_valid_element_name_specification",
  "XML_valid_element_name_specification",
  "XML_valid_element_namespace_specification",
  "XML_valid_element_namespace_URI", "XML_valid_element_name",
  "XML_aggregate", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,    40,    41,   430,   431,    61,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,    43,    45,    38,   124,    94,   446,
     447,   448,   449,   450,   451,   452,   453,    42,    47,    37,
     454,   126,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,    44,
      46,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   355,   356,   357,   356,   358,   356,   359,   356,   360,
     356,   361,   356,   356,   356,   356,   356,   356,   362,   363,
     363,   364,   364,   365,   365,   366,   367,   368,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   370,
     370,   371,   371,   372,   372,   373,   373,   373,   373,   373,
     373,   373,   373,   374,   374,   375,   375,   375,   376,   377,
     377,   378,   378,   379,   379,   380,   380,   380,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     386,   386,   387,   387,   388,   388,   389,   389,   390,   390,
     391,   391,   392,   392,   393,   393,   394,   394,   394,   395,
     395,   395,   396,   396,   397,   397,   397,   397,   397,   397,
     397,   398,   398,   399,   399,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   401,   401,   401,   402,   402,
     402,   402,   402,   402,   403,   403,   403,   404,   404,   405,
     405,   405,   405,   405,   405,   405,   405,   406,   406,   406,
     407,   407,   408,   408,   409,   409,   409,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   420,   420,
     420,   420,   421,   421,   422,   423,   423,   423,   424,   424,
     425,   425,   426,   426,   426,   427,   427,   428,   428,   429,
     429,   430,   430,   431,   432,   432,   433,   433,   433,   434,
     435,   436,   437,   437,   438,   438,   439,   440,   440,   441,
     441,   441,   441,   441,   442,   443,   444,   444,   444,   444,
     444,   445,   445,   445,   445,   446,   446,   447,   447,   447,
     447,   447,   447,   448,   448,   448,   449,   450,   450,   451,
     452,   453,   453,   454,   454,   455,   455,   456,   456,   457,
     458,   459,   460,   460,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   462,   462,   462,   463,   463,   464,   464,
     465,   465,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   465,   466,   466,   466,   466,   466,   466,   466,   466,
     467,   467,   467,   467,   467,   467,   468,   469,   470,   471,
     472,   472,   472,   473,   474,   474,   474,   475,   475,   476,
     477,   477,   478,   479,   479,   480,   480,   481,   482,   482,
     482,   483,   484,   484,   485,   485,   486,   486,   487,   487,
     488,   488,   488,   489,   489,   490,   491,   491,   492,   492,
     492,   492,   492,   493,   493,   494,   494,   495,   495,   495,
     495,   496,   496,   497,   497,   498,   499,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   506,
     507,   507,   508,   508,   508,   369,   369,   509,   509,   509,
     509,   509,   510,   511,   511,   511,   511,   511,   511,   511,
     512,   512,   513,   513,   514,   514,   514,   514,   515,   515,
     515,   515,   516,   516,   517,   517,   517,   518,   518,   519,
     519,   519,   519,   519,   519,   520,   520,   521,   521,   522,
     522,   523,   523,   524,   524,   525,   525,   525,   525,   526,
     526,   527,   527,   527,   527,   527,   528,   528,   529,   529,
     530,   530,   531,   531,   532,   532,   533,   533,   534,   535,
     535,   535,   536,   536,   537,   538,   538,   539,   539,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   544,   545,
     545,   546,   546,   547,   547,   547,   548,   548,   549,   550,
     550,   550,   551,   551,   552,   552,   552,   552,   552,   553,
     553,   553,   554,   554,   555,   555,   555,   556,   556,   369,
     557,   558,   558,   559,   560,   369,   369,   561,   562,   563,
     564,   564,   565,   566,   566,   566,   566,   566,   567,   567,
     567,   568,   568,   568,   569,   570,   571,   571,   572,   572,
     573,   573,   573,   573,   573,   573,   573,   574,   573,   575,
     575,   575,   575,   576,   576,   577,   577,   578,   578,   579,
     579,   580,   580,   581,   581,   582,   582,   583,   583,   583,
     584,   584,   584,   585,   585,   585,   585,   586,   586,   587,
     588,   588,   588,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   590,   590,   591,   591,   592,   592,   593,   593,
     593,   594,   594,   594,   594,   595,   595,   596,   596,   597,
     597,   597,   597,   598,   598,   599,   599,   600,   600,   600,
     601,   602,   602,   603,   604,   605,   605,   605,   606,   606,
     606,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   608,
     608,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   609,   610,   611,   612,
     612,   613,   614,   614,   615,   615,   616,   616,   617,   617,
     618,   618,   619,   619,   619,   620,   621,   622,   622,   622,
     623,   624,   624,   624,   624,   624,   625,   626,   626,   627,
     627,   628,   628,   628,   628,   629,   629,   629,   629,   629,
     629,   630,   630,   631,   631,   631,   631,   631,   631,   631,
     632,   632,   633,   633,   633,   633,   634,   634,   634,   635,
     636,   636,   637,   637,   638,   638,   639,   639,   639,   639,
     639,   639,   639,   640,   640,   640,   641,   641,   642,   642,
     643,   643,   644,   644,   644,   645,   645,   645,   645,   645,
     646,   646,   647,   647,   647,   648,   649,   649,   650,   650,
     651,   651,   652,   653,   653,   653,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   654,   654,   654,   654,
     654,   654,   655,   656,   656,   656,   657,   657,   657,   658,
     658,   659,   660,   660,   660,   660,   661,   661,   662,   662,
     663,   664,   664,   665,   666,   666,   667,   667,   668,   669,
     670,   671,   672,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   674,
     674,   675,   676,   676,   677,   677,   677,   678,   678,   679,
     680,   681,   681,   681,   681,   681,   681,   682,   682,   682,
     682,   682,   682,   682,   682,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   684,   684,   685,   686,   686,   687,   687,   688,
     689,   689,   690,   690,   691,   692,   693,   693,   694,   694,
     694,   694,   694,   694,   694,   694,   695,   696,   696,   697,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     699,   700,   701,   702,   703,   703,   703,   703,   703,   703,
     703,   703,   704,   705,   706,   706,   707,   708,   708,   709,
     710,   711,   712,   712,   713,   714,   714,   715,   715,   715,
     715,   715,   716,   717,   717,   718,   718,   719,   720,   721,
     721,   722,   723,   724,   724,   725,   726,   727,   727,   728,
     729,   730,   730,   731,   732,   732,   733,   733,   734,   735,
     736,   736,   737,   737,   738,   739,   740,   740,   741,   741,
     742,   742,   742,   743,   744,   744,   745,   745,   746,   747,
     748,   749,   749,   750,   750,   751,   751,   752,   752,   753,
     754,   754,   755,   755,   756,   757,   758,   758,   759,   760,
     761,   762,   762,   763,   763,   764,   764,   765,   766,   766,
     767,   768,   769
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       3,     0,     3,     2,     0,     1,     2,     1,     1,     1,
       3,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     1,     0,
       1,     2,     2,     2,     4,     4,     4,     4,     3,     4,
       3,     4,     4,     7,     5,     1,     2,     3,     1,     0,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     6,     6,     1,     3,     0,     3,
       0,     3,     0,     2,     6,     6,     0,     3,     0,     3,
       1,     3,     1,     3,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     2,     2,     2,
       1,     1,     3,     1,     1,     6,     6,     5,     5,     6,
       6,     6,     4,     6,    10,     4,     3,     7,     5,     4,
       5,     4,     5,     5,     3,     3,     3,     1,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       1,     2,     1,     2,     2,     3,     1,     2,     1,     3,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     1,
       9,     1,     1,     1,     0,     3,    10,     0,     1,     1,
       0,     3,     5,     6,     5,     5,     5,     8,     6,     0,
       6,     4,     1,     1,     2,     2,     2,     2,     0,     4,
       4,     3,     3,     1,     4,     0,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       1,     1,     2,     6,     1,     3,     1,     1,     1,     2,
       1,     2,     5,     1,     0,     3,     2,     0,     2,     2,
       1,     1,     2,     2,     3,     3,     0,     1,     1,     2,
       2,     0,     1,     1,     1,     0,     2,     2,     1,     1,
       2,     5,     1,     2,     3,     8,     4,     1,     3,     2,
       7,     1,     3,     1,     1,     0,     3,     0,     1,     3,
       6,     3,     1,     1,    11,     9,    11,    10,    11,    11,
       9,     7,     9,     1,     5,     6,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       0,     1,     3,     2,     1,     1,     4,     6,     5,     4,
       1,     2,     4,     1,     2,     0,     2,     7,     0,     2,
       5,     8,     0,     2,     0,     1,     2,     4,     4,     1,
       1,     1,     0,     4,     2,     9,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     2,     4,     4,     4,
       4,     0,     1,     0,     1,     3,     0,     3,     1,     1,
       0,     4,     1,     4,     3,     4,     3,     3,     3,     4,
       5,     4,     4,     4,     5,     3,     5,     6,     5,     5,
       5,     5,     4,     3,     3,     3,     4,     0,     3,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     4,     3,     4,     3,
       0,     1,     1,     3,     2,     2,     3,     3,     2,     2,
       2,     1,     1,     0,     2,     3,     0,     0,     3,    14,
      13,     6,     9,     6,     6,     0,     4,     1,     3,     0,
       3,     1,     3,     1,     2,     0,     3,     5,     7,     0,
       1,     0,     2,     2,     4,     4,     0,     3,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     3,     4,     0,
       2,     2,     5,     4,     6,     4,     5,     0,     2,     2,
       1,     3,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     3,     1,     3,
       3,     3,     0,     2,     3,     4,     4,     5,     5,     0,
       1,     2,     0,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     4,     1,     1,     1,     4,     6,     5,
       1,     3,     1,     5,     5,     5,     3,     1,     0,     1,
       1,     0,     1,     5,     1,     4,     0,     2,     1,     3,
       2,     2,     3,     2,     3,     1,     1,     0,     5,     5,
       2,     4,     1,     0,     1,     0,     3,     1,     3,     0,
       2,     3,     1,     3,     1,     0,     3,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     1,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     3,     6,     6,     0,     1,
       1,     3,     3,     3,     3,     1,     3,     4,     3,     5,
       5,     7,     7,     1,     3,     4,     4,     1,     1,     1,
       2,     1,     3,     3,     3,     3,     4,     3,     3,     4,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       1,     3,     0,     3,     0,     3,     0,     3,     1,     1,
       1,     1,     2,     1,     2,     2,     4,     2,     1,     2,
       2,     0,     3,     2,     2,     3,     2,     3,     4,     1,
       3,     1,     1,     1,     1,     6,     2,     2,     2,     2,
       2,     0,     2,     8,     8,     6,     6,     6,     3,     8,
       1,     3,     1,     3,     3,     2,     0,     2,     1,     1,
       1,     3,     1,     3,     1,     3,     4,     6,     5,     5,
       4,     6,     1,     1,     1,     0,     3,     0,     3,     0,
       3,     0,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     1,     2,     2,     2,     2,
       1,     1,     4,     1,     3,     5,     1,     3,     5,     6,
       6,     1,     6,     4,     5,     4,     1,     3,     3,     3,
       4,     1,     2,     4,     1,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     6,     1,
       4,     6,     1,     2,     1,     1,     1,     1,     4,     1,
       4,     6,     1,     4,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       3,     4,     0,     1,     2,     1,     5,     5,     2,     2,
       2,     4,     6,     2,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     5,     7,     0,     2,     4,     6,     4,     2,
       4,     2,     1,     4,     1,     3,     2,     0,     2,     1,
       1,     2,     1,     3,     1,     0,     2,     3,     3,     3,
       3,     4,     7,     0,     2,     1,     3,     2,     1,     0,
       2,     1,     6,     2,     2,     7,     1,     0,     2,     8,
       1,     0,     3,     1,     1,     3,     1,     1,     2,     4,
       0,     1,     3,     3,     5,     6,     1,     1,     1,     1,
       0,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       3,     2,     2,     0,     1,     2,     2,     0,     1,     5,
       1,     1,     3,     3,     1,     1,     0,     2,     1,     2,
       1,     0,     1,     1,     2,     0,     1,     2,     2,     2,
       1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   523,     0,   453,   453,     0,
       0,     0,    15,     0,     0,    18,     0,    27,     0,     0,
       7,     5,     9,    11,     3,     0,    25,     0,     0,    86,
      26,     0,   481,     0,    19,     0,     0,     0,     0,     0,
      34,    35,    28,    29,    30,    33,    31,   145,   144,   141,
     142,   143,    37,   146,    32,   426,   425,   432,   431,   427,
     428,   430,   429,   549,   567,   555,   556,   605,     0,    38,
      16,     0,   927,   928,   930,   931,   932,   933,   935,   937,
     984,   940,   948,  1009,   971,   945,   986,   959,   970,   964,
     943,  1008,   978,   965,   954,   955,   956,   952,   946,   962,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,   963,   929,  1005,
    1004,   950,  1011,   944,   936,   969,  1006,  1007,   981,   957,
     982,   983,   979,   980,   953,   938,   942,   968,   966,   939,
     941,   958,   985,   961,   951,   972,   973,   974,   975,   976,
     977,   947,  1010,   949,   967,   960,     0,   843,   934,   524,
     525,     0,     0,   452,   456,   456,   434,     0,   440,     0,
     552,   277,   523,     0,     0,     0,   754,   752,   753,   327,
       0,   749,   751,   277,     0,     0,     0,     0,     0,  1016,
    1015,     0,  1019,   961,   499,   921,   922,   923,   924,   925,
     926,   105,   277,   277,   104,   100,   110,   106,   277,     0,
       0,     0,    90,    92,     0,   101,   102,    76,   920,     0,
       0,     0,     0,     0,   440,     0,     0,     0,  1014,     0,
       0,     0,     0,   271,     0,   274,   273,     0,   871,     1,
       0,     0,     0,   172,   173,     0,   193,   192,     0,     0,
       0,     0,     0,     0,    23,    23,   171,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    21,    21,    21,     0,    21,    21,
      21,     0,    21,   422,   823,   825,   824,   971,     0,   942,
     958,   973,     0,     0,     0,  1005,  1004,    23,    41,    42,
       0,   267,     2,     0,   568,   568,   568,   607,    13,   532,
       0,     0,  1017,   927,   928,   930,   931,   932,   933,   829,
     828,   827,   830,   831,     0,     0,     0,   917,   840,   841,
     761,   761,   761,   761,   761,   703,     0,   517,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
       0,   972,   973,   974,   975,     0,     0,     0,     0,   717,
     716,   576,   776,   602,   633,   604,   623,   624,   625,   626,
     627,   628,   629,     0,   630,   700,   699,   631,   671,   715,
     704,     0,   706,   708,   710,   711,   574,   770,   701,     0,
       0,     0,   707,   702,   779,   835,   705,   713,   712,     0,
       0,   846,   826,   714,  1040,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,   792,   507,     0,   433,   457,   435,
       0,     0,     0,   437,   441,   442,     0,   550,   554,     0,
     278,     0,   566,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1035,     0,     0,     0,   613,
       0,     0,    10,    12,     0,     0,   499,     0,     0,   422,
     107,   108,    99,   109,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   440,   439,   177,     0,
       0,     0,     0,   605,     0,   483,     0,     0,     0,     0,
     482,   197,   196,     0,   195,   194,     0,    23,    23,    23,
      23,     0,    70,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,   277,     0,   414,   148,    21,     0,     0,
       0,     0,     0,   422,     0,     0,     0,     0,     0,   413,
       0,     0,     0,   415,     0,   424,   423,   405,     0,     0,
      50,    48,     0,     0,     0,     0,     0,   902,   897,   911,
     873,   912,   914,   915,   886,   889,   881,   882,   884,   885,
     883,   892,   894,   904,   908,   907,   802,   799,   801,     0,
       0,   895,   896,    43,   899,   874,   875,   879,     0,   569,
     570,   571,   571,   571,     0,   610,     0,   498,     0,   576,
     526,     0,   919,   844,  1018,   839,   837,     0,     0,     0,
       0,   756,   758,   757,   760,   759,     0,   660,     0,     0,
     746,     0,     0,     0,     0,  1083,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   604,     0,   708,
     846,   632,     0,   696,   697,     0,     0,     0,   691,   832,
       0,   797,     0,   797,   793,   794,     0,     0,     0,   864,
     866,     0,     0,   661,     0,     0,     0,   557,   532,     0,
     949,   775,   778,     0,     0,     0,     0,     0,     0,     0,
       0,   638,   638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   838,   836,     0,     0,
       0,     0,   510,   507,   505,   454,     0,     0,   436,   445,
     444,     0,     0,     0,   551,     0,   576,  1034,     0,   417,
     417,   417,   417,  1028,  1029,     0,  1030,  1033,     0,   747,
     856,   518,     0,   750,   751,     0,    39,     8,     6,     4,
       0,  1020,     0,   521,   515,   522,   422,   501,   500,   503,
     113,    80,   111,   114,    77,    78,    93,  1003,   961,    91,
      98,    97,   103,    87,    89,     0,     0,   438,   179,   178,
       0,   177,     0,     0,   122,     0,   158,     0,     0,   168,
     166,   164,   169,     0,     0,   149,   152,   161,   138,     0,
     138,   138,   272,     0,   475,   475,     0,   277,     0,     0,
     177,     0,     0,   147,   150,   156,     0,     0,     0,     0,
       0,     0,   175,     0,   950,    59,    55,   277,     0,     0,
       0,   362,   362,   362,   362,     0,   366,   367,     0,     0,
       0,   422,   422,   422,   422,   412,    22,   417,   417,   417,
     417,   422,   422,   422,   416,    47,   279,    51,   795,    52,
      46,    49,    45,     0,     0,     0,   913,     0,     0,     0,
       0,   893,     0,   797,   797,   805,   806,   807,   808,   809,
     801,   799,     0,   821,   822,   268,     0,     0,     0,     0,
     606,   617,   620,   572,     0,     0,     0,   609,   608,   870,
       0,   613,   533,     0,     0,   532,     0,     0,   851,     0,
       0,   918,   762,   813,   814,   811,   810,   812,     0,     0,
       0,   671,  1039,  1037,  1120,  1036,  1120,     0,     0,     0,
       0,  1118,  1119,     0,     0,  1100,  1101,   671,  1117,     0,
    1116,   605,     0,     0,   670,   668,   698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   861,   866,     0,   865,     0,     0,     0,     0,     0,
     663,     0,     0,   587,   586,   577,   578,   585,   593,   593,
     843,   576,   560,   562,   595,   601,   777,   603,   658,   657,
     659,   635,     0,   644,   645,   642,   643,   641,     0,     0,
     639,   640,     0,     0,   634,     0,   664,   687,   672,   673,
     678,   688,   677,   768,   695,   694,   693,   692,   674,   675,
     676,   689,   680,   682,   684,   679,   690,   686,   685,   683,
     681,   648,     0,   722,   774,   771,   719,     0,     0,   953,
     868,     0,   846,     0,   931,   932,   933,   773,   847,   508,
     509,   506,   455,     0,     0,     0,   451,   446,   447,   443,
       0,   553,   417,     0,   397,   394,   398,   396,     0,  1027,
    1026,   748,     0,   615,   616,   614,    40,    36,  1021,     0,
     502,     0,     0,    82,     0,    82,    96,    82,    82,     0,
       0,     0,     0,     0,     0,   165,   163,   167,   157,   153,
       0,     0,   137,   118,     0,     0,     0,   117,     0,     0,
     237,     0,   480,   486,     0,   486,   277,     0,   484,   485,
       0,     0,   154,   151,   277,   277,   277,   277,     0,     0,
      24,    56,    58,     0,  1022,     0,     0,   237,   180,   203,
       0,     0,   277,   362,   361,     0,   360,     0,     0,     0,
       0,     0,   369,   371,   368,   370,     0,   417,   422,   409,
     406,   410,   408,   402,   399,   403,   401,    54,   404,   411,
      44,     0,   869,     0,   916,     0,     0,     0,   869,   909,
       0,   910,   803,   804,   819,   818,     0,     0,   869,     0,
       0,     0,     0,   621,   622,   619,     0,   565,   564,   563,
     612,   611,   559,   531,   527,   504,   528,   529,   530,   845,
       0,     0,     0,   709,     0,     0,     0,     0,     0,  1062,
    1054,     0,  1088,  1075,  1085,  1089,  1084,   671,  1096,  1097,
       0,  1120,     0,  1137,  1120,   520,     0,   519,   513,   669,
       0,     0,     0,   654,     0,     0,     0,     0,   798,     0,
     833,   800,   834,   842,     0,     0,   862,     0,   867,   855,
       0,     0,   853,     0,   662,     0,   593,     0,     0,   586,
       0,     0,   539,     0,     0,   544,   545,   546,   539,     0,
     540,     0,     0,   542,   949,   583,   592,   594,   581,   580,
       0,     0,   558,     0,   599,   656,     0,     0,     0,     0,
       0,   655,   647,     0,     0,   724,     0,   786,     0,   790,
       0,     0,     0,   458,   448,   449,   450,   395,   419,     0,
     420,  1031,   857,   516,     0,   112,     0,    75,     0,    74,
      84,    85,     0,     0,   123,   126,   162,   160,   159,   422,
     422,   422,   120,   121,   119,     0,   116,     0,   115,   210,
     211,     0,     0,   461,   381,   464,     0,   463,     0,     0,
       0,   155,   184,   185,     0,   186,   280,    72,    73,    71,
       0,     0,    61,  1023,    57,     0,     0,     0,   212,   208,
     213,   214,   919,     0,   182,     0,     0,   198,     0,   352,
       0,   364,     0,     0,     0,   275,     0,     0,   400,   407,
     903,   898,   876,   887,     0,   890,     0,   905,     0,   801,
     816,   820,   900,     0,   877,   878,   880,   618,     0,     0,
       0,     0,  1122,  1121,  1050,  1038,  1051,  1052,     0,  1120,
     986,     0,  1129,     0,  1124,     0,  1126,  1127,     0,     0,
    1120,     0,  1087,     0,     0,     0,     0,  1120,     0,     0,
    1103,  1110,  1114,     0,     0,  1138,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,   796,   863,     0,   854,
       0,   858,   859,   584,   582,     0,   534,   667,   665,     0,
     579,     0,     0,   539,     0,   543,   541,   590,     0,   844,
     561,     0,     0,   575,   646,   650,   649,     0,     0,     0,
     718,     0,   726,   789,   788,     0,     0,   848,   418,     0,
       0,    81,    83,    79,     0,   125,   135,   136,   134,     0,
       0,   238,     0,     0,     0,   236,   215,   216,   218,   219,
     382,     0,   476,     0,     0,   469,   469,   494,   496,     0,
       0,     0,  1012,  1025,  1024,    19,     0,    53,    62,    63,
      65,    66,    69,    67,    68,   183,   269,   202,   237,     0,
       0,   205,     0,     0,   188,     0,   523,   945,   959,     0,
       0,     0,     0,     0,   296,   308,   309,   302,   303,   304,
     307,   305,   291,   293,   310,   321,   320,   325,   324,   323,
     322,     0,   306,   301,   300,   311,     0,     0,     0,     0,
       0,     0,   270,   372,   373,     0,   872,     0,     0,   817,
       0,     0,   597,   846,   849,   850,   755,     0,  1074,  1059,
    1061,  1075,  1072,  1055,     0,  1132,  1131,  1123,     0,     0,
       0,     0,     0,     0,  1076,  1086,     0,  1091,  1090,  1093,
    1094,  1092,   671,     0,  1136,  1135,   671,  1102,  1104,  1106,
    1107,     0,  1111,     0,  1115,  1162,   514,     0,     0,     0,
       0,   767,     0,   765,   766,     0,   860,   852,   666,     0,
       0,   535,     0,     0,   536,   539,     0,     0,   596,   600,
     637,   636,   723,     0,   728,   729,   721,     0,   787,   791,
     421,  1032,     0,     0,   131,     0,   129,     0,     0,     0,
       0,   263,     0,   233,     0,   217,   220,   221,   226,   227,
     228,     0,   487,     0,   492,     0,     0,   475,   475,     0,
       0,   189,    60,     0,    64,   209,   919,     0,   181,     0,
     204,     0,     0,     0,     0,     0,   326,     0,   329,   961,
     334,   333,   335,     0,   343,   345,     0,     0,   296,   352,
       0,   353,   363,     0,   352,   359,     0,     0,     0,     0,
     386,   888,   891,   906,   901,   573,     0,     0,     0,     0,
       0,  1071,     0,  1053,  1125,  1128,  1130,     0,     0,     0,
       0,  1082,  1095,     0,  1108,  1134,     0,     0,     0,     0,
       0,   512,   652,   651,     0,     0,     0,   588,   538,   548,
     547,   537,     0,   591,   725,     0,     0,     0,   671,   741,
     730,   733,   731,     0,     0,   132,   133,   130,   128,   699,
       0,   264,     0,   229,   222,   258,     0,     0,     0,     0,
     259,   231,   262,   477,     0,   462,   495,     0,   471,   473,
     486,   486,   497,     0,   177,   187,  1013,   237,     0,   207,
     170,     0,     0,   201,     0,     0,   290,     0,   330,     0,
       0,   296,   344,     0,     0,   340,   345,   296,   352,     0,
       0,     0,     0,   969,   285,   282,   292,   283,     0,     0,
     276,   383,   383,   374,   375,     0,   365,   390,   598,   847,
    1069,     0,  1064,  1067,  1060,  1073,  1056,  1058,  1077,     0,
    1080,  1079,  1078,  1133,  1105,     0,     0,  1099,     0,     0,
       0,  1151,  1140,  1141,   769,   763,   764,   589,     0,   734,
     732,   735,     0,   727,   124,   127,     0,     0,   257,     0,
     260,   277,     0,   493,   470,     0,   474,   488,   488,     0,
       0,     0,     0,   224,   206,   199,   200,   287,     0,     0,
     331,     0,   296,   346,     0,     0,   341,     0,   348,     0,
     297,   296,     0,     0,     0,     0,     0,     0,   381,   384,
     381,   381,   381,   376,     0,     0,   352,  1063,     0,     0,
    1066,     0,  1081,  1109,  1112,  1113,  1146,  1150,  1149,  1145,
    1146,  1144,     0,     0,     0,  1139,  1152,  1153,  1155,     0,
       0,   743,     0,   744,   277,   234,     0,   255,   478,   472,
     489,   490,   490,   176,   177,     0,   223,   237,   281,   328,
       0,   336,   342,     0,   338,   296,     0,   296,     0,     0,
     297,   294,   352,   358,     0,   356,   284,   286,   288,   289,
       0,     0,     0,     0,   388,   389,   387,     0,     0,   316,
     317,   314,   315,   392,   318,   385,   313,   312,   319,  1065,
    1070,  1068,  1057,     0,  1143,  1142,  1158,  1161,  1157,  1160,
    1159,  1154,  1156,     0,     0,   671,   736,   738,   745,   742,
     255,     0,   232,   266,   251,   246,     0,   492,   492,     0,
     191,   225,   332,   297,   339,   337,   349,     0,     0,   295,
       0,     0,   380,   378,   379,   377,     0,   298,  1148,  1147,
     739,   737,   740,   246,     0,   253,   254,   252,   256,     0,
     247,   248,   261,   491,   460,   465,     0,   296,   347,   354,
     357,   391,   352,   265,   235,     0,     0,     0,   250,     0,
     249,     0,   459,   190,   348,   351,   355,   393,     0,   240,
     241,     0,     0,   245,   244,     0,   350,   299,   239,   242,
     243,     0,   467,   466,     0,   468
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,   188,   185,   184,   186,   187,    34,    35,   535,
     515,    36,    37,    38,    39,  1087,  1585,   298,  1586,  1587,
     835,  1141,  1144,  1557,  1558,  1559,   832,  1379,  1588,   210,
    1095,  1093,  1337,  1589,   221,   222,   211,   212,   213,   779,
     214,   215,   216,   771,   772,  1590,   794,  1117,  1113,  1114,
    1591,    47,   823,   805,   824,   806,   825,    48,   257,   258,
     790,  1394,   259,  1855,   260,  1574,  1148,  1149,  1740,  1387,
    1388,  1389,  1538,  1359,  1715,  1716,  1390,  1952,  1717,  1718,
    1828,  1719,  1720,  2092,  1360,  1721,  2163,  2130,  2131,  2132,
    2128,  2095,  1841,  1535,  1842,   549,  1391,    49,   232,   233,
    1612,  1150,   440,    50,  1866,  1886,    51,  1592,  1759,  2142,
    2033,  2063,  1594,  1595,  1596,  1746,  1747,  1959,  1597,  1751,
    1598,  1875,  1876,  1754,  1755,  1873,  1599,  2039,  1600,  1601,
    2155,  1972,  1764,  1155,  1156,    53,   848,  1166,  1770,  1893,
    1894,  1541,  1980,  1896,  1897,  2056,  1986,  2065,   455,   283,
    1602,  1074,  1329,   547,  1603,  1604,    57,   433,   434,   435,
    1067,   164,   427,   728,    58,  2152,  2171,  1727,  1847,  1848,
    1123,  1124,   234,  1365,  2021,  2097,  1845,  1546,  1547,    59,
     469,    60,    61,    62,   724,   953,  1246,   762,   370,   763,
    1248,   764,   161,   599,  1217,   600,   597,   984,  1292,  1496,
    1293,  1684,   235,   169,   170,   437,    64,  1605,   236,   991,
     992,    67,   591,   904,   371,   667,   668,   985,  1282,  1283,
    1297,  1298,  1304,  1621,  1503,   372,   373,   307,   595,   911,
     756,   900,   901,  1205,   374,   375,   376,   377,  1012,   378,
    1003,   379,   380,   638,   381,  1002,   382,   664,   383,   384,
     987,   385,   386,   387,   388,   389,   390,   391,  1314,  1315,
    1512,  1696,  1697,  1819,  1820,  1821,  1822,  2086,  2087,  1933,
     392,   639,   180,   181,   394,   611,   395,   396,   397,   671,
     398,   399,   400,   401,   402,   656,   965,   651,   653,   581,
     891,   927,   928,   892,  1421,   893,   894,   582,   403,   404,
     405,   989,   406,   407,   919,   408,   752,   978,   971,   972,
     659,   660,   975,  1051,  1181,   908,   237,  1615,  1330,  1190,
     409,   585,   586,   410,  1362,   773,   218,   640,   158,  1553,
     238,  1182,   412,    68,   192,  1382,  1383,  1554,    69,   456,
     933,   934,   935,   413,   414,   415,   416,   417,  1439,  1230,
    1629,  1901,  1902,  1990,  1903,  2071,  1630,  1631,  1632,  1450,
    1644,   418,   939,  1233,  1234,  1235,  1452,  1648,   419,  1455,
     420,  1239,  1457,   421,   946,  1241,  1459,  1657,  1658,  1659,
    1660,  1661,  1799,   422,   423,   949,   943,  1225,   940,  1443,
    1444,  1786,  1445,  1446,  1447,  1794,  1795,  1464,  1465,  1921,
    1922,  2000,  2001,  2074,  2119,  1923,  1998,  2005,  2006,  2081,
    2007,  2008,  2080,  2078,   424
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1839
static const yytype_int16 yypact[] =
{
    1464,   258, -1839,   290, 17114,   -86,   138,   378,   378, 17114,
     400,   594, -1839, 17114,   421,   551,   472, -1839, 14423, 17114,
   -1839, -1839, -1839, -1839, -1839,   836, -1839, 17413,   986,   314,
     721,   131,   118,   495,  1574,   717,  1614, 12928, 12629,   660,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839,   745,   707, -1839,
   -1839, 17114, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839,   521,   501, -1839, -1839,
   -1839,  4355, 17114, -1839,   674,   674, -1839, 17114,   728,    82,
   -1839,   715,   -86,   853,   602,  1359, -1839, -1839, -1839, -1839,
     764, -1839,   614,   715,  1855,  1855,  1464,  1464,  1855, -1839,
   -1839,   805, -1839, 17114,    46, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839,   715,   715, -1839,   730, -1839, -1839,   715,   171,
     148,   742, -1839,   686,   775,   701, -1839, -1839, -1839,   784,
     798,   262,  1123,   987,   728, 15619, 17114, 17114, -1839,   609,
     818,  1085,   832, -1839,    81, -1839, -1839,   467, -1839, -1839,
     684, 17114,   735, -1839, -1839, 17114, -1839, -1839,   824,   828,
     838,   851, 17114, 17114,   827,   827, -1839,   816, -1839, -1839,
     861,   913, 17114, 17114, 17114, 17114, 17114, 17114, 17114, 17114,
     915,   635, 17114,   848,   848,   848,   848, 17114,   848,   848,
     848, 17114,   848,   108, -1839, -1839, -1839,   948, 17114, 17114,
   17114,   880,  1016,  1025,  1027,   947,   956,   106,   887, -1839,
     983, -1839, -1839,  1139,   -71,   -71,   -71,   942, -1839,   969,
   15918, 17114,  1267,  1267,  1267,  1275,  1104,  1106,  1108, -1839,
   -1839, -1839, -1839, -1839,  1110,  1111,  1266, -1839, -1839, -1839,
    1116,  1116,  1116,  1116,  1116, -1839,  1117, -1839,  1118,  1168,
   17114,  1127,  1128,  1129,  1132,  1133,  1136,  1140,  1142,  1144,
    1146,  1148,  3305,  5055,  9785,  9785,  1152,  1158,  1159, -1839,
    9785,  1267,   463,   510,   235,  7454,  1171,  1172,  5055, -1839,
   -1839,   282, 16217,  1122, -1839,  1284, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, 17114, -1839, -1839, -1839, 11971, -1839, -1839,
   -1839,  1009, -1839,   999, -1839, -1839,  1001, -1839, -1839,  1176,
    1179,  1180,  1017, -1839, -1839, -1839, -1839, -1839, -1839,  1267,
    1267,   -83, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839,   307,   903, -1839,  1071, -1839,
     879,  1270,  1261, -1839,  1015, -1839, 17114, -1839, -1839,  1037,
   -1839,  4355, -1839, -1839, 17114,  1134, 17114, 17114, 17114, 17114,
   17114, 17114, 17114, 17114, 17114, -1839,  1099,  7787, 14423,  1062,
    1235,  1237, -1839, -1839,  1239,  5755,    46,  1244,  1245,   108,
   -1839, -1839, -1839, -1839, -1839, -1839,   105,  1123,   105,  1059,
   13227,   554,  1272,  1273,  1271,   -23,   728, -1839,   772,   549,
     966,   778,  1211,   731, 17114, -1839,    54,  1121, 17114,  1085,
    1086, -1839, -1839,  1216, -1839, -1839,  1034,   827,   827,   827,
     827,  1153,  1220,  1219, 17712, 17114, 17114,   827, 17114,  1224,
    1225,  1226,  1230,   715,   761, -1839, -1839,   848,  1175, 17114,
   17114, 17114, 17114,   108,  1299, 17114, 17114, 17114, 17114, -1839,
   17114, 17114, 17114, -1839, 17114, -1839, -1839, -1839, 17114,   -78,
   -1839, -1839,    37,  1117, 17114,  5055, 17114,  1232,  1243, -1839,
     470, -1839, -1839, -1839,  1247,  1248, -1839, -1839, -1839, -1839,
   -1839,  1382, -1839,  1250, -1839, -1839, -1839,  1253,  1254,   928,
   17114, -1839, -1839, -1839,  1255,  1257,  1258,  1260,  9785, -1839,
   -1839,  1268,  1268,  1268,    38,  1131,  5055, -1839,  1259,   -12,
   -1839,  1262, -1839,  1089, -1839, -1839, -1839,  5055,  5055,  1419,
    1269, -1839, -1839, -1839, -1839, -1839,   309, -1839,  1466,  1330,
   -1839,  9785,  9785,  9785,  1204,  1289,   631,  1209,  1447,  9785,
     665,  9785,  3305,  1276,  1277,  1279,   435,  1003,   -77, -1839,
     -50,  1284,  3305,  1611,  1611,  9785,  9785,  9785,  1124, -1839,
     836,  1282,   836,  1282, -1839, -1839,  1267,  5055, 11345, -1839,
     748,  9785,  9785,  1284,   480,  2779, 17114, -1839,   969,  5055,
   17114, -1839, -1839,  5055,  3655,  9785,  9785,  9785,  9785,  1285,
    1287,  1000,  1000,  3655,  1107,  9785,  9785,  9785,  9785,  9785,
    9785,  9785,  9785,  9785,  9785,  9785,  9785,  9785,  9785,  9785,
    9785,  9785,  9785,  9785,  9785,  9785,  9785,  9785,  9785,   538,
    1303,  1274,  4355,  1306,  6088,  9785, -1839, -1839, 13526, 15021,
    1191,  1276, -1839,   411, -1839, -1839,  1400,  1404, -1839, -1839,
   -1839,   747,   836,   728, -1839,  1310,  1377, -1839, 17114,  1316,
    1316,  1316,  1316, -1839, -1839,  1145, -1839, -1839,   490, -1839,
   -1839, 13523,   -48, -1839, -1839,    62,  1251, -1839, -1839, -1839,
    3305, -1839,    63, -1839, -1839,   725,   108, -1839, -1839, -1839,
   -1839,    78, -1839, -1839, -1839,   136, -1839,  1134, 17114, -1839,
   -1839, -1839, -1839, -1839, -1839,   105,   105, -1839, -1839, -1839,
    1238,   772,  1217,  1228, -1839,  1397,  1345,  1085,  1085, -1839,
   -1839, -1839, -1839,  1085,  2722,   966, -1839, -1839,   507,    79,
    1236,   820, -1839,  1392,    65,    65, 17114,   715,  1199,  1085,
     772,  1348,  2722,  1034, -1839, -1839, 17114, 17114, 17114, 17114,
    1288,  1280, -1839,  1417, 17114,  1281,  1305,   292,  1264, 17114,
    1352, 16516, 16516, 16516, 16516,  1208, -1839, -1839,   356, 17114,
   17114,   108,   108,   108,   108, -1839, -1839,  1316,  1316,  1316,
    1316,   108,   108,   108, -1839, -1839, -1839, -1839,   930, -1839,
   -1839, -1839,  1357,   983,   836,   836, -1839,  1516,   836,   836,
     836, -1839,   587,  1282,  1282, -1839, -1839, -1839, -1839, -1839,
    1254,  1253,  1263, -1839, -1839, -1839,   836,   836,   836,   836,
    1192, -1839, 10397,  1443,   421,   421,   421, -1839, -1839, -1839,
      38,  1062,  1357,  1117, 15918,   969,  4705, 17114,  1357,  1212,
    1201, -1839, -1839, -1839, -1839, -1839, -1839, -1839,  1444, 17114,
   13523,   639, 13523, -1839,    14, -1839,  1395, 17114,  1383,  9785,
    1210, -1839, -1839,  9785, 17114, -1839,  1412,   639, -1839,  9785,
   -1839,  1458,  8120,   242, -1839, -1839, -1839,   952,  5055, 14722,
    3025, 12916,  2938,  1386,  1278,  1267,  1387,  1267,   928,   321,
    9785, -1839,   754,  9785, -1839,  1246,  3052,  1218,   260,  5055,
   -1839, 13825,  2260, -1839, -1839,  1222,  1177, 18011, 18011, 18011,
     198,    -3, -1839, -1839,  1456,  1122, -1839,  1284, -1839, -1839,
   -1839,  1325,  5055, -1839, 12286, -1839, -1839, -1839,  8453,  8453,
   -1839, -1839,  5055,  5055, -1839,  1117, -1839, 13523,  1442,  1442,
    1442,  1442,  1442,  1442,  1442,  1442,  1442,  1442,  1611,  1611,
    1611,  1124,   823,   823,   823,   823,  1436,  1436,  1436,  1436,
    1436, -1839,  1471,  1249, -1839, -1839, -1839,  9785,  1399,  9785,
   13523,  1408,   209,  1241,  1410,  1413,  1423, -1839,   221, -1839,
    1252, -1839, -1839, 17114,  1058,  1503, -1839, -1839, -1839, -1839,
     419, -1839,  1316,  2627, -1839, -1839, -1839, -1839, 17114, -1839,
   -1839, -1839,  9785, -1839, -1839, -1839, -1839, -1839, -1839,  8453,
   -1839,  1336,   105,  1492,  1343,  1492, -1839,    20,    20,  1267,
    1346, 17114, 17114,  1085,   459, -1839, -1839, -1839, -1839, -1839,
   17114, 17114, -1839, -1839, 17114,  1518,  1075, -1839, 17114, 17114,
   16815, 14423, -1839,  1496,  1290,  1496,   715,  1499, -1839, -1839,
    1351,  1085, -1839, -1839,  1440,  1440,  1440,  1440, 17114,   801,
   -1839, -1839, -1839,  1605,  1353, 17114,  1393, 15320,  1531, -1839,
    1304, 17114,  1440, 16516, -1839,  1460,  1292,  2722,  1469,  1487,
    1488,   609, -1839,  1312, -1839, -1839,  1364,  1316,   108, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839,  1489, -1839,  1490, -1839,  1491,   263,  1495,  1298, -1839,
     265, -1839, -1839, -1839, -1839,  1391,  1029,  1505,  1319,  1507,
    1508,  1511,  9785, -1839, -1839, -1839,  1504, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,  1357, -1839,
    2722,  2722,  9785, -1839,   279,  1512,  9785,  1513,  1515, -1839,
    1337,  8786, 13523,   280, -1839,  1365, -1839,   502, -1839,  1349,
    1587,  1395,  1521,  1537,  1395, -1839,   276, -1839, -1839, -1839,
    1519,  1526,  1527,  1284,  9785,  9785,  9785,  9785, -1839,  1401,
   -1839, -1839, -1839, -1839,  9785, 10714, -1839,  1384, 13523, -1839,
    9785,  9785, -1839,  9785,  1284, 18011, 18011,  2260,  1276,  1533,
    1538,  1540,   927,   421,  2779, -1839, -1839, -1839,   896,  1642,
   -1839,  2779,  1643,  1650, 17114, -1839,  1550, -1839, -1839, -1839,
   14423, 17114, -1839,  1621,  1622,  1325,  1267,   293,   295,  1435,
    1702, -1839, -1839,  1628,  1559,  1634,  1562, -1839,  1566, -1839,
   14124,  9785, 17114, -1839, -1839, -1839, -1839, -1839, -1839,  1568,
    1396,  1398, -1839, -1839,  1478, -1839,   801, -1839,  1479, -1839,
   -1839, -1839,  1735,  1267, -1839, -1839, -1839, -1839, -1839,   108,
     108,   108, -1839, -1839, -1839,  -134, -1839, 17114, -1839, -1839,
   -1839,   540,  2590, -1839,  1424, -1839,  1267, -1839,  1641,    60,
    1267, -1839, -1839, -1839,  1484, -1839, -1839, -1839, -1839, -1839,
    1477, 17114,   718, -1839, -1839, 14423, 17114,   328, -1839, -1839,
   -1839, -1839,   225, 17114, -1839,   609,  1582,  1500,  1583, 10410,
   17114, -1839,  1539,  1528,  1545,  1601, 17114, 17114, -1839, -1839,
   -1839, -1839, -1839, -1839,   836, -1839,   836, -1839,   836,  1254,
   -1839, -1839, -1839,   836, -1839, -1839, -1839, -1839, 17114,  1600,
    1602, 13081, -1839, -1839, -1839, -1839, -1839, -1839,  6421,  1395,
    1532,  9785, 13523,   331, -1839,  1457, -1839, -1839,   770,  9785,
    1395, 17114, -1839,  1645,  1646,  1612,  9785,  1395,   499,  9785,
   -1839,  1587, -1839,  1501,  1617, -1839,  1618, -1839,  8120,  8120,
    8453,  8453, 10081, 13215, 12617,  2044, -1839, -1839,  9785, -1839,
   13813, -1839, -1839, -1839, -1839,   342, -1839, -1839, -1839,   287,
    1177,  1725,  2779,   492,  2779, -1839, -1839,  1627, 17114,   228,
   -1839, 17114,  5055, -1839, -1839, -1839, -1839,  5055,  5055, 17114,
   -1839,  1698,    17, -1839, -1839,  1630,  1632, -1839, -1839,  2722,
   17114, -1839, -1839, -1839,  1468,  1530, -1839, -1839, -1839,  1556,
     640, -1839,  1542,  1543,   715, -1839, -1839, -1839, -1839,  1035,
   -1839,  1267,  1465,   101,  1267,  1644,  1644,  1467, -1839,  1577,
    1815, 17114, -1839,  1472, -1839,  1798,   468, -1839,   718, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, 15320,  1560,
    1831,  1662, 17114,  1759, -1839,  1599,   -86,   400,   594,  1603,
   14423,  4005,  9119,  5055,  1523, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839,  1529, -1839, -1839, -1839, -1839,  1494,  2722,  2671,  1836,
    2671,  1613, -1839,  1497,  1517,  1680, -1839,  1683,  1687, -1839,
    1690,   344, -1839,  1522, -1839, -1839, -1839,  1692, 13523,  1520,
   -1839,   381, -1839,  1524,  1695, -1839, -1839, -1839,  8786, 17114,
    1598,  1606,  1608,  1610, -1839, -1839,  1706, -1839, -1839, -1839,
   -1839, -1839,   656,  1707, -1839, -1839,   315,  1547, -1839, -1839,
   -1839,    35, -1839,  1733, -1839, -1839, -1839,   346,   347,   369,
    9785, -1839,  9785, -1839, -1839,  9785, -1839, -1839, -1839, 18011,
    2779, -1839,   715,  5055, -1839,   492, 17114,   370,  1552,  1357,
    1712,  1712,  1552,  9785, -1839, -1839, -1839,  5405, -1839, -1839,
   -1839, -1839,  1637,  1629, -1839,   578, -1839,  1795,  9785,   715,
     715, -1839,  1778, -1839,  9785, -1839,  1035, -1839, -1839, -1839,
   -1839,   516, -1839,  1267,  1825,   371, 17114,    65,    65,  1267,
    1267,  1736, -1839, 17114, -1839, -1839,  1737,  1738, -1839,     9,
   -1839,   382,   233,  1676,  4355, 17114, -1839,  1743, -1839,  1744,
   -1839, -1839,  1357,  5055, -1839,   768, 11661,   348, -1839, 11674,
    5055, -1839, -1839,  1749, 10726, -1839,  1190,   624,  1654,   845,
    1813, -1839, -1839, -1839, -1839, -1839, 17114, 17114,  9785,  9785,
    9785, -1839,  9452, -1839, -1839, -1839, -1839,  1816,    75,  1817,
    1818, -1839, -1839, 17114, -1839, -1839,  9785,  1660,  1661,  1761,
     606, -1839, -1839, -1839, 14411, 14710, 15009, -1839, -1839, -1839,
    1357, -1839,   389, -1839,  1192,  6754,  1615,  1594,  1595,  1604,
   -1839, -1839, -1839,  1267, 17114, -1839, -1839, -1839, -1839,  1323,
    1667, -1839,  1619, -1839, -1839, -1839,  1838,  1775,  1682, 17114,
   -1839, -1839, -1839,  1607,  1722, -1839, -1839,   407, -1839,  1952,
    1496,  1496, -1839,  1679,   238, -1839, -1839,   619,  1785, -1839,
   -1839,  1874,  1875, -1839, 17114,  1696, -1839,  1616,  9785,   630,
     354, -1839, -1839,  1649,  9785, -1839,   771, -1839, 11674,  1830,
     320, 17114,  1729,  1966, -1839, -1839, -1839, -1839,  1734,  1968,
   -1839,   334,   422,   845, -1839,  1639, -1839,  1669, -1839,  1631,
   13523,   412, -1839,  1651, -1839, -1839,  1635, -1839, -1839,  1822,
   -1839, -1839, -1839,  1587, -1839,  1827,  1834, -1839,  1832, 17114,
    1980,   655, -1839, -1839, -1839, -1839, -1839, -1839,  1796, -1839,
   -1839, -1839,    68, -1839, -1839, -1839, 17114,  1858, -1839,  5055,
   -1839,   715,  1267, -1839, -1839, 17114, -1839,  1931,  1931, 17114,
    1267,  1731,   424, -1839, -1839, -1839, -1839, -1839, 17114,   426,
   13523,  1819, -1839, 11042,  1689, 11030, -1839,  1675, 10094,  1863,
    1681, -1839,   427,  2722, 17114,  1190, 17114,  1190,  1424, -1839,
    1424,  1424,  1424, -1839,   878,  1826, 11983, -1839,  9785, 17114,
   -1839,  9785, -1839, -1839, -1839, -1839,  1842, -1839, -1839, -1839,
    1842, -1839,  1846, 17114,  1980, -1839, -1839, -1839,  1850,  7104,
    1663, -1839,  1673, -1839,   715,  1835,   704,  1895, -1839, -1839,
   -1839,  1950,  1950, -1839,   772,  1267, -1839,   619, -1839, -1839,
    9785, -1839, 11042,  1878, -1839, -1839,  1708, -1839,  5055,  1697,
    1699, -1839, 11358, -1839, 17114, -1839, -1839, -1839, -1839, -1839,
   17114, 17114, 17114, 17114, -1839, -1839, -1839,  5055,  1710, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839,  1980, -1839, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839,  1700,  1671,  1688, -1839, -1839, -1839, -1839,
    1895,  1034, -1839, -1839,   672,  1755,  1972,  1825,  1825,  1773,
   -1839, -1839, 13523, -1839, 11042, -1839, 11042,   391,  1723, -1839,
    1724,  2722, -1839, -1839, -1839, -1839,   712, -1839, -1839, -1839,
   -1839, -1839, -1839,  1755,  1050, -1839, -1839, -1839, -1839,  1149,
    1767,  1771, -1839, -1839, -1839,  1717,  1267, -1839, -1839, 17114,
   -1839, -1839, 12299, -1839, -1839,   313,   313,  1978, -1839,  1979,
   -1839,  1869, -1839, -1839, 10094, -1839, -1839, -1839,  1915, -1839,
   -1839,  2010,   300, -1839, -1839,  1085, -1839, -1839, -1839, -1839,
   -1839,   428, -1839, -1839,  1085, -1839
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1839,  1051, -1839, -1839, -1839, -1839, -1839, -1263, -1839,   -99,
    -157, -1259, -1839, -1839,   791, -1839,     6, -1839,    21,   541,
   -1839,   907, -1839, -1839, -1839,   496, -1839,   719,    11,  1837,
   -1839, -1839,  -186,    16, -1839, -1839,  1839, -1839,  1578, -1839,
   -1839, -1839,  1572,  -414,   964,    45, -1839, -1839, -1839,   447,
      58, -1839,   -33, -1839,  -811,  1256,  -425, -1839, -1839, -1839,
    -774, -1839,  2024, -1839, -1839, -1839,    64, -1839, -1839, -1839,
     944,   497, -1839, -1839, -1839, -1839, -1839, -1839, -1621, -1839,
     352, -1839, -1839, -1839, -1839, -1072,   -79,   -63,   -61,   -53,
   -1839,   -19, -1839, -1839, -1839,   -35, -1839, -1839,  -216,  -421,
   -1839,  -161,   -36, -1839, -1216, -1043, -1839,   308, -1637, -1839,
   -1308,   -69, -1838, -1839,   579, -1839, -1839, -1839, -1839, -1839,
   -1839,   199, -1839,   319, -1839,   200, -1839,   -76, -1839, -1839,
   -1839, -1839,   469,  -765, -1839, -1839, -1839, -1839, -1839, -1839,
     184,  -773,   188, -1839, -1839, -1839, -1839, -1839,  1609, -1839,
      94,  -569,   562,  -389,    26,    31, -1839,  -141, -1839,  1350,
   -1839,  2076,  1923, -1839, -1839, -1839, -1839,   544, -1839,   146,
    -797, -1839, -1839, -1101,   144,    71,  -836,   552,   550, -1839,
    1638, -1839, -1839, -1839,  1378,  -689,   634,  -954, -1839,  -396,
     637,  1018,  -164, -1839, -1839,  1194,  -580,  -910,   821, -1839,
   -1839,   425,   154, -1839,  1670, -1839, -1839,    40,   127, -1839,
     812,    22,   961,   676,  -434,  1125,  1541, -1839,  -603, -1839,
    -958,  -915, -1839, -1339, -1839,  -299,  1445,  1164, -1839, -1839,
    1206,   429,   918, -1839, -1839,  -266, -1839, -1839,  1439, -1839,
     442, -1839, -1839, -1839, -1839,  1446, -1839, -1839,  1441, -1839,
    1388,  -298,  -832,  1510,  -594,  -535, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839,   311, -1839, -1839, -1839, -1839, -1839,
   -1839,    89, -1839,  -402, -1839,   886, -1839, -1839,  1415, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839,  -498,  -509,  -558, -1839,
    -588, -1839, -1839, -1839, -1839, -1839,  1160, -1839,  2093, -1839,
    1584,   406, -1385, -1839,  1534, -1839, -1839, -1839,  1173, -1839,
    1483, -1839,  1174,  -690,   169,  -713,  -212, -1839,  -249, -1839,
    -199, -1839, -1839,  -194,  -308,    32, -1839,    -4, -1839, -1381,
    -528,     3,  -243, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
    -579, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,
     362, -1839,   159, -1839, -1839, -1839, -1626, -1839,   372,   518,
   -1839, -1839, -1839, -1839,   702, -1839, -1839, -1839, -1839, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839, -1839, -1839,   358, -1839,
   -1839, -1839, -1839, -1839, -1839, -1839,  1535,  -897,   722, -1839,
     523, -1839,   723, -1839, -1839,   246, -1158, -1839, -1839, -1839,
   -1839, -1839, -1295,   162, -1839, -1839, -1839, -1839, -1839, -1839,
     158, -1839, -1839, -1839, -1839
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1134
static const yytype_int16 yytable[] =
{
     157,   292,   601,   300,   722,   166,    40,   736,   441,   171,
     439,    43,  1133,   492,   182,   157,    44,  1100,  1125,   495,
     884,    41,   459,   157,  1367,  1053,    55,   931,   191,  1295,
     926,    56,  1060,   294,   301,   947,   173,  1227,   617,  1228,
      65,   470,   471,  1622,   936,    45,  1130,   473,  1361,   228,
    1242,   583,   951,   636,  1307,  1308,   753,   312,    46,   907,
     217,   750,   986,   312,   775,   807,   909,   157,   883,   604,
     605,   606,  1279,   228,  1299,  1361,  1083,  1158,  1159,  1160,
     769,  1122,  1460,   487,  1105,  1106,   637,   641,   994,   786,
    1107,  1593,  -751,  1858,    54,  1834,   867,   514,   866,   957,
     665,   584,   663,  1694,   312,   159,   587,   179,   497,   665,
     195,   196,   197,   198,   199,   200,  1622,  1687,   649,  1555,
     589,  1878,  1529,  1556,  1622,  -751,  -961,    66,  1081,   228,
    -961,  -961,  1336,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,   855,  1530,  1797,  1115,  2064,   172,
     545,   546,  2010,  1904,    63,   967,  1907,   411,   157,  1909,
    -961,  -961,  1688,   429,   467,   468,   716,   717,  1116,   160,
    1692,  1075,  1076,  1077,  1224,   536,   537,   538,  2011,   540,
     541,   542,  1859,   544,   590,   172,  1910,   225,  1798,   157,
      40,    40,    40,    40,    40,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    44,    41,    41,    41,    41,    41,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
    1084,   489,   157,   157,    65,    65,    65,    65,    65,    45,
      45,    45,    45,    45,  1963,  1544,  1953,   503,  -795,  1088,
    1968,   157,    46,    46,    46,    46,    46,   226,   157,   512,
     393,   493,  1091,   815,   217,   870,   872,    14,   157,   157,
     157,   157,   157,   157,   525,   157,   977,   718,   157,   909,
     909,   580,   958,   539,   598,   909,  1544,   157,    54,    54,
      54,    54,    54,   474,   301,   550,   551,   818,  1173,  1174,
    1175,  1176,    13,   229,  1950,  1555,   438,   912,  1861,  1556,
     959,  1082,   722,  1662,  2064,  1812,   602,   603,   918,   918,
    1094,    66,    66,    66,    66,    66,   753,  1483,  1862,   -88,
     -88,   -88,   -88,   -88,   -88,  2032,   477,   201,   202,   203,
     204,   868,  1194,   636,  2042,  1215,   620,   914,    63,    63,
      63,    63,    63,   636,  1461,   787,  1301,  1466,   498,  1237,
     826,   827,   828,   829,   230,  2159,  2160,  1316,   969,  1318,
     839,  1484,   845,  1226,  1695,  2072,   637,  1279,   672,  1092,
    1243,  1097,  1098,  -751,   172,  1210,   172,  1090,   814,   157,
     807,   770,  1195,  1545,  -751,  1192,  1193,  -479,  1398,   723,
    1346,  1898,   369,    70,   665,  1432,  -751,  2161,  2104,  1569,
    2106,  -267,    71,  -751,  1146,   162,  2101,   997,  1001,  2012,
     156,  2169,  1089,   968,  2013,   227,   369,  1014,  1249,   513,
    1458,  1162,  1163,   231,  1164,   183, -1133,  1092,   849,   654,
     655,   436,   171,   194,   476,  1433,  1272,   411,   475,  1413,
     157,  1417,   157,   157,   157,   157,   743,   157,   745,   157,
     157,  1879,  1467,   205,   754,  -961,  1593,   304,   305,   306,
     163,   636,  1169,  1170,  1171,  1172,  -799,  1147, -1133,  1505,
     228,  1506,  1177,  1178,  1179, -1133,   157,   309,   172,   635,
     167,    13,   719,    13,    14,  1092,   172,   765,   172,  1863,
     157,   876,   877,   312,   157,   239,  1361,   477,   788,   789,
    2154,   669,   669,  1327,  1567,  1080,   634,  1637,  1682,   774,
     836,   157,   838,  -801,   157,   206,  1668,  1669,  1678,   207,
    1775,   873,  1801,  1802,   268,   157,   157,   157,   157,   669,
     393,   157,   157,   157,   157,   669,   157,   157,   157,   208,
     157,    42,  1634,  1085,   865,  1803,  1813,  1846,  1300,   666,
     871,  1448,   301,  1646,  2170,  1108,  1247,   753,  1860,  1320,
    1653,   720,  1285,  1286,  1287,  1927,  1288,  1289,   425,  1290,
    1969,  1322,   669,  1132,  -267,   909,   895,   219,   917,    52,
     220,  1825,   209,  1944,   269,    13,    14,  1453,  1987,  1485,
     312,  1250,  2162,    13,    14,   721,    14,   633,  1408,   466,
    2026,  1079,  2029,  2043,  2173,   584,   601,  1129,  1420,  1273,
     587,   956,  1414,  1165,  1418,  1213,   669,  1218,  1978,   201,
     202,   203,   204,   584,  1180,  1468,  1654,  1835,   587,  1449,
    1264,  1516,   490,   491,   616,   270,  1971,  -799,   650,  1191,
    1679,  1189,  1089,  1793,  1089,   878,  1454,  1435,  1957,  1041,
    1655,   506,  1448,   963,   493,   966,  1127,  1877,   511,   271,
    1291,   990,   993,  1962, -1133,   720,   996,  1979,   519,   520,
     521,   522,   523,   524,   584,   526,   172,  1568,   533,   587,
    1638,  1490,   168,  1275,  -801,   652,  1332,   543,  1493,  1826,
    1918,  1250,  1253,  1776,  1836,  1468,  1089,   172,  1211,   721,
    2137,   272,   273,   274,   275,   276,  1981,  1278,   411,  2079,
    1052,  2125,  2126,  1274,  1058,   301,  1042,  1311,  1089,  1733,
    1729,  1807,  1260,   791,  1262,    42,    42,    42,    42,    42,
    1780,   580,   174,   277,   157,  1068,  1305,  1110,  1733,  2002,
    1705,   173,   175,   635,  2127,  1837,  1309,  1310,  1712,  1947,
    1948,  1706,   279,  1713,   988,  1979,  1945,   280,  2046,   635,
    2048,  1988,  1683,    52,    52,    52,    52,    52,  1919,   635,
     634,  1920,   499,  2027,   157,  2030,  2044,  2174,  2118,  1409,
     223,   948,   493,    13,   229,   941,   634,   942,   500,   684,
    1838,  1111,  1112,  1839,   281,   302,   634,   282,  1532,  1224,
     310,   393,   528,  1840,    13,    14,  1347,   206,   792,   224,
    2003,   207,   157,  2004,  1533, -1120, -1098,   430,  1707,   941,
     431,   942,   157,   157,   157,   157,   432,  1534,   793,   979,
    1142,   208, -1098,   980,   303,   157,  1064,  1157,  1157,  1157,
    1157,   189,   308,  1065,  1066,   157,   157,   190,   303,  1357,
     737,   311,   739,   740,   741,   742,  1342,   744,  1377,   746,
     747,  1619,  1652,  1888,  1378,  1656,   426,  1889,  1477,   529,
     530,   531,   532,  1714,   584,  1481,  1829,  1482,   598,   587,
    2093,  1640,  1829,  1188,   261,   669,   781,   635,  2141,  1681,
     288,  1685,  1348,   669,  1708,   304,   305,   306,   753,  1198,
     813,   304,   305,   306,   817,   501,   502,   442,  1401,  1339,
     602,  1340,  1341,  1219,   634,   304,   305,   306,   753,  1371,
    1641,   837,  1642,  1643,   840,   157,  1207,  1208,  1209,   443,
    1850,  1851,  2047,  1229,  2049,   851,   852,   853,   854,   457,
    1238,   857,   858,   859,   860,  1405,   861,   862,   863,    15,
     864,   262,   263,   264,   265,  1058,   504,   505,   584,   685,
    1526,  1527,  1528,   587,   458,  1368,  1285,  1286,  1287,   729,
     730,  1429,  1430,  1290,    26,   460,   461,   182,   990,   464,
     465,    28,    29,  1296,  1296,  1296,   725,   726,   557,   558,
     559,   195,   196,   197,   198,   199,   200,  1285,  1286,  1287,
      31,  1288,  1289,   560,  1290,   472,   266,   561,   562,   563,
     326,   327,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   584,   584,   304,   305,   306,   587,   587,   478,   442,
     765,   765,   788,   789,   808,   479,   573,   574,   575,   704,
     705,   706,   707,   708,  1183,   480,   267,  1185,  1186,  1187,
     481,   201,   202,   203,   204,   482,   657,   809,   973,  1323,
     810,   811,   970,  1504,   973,  1197,  1199,  1200,  1201,   483,
    1276,   988,  1247,  1247,  1331,   486,  1753,  1808,  1871,  1874,
    1951,  1871,  1676,   795,   796,   494,   797,   798,   799,   800,
     801,   802,   846,   847,   803,  1291,   228,  1344,  1345,   496,
    1525,  1010,  1011,  1818,  1119,  1112,  1349,   157,   507,  1281,
    1351,   765,   508,  1539,  1355,   157,   602,   182,  1005,  1006,
    1007,   821,   509,  1542,   654,   655,  1548,  1549,   195,   196,
     197,   198,   199,   200,  1376,   510,  1280,   821,  1251,  1252,
     513,  1142,   516,  1392,  1072,   517,  -237,   157,   518,  1157,
     527,   795,  1324,  1325,   797,   798,   799,   800,   801,   802,
    1750,   534,   803,   584,  1712,  1353,  1354,   795,   587,  1713,
     797,   798,   799,   800,   801,   802,   548,   205,   803,  1571,
    1891,  1892,   674,   552,  1096,   675,   676,   677,   678,   679,
     680,   681,   682,   312,  1885,   553,   683,  1281,  1372,  1373,
    1374,  1375,  1656,  1689,   554,  2050,   555,  2051,  2052,  2053,
    1363,  2054,  2055,  -237,  2145,  2146,  1397,   612,   613,   614,
     615,  1818,  1126,   885,  1280,   886,  2144,   887,   888,   889,
     890,  -193,  1134,  1135,  1136,  1137,   556,   462,   463,   206,
    -192,  1690,  1691,   207,   588,  1152,   594,  1285,  1286,  1287,
    2099,  1288,  1289,  -539,  1290,  1167,  1168,  1118,  1120,   596,
     685,  2134,  2135,   208,  -237,  1357,   592,   593,   905,   906,
     312,  1296,  1296,   990,   576,   577,   578,   579,  -911,  -782,
     990,  -784,  1752,  -780,  1757,   607,   608,   990,   609,  1714,
    1497,   610,   616,   618,   804,   619,  1499,   993,  1722,   493,
    1548,  1548,   621,   622,   623,  1489,   209,   624,   625,  -237,
    1865,   626,  -237,  1133,   673,   627,  1058,   628,  1517,   629,
     584,   630,  -237,   631,   885,   587,   886,   645,   887,   888,
     889,  1419,   580,   646,   647,  1223,   700,   701,   702,   703,
     704,   705,   706,   707,   708,  1291,   661,   662,   710,   711,
     712,   713,  -653,  1531,   714,   715,  -720,   727,  1762,  1765,
     732,  1765,   822,   731,   733,   735,   988,   748,   755,   738,
     757,  1613,   758,   988,   759,   767,   768,  1552,   822,   209,
     988,   182,   157,   785,  1810,   783,   784,   812,   816,  1570,
     820,   819,   830,  1560,   831,  1606,  1607,   833,  1561,   841,
     842,   843,   301,   157,  1281,   844,   856,   874,   584,   584,
     850,   584,  1744,   587,   587,  2085,   587,  1616,   875,  1617,
     881,  1618,   879,   880,  1623,   882,  1620,  1562,   650,   652,
     896,  1280,   897,   898,  -230,   899,   910,   903,   913,   917,
    1563,   916,   921,   929,   937,   922,   938,  1647,  1961,   944,
     945,   952,  -230,   954,  1870,   955,   964,  -230,  -230,   368,
    1008,  1880,  1009,   674,   -14,     1,   675,   676,   677,   678,
     679,   680,   681,   682,  1565,   444,  1564,   683,  1043,  1059,
    1843,  1044,  1046,  1062,  1063,  1070,  1852,  1853,   990,   665,
     990,  1073,   765,   765,  1552,  1078,  1086,  1623,  1711,  -230,
    1099,  -230,  1103,  1101,  1121,  1623,  1102,   675,   676,   677,
     678,   679,   680,   681,   682,     2,  1701,  1350,   683,  1104,
    1128,  1112,  1131,  1887,  1140,  1356,   445,  1153,  1138,     3,
       4,     5,     6,  1145,  1151,  1143,  1161,  1741,   669,  1184,
    1220,  1202,     7,     8,     9,    10,  1139,  1732,  1206,  1196,
    1221,    11,  -230,  -230,  -230,  1224,  1222,  1396,  1231,  1236,
    1240,   303,  1258,  1261,  1736,  1269,  1303,  1271,   301,  1560,
    1259,  1284,   685,  1973,  1561,  1317,   990,  -230,   685,  -230,
    1934,   988,  1312,   988,  1319,  -783,  -230,  -230,  -785,  1313,
    1321,   240,  1326,   446,   447,   448,   449,  -230,  -781,    12,
    -230,  1250,  1334,  1562,  1336,  -230,  1338,  1364,  1343,  1352,
    -230,  1369,  1366,  1370,   674,  1147,  1563,   675,   676,   677,
     678,   679,   680,   681,   682,  1380,  1381,  1507,   683,  1385,
     241,  1393,  1395,   242,  1407,  1785,  1399,   450,    13,    14,
    2016,  1400,  1406,   451,   452,  1402,  1809,  1416,   453,   696,
     697,   698,  1564,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,  1403,  1404,  1410,  1411,  1412,  1423,   179,
     268,  1415,  -230,  1830,  1831,  1296,   990,  -815,   243,  1428,
     244,  1422,  1552,  1424,  1425,   454,  1438,  1426,  1434,  1436,
     245,  1437,  1458,  1451,  1469,    15,    16,  1462,  1456,  2018,
    1463,  1470,  1471,  1479,  1476,    17,    18,  2024,    19,  1486,
      20,    21,    22,    23,  1487,    24,  1488,    25,  1492,  1494,
      26,    27,  1849,  1495,  2045,  1498,  1501,    28,    29,  1856,
     269,  1502,  1887,  1509,  1887,  1510,  2111,  1511,  1513,  2107,
     411,  1867,  1514,    30,  1518,  1519,    31,   685,  1520,  1521,
    1523,  1524,  1540,  1543,  1550,  1606,  1551,  1572,  2116,  1575,
    1606,   885,   923,   886,   924,   887,   888,   889,   925,   988,
    1573,  1609,  1623,  1899,   584,  1611,  1624,  1608,  1625,   587,
    2017,   270,  2100,  1610,    32,  1639,  1635,  1663,  1651,  1913,
    1649,  1650,  1566,  1664,  1665,   246,   247,   248,   249,   250,
     251,  1680,  1686,  1693,  1702,   271,  1698,   252,  1699,  1703,
    1704,  1709,  1710,  1614,  1723,   240,  1729,  1730,  1731,  1726,
    1935,  1733,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,  1737,   393,  1738,   157,  1739,  1742,  1743,   253,
    1758,  1766,  1768,  1745,  1760,  1761,   580,   272,   273,   274,
     275,   276,   254,  2090,   241,  1769,  1771,   242,   255,  1772,
    1867,   256,  2140,  1773,   643,   644,  1774,  1778,  1787,  1779,
     648,  1783,  1777,  1782,  1606,   658,  1788,   602,  1789,   277,
    1790,   674,  1791,  1792,   675,   676,   677,   678,   679,   680,
     681,   682,   278,  2153,  1508,   683,  1796,  1800,   279,  1823,
    -174,  1776,   243,   280,   244,   683,  1827,  1824,  1832,  1844,
    1854,  1569,   584,  1857,   245,  1997,  1864,   587,  1868,  1869,
       3,     4,     5,     6,  1881,  1890,  1895,  1908,  1911,  1912,
    1915,  1916,   157,     7,     8,     9,    10,  1917,  1930,  1931,
     281,  1849,    11,   282,  1936,  2023,  1932,  1937,  1929,  1938,
    1939,  1940,  1943,  2172,  2028,  1946,  1942,  1949,  1954,  1606,
    1955,  1956,  2175,   666,  1606,  1970,  1958,   751,  1964,  1974,
    1867,  1975,  1867,  1977,  1976,   751,  1984,  1985,  1992,  1989,
    1994,  1322,  1606,  1999,  1991,  2070,  1748,  1995,  2009,  2015,
    1996,  2020,  2059,  2025,  2036,  2031,  2034,  2061,  2040,  2077,
    2041,  2057,  2062,  2073,  2076,  2003,  2089,  2060,  2088,  2094,
    2091,  2096,  2066,  2103,  2121,  2105,  2108,  2067,  2109,   246,
     247,   248,   249,   250,   251,  2129,  2068,  2117,  1606,    13,
      14,   252,  2122,  2120,  2133,  2136,  2138,  2147,  1606,  2139,
     602,  2149,  2151,  2145,  2165,  2146,  2112,  2113,  2114,  2115,
    2167,  2168,  1384,   782,  1734,  1522,  1335,   776,  2124,   485,
     484,  1109,   299,   253,  1358,  1735,  1833,  2164,  2150,  2148,
    2143,  2123,  1884,  2158,  1872,  1966,  1967,  1983,  2166,  1767,
    1982,  1700,   255,  1069,   165,   256,    15,    16,   428,   780,
    1728,  2019,  2022,  2098,  1725,  1724,    17,    18,   902,    19,
    1606,  1061,  1606,  1667,   766,  1666,   734,  1333,  1214,  1491,
    1811,    26,    27,  1500,   995,  1244,  1302,  1212,    28,    29,
    1427,  1013,  1814,  1071,  -174,  1016,  1928,  1045,  1263,  1015,
     293,   930,   932,   932,    30,  2156,   869,    31,  1606,   930,
     915,   932,   920,   974,  1906,  1266,  1267,  2069,  2059,  1781,
    1606,  1645,  1905,  2061,  1914,   960,   961,   962,  2062,  1993,
    1633,  1784,  2075,  2060,  1636,   950,  2082,     0,  2066,     0,
       0,   976,   751,  2067,     0,    32,     0,     0,     0,     0,
     685,     0,  2068,     0,     0,  1004,  1004,  1004,  1004,     0,
       0,     0,     0,     0,     0,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,     0,
    1674,     0,     0,     0,  1050,  1050,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   686,   687,
     688,   689,   690,     0,     0,  1941,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,   172,   176,   981,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,  2014,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,  1675,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,    13,  1277,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1232,
       0,     0,     0,   930,     0,     0,     0,     0,     0,   932,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1265,   119,   120,  1268,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,   751,   751,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,  1278,     0,
       0,   145,   146,   147,   148,     0,   149,  1050,   150,  1050,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,   751,   154,   155,   557,   558,   559,     0,   751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     560,     0,   983,     0,   561,   562,   563,   326,   327,   564,
     565,   566,   567,   568,   569,   570,   571,   572,     0,     0,
       0,     0,   557,   558,   559,     0,     0,     0,     0,     0,
       0,     0,     0,   573,   574,   575,     0,   560,     0,     0,
       0,   561,   562,   563,   326,   327,   564,   565,   566,   567,
     568,   569,   570,   571,   572,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   557,   558,   559,     0,
     573,   574,   575,     0,     0,     0,     0,     0,     0,     0,
       0,   560,     0,     0,     0,   561,   562,   563,   326,   327,
     564,   565,   566,   567,   568,   569,   570,   571,   572,     0,
       0,     0,   902,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1536,  1537,   573,   574,   575,   557,   558,   559,
       0,     0,  1431,     0,     0,     0,   932,     0,     0,     0,
       0,  1442,   560,     0,     0,     0,   561,   562,   563,   326,
     327,   564,   565,   566,   567,   568,   569,   570,   571,   572,
       0,     0,     0,     0,  1472,  1473,  1474,  1475,     0,     0,
       0,     0,     0,     0,   751,   573,   574,   575,     0,     0,
    1480,   751,     0,   751,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,  1328,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1050,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,   176,   981,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,   576,   577,   578,   579,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,   577,
     578,   579,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,  1628,     0,
       0,  1442,   117,     0,   982,  1763,   118,     0,     0,  1232,
       0,     0,   576,   577,   578,   579,   930,     0,     0,   930,
       0,     0,     0,     0,     0,     0,     0,     0,   751,   751,
     751,   751,     0,     0,     0,     0,     0,     0,   751,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,   576,   577,   578,   579,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
    1256,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,   685,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   983,   686,   687,   688,   689,   690,     0,     0,     0,
     691,   692,   693,   694,   695,   696,   697,   698,  1442,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,   685,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,     0,  1805,     0,     0,  1806,     0,     0,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   902,     0,     0,     0,   930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   930,   686,
     687,   688,   689,   690,   930,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   686,   687,   688,   689,
     690,     0,     0,     0,   691,   692,   693,   694,   695,   696,
     697,   698,     0,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1257,  1900,  1628,
    1628,     0,  1628,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   930,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,   930,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,   172,   176,  1254,   177,   178,     0,  1960,     0,
       0,     0,     0,     0,  1965,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,  1270,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,    13,
     632,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1900,   354,
     355,  1628,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,   930,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
    2102,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,   633,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     352,     0,   118,   353,     0,   998,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   999,  1000,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,   172,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,    13,
     632,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,  1749,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,   359,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,  1216,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,   336,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     352,     0,   118,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     642,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1815,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,  1816,     0,     0,     0,
       0,     0,     0,  1817,     0,     0,     0,     0,   312,   369,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,     0,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,   172,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     760,   761,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,   312,     0,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,   324,   325,     0,   369,
      78,    79,     0,     0,    80,   326,   327,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,   328,   329,   330,   331,   332,   333,   334,     0,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,   335,    84,     0,     0,     0,   176,     0,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,   337,
       0,     0,    93,   338,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,   339,    98,    99,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,     0,
     345,   346,   100,   101,   347,   348,   102,   349,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   350,   111,   112,
     113,   114,     0,   115,   351,   116,     0,     0,     0,     0,
       0,   117,     0,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1047,
       0,     0,   354,   355,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,  1048,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,  1049,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   361,
     362,   363,   364,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   365,     0,     0,     0,   366,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,   324,
     325,     0,   369,    78,    79,     0,     0,    80,   326,   327,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,   328,   329,   330,   331,   332,
     333,   334,     0,     0,    83,     0,     0,   284,   285,   286,
       0,     0,     0,     0,   335,    84,     0,     0,     0,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,   337,     0,     0,    93,   338,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,   339,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     343,   344,  1627,   345,   346,   100,   101,   347,   348,   102,
     349,   103,   104,   105,   106,   107,   108,   109,   938,   110,
     350,   111,   112,   113,   114,     0,   115,   351,   116,     0,
       0,     0,     0,     0,   117,     0,   642,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,   355,     0,     0,     0,
     356,   357,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   361,   362,   363,   364,     0,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,   365,     0,
       0,     0,   366,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,   369,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,  1816,     0,     0,     0,     0,
       0,     0,  1817,     0,     0,     0,     0,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,  2083,     0,     0,     0,     0,
       0,     0,  2084,     0,     0,     0,     0,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,   117,     0,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,   657,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,   324,   325,     0,   369,    78,
      79,     0,     0,    80,   326,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,   328,   329,   330,   331,   332,   333,   334,     0,     0,
      83,     0,     0,   284,   285,   286,     0,     0,     0,     0,
     335,    84,     0,     0,     0,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,   337,     0,
       0,    93,   338,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,   339,    98,    99,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,   343,   344,     0,   345,
     346,   100,   101,   347,   348,   102,   349,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   350,   111,   112,   113,
     114,     0,   115,   351,   116,     0,     0,     0,     0,     0,
     117,     0,   642,   749,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,   355,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   361,   362,
     363,   364,     0,   149,     0,   150,     0,     0,     0,     0,
     151,     0,     0,     0,   365,     0,     0,     0,   366,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,   324,   325,
       0,   369,    78,    79,     0,     0,    80,   326,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,   328,   329,   330,   331,   332,   333,
     334,     0,     0,    83,     0,     0,   284,   285,   286,     0,
       0,     0,     0,   335,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   337,     0,     0,    93,   338,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   339,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   343,
     344,     0,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,   117,     0,   642,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,  1245,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   361,   362,   363,   364,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,   365,     0,     0,
       0,   366,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,   369,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
     172,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,   117,     0,   760,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,   356,   357,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   361,   362,   363,   364,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
     365,     0,     0,     0,   366,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,     0,   324,   325,     0,   369,    78,    79,
       0,     0,    80,   326,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
     328,   329,   330,   331,   332,   333,   334,     0,     0,    83,
       0,     0,   284,   285,   286,     0,     0,     0,     0,   335,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
    1440,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   337,     0,     0,
      93,   338,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   339,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   343,   344,     0,   345,   346,
     100,   101,   347,   348,   102,   349,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   350,   111,   112,   113,   114,
       0,   115,   351,   116,     0,     0,     0,     0,     0,   117,
       0,   642,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,   355,     0,     0,     0,   356,   357,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
    1441,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   361,   362,   363,
     364,     0,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,   365,     0,     0,     0,   366,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,   324,   325,     0,
     369,    78,    79,     0,     0,    80,   326,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,   328,   329,   330,   331,   332,   333,   334,
       0,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
       0,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,   117,     0,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,  1753,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     324,   325,     0,   369,    78,    79,     0,     0,    80,   326,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   328,   329,   330,   331,
     332,   333,   334,     0,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,  1627,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,   117,     0,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,   356,   357,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   361,   362,   363,   364,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,   365,
       0,     0,     0,   366,   367,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,     0,   369,    78,    79,     0,
       0,    80,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,   328,
     329,   330,   331,   332,   333,   334,     0,     0,    83,     0,
       0,   284,   285,   286,     0,     0,     0,     0,   335,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,   337,     0,     0,    93,
     338,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   339,    98,    99,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,     0,   345,   346,   100,
     101,   347,   348,   102,   349,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   350,   111,   112,   113,   114,     0,
     115,   351,   116,     0,     0,     0,     0,     0,   117,     0,
     642,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   361,   362,   363,   364,
       0,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,   365,     0,     0,     0,   366,   367,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,    78,    79,   154,   155,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     3,
       4,  1576,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1577,     0,     0,    86,     0,
       0,  1578,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,   685,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,  2037,     0,     0,  1583,  2038,  -352,
       0,     0,     0,     0,    32,    72,    73,    74,    75,    76,
      77,   152,   153,     0,     0,     0,     0,   154,   155,     0,
    1670,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,  1203,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     3,     4,  1576,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1577,     0,     0,    86,     0,     0,  1578,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,   685,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,  1204,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,    15,   122,   123,     0,     0,     0,     0,     0,  1579,
     124,    17,  1580,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,    26,    27,     0,     0,
       0,     0,   135,    28,    29,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,    30,
     142,  1581,    31,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,     0,     0,     0,  1582,     0,     0,
       0,     0,     0,  1583,     0,     0,     0,     0,  1584,     0,
      32,    72,    73,    74,    75,    76,    77,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     3,     4,  1576,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1577,     0,     0,
      86,     0,     0,  1578,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     685,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,   686,   687,
     688,   689,   690,     0,     0,     0,   691,   692,   693,   694,
     695,   696,   697,   698,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,    15,   122,   123,
       0,     0,     0,     0,     0,  1882,   124,    17,  1580,  1883,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,    26,    27,     0,     0,     0,     0,   135,    28,
      29,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,    30,   142,  1581,    31,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,  1478,   150,     0,     0,     0,     0,   151,
       0,     0,     0,  1582,     0,     0,     0,     0,     0,  1583,
       0,     0,     0,     0,  1584,     0,    32,    72,    73,    74,
      75,    76,    77,   152,   153,     0,     0,     0,     0,   154,
     155,     0,     0,     0,    78,    79,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     3,     4,  1576,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1577,     0,     0,    86,     0,     0,  1578,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,    15,   122,   123,     0,     0,     0,     0,
       0,     0,   124,    17,  1580,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,    26,    27,
       0,     0,     0,     0,   135,    28,    29,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,    30,   142,  1581,    31,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,  2035,
     150,     0,     0,     0,     0,   151,     0,     0,     0,  1582,
       0,     0,     0,     0,     0,  1583,     0,  -352,     0,     0,
       0,     0,    32,    72,    73,    74,    75,    76,    77,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,     0,
      78,    79,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     3,     4,  1576,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1577,
       0,     0,    86,     0,     0,  1578,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   685,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,     0,   124,    17,
    1580,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
      31,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,   970,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,     0,     0,
       0,  1583,     0,     0,     0,     0,     0,  2110,    32,    72,
      73,    74,    75,    76,    77,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     3,
       4,  1576,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1577,     0,     0,    86,     0,
       0,  1578,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,   685,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,  1874,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,     0,     0,     0,  1583,    72,    73,
      74,    75,    76,    77,    32,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,    78,    79,   154,   155,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     3,     4,
    1576,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1577,     0,     0,    86,     0,     0,
    1578,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   685,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,    17,  1580,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,   709,
      27,     0,     0,     0,     0,   135,    28,    29,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,    30,   142,  1581,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
    1582,     0,     0,     0,     0,     0,  1583,     0,     0,     0,
       0,  2058,     0,    32,    72,    73,    74,    75,    76,    77,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     3,     4,  1576,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1577,     0,     0,    86,     0,     0,  1578,     0,     0,     0,
       0,     0,    88,     0,  1306,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,   685,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
     686,   687,   688,   689,   690,     0,     0,     0,   691,   692,
     693,   694,   695,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
      17,  1580,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,    27,     0,     0,     0,
       0,   135,    28,    29,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,    30,   142,
    1581,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,  1582,     0,     0,     0,
       0,     0,  1583,     0,     0,     0,     0,     0,  2157,    32,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
    1672,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   685,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,  1673,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,     0,     0,     0,   691,
     692,   693,   694,   695,   696,   697,   698,     0,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   296,   248,   249,   250,   251,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   297,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,   284,   285,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,   685,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,  1255,   288,     0,   118,     0,     0,     0,     0,
     686,   687,   688,   689,   690,     0,     0,     0,   691,   692,
     693,   694,   695,   696,   697,   698,     0,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   289,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   290,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,   685,     0,   145,
     291,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,  1626,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,   686,   687,   688,   689,   690,
      83,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,    84,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,   685,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,  1671,   115,     0,   777,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,     0,   686,
     687,   688,   689,   690,     0,     0,     0,   691,   692,   693,
     694,   695,   696,   697,   698,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,   446,   447,   448,   449,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   778,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,  1054,  1055,  1056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,     0,    98,    99,     0,     0,     0,     0,   685,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   686,   687,   688,
     689,   690,     0,     0,     0,   691,   692,   693,   694,   695,
     696,   697,   698,  1057,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     0,
       0,    80,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,   685,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,  1677,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
     616,     0,   118,     0,     0,     0,     0,   686,   687,   688,
     689,   690,     0,     0,     0,   691,   692,   693,   694,   695,
     696,   697,   698,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,  1054,  1055,  1056,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,   685,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,  1924,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
       0,     0,     0,   691,   692,   693,   694,   695,   696,   697,
     698,     0,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
    1054,  1055,  1056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,  1925,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,     0,
       0,     0,   691,   692,   693,   694,   695,   696,   697,   698,
       0,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,   685,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,  1926,   115,     0,   116,     0,
       0,     0,     0,     0,   117,     0,    14,     0,   118,     0,
       0,     0,     0,   686,   687,   688,   689,   690,     0,     0,
       0,   691,   692,   693,   694,   695,   696,   697,   698,     0,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,  1386,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
    1357,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,   488,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   116,     0,     0,     0,     0,
       0,   117,     0,   288,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,    80,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   670,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
       0,   115,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,     0,     0,     0,     0,   151,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     0,
       0,    80,     0,   152,   153,     0,     0,     0,     0,   154,
     155,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,  1357,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,     0,   115,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,     0,   150,     0,     0,     0,     0,   151,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,    80,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
       0,   102,     0,   103,   104,   105,   106,   107,   108,   109,
       0,   110,     0,   111,   112,   113,   114,     0,   115,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   193,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     834,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,     0,   142,     0,     0,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,   152,
     153,     0,     0,     0,     0,   154,   155,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,  1294,
       0,     0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       4,    37,   310,    38,   425,     9,     0,   441,   172,    13,
     171,     0,   823,   229,    18,    19,     0,   791,   815,   231,
     578,     0,   183,    27,  1125,   715,     0,   621,    25,   987,
     618,     0,   721,    37,    38,   629,    14,   934,   336,   936,
       0,   202,   203,  1428,   623,     0,   820,   208,  1120,    11,
     947,   300,   631,   352,  1008,  1009,   458,     3,     0,   594,
      28,   457,   665,     3,   478,   490,   594,    71,   577,   312,
     313,   314,   982,    11,   989,  1147,    14,   842,   843,   844,
     469,    16,  1240,   224,   797,   798,   352,   353,   668,   112,
     803,  1399,   175,    84,     0,  1716,    59,   254,   176,   176,
     112,   300,   368,    86,     3,   191,   300,    18,    27,   112,
       5,     6,     7,     8,     9,    10,  1501,  1498,   361,  1382,
     191,  1758,   256,  1382,  1509,   175,    20,     0,   176,    11,
      24,    25,   112,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   533,   279,   111,    68,  1986,    67,
      42,    43,    84,  1779,     0,   653,  1782,   161,   162,    84,
      54,    55,  1501,   167,   118,   119,   409,   410,    89,   255,
    1509,   740,   741,   742,   160,   274,   275,   276,   110,   278,
     279,   280,   173,   282,   255,    67,   111,    56,   153,   193,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     755,   225,   226,   227,   184,   185,   186,   187,   188,   184,
     185,   186,   187,   188,  1871,   175,  1857,   241,     3,   176,
    1877,   245,   184,   185,   186,   187,   188,   116,   252,   253,
     161,   229,   174,   496,   222,   553,   555,   175,   262,   263,
     264,   265,   266,   267,   268,   269,   662,   350,   272,   797,
     798,   349,   349,   277,   310,   803,   175,   281,   184,   185,
     186,   187,   188,   112,   288,   289,   290,   499,   857,   858,
     859,   860,   174,   175,    56,  1558,   169,   596,    65,  1558,
     350,   349,   723,  1461,  2142,  1686,   310,   311,   607,   608,
     174,   184,   185,   186,   187,   188,   718,  1275,    85,     5,
       6,     7,     8,     9,    10,  1962,   349,    65,    66,    67,
      68,   294,   890,   632,  1971,   915,   340,   349,   184,   185,
     186,   187,   188,   642,  1241,   486,   349,  1244,   267,   943,
     507,   508,   509,   510,   236,    42,    43,  1047,   657,  1049,
     517,  1276,   523,   349,   347,  1991,   632,  1277,   372,   349,
     949,   785,   786,   175,    67,   910,    67,   766,   324,   383,
     805,   276,   891,   323,   175,   883,   884,   322,  1153,   425,
    1103,  1776,   354,   135,   112,   116,   175,    84,  2035,   174,
    2037,   176,   112,   175,   112,   267,  2027,   673,   674,   341,
       4,   111,   349,   656,   346,   284,   354,   683,   176,   313,
     105,    65,    66,   305,    68,    19,   111,   349,   527,   194,
     195,   349,   436,    27,   286,   156,   176,   441,   267,   176,
     444,   176,   446,   447,   448,   449,   450,   451,   452,   453,
     454,  1759,   176,   191,   458,   349,  1764,   170,   171,   172,
      82,   760,   851,   852,   853,   854,     3,   175,   153,   176,
      11,   176,   861,   862,   863,   160,   480,    71,    67,   352,
      80,   174,   175,   174,   175,   349,    67,   465,    67,   256,
     494,    21,    22,     3,   498,     0,  1568,   349,   260,   261,
    2137,   181,   181,  1072,   176,   748,   352,   176,    16,   477,
     514,   515,   516,     3,   518,   253,  1470,  1471,   176,   257,
     176,   556,   176,   176,    56,   529,   530,   531,   532,   181,
     441,   535,   536,   537,   538,   181,   540,   541,   542,   277,
     544,     0,  1439,   755,   548,   176,   176,   176,   350,   267,
     554,   271,   556,  1450,   254,   804,   952,   959,   176,   350,
    1457,   254,    70,    71,    72,   176,    74,    75,   162,    77,
    1878,   350,   181,   822,   349,  1103,   580,   263,   350,     0,
     266,     3,   320,   176,   116,   174,   175,    85,   176,  1278,
       3,   349,   279,   174,   175,   288,   175,   288,  1167,   193,
     176,   111,   176,   176,   176,   804,   914,   819,  1196,   349,
     804,   176,   349,   257,   349,   913,   181,   916,   284,    65,
      66,    67,    68,   822,   873,   349,   127,   111,   822,   349,
     309,  1321,   226,   227,   175,   167,   316,   174,   175,   882,
     353,    54,   349,   328,   349,   175,   144,  1226,  1864,   111,
     151,   245,   271,   650,   632,   652,   817,   309,   252,   191,
     168,   665,   666,   309,   349,   254,   670,   333,   262,   263,
     264,   265,   266,   267,   873,   269,    67,   349,   272,   873,
     349,  1284,    88,   981,   174,   175,  1082,   281,  1291,   111,
      84,   349,   958,   349,   178,   349,   349,    67,   910,   288,
     309,   233,   234,   235,   236,   237,   284,   288,   712,  2004,
     714,    39,    40,   979,   718,   719,   178,  1015,   349,   349,
     349,  1679,   965,   174,   967,   184,   185,   186,   187,   188,
     349,   349,   181,   265,   738,   732,  1002,   230,   349,    84,
     100,   719,   270,   616,    72,   229,  1012,  1013,   129,  1850,
    1851,   111,   284,   134,   665,   333,   349,   289,  1974,   632,
    1976,   349,   270,   184,   185,   186,   187,   188,   162,   642,
     616,   165,   305,   349,   778,   349,   349,   349,  2073,  1168,
      59,   116,   760,   174,   175,   154,   632,   156,   321,   383,
     274,   284,   285,   277,   326,   135,   642,   329,   258,   160,
     279,   712,   167,   287,   174,   175,  1104,   253,   259,    88,
     155,   257,   816,   158,   274,   176,   160,    89,   178,   154,
      92,   156,   826,   827,   828,   829,    98,   287,   279,   349,
     834,   277,   176,   353,   103,   839,    89,   841,   842,   843,
     844,     5,   135,    96,    97,   849,   850,    11,   103,   230,
     444,   350,   446,   447,   448,   449,  1099,   451,    57,   453,
     454,  1419,  1456,   239,    63,  1459,   192,   243,  1264,   234,
     235,   236,   237,   254,  1073,  1271,  1708,  1273,   914,  1073,
     176,   111,  1714,   880,   167,   181,   480,   760,   176,  1492,
     175,  1494,  1104,   181,   254,   170,   171,   172,  1300,   896,
     494,   170,   171,   172,   498,   221,   222,   176,  1157,  1095,
     914,  1097,  1098,   917,   760,   170,   171,   172,  1320,  1131,
     150,   515,   152,   153,   518,   929,   904,   905,   906,   327,
    1727,  1728,  1975,   937,  1977,   529,   530,   531,   532,   175,
     944,   535,   536,   537,   538,  1161,   540,   541,   542,   231,
     544,   234,   235,   236,   237,   959,   221,   222,  1157,   136,
    1349,  1350,  1351,  1157,   350,  1126,    70,    71,    72,    90,
      91,  1220,  1221,    77,   256,   184,   185,   981,   982,   188,
     175,   263,   264,   987,   988,   989,    83,    84,     5,     6,
       7,     5,     6,     7,     8,     9,    10,    70,    71,    72,
     282,    74,    75,    20,    77,   275,   289,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,  1220,  1221,   170,   171,   172,  1220,  1221,   286,   176,
    1008,  1009,   260,   261,   256,   349,    53,    54,    55,   216,
     217,   218,   219,   220,   875,   270,   329,   878,   879,   880,
     349,    65,    66,    67,    68,   271,   308,   279,   310,  1063,
     282,   283,   308,  1306,   310,   896,   897,   898,   899,   271,
     981,   982,  1468,  1469,  1078,    88,   308,  1680,   310,   308,
    1854,   310,  1478,   117,   118,   267,   120,   121,   122,   123,
     124,   125,   331,   332,   128,   168,    11,  1101,  1102,   267,
    1343,   101,   102,  1697,   284,   285,  1110,  1111,   284,   982,
    1114,  1089,   284,  1362,  1118,  1119,  1120,  1121,   676,   677,
     678,    87,   284,  1366,   194,   195,  1369,  1370,     5,     6,
       7,     8,     9,    10,  1138,   284,   982,    87,   186,   187,
     313,  1145,   326,  1147,   738,   284,   111,  1151,   235,  1153,
     235,   117,    94,    95,   120,   121,   122,   123,   124,   125,
    1581,   313,   128,  1362,   129,    90,    91,   117,  1362,   134,
     120,   121,   122,   123,   124,   125,   228,   191,   128,  1395,
     335,   336,   179,   303,   778,   182,   183,   184,   185,   186,
     187,   188,   189,     3,     4,   179,   193,  1070,  1134,  1135,
    1136,  1137,  1796,  1502,   179,  1978,   179,  1980,  1981,  1982,
    1121,   333,   334,   178,    65,    66,  1152,   331,   332,   333,
     334,  1815,   816,   295,  1070,   297,   176,   299,   300,   301,
     302,   284,   826,   827,   828,   829,   349,   186,   187,   253,
     284,  1507,  1508,   257,   105,   839,   304,    70,    71,    72,
    2024,    74,    75,    76,    77,   849,   850,   810,   811,   290,
     136,  2097,  2098,   277,   229,   230,   305,   306,   592,   593,
       3,  1275,  1276,  1277,   291,   292,   293,   294,     3,   175,
    1284,   175,  1581,   175,  1583,   175,   175,  1291,    22,   254,
    1294,   175,   175,   175,   328,   127,  1300,  1301,  1541,  1277,
    1543,  1544,   175,   175,   175,  1283,   320,   175,   175,   274,
    1744,   175,   277,  2124,   192,   175,  1320,   175,  1322,   175,
    1519,   175,   287,   175,   295,  1519,   297,   175,   299,   300,
     301,   302,   349,   175,   175,   929,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   168,   175,   175,   339,   350,
     349,   175,   349,  1357,   175,   175,   339,   286,  1607,  1608,
      99,  1610,   328,    93,   349,   328,  1277,   268,   306,   235,
     135,  1406,   135,  1284,   135,   131,   131,  1381,   328,   320,
    1291,  1385,  1386,   112,  1683,   113,   113,   176,   267,  1393,
     174,   305,   239,  1382,   174,  1399,  1400,   178,  1382,   175,
     175,   175,  1406,  1407,  1277,   175,   107,   175,  1607,  1608,
     235,  1610,  1576,  1607,  1608,  2009,  1610,  1414,   175,  1416,
      38,  1418,   175,   175,  1428,   175,  1423,  1382,   175,   175,
     175,  1277,   175,   175,   111,   175,   305,   169,   179,   350,
    1382,   179,    23,   113,   240,   176,   157,  1451,  1869,   240,
       3,   175,   129,   176,  1753,   176,   174,   134,   135,   352,
     175,  1760,   175,   179,     0,     1,   182,   183,   184,   185,
     186,   187,   188,   189,  1385,   116,  1382,   193,   175,   288,
    1723,   207,   176,    83,    80,   175,  1729,  1730,  1492,   112,
    1494,   175,  1470,  1471,  1498,   350,   245,  1501,  1534,   176,
     262,   178,   105,   286,   112,  1509,   278,   182,   183,   184,
     185,   186,   187,   188,   189,    51,  1520,  1111,   193,   174,
     321,   285,   174,  1766,   107,  1119,   167,   175,   240,    65,
      66,    67,    68,   228,   270,   254,   328,  1572,   181,    23,
     328,   349,    78,    79,    80,    81,   266,  1551,   105,   286,
     349,    87,   229,   230,   231,   160,   112,  1151,   175,   349,
     148,   103,   176,   176,  1568,   319,   110,   349,  1572,  1558,
     292,   349,   136,  1881,  1558,   176,  1580,   254,   136,   256,
    1823,  1492,   111,  1494,   176,   175,   263,   264,   175,   340,
     349,    17,    89,   234,   235,   236,   237,   274,   175,   135,
     277,   349,   266,  1558,   112,   282,   263,   111,   262,    91,
     287,   112,   322,   262,   179,   175,  1558,   182,   183,   184,
     185,   186,   187,   188,   189,    20,   273,   192,   193,   236,
      56,   100,   328,    59,   270,  1639,   176,   278,   174,   175,
    1939,   349,   330,   284,   285,   176,  1682,   349,   289,   207,
     208,   209,  1558,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   176,   176,   176,   176,   176,   349,  1580,
      56,   176,   349,  1709,  1710,  1679,  1680,   286,   104,   175,
     106,   176,  1686,   176,   176,   326,   349,   176,   176,   176,
     116,   176,   105,   328,   175,   231,   232,   176,   349,  1942,
     163,   175,   175,   319,   303,   241,   242,  1950,   244,   176,
     246,   247,   248,   249,   176,   251,   176,   253,    76,    76,
     256,   257,  1726,    73,  1973,   175,   105,   263,   264,  1733,
     116,   109,  1975,   105,  1977,   176,  2044,   103,   176,  2038,
    1744,  1745,   176,   279,   176,   349,   282,   136,   350,   271,
     271,    16,   328,   112,   270,  1759,   279,   175,  2057,   176,
    1764,   295,   296,   297,   298,   299,   300,   301,   302,  1680,
     270,   243,  1776,  1777,  1973,   174,   176,   238,   176,  1973,
    1941,   167,  2025,   238,   320,   328,   254,   286,   176,  1793,
     145,   145,  1386,   176,   176,   221,   222,   223,   224,   225,
     226,    76,   175,   105,   336,   191,   176,   233,   176,   279,
     254,   269,   269,  1407,   349,    17,   349,   240,     3,   175,
    1824,   349,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   272,  1744,     3,  1839,   174,    78,   239,   265,
     317,     5,   229,   240,   315,   351,   349,   233,   234,   235,
     236,   237,   278,  2014,    56,   338,   176,    59,   284,   176,
    1864,   287,  2111,   176,   354,   355,   176,   175,   270,   349,
     360,   176,   350,   349,  1878,   365,   270,  1881,   270,   265,
     270,   179,   176,   176,   182,   183,   184,   185,   186,   187,
     188,   189,   278,  2136,   192,   193,   349,   164,   284,   262,
     326,   349,   104,   289,   106,   193,   111,   278,   130,    84,
     174,   174,  2111,   175,   116,  1919,   240,  2111,   175,   175,
      65,    66,    67,    68,   175,   271,   113,   111,   111,   111,
     270,   270,  1936,    78,    79,    80,    81,   176,   344,   344,
     326,  1945,    87,   329,   277,  1949,   342,   328,   333,   111,
     175,   269,   230,  2165,  1958,     3,   349,   278,   173,  1963,
      86,    86,  2174,   267,  1968,   135,   350,   457,   319,   240,
    1974,     5,  1976,     5,   240,   465,   337,   308,   156,   328,
     153,   350,  1986,     3,   349,  1989,  1580,   153,   192,   131,
     158,    60,  1986,   262,   319,   176,   307,  1986,   135,  2003,
     319,   175,  1986,   161,   158,   155,   333,  1986,   345,   114,
     175,    61,  1986,   135,   343,   307,   319,  1986,   319,   221,
     222,   223,   224,   225,   226,   270,  1986,   317,  2032,   174,
     175,   233,   344,   333,    62,   262,   313,   270,  2042,   315,
    2044,   270,   325,    65,   175,    66,  2050,  2051,  2052,  2053,
     135,    41,  1145,   481,  1558,  1336,  1092,   479,  2091,   222,
     221,   805,    38,   265,  1120,  1568,  1714,  2146,  2131,  2130,
    2123,  2090,  1764,  2142,  1755,  1876,  1876,  1893,  2154,  1610,
    1892,  1519,   284,   733,     8,   287,   231,   232,   165,   480,
    1546,  1945,  1948,  2022,  1544,  1543,   241,   242,   588,   244,
    2104,   723,  2106,  1469,   466,  1468,   436,  1089,   914,  1288,
    1685,   256,   257,  1301,   669,   951,   991,   911,   263,   264,
    1202,   682,  1693,   735,   326,   684,  1815,   712,   968,   683,
      37,   621,   622,   623,   279,  2139,   552,   282,  2142,   629,
     599,   631,   608,   660,  1782,   972,   972,  1988,  2142,  1631,
    2154,  1449,  1780,  2142,  1796,   645,   646,   647,  2142,  1913,
    1438,  1638,  2000,  2142,  1441,   630,  2008,    -1,  2142,    -1,
      -1,   661,   662,  2142,    -1,   320,    -1,    -1,    -1,    -1,
     136,    -1,  2142,    -1,    -1,   675,   676,   677,   678,    -1,
      -1,    -1,    -1,    -1,    -1,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,    -1,
     176,    -1,    -1,    -1,   714,   715,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,  1839,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,  1936,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   939,
      -1,    -1,    -1,   943,    -1,    -1,    -1,    -1,    -1,   949,
      -1,    -1,   952,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     970,   221,   222,   973,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,  1008,  1009,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,   288,    -1,
      -1,   291,   292,   293,   294,    -1,   296,  1047,   298,  1049,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,  1082,   333,   334,     5,     6,     7,    -1,  1089,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,   352,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,  1202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    53,    54,    55,     5,     6,     7,
      -1,    -1,  1222,    -1,    -1,    -1,  1226,    -1,    -1,    -1,
      -1,  1231,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,  1254,  1255,  1256,  1257,    -1,    -1,
      -1,    -1,    -1,    -1,  1264,    53,    54,    55,    -1,    -1,
    1270,  1271,    -1,  1273,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,   176,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1321,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,   291,   292,   293,   294,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,  1438,    -1,
      -1,  1441,   173,    -1,   175,   284,   177,    -1,    -1,  1449,
      -1,    -1,   291,   292,   293,   294,  1456,    -1,    -1,  1459,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1468,  1469,
    1470,  1471,    -1,    -1,    -1,    -1,    -1,    -1,  1478,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,   291,   292,   293,   294,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
     112,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,   136,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,   194,   195,   196,   197,   198,    -1,    -1,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,  1638,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,    -1,
      -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1670,    -1,  1672,    -1,    -1,  1675,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1693,    -1,    -1,    -1,  1697,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1708,   194,
     195,   196,   197,   198,  1714,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   194,   195,   196,   197,
     198,    -1,    -1,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,  1778,  1779,
    1780,    -1,  1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1796,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,  1815,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    68,   349,    70,    71,    -1,  1868,    -1,
      -1,    -1,    -1,    -1,  1874,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,   349,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1988,   194,
     195,  1991,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,  2009,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
    2030,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,   288,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,   178,    -1,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,   254,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   354,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,   311,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   354,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    -1,   165,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
     199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   354,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,   308,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   354,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,   175,   176,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,   307,    -1,    -1,    -1,   311,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   354,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,    -1,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,   163,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   354,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,    -1,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,
      -1,    -1,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   354,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,    -1,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
     254,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     354,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,   308,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,   354,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,   163,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   354,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,   311,   312,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   328,    -1,    -1,    22,    23,   333,   334,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,   310,    -1,    -1,   313,   314,   315,
      -1,    -1,    -1,    -1,   320,     5,     6,     7,     8,     9,
      10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
     349,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    52,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,   136,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,
      -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,
     280,   281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,
     320,     5,     6,     7,     8,     9,    10,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
     136,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,   194,   195,
     196,   197,   198,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,
     264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,   279,   280,   281,   282,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,   309,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,    -1,    -1,   318,    -1,   320,     5,     6,     7,
       8,     9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,    -1,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,   256,   257,
      -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,   279,   280,   281,   282,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,   309,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,   313,    -1,   315,    -1,    -1,
      -1,    -1,   320,     5,     6,     7,     8,     9,    10,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,   136,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,   308,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,    -1,   319,   320,     5,
       6,     7,     8,     9,    10,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,   136,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,   308,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    22,    23,   333,   334,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,   268,
     257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,   279,   280,   281,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,   318,    -1,   320,     5,     6,     7,     8,     9,    10,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,   108,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,   136,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
     194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
     281,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,   319,   320,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
     113,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,   176,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,   225,   226,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,   186,   175,    -1,   177,    -1,    -1,    -1,    -1,
     194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,   136,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   327,   328,   176,    -1,    -1,
      -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      53,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    64,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,   136,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,   176,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,   194,
     195,   196,   197,   198,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,   234,   235,   236,   237,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,
     197,   198,    -1,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   207,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,   136,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,   176,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   194,   195,   196,
     197,   198,    -1,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,   176,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,    -1,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,   176,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,   136,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,   176,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,
      -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     160,   161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,
     280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,    -1,   298,    -1,
      -1,    -1,    -1,   303,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    -1,   158,    -1,   160,
     161,   162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,    -1,   158,    -1,   160,   161,
     162,   163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   160,   161,   162,
     163,    -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,
     273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
     293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     303,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,
     333,   334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,   160,   161,   162,   163,
      -1,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,
     334,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,   160,   161,   162,   163,    -1,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,   230,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
      -1,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
     156,    -1,   158,    -1,   160,   161,   162,   163,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,   156,
      -1,   158,    -1,   160,   161,   162,   163,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,   160,   161,   162,   163,    -1,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,   160,   161,   162,   163,    -1,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
      -1,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    65,    66,    67,    68,    78,    79,    80,
      81,    87,   135,   174,   175,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   452,
     458,   461,   469,   490,   505,   509,   510,   511,   519,   534,
     536,   537,   538,   557,   561,   562,   563,   566,   688,   693,
     135,   112,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    53,    64,    81,    84,    87,    93,    98,
      99,   100,   106,   114,   117,   120,   121,   122,   127,   128,
     144,   145,   148,   150,   151,   152,   153,   154,   155,   156,
     158,   160,   161,   162,   163,   165,   167,   173,   177,   221,
     222,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   656,   682,   683,   191,
     255,   547,   267,    82,   516,   516,   682,    80,    88,   558,
     559,   682,    67,   566,   181,   270,    68,    70,    71,   626,
     627,   628,   682,   656,   359,   358,   360,   361,   357,     5,
      11,   686,   689,   284,   656,     5,     6,     7,     8,     9,
      10,    65,    66,    67,    68,   191,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   680,   681,   263,
     266,   389,   390,    59,    88,    56,   116,   284,    11,   175,
     236,   305,   453,   454,   527,   557,   563,   671,   685,     0,
      17,    56,    59,   104,   106,   116,   221,   222,   223,   224,
     225,   226,   233,   265,   278,   284,   287,   413,   414,   417,
     419,   167,   234,   235,   236,   237,   289,   329,    56,   116,
     167,   191,   233,   234,   235,   236,   237,   265,   278,   284,
     289,   326,   329,   504,    56,    57,    58,    64,   175,   265,
     278,   292,   457,   653,   682,   221,   222,   284,   372,   417,
     450,   682,   135,   103,   170,   171,   172,   582,   135,   656,
     279,   350,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    27,    28,    44,    45,
      46,    47,    48,    49,    50,    63,   107,   111,   115,   126,
     136,   137,   138,   139,   140,   142,   143,   146,   147,   149,
     159,   166,   175,   178,   194,   195,   199,   200,   201,   207,
     211,   291,   292,   293,   294,   307,   311,   312,   352,   354,
     543,   569,   580,   581,   589,   590,   591,   592,   594,   596,
     597,   599,   601,   603,   604,   606,   607,   608,   609,   610,
     611,   612,   625,   626,   629,   631,   632,   633,   635,   636,
     637,   638,   639,   653,   654,   655,   657,   658,   660,   675,
     678,   682,   687,   698,   699,   700,   701,   702,   716,   723,
     725,   728,   738,   739,   769,   656,   192,   517,   517,   682,
      89,    92,    98,   512,   513,   514,   349,   560,   563,   456,
     457,   547,   176,   327,   116,   167,   234,   235,   236,   237,
     278,   284,   285,   289,   326,   503,   694,   175,   350,   456,
     369,   369,   356,   356,   369,   175,   656,   118,   119,   535,
     456,   456,   275,   456,   112,   267,   286,   349,   286,   349,
     270,   349,   271,   271,   391,   384,    88,   512,   279,   682,
     656,   656,   453,   566,   267,   671,   267,    27,   267,   305,
     321,   221,   222,   682,   221,   222,   656,   284,   284,   284,
     284,   656,   682,   313,   365,   365,   326,   284,   235,   656,
     656,   656,   656,   656,   656,   682,   656,   235,   167,   234,
     235,   236,   237,   656,   313,   364,   364,   364,   364,   682,
     364,   364,   364,   656,   364,    42,    43,   508,   228,   450,
     682,   682,   303,   179,   179,   179,   349,     5,     6,     7,
      20,    24,    25,    26,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    53,    54,    55,   291,   292,   293,   294,
     349,   644,   652,   673,   675,   676,   677,   678,   105,   191,
     255,   567,   567,   567,   304,   583,   290,   551,   457,   548,
     550,   679,   682,   682,   687,   687,   687,   175,   175,    22,
     175,   630,   630,   630,   630,   630,   175,   606,   175,   127,
     682,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   288,   557,   563,   580,   590,   598,   626,
     682,   590,   175,   608,   608,   175,   175,   175,   608,   687,
     175,   642,   175,   643,   194,   195,   640,   308,   608,   665,
     666,   175,   175,   590,   602,   112,   267,   570,   571,   181,
     328,   634,   682,   192,   179,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   656,   136,   194,   195,   196,   197,
     198,   202,   203,   204,   205,   206,   207,   208,   209,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   268,
     339,   350,   349,   175,   175,   175,   687,   687,   350,   175,
     254,   288,   454,   457,   539,    83,    84,   286,   518,    90,
      91,    93,    99,   349,   559,   328,   569,   656,   235,   656,
     656,   656,   656,   682,   656,   682,   656,   656,   268,   176,
     544,   608,   661,   628,   682,   306,   585,   135,   135,   135,
     175,   176,   542,   544,   546,   566,   535,   131,   131,   508,
     276,   398,   399,   680,   680,   398,   393,   167,   284,   394,
     503,   656,   397,   113,   113,   112,   112,   512,   260,   261,
     415,   174,   259,   279,   401,   117,   118,   120,   121,   122,
     123,   124,   125,   128,   328,   408,   410,   411,   256,   279,
     282,   283,   176,   656,   324,   687,   267,   656,   671,   305,
     174,    87,   328,   407,   409,   411,   365,   365,   365,   365,
     239,   174,   381,   178,   228,   375,   682,   656,   682,   365,
     656,   175,   175,   175,   175,   456,   331,   332,   491,   364,
     235,   656,   656,   656,   656,   508,   107,   656,   656,   656,
     656,   656,   656,   656,   656,   682,   176,    59,   294,   655,
     606,   682,   580,   450,   175,   175,    21,    22,   175,   175,
     175,    38,   175,   642,   643,   295,   297,   299,   300,   301,
     302,   645,   648,   650,   651,   682,   175,   175,   175,   175,
     586,   587,   608,   169,   568,   568,   568,   610,   670,   685,
     305,   584,   580,   179,   349,   571,   179,   350,   580,   659,
     659,    23,   176,   296,   298,   302,   645,   646,   647,   113,
     608,   609,   608,   695,   696,   697,   695,   240,   157,   717,
     743,   154,   156,   741,   240,     3,   729,   609,   116,   740,
     741,   695,   175,   540,   176,   176,   176,   176,   349,   350,
     608,   608,   608,   686,   174,   641,   686,   641,   687,   580,
     308,   663,   664,   310,   665,   667,   608,   544,   662,   349,
     353,    69,   175,   352,   552,   572,   573,   605,   626,   656,
     682,   564,   565,   682,   551,   581,   682,   590,   180,   190,
     191,   590,   600,   595,   608,   595,   595,   595,   175,   175,
     101,   102,   593,   593,   590,   600,   603,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   111,   178,   175,   207,   633,   176,   191,   207,   255,
     608,   668,   682,   668,     8,     9,    10,   207,   682,   288,
     540,   539,    83,    80,    89,    96,    97,   515,   686,   514,
     175,   605,   656,   175,   506,   506,   506,   506,   350,   111,
     687,   176,   349,    14,   610,   671,   245,   370,   176,   349,
     508,   174,   349,   386,   174,   385,   656,   398,   398,   262,
     415,   286,   278,   105,   174,   670,   670,   670,   673,   410,
     230,   284,   285,   403,   404,    68,    89,   402,   404,   284,
     404,   112,    16,   525,   526,   525,   656,   456,   321,   671,
     415,   174,   673,   409,   656,   656,   656,   656,   240,   266,
     107,   376,   682,   254,   377,   228,   112,   175,   421,   422,
     456,   270,   656,   175,   207,   488,   489,   682,   488,   488,
     488,   328,    65,    66,    68,   257,   492,   656,   656,   508,
     508,   508,   508,   506,   506,   506,   506,   508,   508,   508,
     673,   669,   686,   669,    23,   669,   669,   669,   686,    54,
     674,   687,   641,   641,   643,   642,   286,   669,   686,   669,
     669,   669,   349,    52,   227,   588,   105,   566,   566,   566,
     610,   671,   585,   606,   550,   551,   254,   549,   580,   682,
     328,   349,   112,   656,   160,   742,   349,   742,   742,   682,
     704,   175,   608,   718,   719,   720,   349,   609,   682,   726,
     148,   730,   742,   695,   582,   254,   541,   544,   545,   176,
     349,   186,   187,   590,   349,   186,   112,   349,   176,   292,
     687,   176,   687,   651,   309,   608,   663,   667,   608,   319,
     349,   349,   176,   349,   590,   606,   626,   175,   288,   552,
     557,   563,   573,   574,   349,    70,    71,    72,    74,    75,
      77,   168,   553,   555,   328,   575,   682,   575,   576,   576,
     350,   349,   570,   110,   577,   590,   108,   542,   542,   590,
     590,   606,   111,   340,   613,   614,   668,   176,   668,   176,
     350,   349,   350,   682,    94,    95,    89,   506,   176,   507,
     673,   682,   544,   546,   266,   399,   112,   387,   263,   387,
     387,   387,   687,   262,   682,   682,   670,   606,   671,   682,
     656,   682,    91,    90,    91,   682,   656,   230,   425,   428,
     439,   440,   679,   626,   111,   528,   322,   528,   456,   112,
     262,   671,   421,   421,   421,   421,   682,    57,    63,   382,
      20,   273,   690,   691,   376,   236,   184,   424,   425,   426,
     431,   451,   682,   100,   416,   328,   656,   421,   488,   176,
     349,   673,   176,   176,   176,   453,   330,   270,   506,   508,
     176,   176,   176,   176,   349,   176,   349,   176,   349,   302,
     645,   649,   176,   349,   176,   176,   176,   587,   175,   673,
     673,   608,   116,   156,   176,   695,   176,   176,   349,   703,
      84,   254,   608,   744,   745,   747,   748,   749,   271,   349,
     714,   328,   721,    85,   144,   724,   349,   727,   105,   731,
     751,   742,   176,   163,   752,   753,   742,   176,   349,   175,
     175,   175,   608,   608,   608,   608,   303,   544,   309,   319,
     608,   544,   544,   575,   576,   540,   176,   176,   176,   566,
     573,   553,    76,   573,    76,    73,   554,   682,   175,   682,
     565,   105,   109,   579,   687,   176,   176,   192,   192,   105,
     176,   103,   615,   176,   176,   207,   668,   682,   176,   349,
     350,   271,   382,   271,    16,   687,   508,   508,   508,   256,
     279,   682,   258,   274,   287,   448,   132,   133,   427,   673,
     328,   496,   687,   112,   175,   323,   532,   533,   687,   687,
     270,   279,   682,   684,   692,   362,   366,   378,   379,   380,
     383,   388,   400,   405,   505,   626,   656,   176,   349,   174,
     682,   453,   175,   270,   420,   176,    67,    81,    87,   239,
     242,   281,   307,   313,   318,   371,   373,   374,   383,   388,
     400,   405,   462,   465,   467,   468,   469,   473,   475,   481,
     483,   484,   505,   509,   510,   562,   682,   682,   238,   243,
     238,   174,   455,   450,   656,   672,   686,   686,   686,   643,
     686,   578,   657,   682,   176,   176,   176,   141,   608,   705,
     711,   712,   713,   743,   742,   254,   747,   176,   349,   328,
     111,   150,   152,   153,   715,   719,   742,   682,   722,   145,
     145,   176,   609,   742,   127,   151,   609,   732,   733,   734,
     735,   736,   751,   286,   176,   176,   545,   541,   542,   542,
     349,   176,   113,   176,   176,   349,   544,   176,   176,   353,
      76,   573,    16,   270,   556,   573,   175,   684,   578,   580,
     590,   590,   578,   105,    86,   347,   616,   617,   176,   176,
     507,   682,   336,   279,   254,   100,   111,   178,   254,   269,
     269,   457,   129,   134,   254,   429,   430,   433,   434,   436,
     437,   440,   687,   349,   532,   533,   175,   522,   522,   349,
     240,     3,   682,   349,   380,   426,   682,   272,     3,   174,
     423,   450,    78,   239,   547,   240,   470,   471,   656,   284,
     454,   474,   580,   308,   478,   479,   608,   580,   317,   463,
     315,   351,   673,   284,   487,   673,     5,   487,   229,   338,
     493,   176,   176,   176,   176,   176,   349,   350,   175,   349,
     349,   714,   349,   176,   745,   682,   746,   270,   270,   270,
     270,   176,   176,   328,   750,   751,   349,   111,   153,   737,
     164,   176,   176,   176,   608,   608,   608,   575,   573,   457,
     580,   556,   684,   176,   586,   188,   341,   348,   609,   618,
     619,   620,   621,   262,   278,     3,   111,   111,   435,   607,
     457,   457,   130,   435,   433,   111,   178,   229,   274,   277,
     287,   447,   449,   687,    84,   531,   176,   523,   524,   682,
     525,   525,   687,   687,   174,   418,   682,   175,    84,   173,
     176,    65,    85,   256,   240,   569,   459,   682,   175,   175,
     580,   310,   478,   480,   308,   476,   477,   309,   463,   465,
     580,   175,   239,   243,   462,     4,   460,   687,   239,   243,
     271,   335,   336,   494,   495,   113,   498,   499,   657,   682,
     608,   706,   707,   709,   711,   713,   705,   711,   111,    84,
     111,   111,   111,   682,   733,   270,   270,   176,    84,   162,
     165,   754,   755,   760,   176,   176,   176,   176,   619,   333,
     344,   344,   342,   624,   687,   682,   277,   328,   111,   175,
     269,   656,   349,   230,   176,   349,     3,   528,   528,   278,
      56,   415,   432,   433,   173,    86,    86,   459,   350,   472,
     608,   454,   309,   463,   319,   608,   476,   480,   463,   465,
     135,   316,   486,   679,   240,     5,   240,     5,   284,   333,
     497,   284,   497,   495,   337,   308,   501,   176,   349,   328,
     708,   349,   156,   750,   153,   153,   158,   682,   761,     3,
     756,   757,    84,   155,   158,   762,   763,   765,   766,   192,
      84,   110,   341,   346,   656,   131,   580,   456,   687,   524,
      60,   529,   529,   682,   687,   262,   176,   349,   682,   176,
     349,   176,   463,   465,   307,   309,   319,   310,   314,   482,
     135,   319,   463,   176,   349,   673,   459,   460,   459,   460,
     496,   496,   496,   496,   333,   334,   500,   175,   318,   371,
     373,   383,   388,   466,   467,   502,   509,   510,   562,   707,
     682,   710,   711,   161,   758,   758,   158,   682,   768,   757,
     767,   764,   765,   341,   348,   609,   622,   623,   345,   333,
     456,   175,   438,   176,   114,   446,    61,   530,   530,   415,
     687,   433,   608,   135,   463,   307,   463,   580,   319,   319,
     319,   679,   682,   682,   682,   682,   580,   317,   757,   759,
     333,   343,   344,   446,   407,    39,    40,    72,   445,   270,
     442,   443,   444,    62,   531,   531,   262,   309,   313,   315,
     673,   176,   464,   444,   176,    65,    66,   270,   443,   270,
     442,   325,   520,   687,   463,   485,   682,   319,   466,    42,
      43,    84,   279,   441,   441,   175,   482,   135,    41,   111,
     254,   521,   671,   176,   349,   671
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, m)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, m); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (m);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvc *m)
#else
static void
yy_reduce_print (yyvsp, yyrule, m)
    YYSTYPE *yyvsp;
    int yyrule;
    mvc *m;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , m);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, m); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, m)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvc *m;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (m);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (mvc *m);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (mvc *m)
#else
int
yyparse (m)
    mvc *m;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 629 "src/sql/server/sql_parser.y"
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym);
		}
		YYACCEPT;
	}
    break;

  case 3:
#line 639 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 644 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 5:
#line 653 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 658 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 7:
#line 668 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 673 "src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 9:
#line 683 "src/sql/server/sql_parser.y"
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 10:
#line 692 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 693 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 698 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 699 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 700 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 701 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 702 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 703 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 708 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 712 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 716 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 717 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 721 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 722 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 745 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 39:
#line 756 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 40:
#line 757 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 41:
#line 762 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 42:
#line 763 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); if ((yyval.sym)) (yyval.sym)->token = SQL_DECLARE_TABLE; }
    break;

  case 43:
#line 768 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 45:
#line 782 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 787 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (4)].l));
	  	append_symbol(l, (yyvsp[(4) - (4)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 47:
#line 792 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 800 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 808 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 816 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 824 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 830 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 53:
#line 839 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (7)].l));
		append_symbol(l, (yyvsp[(5) - (7)].sym));
		append_symbol(l, (yyvsp[(6) - (7)].sym));
		append_list(l, (yyvsp[(7) - (7)].l));
		append_int(l, (yyvsp[(3) - (7)].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 54:
#line 847 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (5)].l));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		append_int(l, (yyvsp[(3) - (5)].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 55:
#line 856 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 56:
#line 860 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 57:
#line 864 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 59:
#line 873 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 60:
#line 874 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 61:
#line 878 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 63:
#line 883 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 64:
#line 885 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 70:
#line 891 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 71:
#line 892 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 72:
#line 896 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 73:
#line 897 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 74:
#line 902 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 75:
#line 912 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 76:
#line 921 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 77:
#line 923 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 78:
#line 927 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 928 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 932 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 933 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 938 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 83:
#line 939 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 84:
#line 944 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 85:
#line 952 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 86:
#line 961 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 87:
#line 962 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 88:
#line 966 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 89:
#line 967 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 90:
#line 972 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 91:
#line 976 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 92:
#line 982 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 93:
#line 984 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 94:
#line 988 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 95:
#line 989 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 96:
#line 993 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 97:
#line 994 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 995 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 99:
#line 1006 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 100:
#line 1007 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 102:
#line 1012 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 103:
#line 1014 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 104:
#line 1018 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 105:
#line 1019 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 106:
#line 1020 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
    break;

  case 107:
#line 1021 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1022 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 109:
#line 1023 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 110:
#line 1024 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 111:
#line 1028 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 112:
#line 1030 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 113:
#line 1034 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 114:
#line 1035 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 115:
#line 1043 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1048 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[(6) - (6)].l))));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1053 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1058 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1063 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1068 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 121:
#line 1073 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 122:
#line 1078 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 123:
#line 1083 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 124:
#line 1088 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[(6) - (10)].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[(4) - (10)].i_val));
	  append_string(p, (yyvsp[(10) - (10)].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 125:
#line 1100 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 126:
#line 1106 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 127:
#line 1113 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 128:
#line 1123 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 129:
#line 1128 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 130:
#line 1132 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 131:
#line 1136 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 132:
#line 1138 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 133:
#line 1146 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 134:
#line 1154 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 135:
#line 1159 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 136:
#line 1164 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  append_int(l, 0);
	  append_int(l, FALSE ); /* no if exists check */
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 137:
#line 1173 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 138:
#line 1174 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 139:
#line 1178 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1179 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 141:
#line 1180 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 147:
#line 1202 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 148:
#line 1213 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 149:
#line 1230 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 150:
#line 1239 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1240 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1244 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 153:
#line 1245 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 154:
#line 1249 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 155:
#line 1250 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1251 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 157:
#line 1255 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 158:
#line 1256 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 159:
#line 1257 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 160:
#line 1258 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 161:
#line 1259 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 162:
#line 1263 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 163:
#line 1264 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1265 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 165:
#line 1266 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1267 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 167:
#line 1268 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 168:
#line 1269 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 169:
#line 1270 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 170:
#line 1278 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 171:
#line 1287 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 172:
#line 1288 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 173:
#line 1289 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 174:
#line 1290 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 175:
#line 1311 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 176:
#line 1316 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 177:
#line 1326 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 178:
#line 1327 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 179:
#line 1328 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 180:
#line 1332 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 181:
#line 1333 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 182:
#line 1338 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(2) - (5)].bval));
	  append_list(l, (yyvsp[(5) - (5)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 183:
#line 1351 "src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 184:
#line 1358 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 185:
#line 1370 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 186:
#line 1382 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 187:
#line 1397 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (8)].l));
	  append_symbol(l, (yyvsp[(5) - (8)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(7) - (8)].sval));
	  append_list(l, (yyvsp[(8) - (8)].l));
	  append_int(l, (yyvsp[(3) - (8)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 188:
#line 1409 "src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[(1) - (6)].i_val));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  if ((yyvsp[(1) - (6)].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[(6) - (6)].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, NULL);
	  append_int(l, (yyvsp[(3) - (6)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 189:
#line 1426 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), SQL_PW_ENCRYPTED);
	  append_string((yyval.l), NULL);
  }
    break;

  case 190:
#line 1432 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), (yyvsp[(3) - (6)].sval));
	  append_int((yyval.l), (yyvsp[(4) - (6)].i_val));
	  append_string((yyval.l), (yyvsp[(6) - (6)].sval));
  }
    break;

  case 191:
#line 1438 "src/sql/server/sql_parser.y"
    {
	  (yyval.l) = append_string(L(), NULL);
	  append_int((yyval.l), (yyvsp[(2) - (4)].i_val));
	  append_string((yyval.l), (yyvsp[(4) - (4)].sval));
  }
    break;

  case 192:
#line 1446 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 193:
#line 1447 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 194:
#line 1448 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 195:
#line 1449 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 196:
#line 1450 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 197:
#line 1451 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 198:
#line 1455 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 199:
#line 1456 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 200:
#line 1457 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 201:
#line 1458 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 202:
#line 1462 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 203:
#line 1463 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 204:
#line 1471 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 205:
#line 1477 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 206:
#line 1478 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 207:
#line 1479 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 208:
#line 1484 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 209:
#line 1486 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 215:
#line 1493 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 216:
#line 1494 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 217:
#line 1499 "src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 218:
#line 1507 "src/sql/server/sql_parser.y"
    { /* SERIAL = INTEGER GENERATED ALWAYS AS IDENTITY PRIMARY KEY */
			/* handle multi-statements by wrapping them in a list */
			sql_subtype it;
			dlist* stmts;
			/* note: sql_next_seq_name uses sa_alloc */
			str sn = sql_next_seq_name(m);
			dlist *p; /* primary key */
			/* sequence generation code */
			dlist *l = L();
			/* finally all the options */
			dlist *o = L();

			/* the name of the sequence */
			dlist *seqn1 = L(), *seqn2 = L();

			if (m->scanner.schema)
				append_string(seqn1, m->scanner.schema);
			append_list(l, append_string(seqn1, sn));
			if ((yyvsp[(2) - (2)].i_val) == 1)
				sql_find_subtype(&it, "bigint", 64, 0);
			else
				sql_find_subtype(&it, "int", 32, 0);
    			append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
			append_list(l, o);
			append_int(l, 1); /* to be dropped */

			if (m->sym) {
				stmts = m->sym->data.lval;
			} else {
				stmts = L();
				m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
			}	
			append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));

			l = L();
			append_string(l, (yyvsp[(1) - (2)].sval));
			append_type(l, &it);
			o = L();
			if (m->scanner.schema)
				append_string(seqn2, m->scanner.schema);
			append_string(seqn2, sn);
			append_symbol(o, _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2)));
			p = L();
			append_string(p, NULL);
			append_symbol(p, _symbol_create(SQL_PRIMARY_KEY, NULL));
			append_symbol(o, _symbol_create_list(SQL_CONSTRAINT, p));
			append_list(l, o);
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 219:
#line 1559 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 221:
#line 1565 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 222:
#line 1567 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 223:
#line 1573 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 224:
#line 1581 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 225:
#line 1583 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 229:
#line 1589 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 230:
#line 1593 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 231:
#line 1599 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 232:
#line 1607 "src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* the name of the sequence */
		append_list(l, append_string(L(), sn));
		if (!(yyvsp[(5) - (5)].l))
			(yyvsp[(5) - (5)].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[(5) - (5)].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[(5) - (5)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, append_string(L(), sn)));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 233:
#line 1636 "src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* finally all the options */
		dlist *o = L();

		/* the name of the sequence */
		dlist *seqn1 = L(), *seqn2 = L();

		if (m->scanner.schema)
			append_string(seqn1, m->scanner.schema);
		append_list(l, append_string(seqn1, sn));
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
		append_list(l, o);
		append_int(l, 0); /* to be dropped */
		if (m->scanner.schema)
			append_string(seqn2, m->scanner.schema);
		append_string(seqn2, sn);
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 234:
#line 1673 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 235:
#line 1674 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 236:
#line 1681 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 237:
#line 1690 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 238:
#line 1691 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 239:
#line 1695 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 240:
#line 1696 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 241:
#line 1697 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 242:
#line 1698 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 243:
#line 1699 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 244:
#line 1703 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 245:
#line 1707 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 246:
#line 1711 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 247:
#line 1712 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 248:
#line 1713 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 249:
#line 1714 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 250:
#line 1715 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 251:
#line 1719 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 252:
#line 1720 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 253:
#line 1721 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 254:
#line 1722 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 255:
#line 1726 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 256:
#line 1727 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 257:
#line 1731 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 258:
#line 1732 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 259:
#line 1733 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 260:
#line 1734 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 261:
#line 1737 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 263:
#line 1750 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 264:
#line 1752 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 265:
#line 1756 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 266:
#line 1768 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 267:
#line 1773 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 268:
#line 1775 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 269:
#line 1779 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 270:
#line 1784 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, (yyvsp[(3) - (7)].l));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_symbol(l, (yyvsp[(6) - (7)].sym));
	  append_int(l, (yyvsp[(7) - (7)].bval));
	  append_int(l, TRUE);	/* persistent view */
	  append_int(l, (yyvsp[(1) - (7)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 272:
#line 1797 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 275:
#line 1806 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 276:
#line 1807 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 277:
#line 1811 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 279:
#line 1816 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 280:
#line 1821 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 281:
#line 1828 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 284:
#line 1843 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 285:
#line 1857 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, (yyvsp[(8) - (9)].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[(9) - (9)].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 286:
#line 1871 "src/sql/server/sql_parser.y"
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				// code does not get cleaner than this people
				if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "CPP") == 0) {
					lang = FUNC_LANG_CPP;
				} else {
					lang = FUNC_LANG_C;
				}
			}
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f );
		}
    break;

  case 287:
#line 1921 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(4) - (10)].l));
				append_list(f, (yyvsp[(6) - (10)].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[(10) - (10)].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (10)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 288:
#line 1936 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 289:
#line 1950 "src/sql/server/sql_parser.y"
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[(10) - (11)].sval), "CPP") == 0) {
					lang = FUNC_LANG_CPP;
				} else {
					lang = FUNC_LANG_C;
				}
			}
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 290:
#line 1999 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[(9) - (9)].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 291:
#line 2012 "src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (7)].l));
				append_list(f, (yyvsp[(5) - (7)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[(7) - (7)].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (7)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 292:
#line 2024 "src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(8) - (9)].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p') {
				lang = FUNC_LANG_PY;
			} else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[(3) - (9)].l));
			append_list(f, (yyvsp[(5) - (9)].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[(9) - (9)].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			append_int(f, (yyvsp[(1) - (9)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 293:
#line 2047 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 294:
#line 2051 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 295:
#line 2055 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 296:
#line 2070 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 297:
#line 2072 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 298:
#line 2076 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 299:
#line 2078 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 326:
#line 2126 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 327:
#line 2130 "src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 328:
#line 2135 "src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 330:
#line 2146 "src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 331:
#line 2147 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 332:
#line 2149 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 333:
#line 2154 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 336:
#line 2161 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 337:
#line 2166 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 338:
#line 2172 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 339:
#line 2180 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 340:
#line 2188 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 341:
#line 2190 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 342:
#line 2195 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 343:
#line 2203 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 344:
#line 2205 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 345:
#line 2209 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 346:
#line 2210 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 347:
#line 2220 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 348:
#line 2231 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 349:
#line 2233 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 350:
#line 2236 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 351:
#line 2250 "src/sql/server/sql_parser.y"
    { dlist *l;
		  char *label = (yyvsp[(1) - (8)].sval)?(yyvsp[(1) - (8)].sval):(yyvsp[(8) - (8)].sval);
		  if ((yyvsp[(1) - (8)].sval) && (yyvsp[(8) - (8)].sval) && strcmp((yyvsp[(1) - (8)].sval), (yyvsp[(8) - (8)].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[(3) - (8)].sym)); /* condition */
		  append_list(l, (yyvsp[(5) - (8)].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
    break;

  case 352:
#line 2266 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 354:
#line 2271 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 356:
#line 2277 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 357:
#line 2282 "src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 358:
#line 2290 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 359:
#line 2292 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 361:
#line 2297 "src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 362:
#line 2301 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 363:
#line 2306 "src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 364:
#line 2311 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 365:
#line 2361 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (9)].l));
	  append_int(l, (yyvsp[(4) - (9)].i_val));
	  append_symbol(l, (yyvsp[(5) - (9)].sym));
	  append_list(l, (yyvsp[(7) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_list(l, (yyvsp[(9) - (9)].l));
	  append_int(l, (yyvsp[(1) - (9)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
    break;

  case 366:
#line 2374 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 367:
#line 2375 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 368:
#line 2380 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 369:
#line 2381 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 370:
#line 2382 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
    break;

  case 371:
#line 2383 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 372:
#line 2384 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 373:
#line 2388 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 374:
#line 2389 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 375:
#line 2393 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 376:
#line 2395 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 377:
#line 2400 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 378:
#line 2401 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 379:
#line 2402 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 380:
#line 2403 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 385:
#line 2418 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 386:
#line 2425 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 387:
#line 2426 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 388:
#line 2430 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 389:
#line 2431 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 390:
#line 2435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 391:
#line 2436 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 392:
#line 2441 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 393:
#line 2444 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 394:
#line 2449 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 395:
#line 2455 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 396:
#line 2461 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 397:
#line 2467 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 398:
#line 2473 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 399:
#line 2482 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FUNC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 400:
#line 2489 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, (yyvsp[(5) - (5)].l) );
	  append_int(l, F_FILT );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.l) = l; }
    break;

  case 401:
#line 2496 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_AGGR );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 402:
#line 2503 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_PROC );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 403:
#line 2510 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_LOADER );
	  append_int(l, (yyvsp[(2) - (4)].bval) );
	  (yyval.l) = l; }
    break;

  case 404:
#line 2520 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 405:
#line 2526 "src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 406:
#line 2531 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 407:
#line 2540 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 408:
#line 2549 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 409:
#line 2558 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 410:
#line 2567 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 411:
#line 2576 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 412:
#line 2582 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 413:
#line 2586 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 414:
#line 2587 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 415:
#line 2588 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 416:
#line 2590 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
	}
    break;

  case 417:
#line 2598 "src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 418:
#line 2599 "src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 419:
#line 2600 "src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 420:
#line 2604 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 421:
#line 2607 "src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 422:
#line 2612 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 423:
#line 2613 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 424:
#line 2614 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 432:
#line 2634 "src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 433:
#line 2641 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 434:
#line 2643 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 435:
#line 2645 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 436:
#line 2647 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 437:
#line 2651 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 438:
#line 2653 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 439:
#line 2655 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 440:
#line 2659 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 442:
#line 2665 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 443:
#line 2667 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 444:
#line 2672 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 445:
#line 2673 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 446:
#line 2674 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 447:
#line 2675 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 452:
#line 2686 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 453:
#line 2687 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 454:
#line 2691 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 455:
#line 2692 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 456:
#line 2693 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 457:
#line 2697 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 458:
#line 2698 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 459:
#line 2703 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (14)].l));
	  append_list(l, (yyvsp[(5) - (14)].l));
	  append_list(l, (yyvsp[(7) - (14)].l));
	  append_list(l, (yyvsp[(8) - (14)].l));
	  append_list(l, (yyvsp[(9) - (14)].l));
	  append_list(l, (yyvsp[(2) - (14)].l));
	  append_string(l, (yyvsp[(10) - (14)].sval));
	  append_int(l, (yyvsp[(11) - (14)].bval));
	  append_int(l, (yyvsp[(12) - (14)].bval));
	  append_int(l, (yyvsp[(13) - (14)].bval));
	  append_list(l, (yyvsp[(14) - (14)].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 460:
#line 2717 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (13)].l));
	  append_list(l, (yyvsp[(5) - (13)].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[(8) - (13)].l));
	  append_list(l, (yyvsp[(9) - (13)].l));
	  append_list(l, (yyvsp[(2) - (13)].l));
	  append_string(l, (yyvsp[(10) - (13)].sval));
	  append_int(l, (yyvsp[(11) - (13)].bval));
	  append_int(l, (yyvsp[(12) - (13)].bval));
	  append_int(l, (yyvsp[(13) - (13)].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 461:
#line 2731 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 462:
#line 2736 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  if ((yyvsp[(2) - (9)].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[(5) - (9)].l));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_int(l, (yyvsp[(9) - (9)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
    break;

  case 463:
#line 2747 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 464:
#line 2754 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 465:
#line 2765 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 466:
#line 2766 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 467:
#line 2771 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 468:
#line 2773 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 469:
#line 2778 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 470:
#line 2779 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 471:
#line 2783 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 472:
#line 2784 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 473:
#line 2789 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 474:
#line 2793 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 475:
#line 2801 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 476:
#line 2806 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 477:
#line 2811 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 478:
#line 2816 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 479:
#line 2824 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 480:
#line 2825 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 481:
#line 2829 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 482:
#line 2830 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 483:
#line 2831 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 484:
#line 2833 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 485:
#line 2835 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 486:
#line 2839 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 487:
#line 2840 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 488:
#line 2844 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 489:
#line 2845 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 490:
#line 2849 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 491:
#line 2850 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 492:
#line 2854 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 493:
#line 2855 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 494:
#line 2859 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 495:
#line 2860 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 496:
#line 2864 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 497:
#line 2866 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 498:
#line 2872 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 499:
#line 2879 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 500:
#line 2880 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 501:
#line 2881 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 502:
#line 2886 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l) );
	  append_int(l, (yyvsp[(4) - (5)].i_val) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 503:
#line 2892 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (4)].l) );
	  append_int(l, (yyvsp[(3) - (4)].i_val) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
    break;

  case 504:
#line 2902 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 505:
#line 2944 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 506:
#line 2952 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 507:
#line 2961 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 508:
#line 2963 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 509:
#line 2965 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 511:
#line 2971 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 512:
#line 2973 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 513:
#line 2977 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 514:
#line 2979 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 515:
#line 2983 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 516:
#line 2985 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 517:
#line 2990 "src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		atom *a = atom_general(SA, sql_bind_localtype("void"), NULL);

		if(!sql_add_arg( m, a)) {
			char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		}
		(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	   } else {
		(yyval.sym) = _symbol_create(SQL_NULL, NULL );
	   }
	}
    break;

  case 520:
#line 3016 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 523:
#line 3025 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 524:
#line 3026 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 525:
#line 3027 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 526:
#line 3031 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 527:
#line 3033 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 528:
#line 3037 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 529:
#line 3042 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 530:
#line 3047 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 531:
#line 3052 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 532:
#line 3059 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 533:
#line 3060 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 534:
#line 3067 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 535:
#line 3069 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 536:
#line 3074 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 537:
#line 3082 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 538:
#line 3090 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 539:
#line 3100 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 540:
#line 3101 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 541:
#line 3102 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 542:
#line 3106 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 543:
#line 3107 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 544:
#line 3111 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 545:
#line 3112 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 546:
#line 3113 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 547:
#line 3117 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 548:
#line 3119 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 550:
#line 3143 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 551:
#line 3152 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 552:
#line 3153 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 553:
#line 3158 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (4)].sval)));
	  append_list(l, (yyvsp[(2) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  append_int(l, FALSE); /* no replace clause */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 557:
#line 3182 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 558:
#line 3193 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 559:
#line 3204 "src/sql/server/sql_parser.y"
    { 
	  (yyval.sym) = (yyvsp[(1) - (5)].sym);
	  if ((yyvsp[(2) - (5)].sym) || (yyvsp[(3) - (5)].sym) || (yyvsp[(4) - (5)].sym) || (yyvsp[(5) - (5)].sym)) {
	  	if ((yyvsp[(1) - (5)].sym) != NULL &&
		    ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_UNION  ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_EXCEPT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[(1) - (5)].sym);
	
	  			s -> orderby = (yyvsp[(2) - (5)].sym);
	  			s -> limit = (yyvsp[(3) - (5)].sym);
	  			s -> offset = (yyvsp[(4) - (5)].sym);
	  			s -> sample = (yyvsp[(5) - (5)].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[(1) - (5)].sym))), NULL, NULL, NULL, (yyvsp[(2) - (5)].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[(3) - (5)].sym), (yyvsp[(4) - (5)].sym), (yyvsp[(5) - (5)].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
    break;

  case 560:
#line 3234 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 561:
#line 3236 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 563:
#line 3246 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 564:
#line 3255 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 565:
#line 3264 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 566:
#line 3270 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 568:
#line 3275 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 569:
#line 3276 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 570:
#line 3277 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 571:
#line 3282 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 572:
#line 3284 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 573:
#line 3286 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 575:
#line 3296 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 576:
#line 3304 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 577:
#line 3305 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 578:
#line 3309 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 579:
#line 3311 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 580:
#line 3315 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 581:
#line 3320 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 582:
#line 3326 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 583:
#line 3332 "src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(1) - (2)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(1) - (2)].sym);
				  	sn->name = (yyvsp[(2) - (2)].sym);
				  } else {
				  	append_symbol((yyvsp[(1) - (2)].sym)->data.lval, (yyvsp[(2) - (2)].sym));
				  }
				}
    break;

  case 584:
#line 3342 "src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(2) - (3)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(2) - (3)].sym);
				  	sn->name = (yyvsp[(3) - (3)].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[(2) - (3)].sym)->data.lval, (yyvsp[(3) - (3)].sym));
	  				append_int((yyvsp[(2) - (3)].sym)->data.lval, 1);
				  }
				}
    break;

  case 585:
#line 3354 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 586:
#line 3358 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 587:
#line 3362 "src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 588:
#line 3364 "src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 589:
#line 3375 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 590:
#line 3380 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 591:
#line 3385 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 592:
#line 3390 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 593:
#line 3397 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 594:
#line 3398 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 595:
#line 3402 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 596:
#line 3403 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 597:
#line 3407 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 598:
#line 3410 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 599:
#line 3415 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 600:
#line 3416 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 601:
#line 3422 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 602:
#line 3426 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 603:
#line 3431 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 604:
#line 3435 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 605:
#line 3439 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 606:
#line 3441 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 607:
#line 3445 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 608:
#line 3446 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 609:
#line 3450 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 610:
#line 3454 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 611:
#line 3455 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 612:
#line 3459 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 613:
#line 3463 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 614:
#line 3464 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 615:
#line 3468 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 616:
#line 3472 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 617:
#line 3476 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 618:
#line 3478 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 619:
#line 3483 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 620:
#line 3491 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 621:
#line 3492 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 622:
#line 3493 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 632:
#line 3510 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym);

		  if ((yyval.sym)->token == SQL_EXISTS)
			(yyval.sym)->token = SQL_NOT_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_EXISTS)
			(yyval.sym)->token = SQL_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_BETWEEN)
			(yyval.sym)->token = SQL_BETWEEN;
		  else if ((yyval.sym)->token == SQL_BETWEEN)
			(yyval.sym)->token = SQL_NOT_BETWEEN;
		  else if ((yyval.sym)->token == SQL_NOT_LIKE)
			(yyval.sym)->token = SQL_LIKE;
		  else if ((yyval.sym)->token == SQL_LIKE)
			(yyval.sym)->token = SQL_NOT_LIKE;
		  else
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 633:
#line 3526 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 634:
#line 3531 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 635:
#line 3538 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 636:
#line 3548 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 637:
#line 3555 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 638:
#line 3564 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 639:
#line 3565 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 640:
#line 3566 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 641:
#line 3571 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 642:
#line 3578 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 643:
#line 3585 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 644:
#line 3592 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 645:
#line 3602 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 646:
#line 3606 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(3) - (3)].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, SQLSTATE(22019) "ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[(1) - (3)].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
    break;

  case 647:
#line 3621 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 648:
#line 3622 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 649:
#line 3627 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 650:
#line 3633 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 651:
#line 3639 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 652:
#line 3644 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 653:
#line 3652 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 654:
#line 3654 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 655:
#line 3660 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 656:
#line 3667 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 657:
#line 3676 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 658:
#line 3677 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 659:
#line 3678 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 660:
#line 3682 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 661:
#line 3686 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 662:
#line 3687 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 663:
#line 3691 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 664:
#line 3696 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 665:
#line 3705 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 666:
#line 3707 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 667:
#line 3709 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 668:
#line 3713 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 669:
#line 3715 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 670:
#line 3717 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 672:
#line 3724 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3731 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 674:
#line 3738 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3745 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3752 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 677:
#line 3759 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 678:
#line 3766 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 679:
#line 3773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 680:
#line 3780 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 681:
#line 3787 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 682:
#line 3794 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 683:
#line 3801 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 684:
#line 3807 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 685:
#line 3814 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 686:
#line 3821 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 687:
#line 3828 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 688:
#line 3835 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 689:
#line 3842 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 690:
#line 3849 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 691:
#line 3856 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 692:
#line 3862 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 693:
#line 3869 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 694:
#line 3876 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 695:
#line 3883 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 696:
#line 3890 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 697:
#line 3892 "src/sql/server/sql_parser.y"
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[(2) - (2)].sym)->token != SQL_COLUMN || (yyvsp[(2) - (2)].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[(2) - (2)].sym)->token == SQL_COLUMN && (yyvsp[(2) - (2)].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[(2) - (2)].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[(2) - (2)].sym);
				} else {
					yyerror(m, SQLSTATE(22003) "value too large or not a number");
					(yyval.sym) = NULL;
					YYABORT;
				}
			  } 
			  if (!(yyval.sym)) {
				dlist *l = L();
			  	append_list(l, 
			  		append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_neg")));
	  		  	append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
    break;

  case 698:
#line 3913 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 699:
#line 3917 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 702:
#line 3923 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 703:
#line 3925 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 705:
#line 3928 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 709:
#line 3932 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 717:
#line 3944 "src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 718:
#line 4014 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 719:
#line 4019 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 721:
#line 4025 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 722:
#line 4029 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 723:
#line 4031 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 724:
#line 4035 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 725:
#line 4037 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 726:
#line 4041 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 727:
#line 4043 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 728:
#line 4047 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 729:
#line 4048 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 730:
#line 4052 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 731:
#line 4053 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 732:
#line 4057 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 733:
#line 4058 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 734:
#line 4059 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 735:
#line 4063 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 736:
#line 4068 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 737:
#line 4072 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 738:
#line 4073 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 739:
#line 4074 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 740:
#line 4078 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 741:
#line 4082 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 742:
#line 4083 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 743:
#line 4084 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 744:
#line 4085 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 745:
#line 4086 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 746:
#line 4090 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 747:
#line 4095 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 748:
#line 4099 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (4)].l));
	  if (dlist_length((yyvsp[(3) - (4)].l)) == 1) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[(3) - (4)].l)) == 2) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[(3) - (4)].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
    break;

  case 749:
#line 4126 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 750:
#line 4127 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 751:
#line 4132 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 752:
#line 4133 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 753:
#line 4134 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 754:
#line 4135 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 755:
#line 4140 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 756:
#line 4147 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 757:
#line 4152 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 758:
#line 4157 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 759:
#line 4162 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 760:
#line 4167 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 761:
#line 4174 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 762:
#line 4175 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 763:
#line 4180 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 764:
#line 4190 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 765:
#line 4200 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 766:
#line 4207 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 767:
#line 4214 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 768:
#line 4221 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 769:
#line 4228 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 770:
#line 4240 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 771:
#line 4242 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 772:
#line 4247 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 773:
#line 4252 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 774:
#line 4257 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 775:
#line 4262 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 776:
#line 4269 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 777:
#line 4270 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 778:
#line 4271 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 779:
#line 4276 "src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);

		if(!sql_add_arg( m, an->a)) {
			char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		}
		an->a = NULL;
		/* we miss use SQL_COLUMN also for param's, maybe
				change SQL_COLUMN to SQL_IDENT */
		(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	  } else {
		AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
	  }
	}
    break;

  case 780:
#line 4302 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 781:
#line 4303 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 782:
#line 4308 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 783:
#line 4309 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 784:
#line 4314 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 785:
#line 4315 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 786:
#line 4322 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 787:
#line 4328 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 788:
#line 4334 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 789:
#line 4340 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 790:
#line 4346 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 791:
#line 4352 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 793:
#line 4362 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 794:
#line 4363 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 795:
#line 4364 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 796:
#line 4368 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 797:
#line 4369 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 798:
#line 4380 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 799:
#line 4382 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 800:
#line 4386 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 801:
#line 4388 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 802:
#line 4392 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 803:
#line 4394 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 804:
#line 4400 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 805:
#line 4408 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 806:
#line 4409 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 807:
#line 4410 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 808:
#line 4411 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 809:
#line 4412 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 811:
#line 4417 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 813:
#line 4422 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iquarter; }
    break;

  case 814:
#line 4423 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iweek; }
    break;

  case 815:
#line 4428 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 816:
#line 4434 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 817:
#line 4437 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 818:
#line 4443 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 819:
#line 4446 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 820:
#line 4452 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 821:
#line 4455 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 822:
#line 4459 "src/sql/server/sql_parser.y"
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(2) - (2)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, SQLSTATE(22006) "incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				sql_find_subtype(&(yyval.type), "month_interval", d, 0);
			} else {
				sql_find_subtype(&(yyval.type), "sec_interval", d, 0);
			}
	  	}
	}
    break;

  case 826:
#line 4485 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 827:
#line 4491 "src/sql/server/sql_parser.y"
    { int len = _strlen((yyvsp[(1) - (1)].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[(1) - (1)].sval);
	 	  sql_subtype t;
#ifdef HAVE_HGE
		  hge res = 0;
#else
		  lng res = 0;
#endif
		  /* skip leading '0' */
		  while (i < len && hexa[i] == '0')
		  	i++;

		  /* we only support positive values that fit in a signed 128-bit type,
		   * i.e., max. 63/127 bit => < 2^63/2^127 => < 0x800...
		   * (leading sign (-0x...) is handled separately elsewhere)
		   */
		  if (len - i < MAX_HEX_DIGITS || (len - i == MAX_HEX_DIGITS && hexa[i] < '8'))
		  	while (err == 0 && i < len)
		  	{
				res <<= 4;
				if ('0'<= hexa[i] && hexa[i] <= '9')
					res = res + (hexa[i] - '0');
				else if ('A' <= hexa[i] && hexa[i] <= 'F')
					res = res + (hexa[i] - 'A' + 10);
				else if ('a' <= hexa[i] && hexa[i] <= 'f')
					res = res + (hexa[i] - 'a' + 10);
				else
					err = 1;
		  		i++;
			}
		  else
			err = 1;

		  if (err == 0) {
		  	assert(res >= 0);

		  	/* use smallest type that can accommodate the given value */
			if (res <= GDK_bte_max)
				sql_find_subtype(&t, "tinyint", 8, 0 );
			else if (res <= GDK_sht_max)
				sql_find_subtype(&t, "smallint", 16, 0 );
		  	else if (res <= GDK_int_max)
				sql_find_subtype(&t, "int", 32, 0 );
			else if (res <= GDK_lng_max)
				sql_find_subtype(&t, "bigint", 64, 0 );
#ifdef HAVE_HGE
			else if (res <= GDK_hge_max && have_hge)
				sql_find_subtype(&t, "hugeint", 128, 0 );
#endif
			else
				err = 1;
		  }

		  if (err != 0) {
			char *msg = sql_message(SQLSTATE(22003) "Invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
    break;

  case 828:
#line 4556 "src/sql/server/sql_parser.y"
    { int err = 0;
		  size_t len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  if (lngFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_lng_nil(value))
		  	err = 2;

		  if (!err) {
		    if ((value >= GDK_lng_min && value <= GDK_lng_max))
#if SIZEOF_OID == SIZEOF_INT
		  	  sql_find_subtype(&t, "oid", 31, 0 );
#else
		  	  sql_find_subtype(&t, "oid", 63, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message(SQLSTATE(22003) "OID value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 829:
#line 4587 "src/sql/server/sql_parser.y"
    { int digits = _strlen((yyvsp[(1) - (1)].sval)), err = 0;
#ifdef HAVE_HGE
		  hge value, *p = &value;
		  size_t len = sizeof(hge);
		  const hge one = 1;
#else
		  lng value, *p = &value;
		  size_t len = sizeof(lng);
		  const lng one = 1;
#endif
		  sql_subtype t;

#ifdef HAVE_HGE
		  if (hgeFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_hge_nil(value))
		  	err = 2;
#else
		  if (lngFromStr((yyvsp[(1) - (1)].sval), &len, &p) < 0 || is_lng_nil(value))
		  	err = 2;
#endif

		  /* find the most suitable data type for the given number */
		  if (!err) {
		    int bits = digits2bits(digits), obits = bits;

		    while (bits > 0 &&
			   (bits == sizeof(value) * 8 ||
			    (one << (bits - 1)) > value))
			  bits--;

 		    if (bits != obits &&
		       (bits == 8 || bits == 16 || bits == 32 || bits == 64))
				bits++;
		
		    if (value >= GDK_bte_min && value <= GDK_bte_max)
		  	  sql_find_subtype(&t, "tinyint", bits, 0 );
		    else if (value >= GDK_sht_min && value <= GDK_sht_max)
		  	  sql_find_subtype(&t, "smallint", bits, 0 );
		    else if (value >= GDK_int_min && value <= GDK_int_max)
		  	  sql_find_subtype(&t, "int", bits, 0 );
		    else if (value >= GDK_lng_min && value <= GDK_lng_max)
		  	  sql_find_subtype(&t, "bigint", bits, 0 );
#ifdef HAVE_HGE
		    else if (value >= GDK_hge_min && value <= GDK_hge_max && have_hge)
		  	  sql_find_subtype(&t, "hugeint", bits, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message(SQLSTATE(22003) "integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 830:
#line 4648 "src/sql/server/sql_parser.y"
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[(1) - (1)].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (0 && digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[(1) - (1)].sval),NULL);
#ifdef HAVE_HGE
		  	hge value = decimal_from_str(s, NULL);
#else
		  	lng value = decimal_from_str(s, NULL);
#endif

		  	if (*s == '+' || *s == '-')
				digits --;
		  	sql_find_subtype(&t, "decimal", digits, scale );
		  	(yyval.sym) = _newAtomNode( atom_dec(SA, &t, value, val));
		   } else {
			char *p = (yyvsp[(1) - (1)].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[(1) - (1)].sval),&p);
			if (p == (yyvsp[(1) - (1)].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
    break;

  case 831:
#line 4687 "src/sql/server/sql_parser.y"
    { sql_subtype t;
  		  char *p = (yyvsp[(1) - (1)].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[(1) - (1)].sval),&p);
		  if (p == (yyvsp[(1) - (1)].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
    break;

  case 832:
#line 4704 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect date value (%s)", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 833:
#line 4720 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timetz":"time", (yyvsp[(2) - (4)].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect time value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 834:
#line 4736 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timestamptz":"timestamp",(yyvsp[(2) - (4)].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect timestamp value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 836:
#line 4753 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22M28) "incorrect blob %s", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 837:
#line 4770 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 838:
#line 4787 "src/sql/server/sql_parser.y"
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 839:
#line 4804 "src/sql/server/sql_parser.y"
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (2)].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[(2) - (2)].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "type (%s) unknown", (yyvsp[(1) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 840:
#line 4825 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 841:
#line 4829 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 842:
#line 4835 "src/sql/server/sql_parser.y"
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(4) - (4)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, "incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				r=sql_find_subtype(&t, "month_interval", d, 0);
			} else {
				r=sql_find_subtype(&t, "sec_interval", d, 0);
			}
	  	}
	  	if (!r || (tpe = parse_interval( m, (yyvsp[(2) - (4)].i_val), (yyvsp[(3) - (4)].sval), sk, ek, sp, ep, &i)) < 0) { 
			yyerror(m, "incorrect interval");
			(yyval.sym) = NULL;
			YYABORT;
	  	} else {
			/* count the number of digits in the input */
/*
			lng cpyval = i, inlen = 1;

			cpyval /= qualifier2multiplier(ek);
			while (cpyval /= 10)
				inlen++;
		    	if (inlen > t.digits) {
				char *msg = sql_message(SQLSTATE(22006) "incorrect interval (" LLFMT " > %d)", inlen, t.digits);
				yyerror(m, msg);
				$$ = NULL;
				YYABORT;
			}
*/
	  		(yyval.sym) = _newAtomNode( atom_int(SA, &t, i));
	  	}
	}
    break;

  case 843:
#line 4880 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 844:
#line 4881 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 845:
#line 4885 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 846:
#line 4896 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 847:
#line 4899 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 848:
#line 4904 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 849:
#line 4912 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 850:
#line 4918 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 852:
#line 4930 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 853:
#line 4935 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 854:
#line 4937 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 855:
#line 4943 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 856:
#line 4951 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 857:
#line 4953 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 858:
#line 4958 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 859:
#line 4962 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 860:
#line 4968 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 861:
#line 4976 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 862:
#line 4978 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 863:
#line 4983 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 864:
#line 4991 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 865:
#line 4993 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 866:
#line 4997 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 867:
#line 4998 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 869:
#line 5008 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 870:
#line 5019 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 871:
#line 5029 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 872:
#line 5039 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 873:
#line 5050 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 874:
#line 5052 "src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 875:
#line 5056 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 876:
#line 5058 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 877:
#line 5060 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 878:
#line 5062 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 879:
#line 5070 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 880:
#line 5072 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 881:
#line 5080 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 882:
#line 5081 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 883:
#line 5082 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 884:
#line 5083 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 885:
#line 5084 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 886:
#line 5086 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 887:
#line 5088 "src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (4)].i_val);
			  if (d > MAX_DEC_DIGITS) {
				char *msg = sql_message(SQLSTATE(22003) "Decimal of %d digits are not supported", d);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			        sql_find_subtype(&(yyval.type), "decimal", d, 0); 
			  }
			}
    break;

  case 888:
#line 5101 "src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (6)].i_val);
			  int s = (yyvsp[(5) - (6)].i_val);
			  if (s > d || d > MAX_DEC_DIGITS) {
				char *msg = NULL;
				if (s > d)
					msg = sql_message(SQLSTATE(22003) "Scale (%d) should be less or equal to the precision (%d)", s, d);
				else
					msg = sql_message(SQLSTATE(22003) "Decimal(%d,%d) isn't supported because P=%d > %d", d, s, d, MAX_DEC_DIGITS);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_find_subtype(&(yyval.type), "decimal", d, s);
			  }
			}
    break;

  case 889:
#line 5118 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 890:
#line 5120 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (4)].i_val) > 0 && (yyvsp[(3) - (4)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (4)].i_val), 0);
			  } else if ((yyvsp[(3) - (4)].i_val) > 24 && (yyvsp[(3) - (4)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (4)].i_val), 0);
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 891:
#line 5134 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[(3) - (6)].i_val) > 0 && (yyvsp[(3) - (6)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else if ((yyvsp[(3) - (6)].i_val) > 24 && (yyvsp[(3) - (6)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 892:
#line 5153 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 893:
#line 5154 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 894:
#line 5155 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 897:
#line 5158 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 898:
#line 5160 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 899:
#line 5161 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 900:
#line 5163 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 901:
#line 5165 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  }
			}
    break;

  case 902:
#line 5176 "src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (1)].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
    break;

  case 903:
#line 5191 "src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (4)].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (4)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[(3) - (4)].i_val), 0);
			  }
			}
    break;

  case 904:
#line 5204 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 905:
#line 5211 "src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (4)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (4)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
    break;

  case 906:
#line 5226 "src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (6)].i_val); 
		int srid = (yyvsp[(5) - (6)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (6)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 907:
#line 5241 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 908:
#line 5248 "src/sql/server/sql_parser.y"
    {
	int geoSubType = find_subgeometry_type((yyvsp[(1) - (1)].sval));

	if(geoSubType == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (geoSubType == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	}  else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
    break;

  case 909:
#line 5274 "src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if(subtype == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 910:
#line 5291 "src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (subtype == -1) {
		char *msg = sql_message(SQLSTATE(HY001) "allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 911:
#line 5312 "src/sql/server/sql_parser.y"
    { 	char *t = sql_bind_alias((yyvsp[(1) - (1)].sval));
	  	if (!t) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
    break;

  case 912:
#line 5326 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 913:
#line 5327 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 914:
#line 5331 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 915:
#line 5332 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 916:
#line 5333 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 917:
#line 5336 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 918:
#line 5337 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 921:
#line 5345 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 922:
#line 5346 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 923:
#line 5347 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 924:
#line 5348 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 925:
#line 5349 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 926:
#line 5350 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 927:
#line 5354 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 928:
#line 5355 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 929:
#line 5356 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 930:
#line 5357 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 931:
#line 5358 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 932:
#line 5359 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 933:
#line 5360 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 935:
#line 5365 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 936:
#line 5366 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 937:
#line 5367 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 938:
#line 5368 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 939:
#line 5369 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 940:
#line 5370 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 941:
#line 5371 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 942:
#line 5372 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 943:
#line 5373 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 944:
#line 5374 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 945:
#line 5375 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 946:
#line 5376 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 947:
#line 5377 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 948:
#line 5379 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 949:
#line 5380 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 950:
#line 5381 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 951:
#line 5382 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 952:
#line 5383 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 953:
#line 5384 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 954:
#line 5385 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 955:
#line 5386 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 956:
#line 5387 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 957:
#line 5388 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 958:
#line 5389 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 959:
#line 5390 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 960:
#line 5391 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 961:
#line 5392 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 962:
#line 5394 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 963:
#line 5395 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 964:
#line 5396 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 965:
#line 5397 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 966:
#line 5398 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 967:
#line 5399 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 968:
#line 5400 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 969:
#line 5401 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 970:
#line 5402 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 971:
#line 5403 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 972:
#line 5404 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 973:
#line 5405 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 974:
#line 5406 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 975:
#line 5407 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 976:
#line 5408 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
    break;

  case 977:
#line 5409 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "week"); }
    break;

  case 978:
#line 5410 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 979:
#line 5412 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 980:
#line 5413 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 981:
#line 5414 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 982:
#line 5415 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 983:
#line 5416 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 984:
#line 5417 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 985:
#line 5418 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 986:
#line 5419 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 987:
#line 5421 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 988:
#line 5422 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 989:
#line 5423 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 990:
#line 5424 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 991:
#line 5425 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 992:
#line 5426 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 993:
#line 5427 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 994:
#line 5428 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 995:
#line 5429 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 996:
#line 5430 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 997:
#line 5431 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 998:
#line 5432 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 999:
#line 5433 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 1000:
#line 5434 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 1001:
#line 5435 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 1002:
#line 5436 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 1003:
#line 5437 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 1004:
#line 5438 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 1005:
#line 5439 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 1006:
#line 5440 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 1007:
#line 5441 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 1008:
#line 5442 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 1009:
#line 5443 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 1010:
#line 5444 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 1011:
#line 5445 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "comment"); }
    break;

  case 1012:
#line 5449 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 1013:
#line 5451 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 1014:
#line 5456 "src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1015:
#line 5479 "src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1016:
#line 5499 "src/sql/server/sql_parser.y"
    {
		  char *name = (yyvsp[(1) - (1)].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		  tpe = stack_find_type(m, name);
		  if (tpe->type->localtype == TYPE_lng ||
		      tpe->type->localtype == TYPE_int ||
		      tpe->type->localtype == TYPE_sht ||
		      tpe->type->localtype == TYPE_bte ) {
			lng sgn = stack_get_number(m, name);
			assert((lng) GDK_int_min <= sgn && sgn <= (lng) GDK_int_max);
			(yyval.i_val) = (int) sgn;
		  } else {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) has wrong type (number expected)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 1017:
#line 5532 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1018:
#line 5534 "src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 1019:
#line 5542 "src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1020:
#line 5549 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1021:
#line 5554 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 1022:
#line 5568 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1024:
#line 5573 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1026:
#line 5581 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1027:
#line 5587 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
    break;

  case 1028:
#line 5595 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 1029:
#line 5596 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1030:
#line 5597 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1031:
#line 5599 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  append_string(l, (yyvsp[(4) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1032:
#line 5605 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (6)].sval));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
    break;

  case 1033:
#line 5611 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1034:
#line 5612 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 1035:
#line 5613 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[(1) - (1)].l) ); }
    break;

  case 1037:
#line 5622 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1038:
#line 5624 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1050:
#line 5646 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1051:
#line 5654 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1052:
#line 5662 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1053:
#line 5672 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1054:
#line 5682 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1055:
#line 5684 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1056:
#line 5688 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1057:
#line 5692 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1058:
#line 5696 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1059:
#line 5700 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1060:
#line 5704 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1061:
#line 5708 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1063:
#line 5718 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1064:
#line 5722 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1065:
#line 5724 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1066:
#line 5734 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1067:
#line 5741 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1068:
#line 5742 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1071:
#line 5755 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1072:
#line 5762 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1073:
#line 5764 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1075:
#line 5772 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1076:
#line 5773 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1077:
#line 5777 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1078:
#line 5778 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1079:
#line 5779 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1080:
#line 5780 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1081:
#line 5781 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1082:
#line 5788 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1083:
#line 5798 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1084:
#line 5799 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1085:
#line 5804 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1086:
#line 5806 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1087:
#line 5811 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1088:
#line 5816 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1089:
#line 5820 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1090:
#line 5821 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1091:
#line 5825 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1092:
#line 5832 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1093:
#line 5839 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1094:
#line 5840 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1095:
#line 5847 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1097:
#line 5859 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1098:
#line 5861 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1099:
#line 5872 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1114:
#line 5918 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1115:
#line 5929 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1117:
#line 5934 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1118:
#line 5938 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1119:
#line 5939 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1120:
#line 5943 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1121:
#line 5944 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1122:
#line 5945 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1123:
#line 5960 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1124:
#line 5964 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1125:
#line 5966 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1130:
#line 5989 "src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1131:
#line 5998 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1132:
#line 6002 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1162:
#line 6098 "src/sql/server/sql_parser.y"
    { 
          dlist *aggr = L();

          if ((yyvsp[(4) - (6)].sym)) {
	  	if ((yyvsp[(3) - (6)].sym) != NULL && (yyvsp[(3) - (6)].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[(3) - (6)].sym);
	
			s->orderby = (yyvsp[(4) - (6)].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[(3) - (6)].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 14649 "src/sql/server/sql_parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (m, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (m, yymsg);
	  }
	else
	  {
	    yyerror (m, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, m);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, m);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, m);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, m);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6119 "src/sql/server/sql_parser.y"

int find_subgeometry_type(char* geoSubType) {
	int subType = 0;
	if(strcmp(geoSubType, "point") == 0 )
		subType = (1 << 2);
	else if(strcmp(geoSubType, "linestring") == 0)
		subType = (2 << 2);
	else if(strcmp(geoSubType, "polygon") == 0)
		subType = (4 << 2);
	else if(strcmp(geoSubType, "multipoint") == 0)
		subType = (5 << 2);
	else if(strcmp(geoSubType, "multilinestring") == 0)
		subType = (6 << 2);
	else if(strcmp(geoSubType, "multipolygon") == 0)
		subType = (7 << 2);
	else if(strcmp(geoSubType, "geometrycollection") == 0)
		subType = (8 << 2);
	else {
		size_t strLength = strlen(geoSubType);
		if(strLength > 0 ) {
			char *typeSubStr = GDKmalloc(strLength);
			char flag = geoSubType[strLength-1]; 

			if (typeSubStr == NULL) {
				return -1;
			}
			memcpy(typeSubStr, geoSubType, strLength-1);
			typeSubStr[strLength-1]='\0';
			if(flag == 'z' || flag == 'm' ) {
				subType = find_subgeometry_type(typeSubStr);
				if (subType == -1) {
					GDKfree(typeSubStr);
					return -1;
				}
				if(flag == 'z')
					SET_Z(subType);
				if(flag == 'm')
					SET_M(subType);
			}
			GDKfree(typeSubStr);
		}

	}
	return subType;	
}

char *token2string(int token)
{
	switch (token) {
#define SQL(TYPE) case SQL_##TYPE : return #TYPE
	SQL(CREATE_SCHEMA);
	SQL(CREATE_TABLE);
	SQL(CREATE_VIEW);
	SQL(CREATE_INDEX);
	SQL(CREATE_ROLE);
	SQL(CREATE_USER);
	SQL(CREATE_TYPE);
	SQL(CREATE_FUNC);
	SQL(CREATE_SEQ);
	SQL(CREATE_TRIGGER);
	SQL(DROP_SCHEMA);
	SQL(DROP_TABLE);
	SQL(DROP_VIEW);
	SQL(DROP_INDEX);
	SQL(DROP_ROLE);
	SQL(DROP_USER);
	SQL(DROP_TYPE);
	SQL(DROP_FUNC);
	SQL(DROP_SEQ);
	SQL(DROP_TRIGGER);
	SQL(ALTER_TABLE);
	SQL(ALTER_SEQ);
	SQL(ALTER_USER);
	SQL(DROP_COLUMN);
	SQL(DROP_CONSTRAINT);
	SQL(DROP_DEFAULT);
	SQL(DECLARE);
	SQL(DECLARE_TABLE);
	SQL(COMMENT);
	SQL(SET);
	SQL(PREP);
	SQL(NAME);
	SQL(USER);
	SQL(PATH);
	SQL(CHARSET);
	SQL(SCHEMA);
	SQL(TABLE);
	SQL(VIEW);
	SQL(INDEX);
	SQL(TYPE);
	SQL(SEQUENCE);
	SQL(CASE);
	SQL(CAST);
	SQL(RETURN);
	SQL(IF);
	SQL(ELSE);
	SQL(WHILE);
	SQL(COLUMN);
	SQL(COLUMN_OPTIONS);
	SQL(COALESCE);
	SQL(CONSTRAINT);
	SQL(CHECK);
	SQL(DEFAULT);
	SQL(NOT_NULL);
	SQL(NULL);
	SQL(NULLIF);
	SQL(UNIQUE);
	SQL(PRIMARY_KEY);
	SQL(FOREIGN_KEY);
	SQL(BEGIN);
#define TR(TYPE) case TR_##TYPE : return #TYPE
	TR(COMMIT);
	TR(ROLLBACK);
	TR(SAVEPOINT);
	TR(RELEASE);
	TR(START);
	TR(MODE);
	SQL(INSERT);
	SQL(DELETE);
	SQL(UPDATE);
	SQL(CROSS);
	SQL(JOIN);
	SQL(SELECT);
	SQL(WHERE);
	SQL(FROM);
	SQL(UNIONJOIN);
	SQL(UNION);
	SQL(EXCEPT);
	SQL(INTERSECT);
	SQL(VALUES);
	SQL(ASSIGN);
	SQL(ORDERBY);
	SQL(GROUPBY);
	SQL(DESC);
	SQL(AND);
	SQL(OR);
	SQL(NOT);
	SQL(EXISTS);
	SQL(NOT_EXISTS);
	SQL(OP);
	SQL(UNOP);
	SQL(BINOP);
	SQL(NOP);
	SQL(BETWEEN);
	SQL(NOT_BETWEEN);
	SQL(LIKE);
	SQL(IN);
	SQL(NOT_IN);
	SQL(GRANT);
	SQL(GRANT_ROLES);
	SQL(REVOKE);
	SQL(REVOKE_ROLES);
	SQL(EXECUTE);
	SQL(PRIVILEGES);
	SQL(ROLE);
	SQL(PARAMETER);
	SQL(FUNC);
	SQL(AGGR);
	SQL(RANK);
	SQL(FRAME);
	SQL(COMPARE);
	SQL(FILTER);
	SQL(ROUTINE);
	SQL(TEMP_LOCAL);
	SQL(TEMP_GLOBAL);
	SQL(INT_VALUE);
	SQL(ATOM);
	SQL(USING);
	SQL(WHEN);
	SQL(ESCAPE);
	SQL(COPYFROM);
	SQL(BINCOPYFROM);
	SQL(COPYTO);
	SQL(EXPORT);
	SQL(NEXT);
	SQL(MULSTMT);
	SQL(WITH);
	SQL(XMLCOMMENT);
	SQL(XMLCONCAT);
	SQL(XMLDOCUMENT);
	SQL(XMLELEMENT);
	SQL(XMLATTRIBUTE);
	SQL(XMLFOREST);
	SQL(XMLPARSE);
	SQL(XMLPI);
	SQL(XMLQUERY);
	SQL(XMLTEXT);
	SQL(XMLVALIDATE);
	SQL(XMLNAMESPACES);
	}
	return "unknown";	/* just needed for broken compilers ! */
}

void *sql_error( mvc * sql, int error_code, char *format, ... )
{
	va_list	ap;

	va_start (ap,format);
	if (sql->errstr[0] == '\0')
		vsnprintf(sql->errstr, ERRSIZE-1, _(format), ap);
	if (!sql->session->status)
		sql->session->status = -error_code;
	va_end (ap);
	return NULL;
}

int sqlerror(mvc * c, const char *err)
{
	const char *sqlstate;

	if (err && strlen(err) > 6 && err[5] == '!') {
		/* sql state provided */
		sqlstate = "";
	} else {
		/* default: Syntax error or access rule violation */
		sqlstate = SQLSTATE(42000);
	}
	if (c->scanner.errstr) {
		if (c->scanner.errstr[0] == '!'){
			assert(0);// catch it
			(void)sql_error(c, 4,
					"%s%s: %s\n",
					sqlstate, err, c->scanner.errstr + 1);
		} else
			(void)sql_error(c, 4,
					"%s%s: %s in \"%.80s\"\n",
					sqlstate, err, c->scanner.errstr,
					QUERY(c->scanner));
	} else
		(void)sql_error(c, 4,
				"%s%s in: \"%.80s\"\n",
				sqlstate, err, QUERY(c->scanner));
	return 1;
}


