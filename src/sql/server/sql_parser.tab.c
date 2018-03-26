/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sqlparse
#define yylex           sqllex
#define yyerror         sqlerror
#define yydebug         sqldebug
#define yynerrs         sqlnerrs


/* Copy the first part of user declarations.  */
#line 9 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:339  */

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

#include <unistd.h>
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


#line 161 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sql_parser.tab.h".  */
#ifndef YY_SQL_SRC_MONETDBLITE_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
# define YY_SQL_SRC_MONETDBLITE_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    GEOMETRY = 307,
    GEOMETRYSUBTYPE = 308,
    GEOMETRYA = 309,
    USER = 310,
    CURRENT_USER = 311,
    SESSION_USER = 312,
    LOCAL = 313,
    LOCKED = 314,
    BEST = 315,
    EFFORT = 316,
    CURRENT_ROLE = 317,
    sqlSESSION = 318,
    sqlDELETE = 319,
    UPDATE = 320,
    SELECT = 321,
    INSERT = 322,
    LATERAL = 323,
    LEFT = 324,
    RIGHT = 325,
    FULL = 326,
    OUTER = 327,
    NATURAL = 328,
    CROSS = 329,
    JOIN = 330,
    INNER = 331,
    COMMIT = 332,
    ROLLBACK = 333,
    SAVEPOINT = 334,
    RELEASE = 335,
    WORK = 336,
    CHAIN = 337,
    NO = 338,
    PRESERVE = 339,
    ROWS = 340,
    START = 341,
    TRANSACTION = 342,
    READ = 343,
    WRITE = 344,
    ONLY = 345,
    ISOLATION = 346,
    LEVEL = 347,
    UNCOMMITTED = 348,
    COMMITTED = 349,
    sqlREPEATABLE = 350,
    SERIALIZABLE = 351,
    DIAGNOSTICS = 352,
    sqlSIZE = 353,
    STORAGE = 354,
    ASYMMETRIC = 355,
    SYMMETRIC = 356,
    ORDER = 357,
    ORDERED = 358,
    BY = 359,
    IMPRINTS = 360,
    EXISTS = 361,
    ESCAPE = 362,
    HAVING = 363,
    sqlGROUP = 364,
    sqlNULL = 365,
    FROM = 366,
    FOR = 367,
    MATCH = 368,
    EXTRACT = 369,
    SEQUENCE = 370,
    INCREMENT = 371,
    RESTART = 372,
    CONTINUE = 373,
    MAXVALUE = 374,
    MINVALUE = 375,
    CYCLE = 376,
    NOMAXVALUE = 377,
    NOMINVALUE = 378,
    NOCYCLE = 379,
    NEXT = 380,
    VALUE = 381,
    CACHE = 382,
    GENERATED = 383,
    ALWAYS = 384,
    IDENTITY = 385,
    SERIAL = 386,
    BIGSERIAL = 387,
    AUTO_INCREMENT = 388,
    SCOLON = 389,
    AT = 390,
    XMLCOMMENT = 391,
    XMLCONCAT = 392,
    XMLDOCUMENT = 393,
    XMLELEMENT = 394,
    XMLATTRIBUTES = 395,
    XMLFOREST = 396,
    XMLPARSE = 397,
    STRIP = 398,
    WHITESPACE = 399,
    XMLPI = 400,
    XMLQUERY = 401,
    PASSING = 402,
    XMLTEXT = 403,
    NIL = 404,
    REF = 405,
    ABSENT = 406,
    EMPTY = 407,
    DOCUMENT = 408,
    ELEMENT = 409,
    CONTENT = 410,
    XMLNAMESPACES = 411,
    NAMESPACE = 412,
    XMLVALIDATE = 413,
    RETURNING = 414,
    LOCATION = 415,
    ID = 416,
    ACCORDING = 417,
    XMLSCHEMA = 418,
    URI = 419,
    XMLAGG = 420,
    FILTER = 421,
    UNION = 422,
    EXCEPT = 423,
    INTERSECT = 424,
    CORRESPONDING = 425,
    UNIONJOIN = 426,
    WITH = 427,
    DATA = 428,
    FILTER_FUNC = 429,
    NOT = 430,
    ALL = 431,
    ANY = 432,
    NOT_BETWEEN = 433,
    BETWEEN = 434,
    NOT_IN = 435,
    sqlIN = 436,
    NOT_LIKE = 437,
    LIKE = 438,
    NOT_ILIKE = 439,
    ILIKE = 440,
    OR = 441,
    SOME = 442,
    AND = 443,
    COMPARISON = 444,
    LEFT_SHIFT = 445,
    RIGHT_SHIFT = 446,
    LEFT_SHIFT_ASSIGN = 447,
    RIGHT_SHIFT_ASSIGN = 448,
    CONCATSTRING = 449,
    SUBSTRING = 450,
    POSITION = 451,
    SPLIT_PART = 452,
    UMINUS = 453,
    GEOM_OVERLAP = 454,
    GEOM_OVERLAP_OR_ABOVE = 455,
    GEOM_OVERLAP_OR_BELOW = 456,
    GEOM_OVERLAP_OR_LEFT = 457,
    GEOM_OVERLAP_OR_RIGHT = 458,
    GEOM_BELOW = 459,
    GEOM_ABOVE = 460,
    GEOM_DIST = 461,
    GEOM_MBR_EQUAL = 462,
    TEMP = 463,
    TEMPORARY = 464,
    STREAM = 465,
    MERGE = 466,
    REMOTE = 467,
    REPLICA = 468,
    ASC = 469,
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
#define GEOMETRY 307
#define GEOMETRYSUBTYPE 308
#define GEOMETRYA 309
#define USER 310
#define CURRENT_USER 311
#define SESSION_USER 312
#define LOCAL 313
#define LOCKED 314
#define BEST 315
#define EFFORT 316
#define CURRENT_ROLE 317
#define sqlSESSION 318
#define sqlDELETE 319
#define UPDATE 320
#define SELECT 321
#define INSERT 322
#define LATERAL 323
#define LEFT 324
#define RIGHT 325
#define FULL 326
#define OUTER 327
#define NATURAL 328
#define CROSS 329
#define JOIN 330
#define INNER 331
#define COMMIT 332
#define ROLLBACK 333
#define SAVEPOINT 334
#define RELEASE 335
#define WORK 336
#define CHAIN 337
#define NO 338
#define PRESERVE 339
#define ROWS 340
#define START 341
#define TRANSACTION 342
#define READ 343
#define WRITE 344
#define ONLY 345
#define ISOLATION 346
#define LEVEL 347
#define UNCOMMITTED 348
#define COMMITTED 349
#define sqlREPEATABLE 350
#define SERIALIZABLE 351
#define DIAGNOSTICS 352
#define sqlSIZE 353
#define STORAGE 354
#define ASYMMETRIC 355
#define SYMMETRIC 356
#define ORDER 357
#define ORDERED 358
#define BY 359
#define IMPRINTS 360
#define EXISTS 361
#define ESCAPE 362
#define HAVING 363
#define sqlGROUP 364
#define sqlNULL 365
#define FROM 366
#define FOR 367
#define MATCH 368
#define EXTRACT 369
#define SEQUENCE 370
#define INCREMENT 371
#define RESTART 372
#define CONTINUE 373
#define MAXVALUE 374
#define MINVALUE 375
#define CYCLE 376
#define NOMAXVALUE 377
#define NOMINVALUE 378
#define NOCYCLE 379
#define NEXT 380
#define VALUE 381
#define CACHE 382
#define GENERATED 383
#define ALWAYS 384
#define IDENTITY 385
#define SERIAL 386
#define BIGSERIAL 387
#define AUTO_INCREMENT 388
#define SCOLON 389
#define AT 390
#define XMLCOMMENT 391
#define XMLCONCAT 392
#define XMLDOCUMENT 393
#define XMLELEMENT 394
#define XMLATTRIBUTES 395
#define XMLFOREST 396
#define XMLPARSE 397
#define STRIP 398
#define WHITESPACE 399
#define XMLPI 400
#define XMLQUERY 401
#define PASSING 402
#define XMLTEXT 403
#define NIL 404
#define REF 405
#define ABSENT 406
#define EMPTY 407
#define DOCUMENT 408
#define ELEMENT 409
#define CONTENT 410
#define XMLNAMESPACES 411
#define NAMESPACE 412
#define XMLVALIDATE 413
#define RETURNING 414
#define LOCATION 415
#define ID 416
#define ACCORDING 417
#define XMLSCHEMA 418
#define URI 419
#define XMLAGG 420
#define FILTER 421
#define UNION 422
#define EXCEPT 423
#define INTERSECT 424
#define CORRESPONDING 425
#define UNIONJOIN 426
#define WITH 427
#define DATA 428
#define FILTER_FUNC 429
#define NOT 430
#define ALL 431
#define ANY 432
#define NOT_BETWEEN 433
#define BETWEEN 434
#define NOT_IN 435
#define sqlIN 436
#define NOT_LIKE 437
#define LIKE 438
#define NOT_ILIKE 439
#define ILIKE 440
#define OR 441
#define SOME 442
#define AND 443
#define COMPARISON 444
#define LEFT_SHIFT 445
#define RIGHT_SHIFT 446
#define LEFT_SHIFT_ASSIGN 447
#define RIGHT_SHIFT_ASSIGN 448
#define CONCATSTRING 449
#define SUBSTRING 450
#define POSITION 451
#define SPLIT_PART 452
#define UMINUS 453
#define GEOM_OVERLAP 454
#define GEOM_OVERLAP_OR_ABOVE 455
#define GEOM_OVERLAP_OR_BELOW 456
#define GEOM_OVERLAP_OR_LEFT 457
#define GEOM_OVERLAP_OR_RIGHT 458
#define GEOM_BELOW 459
#define GEOM_ABOVE 460
#define GEOM_DIST 461
#define GEOM_MBR_EQUAL 462
#define TEMP 463
#define TEMPORARY 464
#define STREAM 465
#define MERGE 466
#define REMOTE 467
#define REPLICA 468
#define ASC 469
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 110 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:355  */

	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;

#line 883 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlparse (mvc *m);

#endif /* !YY_SQL_SRC_MONETDBLITE_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 119 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:358  */

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/

#line 905 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  414
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   591

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   209,   195,     2,
     174,   175,   207,   193,   349,   194,   350,   208,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   351,     2,
       2,   178,     2,   354,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   352,     2,   353,   197,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   196,     2,   210,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   176,
     177,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   211,   212,   213,   214,   215,   216,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   625,   625,   636,   636,   650,   650,   665,   665,   680,
     680,   690,   690,   696,   697,   698,   699,   700,   705,   708,
     709,   713,   714,   718,   719,   723,   726,   729,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   748,   749,   753,
     754,   758,   760,   764,   769,   778,   783,   788,   796,   804,
     812,   820,   826,   834,   843,   852,   856,   860,   867,   870,
     871,   875,   876,   880,   881,   885,   885,   885,   885,   885,
     888,   889,   893,   894,   898,   907,   918,   919,   924,   925,
     929,   930,   935,   936,   940,   948,   958,   959,   963,   964,
     968,   972,   979,   980,   985,   986,   990,   991,   992,  1003,
    1004,  1005,  1009,  1010,  1015,  1016,  1017,  1018,  1019,  1020,
    1021,  1025,  1026,  1031,  1032,  1038,  1044,  1049,  1054,  1059,
    1064,  1069,  1074,  1079,  1084,  1097,  1103,  1109,  1119,  1124,
    1128,  1132,  1134,  1142,  1150,  1155,  1160,  1170,  1171,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1198,  1209,  1226,
    1236,  1237,  1241,  1242,  1246,  1247,  1248,  1252,  1253,  1254,
    1255,  1256,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1274,  1284,  1285,  1286,  1287,  1307,  1312,  1323,  1324,  1325,
    1329,  1330,  1334,  1346,  1353,  1364,  1375,  1389,  1400,  1416,
    1417,  1418,  1419,  1420,  1421,  1425,  1426,  1427,  1428,  1432,
    1433,  1437,  1447,  1448,  1449,  1453,  1455,  1459,  1459,  1460,
    1460,  1460,  1463,  1464,  1468,  1476,  1529,  1530,  1534,  1536,
    1541,  1550,  1552,  1556,  1556,  1556,  1559,  1563,  1567,  1576,
    1605,  1643,  1644,  1649,  1660,  1661,  1665,  1666,  1667,  1668,
    1669,  1673,  1677,  1681,  1682,  1683,  1684,  1685,  1689,  1690,
    1691,  1692,  1696,  1697,  1701,  1702,  1703,  1704,  1705,  1715,
    1719,  1721,  1723,  1738,  1742,  1744,  1749,  1753,  1766,  1767,
    1771,  1772,  1776,  1777,  1781,  1782,  1786,  1790,  1798,  1803,
    1804,  1809,  1823,  1837,  1888,  1902,  1916,  1966,  1979,  1992,
    2016,  2018,  2022,  2040,  2041,  2046,  2047,  2052,  2053,  2054,
    2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,  2063,  2067,
    2068,  2069,  2070,  2071,  2072,  2073,  2074,  2078,  2079,  2080,
    2081,  2082,  2083,  2096,  2100,  2104,  2113,  2116,  2117,  2118,
    2124,  2128,  2129,  2130,  2135,  2141,  2149,  2157,  2159,  2164,
    2172,  2174,  2179,  2180,  2187,  2201,  2202,  2204,  2215,  2236,
    2237,  2241,  2242,  2247,  2251,  2259,  2261,  2266,  2267,  2271,
    2275,  2280,  2329,  2344,  2345,  2350,  2351,  2352,  2353,  2354,
    2358,  2359,  2363,  2364,  2370,  2371,  2372,  2373,  2376,  2378,
    2381,  2383,  2387,  2395,  2396,  2400,  2401,  2405,  2406,  2410,
    2412,  2418,  2424,  2430,  2436,  2442,  2451,  2458,  2465,  2472,
    2479,  2489,  2495,  2500,  2509,  2518,  2527,  2536,  2545,  2551,
    2556,  2557,  2558,  2559,  2568,  2569,  2570,  2574,  2577,  2582,
    2583,  2584,  2589,  2590,  2595,  2596,  2597,  2598,  2599,  2603,
    2610,  2612,  2614,  2616,  2620,  2622,  2624,  2629,  2630,  2634,
    2636,  2642,  2643,  2644,  2645,  2649,  2650,  2651,  2652,  2656,
    2657,  2661,  2662,  2663,  2667,  2668,  2672,  2686,  2700,  2705,
    2716,  2723,  2735,  2736,  2741,  2742,  2748,  2749,  2753,  2754,
    2758,  2762,  2771,  2775,  2780,  2785,  2794,  2795,  2799,  2800,
    2801,  2802,  2804,  2809,  2810,  2814,  2815,  2819,  2820,  2824,
    2825,  2829,  2830,  2834,  2835,  2840,  2849,  2850,  2851,  2855,
    2861,  2870,  2912,  2920,  2931,  2932,  2934,  2936,  2941,  2942,
    2947,  2948,  2953,  2954,  2959,  2981,  2985,  2986,  2990,  2991,
    2995,  2996,  2997,  3001,  3002,  3007,  3011,  3016,  3021,  3029,
    3030,  3036,  3038,  3043,  3051,  3059,  3070,  3071,  3072,  3076,
    3077,  3081,  3082,  3083,  3087,  3088,  3108,  3112,  3122,  3123,
    3127,  3140,  3145,  3147,  3151,  3162,  3173,  3204,  3205,  3210,
    3214,  3223,  3232,  3240,  3241,  3245,  3246,  3247,  3252,  3253,
    3255,  3260,  3264,  3274,  3275,  3279,  3280,  3285,  3289,  3295,
    3301,  3311,  3323,  3328,  3332,  3331,  3344,  3349,  3354,  3359,
    3367,  3368,  3372,  3373,  3377,  3379,  3385,  3386,  3391,  3396,
    3400,  3405,  3409,  3410,  3415,  3416,  3420,  3424,  3425,  3429,
    3433,  3434,  3438,  3442,  3446,  3447,  3452,  3461,  3462,  3463,
    3467,  3468,  3469,  3470,  3471,  3472,  3473,  3474,  3475,  3479,
    3496,  3500,  3507,  3517,  3524,  3534,  3535,  3536,  3540,  3547,
    3554,  3561,  3571,  3575,  3591,  3592,  3596,  3602,  3608,  3613,
    3621,  3623,  3628,  3636,  3646,  3647,  3648,  3652,  3656,  3657,
    3661,  3665,  3675,  3676,  3678,  3683,  3684,  3686,  3692,  3693,
    3700,  3707,  3714,  3721,  3728,  3735,  3742,  3749,  3756,  3763,
    3770,  3776,  3783,  3790,  3797,  3804,  3811,  3818,  3825,  3831,
    3838,  3845,  3852,  3859,  3861,  3883,  3887,  3888,  3892,  3893,
    3895,  3897,  3898,  3899,  3900,  3901,  3902,  3903,  3904,  3905,
    3906,  3907,  3908,  3909,  3913,  3983,  3989,  3990,  3994,  3999,
    4000,  4005,  4006,  4011,  4012,  4017,  4018,  4022,  4023,  4027,
    4028,  4029,  4033,  4037,  4042,  4043,  4044,  4048,  4052,  4053,
    4054,  4055,  4056,  4060,  4064,  4068,  4096,  4097,  4102,  4103,
    4104,  4105,  4109,  4116,  4121,  4126,  4131,  4136,  4144,  4145,
    4149,  4159,  4169,  4176,  4183,  4190,  4197,  4210,  4211,  4216,
    4221,  4226,  4231,  4239,  4240,  4241,  4245,  4272,  4273,  4278,
    4279,  4284,  4285,  4291,  4297,  4303,  4309,  4315,  4321,  4328,
    4332,  4333,  4334,  4338,  4339,  4350,  4352,  4356,  4358,  4362,
    4363,  4369,  4378,  4379,  4380,  4381,  4382,  4386,  4387,  4391,
    4392,  4393,  4397,  4403,  4406,  4412,  4415,  4421,  4424,  4429,
    4449,  4450,  4451,  4455,  4461,  4525,  4556,  4617,  4656,  4673,
    4689,  4705,  4721,  4722,  4739,  4756,  4773,  4794,  4798,  4805,
    4850,  4851,  4855,  4866,  4869,  4873,  4881,  4887,  4895,  4899,
    4904,  4906,  4912,  4920,  4922,  4927,  4931,  4937,  4945,  4947,
    4952,  4960,  4962,  4967,  4968,  4972,  4977,  4988,  4999,  5009,
    5019,  5021,  5026,  5027,  5029,  5031,  5040,  5041,  5050,  5051,
    5052,  5053,  5054,  5056,  5057,  5070,  5088,  5089,  5103,  5123,
    5124,  5125,  5126,  5127,  5128,  5129,  5131,  5132,  5134,  5146,
    5160,  5174,  5181,  5196,  5211,  5218,  5244,  5261,  5281,  5296,
    5297,  5301,  5302,  5303,  5306,  5307,  5310,  5312,  5315,  5316,
    5317,  5318,  5319,  5320,  5324,  5325,  5326,  5327,  5328,  5329,
    5330,  5331,  5335,  5336,  5337,  5338,  5339,  5340,  5341,  5342,
    5343,  5344,  5345,  5346,  5347,  5349,  5350,  5351,  5352,  5353,
    5354,  5355,  5356,  5357,  5358,  5359,  5360,  5361,  5362,  5364,
    5365,  5366,  5367,  5368,  5369,  5370,  5371,  5372,  5373,  5374,
    5375,  5376,  5377,  5378,  5379,  5380,  5382,  5383,  5384,  5385,
    5386,  5387,  5388,  5389,  5391,  5392,  5393,  5394,  5395,  5396,
    5397,  5398,  5399,  5400,  5401,  5402,  5403,  5404,  5405,  5406,
    5407,  5408,  5409,  5410,  5411,  5412,  5413,  5414,  5415,  5419,
    5420,  5425,  5448,  5469,  5501,  5503,  5511,  5518,  5523,  5538,
    5539,  5543,  5546,  5550,  5556,  5565,  5566,  5567,  5568,  5574,
    5581,  5582,  5583,  5587,  5591,  5593,  5598,  5602,  5603,  5604,
    5605,  5606,  5607,  5608,  5609,  5610,  5611,  5615,  5623,  5631,
    5638,  5652,  5653,  5657,  5661,  5665,  5669,  5673,  5677,  5684,
    5688,  5692,  5693,  5703,  5711,  5712,  5716,  5720,  5724,  5731,
    5733,  5738,  5742,  5743,  5747,  5748,  5749,  5750,  5751,  5755,
    5768,  5769,  5773,  5775,  5780,  5786,  5790,  5791,  5795,  5800,
    5809,  5810,  5814,  5825,  5829,  5830,  5835,  5845,  5848,  5850,
    5854,  5858,  5859,  5863,  5864,  5868,  5872,  5875,  5877,  5881,
    5882,  5886,  5894,  5903,  5904,  5908,  5909,  5913,  5914,  5915,
    5930,  5934,  5935,  5945,  5946,  5950,  5954,  5958,  5968,  5972,
    5975,  5977,  5981,  5982,  5985,  5987,  5991,  5996,  5997,  6001,
    6002,  6006,  6010,  6013,  6015,  6019,  6023,  6027,  6030,  6032,
    6036,  6037,  6041,  6043,  6047,  6051,  6052,  6056,  6060,  6064
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "LOCALTIME", "LEX_ERROR", "GEOMETRY", "GEOMETRYSUBTYPE", "GEOMETRYA",
  "USER", "CURRENT_USER", "SESSION_USER", "LOCAL", "LOCKED", "BEST",
  "EFFORT", "CURRENT_ROLE", "sqlSESSION", "sqlDELETE", "UPDATE", "SELECT",
  "INSERT", "LATERAL", "LEFT", "RIGHT", "FULL", "OUTER", "NATURAL",
  "CROSS", "JOIN", "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT", "RELEASE",
  "WORK", "CHAIN", "NO", "PRESERVE", "ROWS", "START", "TRANSACTION",
  "READ", "WRITE", "ONLY", "ISOLATION", "LEVEL", "UNCOMMITTED",
  "COMMITTED", "sqlREPEATABLE", "SERIALIZABLE", "DIAGNOSTICS", "sqlSIZE",
  "STORAGE", "ASYMMETRIC", "SYMMETRIC", "ORDER", "ORDERED", "BY",
  "IMPRINTS", "EXISTS", "ESCAPE", "HAVING", "sqlGROUP", "sqlNULL", "FROM",
  "FOR", "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT", "RESTART",
  "CONTINUE", "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE", "NOMINVALUE",
  "NOCYCLE", "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS", "IDENTITY",
  "SERIAL", "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT", "XMLCOMMENT",
  "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES", "XMLFOREST",
  "XMLPARSE", "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY", "PASSING",
  "XMLTEXT", "NIL", "REF", "ABSENT", "EMPTY", "DOCUMENT", "ELEMENT",
  "CONTENT", "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE", "RETURNING",
  "LOCATION", "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG", "FILTER",
  "UNION", "EXCEPT", "INTERSECT", "CORRESPONDING", "UNIONJOIN", "WITH",
  "DATA", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "ALL", "ANY",
  "NOT_BETWEEN", "BETWEEN", "NOT_IN", "sqlIN", "NOT_LIKE", "LIKE",
  "NOT_ILIKE", "ILIKE", "OR", "SOME", "AND", "COMPARISON", "'+'", "'-'",
  "'&'", "'|'", "'^'", "LEFT_SHIFT", "RIGHT_SHIFT", "LEFT_SHIFT_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "CONCATSTRING", "SUBSTRING", "POSITION",
  "SPLIT_PART", "UMINUS", "'*'", "'/'", "'%'", "'~'", "GEOM_OVERLAP",
  "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_RIGHT", "GEOM_BELOW", "GEOM_ABOVE", "GEOM_DIST",
  "GEOM_MBR_EQUAL", "TEMP", "TEMPORARY", "STREAM", "MERGE", "REMOTE",
  "REPLICA", "ASC", "DESC", "AUTHORIZATION", "CHECK", "CONSTRAINT",
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
  "'['", "']'", "'?'", "$accept", "sqlstmt", "$@1", "$@2", "$@3", "$@4",
  "$@5", "create", "create_or_replace", "if_exists", "if_not_exists",
  "drop", "set", "declare", "sql", "opt_minmax", "declare_statement",
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
  "table_opt_storage", "table_def", "opt_temp", "opt_on_commit",
  "table_content_source", "as_subquery_clause", "with_or_without_data",
  "table_element_list", "add_table_element", "table_element",
  "serial_or_bigserial", "column_def", "opt_column_def_opt_list",
  "column_def_opt_list", "column_options", "column_option_list",
  "column_option", "default", "default_value", "column_constraint",
  "generated_column", "serial_opt_params", "table_constraint",
  "opt_constraint_name", "ref_action", "ref_on_update", "ref_on_delete",
  "opt_ref_action", "opt_match_type", "opt_match",
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
  "opt_from_clause", "table_ref_commalist", "table_ref", "$@6",
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
  "XML_aggregate", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     425,   426,   427,   428,    40,    41,   429,   430,    61,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,    43,    45,    38,   124,    94,   445,   446,
     447,   448,   449,   450,   451,   452,   453,    42,    47,    37,
     126,   454,   455,   456,   457,   458,   459,   460,   461,   462,
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

#define YYPACT_NINF -1690

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1690)))

#define YYTABLE_NINF -1131

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1585,    53, -1690,   354, 17006,   -17,   -11,   483,   483, 17006,
     556,   637, -1690, 17006,    83,   466,   471, -1690, 14315, 17006,
   -1690, -1690, -1690, -1690, -1690,   496, -1690, 17305,  1189,   164,
     644,    76,   102,   744,   951,   702,   502, 12820, 12521,   634,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690,   774,   665, -1690,
   -1690, 17006, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690,   540,   505, -1690, -1690,
   -1690,  4264, 17006, -1690,   680,   680, -1690, 17006,   790,    25,
   -1690,   659,   -17,   785,   532,  1265, -1690, -1690, -1690, -1690,
     701, -1690,   529,   659,  1647,  1647,  1585,  1585,  1647, -1690,
   -1690,   715, -1690, 17006,   477, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690,   659,   659, -1690,   621, -1690, -1690,   659,   344,
    -184,   628, -1690,   569,   664,   599, -1690, -1690, -1690,   705,
     718,   245,  1550,   872,   790, 15511, 17006, 17006, -1690,   512,
     752,  1030,   786, -1690,    57, -1690, -1690,   458, -1690, -1690,
     583, 17006,   688, -1690, -1690, 17006, -1690, -1690,   797,   801,
     804,   809, 17006, 17006,   757,   757, -1690,   773, -1690, -1690,
     825,   878, 17006, 17006, 17006, 17006, 17006, 17006, 17006, 17006,
     910,   616, 17006,   842,   842,   842,   842, 17006,   842,   842,
     842, 17006,   842,   750, -1690, -1690, -1690,   942, 17006, 17006,
   17006,   874,  1028,  1042,  1045,   924,   944,  1015,   887, -1690,
     968, -1690, -1690,  1133,   440,   440,   440,   935, -1690,   950,
   15810, 17006,  1238,  1238,  1238,  1239,  1069,  1073,  1078, -1690,
   -1690, -1690, -1690, -1690,  1083,  1084,  1241, -1690, -1690, -1690,
    1091,  1091,  1091,  1091,  1091, -1690,  1093, -1690,  1094,  1144,
   17006,  1100,  1101,  1102,  1115,  1118,  1119,  1120,  1121,  1124,
    1125,  1126,  3214,  4964,  9694,  9694,  1127,  1132,  1136, -1690,
    9694,  1238,   513,   568,   221,  7363,  1140,  1145,  4964, -1690,
   -1690,   351, 16109,  1116, -1690,  1252, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, 17006, -1690, -1690, -1690, 12179, -1690, -1690,
   -1690,   973, -1690,   972, -1690, -1690,   974, -1690, -1690,  1151,
    1155,  1156,   997, -1690, -1690, -1690, -1690, -1690, -1690,  1238,
    1238,   -75, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690,   332,   899, -1690,  1057, -1690,
     918,  1254,  1233, -1690,   995, -1690, 17006, -1690, -1690,  1019,
   -1690,  4264, -1690, -1690, 17006,  1113, 17006, 17006, 17006, 17006,
   17006, 17006, 17006, 17006, 17006, -1690,  1081,  7696, 14315,  1064,
    1229,  1240, -1690, -1690,  1242,  5664,   477,  1243,  1245,   750,
   -1690, -1690, -1690, -1690, -1690, -1690,   100,  1550,   100,  1052,
   13119,   356,  1266,  1272,  1274,   -22,   790, -1690,   755,   510,
     956,   668,  1211,   694, 17006, -1690,    45,  1130, 17006,  1030,
    1082, -1690, -1690,  1216, -1690, -1690,   365,   757,   757,   757,
     757,  1152,  1220,  1217, 17604, 17006, 17006,   757, 17006,  1225,
    1226,  1227,  1235,   659,   733, -1690, -1690,   842,  1175, 17006,
   17006, 17006, 17006,   750,  1306, 17006, 17006, 17006, 17006, -1690,
   17006, 17006, 17006, -1690, 17006, -1690, -1690, -1690, 17006,   -28,
   -1690, -1690,    62,  1093, 17006,  4964, 17006,  1246,  1249, -1690,
     160, -1690, -1690, -1690,  1251,  1253, -1690, -1690, -1690, -1690,
   -1690,  1375, -1690,  1255, -1690, -1690, -1690,  1258,  1290,   829,
   17006, -1690, -1690, -1690,  1291,  1300,  1301,  1303,  9694, -1690,
   -1690,  1248,  1248,  1248,    33,  1109,  4964, -1690,  1237,   -21,
   -1690,  1250, -1690,  1067, -1690, -1690, -1690,  4964,  4964,  1396,
    1304, -1690, -1690, -1690, -1690, -1690,    71, -1690,   728,  1366,
   -1690,  9694,  9694,  9694,  1264,  1326,   681,  1267,  1480,  9694,
     635,  9694,  3214,  1310,  1311,  1312,   277,  1173,   238, -1690,
     -70,  1252,  3214,  1244,  1244,  9694,  9694,  9694,  1683, -1690,
     496,  1317,   496,  1317, -1690, -1690,  1238,  4964, 11553, -1690,
     784,  9694,  9694,  1252,  -199, 10003, 17006, -1690,   950,  4964,
   17006, -1690, -1690,  4964,  3564,  1022,  1022,  1318,  1319,  9694,
    9694,  9694,  9694,  3564,  1139,  9694,  9694,  9694,  9694,  9694,
    9694,  9694,  9694,  9694,  9694,  9694,  9694,  9694,  9694,  9694,
    9694,  9694,  9694,  9694,  9694,  9694,  9694,  9694,  9694,    43,
    1321,  1299,  4264,  1333,  5997,  9694, -1690, -1690, 13418, 14913,
    1222,  1310, -1690,   369, -1690, -1690,  1429,  1435, -1690, -1690,
   -1690,   824,   496,   790, -1690,  1341,  1406, -1690, 17006,  1344,
    1344,  1344,  1344, -1690, -1690,  1169, -1690, -1690,   593, -1690,
   -1690, 14003,   242, -1690, -1690,    50,  1275, -1690, -1690, -1690,
    3214, -1690,   261, -1690, -1690,   869,   750, -1690, -1690, -1690,
   -1690,   -79, -1690, -1690, -1690,    70, -1690,  1113, 17006, -1690,
   -1690, -1690, -1690, -1690, -1690,   100,   100, -1690, -1690, -1690,
    1261,   755,  1256,  1257, -1690,  1420,  1353,  1030,  1030, -1690,
   -1690, -1690, -1690,  1030,  2998,   956, -1690, -1690,   499,    79,
    1259,   848, -1690,  1415,    49,    49, 17006,   659,  1206,  1030,
     755,  1357,  2998,   365, -1690, -1690, 17006, 17006, 17006, 17006,
    1292,  1273, -1690,  1434, 17006,  1279,  1313,    24,  1278, 17006,
    1371, 16408, 16408, 16408, 16408,  1223, -1690, -1690,    69, 17006,
   17006,   750,   750,   750,   750, -1690, -1690,  1344,  1344,  1344,
    1344,   750,   750,   750, -1690, -1690, -1690, -1690,   945, -1690,
   -1690, -1690,  1363,   968,   496,   496, -1690,  1530,   496,   496,
     496, -1690,   135,  1317,  1317, -1690, -1690, -1690, -1690, -1690,
    1290,  1258,  1277, -1690, -1690, -1690,   496,   496,   496,   496,
    1221, -1690, 13106,  1457,    83,    83,    83, -1690, -1690, -1690,
      33,  1064,  1363,  1093, 15810,   950,  4614, 17006,  1363,  1260,
    1228, -1690, -1690, -1690, -1690, -1690, -1690, -1690,  1454, 17006,
   14003,   642, 14003, -1690,    -3, -1690,  1408, 17006,  1395,  9694,
    1230, -1690, -1690,  9694, 17006, -1690,  1425,   642, -1690,  9694,
   -1690,  1473,  8029,   263, -1690, -1690, -1690,   982,  4964, 14614,
    2967, 13405,  1857,  1403,  1288,  1238,  1414,  1238,   829,   -63,
    9694, -1690,   834,  9694, -1690,  1262, 10289,  1268,   266,  4964,
   -1690, 13717,  2686, -1690, -1690,  1269,   896, 17903, 17903, 17903,
       5,   -14, -1690, -1690,  1481,  1116, -1690,  1252, -1690, -1690,
   -1690,  1733,  4964, -1690, -1690,  4964,  4964,  8362,  8362, -1690,
   12508, -1690, -1690, -1690, -1690,  1093, -1690, 14003,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,  1244,  1244,  1427,  1427,
    1427,  1683,   795,   795,   795,   795,  1458,  1458,  1458,  1458,
    1458, -1690,  1482,  1280, -1690, -1690, -1690,  9694,  1419,  9694,
   14003,  1440,    11,  1270,  1422,  1447,  1448, -1690,   210, -1690,
    1276, -1690, -1690, 17006,  1074,  1507, -1690, -1690, -1690, -1690,
     109, -1690,  1344,  2215, -1690, -1690, -1690, -1690, 17006, -1690,
   -1690, -1690,  9694, -1690, -1690, -1690, -1690, -1690, -1690,  8362,
   -1690,  1360,   100,  1512,  1364,  1512, -1690,    18,    18,  1238,
    1370, 17006, 17006,  1030,   423, -1690, -1690, -1690, -1690, -1690,
   17006, 17006, -1690, -1690, 17006,  1538,  1090, -1690, 17006, 17006,
   16707, 14315, -1690,  1523,  1325,  1523,   659,  1537, -1690, -1690,
    1372,  1030, -1690, -1690,  1479,  1479,  1479,  1479, 17006,   588,
   -1690, -1690, -1690,  1639,  1387, 17006,  1430, 15212,  1568, -1690,
    1340, 17006,  1479, 16408, -1690,  1497,  1324,  2998,  1502,  1503,
    1504,   512, -1690,  1351, -1690, -1690,  1413,  1344,   750, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690,  1509, -1690,  1510, -1690,  1513,   296,  1514,  1338, -1690,
     297, -1690, -1690, -1690, -1690,  1404,   851,  1516,  1343,  1518,
    1520,  1524,  9694, -1690, -1690, -1690,  1526, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,  1363, -1690,
    2998,  2998,  9694, -1690,   341,  1527,  9694,  1528,  1529, -1690,
    1349,  8695, 14003,   193, -1690,  1373, -1690,   576, -1690,  1358,
    1602,  1408,  1540,  1555,  1408, -1690,   299, -1690, -1690, -1690,
    1544,  1546,  1547,  1252,  9694,  9694,  9694,  9694, -1690,  1428,
   -1690, -1690, -1690, -1690,  9694, 10922, -1690,  1417, 14003, -1690,
    9694,  9694, -1690,  9694,  1252, 17903, 17903,  2686,  1310,  1548,
    1557,  1559,  1212,    83, 10003, -1690, -1690, -1690,  1020,  1660,
   -1690, 10003,  1662,  1666, 17006, -1690,  1565, -1690, -1690, -1690,
   14315, 17006, -1690,  1638,  1635,  1733,  1615,  1669,   304,   318,
    1238, -1690, -1690,  1640,  1570,  1644,  1576, -1690,  1578, -1690,
   14016,  9694, 17006, -1690, -1690, -1690, -1690, -1690, -1690,  1579,
    1407,  1402, -1690, -1690,  1487, -1690,   588, -1690,  1490, -1690,
   -1690, -1690,  1746,  1238, -1690, -1690, -1690, -1690, -1690,   750,
     750,   750, -1690, -1690, -1690,   432, -1690, 17006, -1690, -1690,
   -1690,   422,  1577, -1690,  1436, -1690,  1238, -1690,  1652,    65,
    1238, -1690, -1690, -1690,  1495, -1690, -1690, -1690, -1690, -1690,
    1488, 17006,   855, -1690, -1690, 14315, 17006,   320, -1690, -1690,
   -1690, -1690,   230, 17006, -1690,   512,  1592,  1498,  1603,  2328,
   17006, -1690,  1539,  1536,  1545,  1612, 17006, 17006, -1690, -1690,
   -1690, -1690, -1690, -1690,   496, -1690,   496, -1690,   496,  1290,
   -1690, -1690, -1690,   496, -1690, -1690, -1690, -1690, 17006,  1610,
    1611, 13705, -1690, -1690, -1690, -1690, -1690, -1690,  6330,  1408,
    1533,  9694, 14003,   324, -1690,  1460, -1690, -1690,   734,  9694,
    1408, 17006, -1690,  1646,  1648,  1616,  9694,  1408,   425,  9694,
   -1690,  1602, -1690,  1525,  1620, -1690,  1637, -1690,  8029,  8029,
    8362,  8362, 12808,  9993, 14303, 10605, -1690, -1690,  9694, -1690,
   14602, -1690, -1690, -1690, -1690,   325, -1690, -1690, -1690,    -8,
     896,  1735, 10003,   647, 10003, -1690, -1690,  1641, 17006,   212,
   -1690, 17006,  4964, -1690,  4964,  4964, -1690, -1690, -1690, 17006,
   -1690,  1709,   -10, -1690, -1690,  1649,  1650, -1690, -1690,  2998,
   17006, -1690, -1690, -1690,  1478,  1543, -1690, -1690, -1690,  1569,
     566, -1690,  1561,  1571,   659, -1690, -1690, -1690, -1690,   992,
   -1690,  1238,  1494,    97,  1238,  1663,  1663,  1517, -1690,  1599,
    1841, 17006, -1690,  1531, -1690,  1247,  1421, -1690,   855, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, 15212,  1574,
    1856,  1691, 17006,  1788, -1690,  1643,   -17,   556,   637,  1634,
   14315,  3914,  9028,  4964,  1560, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690,  1572, -1690, -1690, -1690, -1690,  1532,  2998,  2250,  1871,
    2250,  1655, -1690,  1541,  1554,  1710, -1690,  1711,  1718, -1690,
    1731,   334, -1690,  1558, -1690, -1690, -1690,  1738, 14003,  1573,
   -1690,   427, -1690,  1575,  1732, -1690, -1690, -1690,  8695, 17006,
    1653,  1657,  1658,  1661, -1690, -1690,  1734, -1690, -1690, -1690,
   -1690, -1690,   646,  1757, -1690, -1690,   321,  1584, -1690, -1690,
   -1690,   495, -1690,  1771, -1690, -1690, -1690,   340,   342,   345,
    9694, -1690, -1690,  9694, -1690,  9694, -1690, -1690, -1690, 17903,
   10003, -1690,   659,  4964, -1690,   647, 17006,   355,  1587,  1363,
    1745,  1745,  1587,  9694, -1690, -1690, -1690,  5314, -1690, -1690,
   -1690, -1690,  1676,  1667, -1690,   618, -1690,  1830,  9694,   659,
     659, -1690,  1812, -1690,  9694, -1690,   992, -1690, -1690, -1690,
   -1690,   520, -1690,  1238,  1863,   364, 17006,    49,    49,  1238,
    1238, -1690, -1690, 17006, -1690, -1690,  1775,  1774, -1690,   478,
   -1690,   378,    64,  1712,  4264, 17006, -1690,  1777, -1690,  1779,
   -1690, -1690,  1363,  4964, -1690,   846, 11862,   -62, -1690, 11566,
    4964, -1690, -1690,  1780, 10618, -1690,  1178,   224,  1678,   850,
    1844, -1690, -1690, -1690, -1690, -1690, 17006, 17006,  9694,  9694,
    9694, -1690,  9361, -1690, -1690, -1690, -1690,  1847,    56,  1848,
    1849, -1690, -1690, 17006, -1690, -1690,  9694,  1692,  1693,  1786,
     609, -1690, -1690, -1690, 14901, 15206, 15499, -1690, -1690, -1690,
    1363, -1690,   381, -1690,  1221,  6663,  1631,  1621,  1625,  1628,
   -1690, -1690, -1690,  1238, 17006, -1690, -1690, -1690, -1690,  2810,
    1694, -1690,  1645, -1690, -1690, -1690,  1862,  1800,  1706, 17006,
   -1690, -1690, -1690,  1627,  1747, -1690, -1690,   383, -1690,  1976,
    1523,  1523, -1690,  1707, -1690,   572,  1811, -1690, -1690,  1901,
    1902, -1690, 17006,  1721, -1690,  1651,  9694,   592,   239, -1690,
   -1690,  1670,  9694, -1690,   854, -1690, 11566,  1859,   159, 17006,
    1751,  1989, -1690, -1690, -1690, -1690,  1756,  1992, -1690,  -169,
    -143,   850, -1690,  1665, -1690,  1697, -1690,  1656, 14003,   384,
   -1690,  1671, -1690, -1690,  1668, -1690, -1690,  1845, -1690, -1690,
   -1690,  1602, -1690,  1855,  1858, -1690,  1852, 17006,  2008,   624,
   -1690, -1690, -1690, -1690, -1690, -1690,  1821, -1690, -1690, -1690,
       3, -1690, -1690, -1690, 17006,  1884, -1690,  4964, -1690,   659,
    1238, -1690, -1690, 17006, -1690,  1956,  1956, 17006,   398, -1690,
   -1690, -1690, -1690, -1690, 17006,   407, 14003,  1843, -1690, 10934,
    1713, 11238, -1690,  1700, 10302,  1882,  1702, -1690,   408,  2998,
   17006,  1178, 17006,  1178,  1436, -1690,  1436,  1436,  1436, -1690,
     859,  1850, 11875, -1690,  9694, 17006, -1690,  9694, -1690, -1690,
   -1690, -1690,  1865, -1690, -1690, -1690,  1865, -1690,  1869, 17006,
    2008, -1690, -1690, -1690,  1873,  7013,  1684, -1690,  1698, -1690,
     659,  1861,   652,  1917, -1690, -1690, -1690,  1973,  1973, -1690,
   -1690,   572, -1690, -1690,  9694, -1690, 10934,  1910, -1690, -1690,
    1729, -1690,  4964,  1727,  1730, -1690, 11250, -1690, 17006, -1690,
   -1690, -1690, -1690, -1690, 17006, 17006, 17006, 17006, -1690, -1690,
   -1690,  4964,  1743, -1690, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690,  2008, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690,  1715,  1736,  1737,
   -1690, -1690, -1690, -1690,  1917,   365, -1690, -1690,   112,  1810,
    2021,  1863,  1863, -1690, 14003, -1690, 10934, -1690, 10934,   268,
    1770, -1690,  1769,  2998, -1690, -1690, -1690, -1690,   654, -1690,
   -1690, -1690, -1690, -1690, -1690,  1810,  1218, -1690, -1690, -1690,
   -1690,  1138,  1815,  1816, -1690, -1690, -1690,  1762, -1690, -1690,
   17006, -1690, -1690, 12191, -1690, -1690,   101,   101,  2024, -1690,
    2025, -1690,  1915, -1690, 10302, -1690, -1690, -1690,  1957, -1690,
   -1690,  2052,   368, -1690, -1690,  1030, -1690, -1690, -1690, -1690,
   -1690,   409, -1690, -1690,  1030, -1690
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   520,     0,   450,   450,     0,
       0,     0,    15,     0,     0,    18,     0,    27,     0,     0,
       7,     5,     9,    11,     3,     0,    25,     0,     0,    86,
      26,     0,   478,     0,    19,     0,     0,     0,     0,     0,
      34,    35,    28,    29,    30,    33,    31,   145,   144,   141,
     142,   143,    37,   146,    32,   423,   422,   429,   428,   424,
     425,   427,   426,   546,   564,   552,   553,   602,     0,    38,
      16,     0,   924,   925,   927,   928,   929,   930,   932,   934,
     981,   937,   945,  1006,   968,   942,   983,   956,   967,   961,
     940,  1005,   975,   962,   951,   952,   953,   949,   943,   959,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,   960,   926,  1002,
    1001,   947,  1008,   941,   933,   966,  1003,  1004,   978,   954,
     979,   980,   976,   977,   950,   935,   939,   965,   963,   936,
     938,   955,   982,   958,   948,   969,   970,   971,   972,   973,
     974,   944,  1007,   946,   964,   957,     0,   840,   931,   521,
     522,     0,     0,   449,   453,   453,   431,     0,   437,     0,
     549,   274,   520,     0,     0,     0,   751,   749,   750,   324,
       0,   746,   748,   274,     0,     0,     0,     0,     0,  1013,
    1012,     0,  1016,   958,   496,   918,   919,   920,   921,   922,
     923,   105,   274,   274,   104,   100,   110,   106,   274,     0,
       0,     0,    90,    92,     0,   101,   102,    76,   917,     0,
       0,     0,     0,     0,   437,     0,     0,     0,  1011,     0,
       0,     0,     0,   268,     0,   271,   270,     0,   868,     1,
       0,     0,     0,   172,   173,     0,   190,   189,     0,     0,
       0,     0,     0,     0,    23,    23,   171,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    21,    21,    21,     0,    21,    21,
      21,     0,    21,   419,   820,   822,   821,   968,     0,   939,
     955,   970,     0,     0,     0,  1002,  1001,    23,    41,    42,
       0,   264,     2,     0,   565,   565,   565,   604,    13,   529,
       0,     0,  1014,   924,   925,   927,   928,   929,   930,   826,
     825,   824,   827,   828,     0,     0,     0,   914,   837,   838,
     758,   758,   758,   758,   758,   700,     0,   514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,   969,   970,   971,   972,     0,     0,     0,     0,   714,
     713,   573,   773,   599,   630,   601,   620,   621,   622,   623,
     624,   625,   626,     0,   627,   697,   696,   628,   668,   712,
     701,     0,   703,   705,   707,   708,   571,   767,   698,     0,
       0,     0,   704,   699,   776,   832,   702,   710,   709,     0,
       0,   843,   823,   711,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,   789,   504,     0,   430,   454,   432,
       0,     0,     0,   434,   438,   439,     0,   547,   551,     0,
     275,     0,   563,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1032,     0,     0,     0,   610,
       0,     0,    10,    12,     0,     0,   496,     0,     0,   419,
     107,   108,    99,   109,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   437,   436,   177,     0,
       0,     0,     0,   602,     0,   480,     0,     0,     0,     0,
     479,   194,   193,     0,   192,   191,     0,    23,    23,    23,
      23,     0,    70,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,   274,     0,   411,   148,    21,     0,     0,
       0,     0,     0,   419,     0,     0,     0,     0,     0,   410,
       0,     0,     0,   412,     0,   421,   420,   402,     0,     0,
      50,    48,     0,     0,     0,     0,     0,   899,   894,   908,
     870,   909,   911,   912,   883,   886,   878,   879,   881,   882,
     880,   889,   891,   901,   905,   904,   799,   796,   798,     0,
       0,   892,   893,    43,   896,   871,   872,   876,     0,   566,
     567,   568,   568,   568,     0,   607,     0,   495,     0,   573,
     523,     0,   916,   841,  1015,   836,   834,     0,     0,     0,
       0,   753,   755,   754,   757,   756,     0,   657,     0,     0,
     743,     0,     0,     0,     0,  1080,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   601,     0,   705,
     843,   629,     0,   693,   694,     0,     0,     0,   688,   829,
       0,   794,     0,   794,   790,   791,     0,     0,     0,   861,
     863,     0,     0,   658,     0,     0,     0,   554,   529,     0,
     946,   772,   775,     0,     0,   635,   635,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,   833,     0,     0,
       0,     0,   507,   504,   502,   451,     0,     0,   433,   442,
     441,     0,     0,     0,   548,     0,   573,  1031,     0,   414,
     414,   414,   414,  1025,  1026,     0,  1027,  1030,     0,   744,
     853,   515,     0,   747,   748,     0,    39,     8,     6,     4,
       0,  1017,     0,   518,   512,   519,   419,   498,   497,   500,
     113,    80,   111,   114,    77,    78,    93,  1000,   958,    91,
      98,    97,   103,    87,    89,     0,     0,   435,   179,   178,
       0,   177,     0,     0,   122,     0,   158,     0,     0,   168,
     166,   164,   169,     0,     0,   149,   152,   161,   138,     0,
     138,   138,   269,     0,   472,   472,     0,   274,     0,     0,
     177,     0,     0,   147,   150,   156,     0,     0,     0,     0,
       0,     0,   175,     0,   947,    59,    55,   274,     0,     0,
       0,   359,   359,   359,   359,     0,   363,   364,     0,     0,
       0,   419,   419,   419,   419,   409,    22,   414,   414,   414,
     414,   419,   419,   419,   413,    47,   276,    51,   792,    52,
      46,    49,    45,     0,     0,     0,   910,     0,     0,     0,
       0,   890,     0,   794,   794,   802,   803,   804,   805,   806,
     798,   796,     0,   818,   819,   265,     0,     0,     0,     0,
     603,   614,   617,   569,     0,     0,     0,   606,   605,   867,
       0,   610,   530,     0,     0,   529,     0,     0,   848,     0,
       0,   915,   759,   810,   811,   808,   807,   809,     0,     0,
       0,   668,  1036,  1034,  1117,  1033,  1117,     0,     0,     0,
       0,  1115,  1116,     0,     0,  1097,  1098,   668,  1114,     0,
    1113,   602,     0,     0,   667,   665,   695,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   858,   863,     0,   862,     0,     0,     0,     0,     0,
     660,     0,     0,   584,   583,   574,   575,   582,   590,   590,
     840,   573,   557,   559,   592,   598,   774,   600,   656,   654,
     655,   632,     0,   636,   637,     0,     0,     0,     0,   638,
     642,   640,   639,   641,   631,     0,   661,   684,   669,   670,
     675,   685,   674,   689,   690,   691,   692,   765,   671,   672,
     673,   686,   676,   681,   679,   677,   678,   680,   682,   683,
     687,   645,     0,   719,   771,   768,   716,     0,     0,   950,
     865,     0,   843,     0,   928,   929,   930,   770,   844,   505,
     506,   503,   452,     0,     0,     0,   448,   443,   444,   440,
       0,   550,   414,     0,   394,   391,   395,   393,     0,  1024,
    1023,   745,     0,   612,   613,   611,    40,    36,  1018,     0,
     499,     0,     0,    82,     0,    82,    96,    82,    82,     0,
       0,     0,     0,     0,     0,   165,   163,   167,   157,   153,
       0,     0,   137,   118,     0,     0,     0,   117,     0,     0,
     234,     0,   477,   483,     0,   483,   274,     0,   481,   482,
       0,     0,   154,   151,   274,   274,   274,   274,     0,     0,
      24,    56,    58,     0,  1019,     0,     0,   234,   180,   200,
       0,     0,   274,   359,   358,     0,   357,     0,     0,     0,
       0,     0,   366,   368,   365,   367,     0,   414,   419,   406,
     403,   407,   405,   399,   396,   400,   398,    54,   401,   408,
      44,     0,   866,     0,   913,     0,     0,     0,   866,   906,
       0,   907,   800,   801,   816,   815,     0,     0,   866,     0,
       0,     0,     0,   618,   619,   616,     0,   560,   561,   562,
     609,   608,   556,   528,   524,   501,   525,   526,   527,   842,
       0,     0,     0,   706,     0,     0,     0,     0,     0,  1059,
    1051,     0,  1085,  1072,  1082,  1086,  1081,   668,  1093,  1094,
       0,  1117,     0,  1134,  1117,   517,     0,   516,   510,   666,
       0,     0,     0,   651,     0,     0,     0,     0,   795,     0,
     830,   797,   831,   839,     0,     0,   859,     0,   864,   852,
       0,     0,   850,     0,   659,     0,   590,     0,     0,   583,
       0,     0,   536,     0,     0,   541,   542,   543,   536,     0,
     537,     0,     0,   539,   946,   580,   589,   591,   578,   577,
       0,     0,   555,     0,   596,   653,     0,     0,     0,     0,
       0,   652,   644,     0,     0,   721,     0,   783,     0,   787,
       0,     0,     0,   455,   445,   446,   447,   392,   416,     0,
     417,  1028,   854,   513,     0,   112,     0,    75,     0,    74,
      84,    85,     0,     0,   123,   126,   162,   160,   159,   419,
     419,   419,   120,   121,   119,     0,   116,     0,   115,   207,
     208,     0,     0,   458,   378,   461,     0,   460,     0,     0,
       0,   155,   184,   185,     0,   186,   277,    72,    73,    71,
       0,     0,    61,  1020,    57,     0,     0,     0,   209,   205,
     210,   211,   916,     0,   182,     0,     0,   195,     0,   349,
       0,   361,     0,     0,     0,   272,     0,     0,   397,   404,
     900,   895,   873,   884,     0,   887,     0,   902,     0,   798,
     813,   817,   897,     0,   874,   875,   877,   615,     0,     0,
       0,     0,  1119,  1118,  1047,  1035,  1048,  1049,     0,  1117,
     983,     0,  1126,     0,  1121,     0,  1123,  1124,     0,     0,
    1117,     0,  1084,     0,     0,     0,     0,  1117,     0,     0,
    1100,  1107,  1111,     0,     0,  1135,     0,   508,     0,     0,
       0,     0,     0,     0,     0,     0,   793,   860,     0,   851,
       0,   855,   856,   581,   579,     0,   531,   664,   662,     0,
     576,     0,     0,   536,     0,   540,   538,   587,     0,   841,
     558,     0,     0,   572,     0,     0,   646,   647,   643,     0,
     715,     0,   723,   786,   785,     0,     0,   845,   415,     0,
       0,    81,    83,    79,     0,   125,   135,   136,   134,     0,
       0,   235,     0,     0,     0,   233,   212,   213,   215,   216,
     379,     0,   473,     0,     0,   466,   466,   491,   493,     0,
       0,     0,  1009,  1022,  1021,    19,     0,    53,    62,    63,
      65,    66,    69,    67,    68,   183,   266,   199,   234,     0,
       0,   202,     0,     0,   188,     0,   520,   942,   956,     0,
       0,     0,     0,     0,   293,   305,   306,   299,   300,   301,
     304,   302,   288,   290,   307,   318,   317,   322,   321,   320,
     319,     0,   303,   298,   297,   308,     0,     0,     0,     0,
       0,     0,   267,   369,   370,     0,   869,     0,     0,   814,
       0,     0,   594,   843,   846,   847,   752,     0,  1071,  1056,
    1058,  1072,  1069,  1052,     0,  1129,  1128,  1120,     0,     0,
       0,     0,     0,     0,  1073,  1083,     0,  1088,  1087,  1090,
    1091,  1089,   668,     0,  1133,  1132,   668,  1099,  1101,  1103,
    1104,     0,  1108,     0,  1112,  1159,   511,     0,     0,     0,
       0,   762,   763,     0,   764,     0,   857,   849,   663,     0,
       0,   532,     0,     0,   533,   536,     0,     0,   593,   597,
     633,   634,   720,     0,   725,   726,   718,     0,   784,   788,
     418,  1029,     0,     0,   131,     0,   129,     0,     0,     0,
       0,   260,     0,   230,     0,   214,   217,   218,   223,   224,
     225,     0,   484,     0,   489,     0,     0,   472,   472,     0,
       0,   187,    60,     0,    64,   206,   916,     0,   181,     0,
     201,     0,     0,     0,     0,     0,   323,     0,   326,   958,
     331,   330,   332,     0,   340,   342,     0,     0,   293,   349,
       0,   350,   360,     0,   349,   356,     0,     0,     0,     0,
     383,   885,   888,   903,   898,   570,     0,     0,     0,     0,
       0,  1068,     0,  1050,  1122,  1125,  1127,     0,     0,     0,
       0,  1079,  1092,     0,  1105,  1131,     0,     0,     0,     0,
       0,   509,   648,   649,     0,     0,     0,   585,   535,   545,
     544,   534,     0,   588,   722,     0,     0,     0,   668,   738,
     727,   730,   728,     0,     0,   132,   133,   130,   128,   696,
       0,   261,     0,   226,   219,   255,     0,     0,     0,     0,
     256,   228,   259,   474,     0,   459,   492,     0,   468,   470,
     483,   483,   494,     0,  1010,   234,     0,   204,   170,     0,
       0,   198,     0,     0,   287,     0,   327,     0,     0,   293,
     341,     0,     0,   337,   342,   293,   349,     0,     0,     0,
       0,   966,   282,   279,   289,   280,     0,     0,   273,   380,
     380,   371,   372,     0,   362,   387,   595,   844,  1066,     0,
    1061,  1064,  1057,  1070,  1053,  1055,  1074,     0,  1077,  1076,
    1075,  1130,  1102,     0,     0,  1096,     0,     0,     0,  1148,
    1137,  1138,   760,   761,   766,   586,     0,   731,   729,   732,
       0,   724,   124,   127,     0,     0,   254,     0,   257,   274,
       0,   490,   467,     0,   471,   485,   485,     0,     0,   221,
     203,   196,   197,   284,     0,     0,   328,     0,   293,   343,
       0,     0,   338,     0,   345,     0,   294,   293,     0,     0,
       0,     0,     0,     0,   378,   381,   378,   378,   378,   373,
       0,     0,   349,  1060,     0,     0,  1063,     0,  1078,  1106,
    1109,  1110,  1143,  1147,  1146,  1142,  1143,  1141,     0,     0,
       0,  1136,  1149,  1150,  1152,     0,     0,   740,     0,   741,
     274,   231,     0,   252,   475,   469,   486,   487,   487,   176,
     220,   234,   278,   325,     0,   333,   339,     0,   335,   293,
       0,   293,     0,     0,   294,   291,   349,   355,     0,   353,
     281,   283,   285,   286,     0,     0,     0,     0,   385,   386,
     384,     0,     0,   313,   314,   311,   312,   389,   315,   382,
     310,   309,   316,  1062,  1067,  1065,  1054,     0,  1140,  1139,
    1155,  1158,  1154,  1157,  1156,  1151,  1153,     0,     0,   668,
     733,   735,   742,   739,   252,     0,   229,   263,   248,   243,
       0,   489,   489,   222,   329,   294,   336,   334,   346,     0,
       0,   292,     0,     0,   377,   375,   376,   374,     0,   295,
    1145,  1144,   736,   734,   737,   243,     0,   250,   251,   249,
     253,     0,   244,   245,   258,   488,   457,   462,   293,   344,
     351,   354,   388,   349,   262,   232,     0,     0,     0,   247,
       0,   246,     0,   456,   345,   348,   352,   390,     0,   237,
     238,     0,     0,   242,   241,     0,   347,   296,   236,   239,
     240,     0,   464,   463,     0,   465
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1690,  1018, -1690, -1690, -1690, -1690, -1690,  -966, -1690,  -157,
     -99,  -956, -1690, -1690,   802, -1690,    21, -1690,    26,   382,
   -1690,   954, -1690, -1690, -1690,   542, -1690,   789,     8,  1905,
   -1690, -1690,   -40,    16, -1690, -1690,  1907, -1690,  1654, -1690,
   -1690, -1690,  1664,  -408,  1040,    66, -1690, -1690, -1690,   399,
     103, -1690,    51, -1690,  -813,  1329,  -433, -1690, -1690, -1690,
      -6, -1690,  2097, -1690, -1690,  -208, -1690, -1690, -1690,  1017,
     570, -1690, -1690, -1690, -1690, -1690, -1690, -1615, -1690,   428,
   -1690, -1690, -1690, -1690, -1085,     2,    20,    22,    32, -1690,
      67, -1690, -1690, -1690,   -35, -1690, -1690,  -212,  -418, -1690,
    -165,   -13, -1690, -1316,  -889, -1690,   386, -1689, -1690, -1363,
      13, -1553, -1690,   453, -1690, -1690, -1690, -1690, -1690, -1690,
     274, -1690,   397, -1690,   279, -1690,    12, -1690, -1690, -1690,
   -1690,   545,  -762, -1690, -1690, -1690, -1690, -1690, -1690,   267,
    -873,   270, -1690, -1690, -1690, -1690, -1690,  1677, -1690,   116,
    -564,   648,  -393,    31,    41, -1690,  -145, -1690,  1432, -1690,
    2153,  1998, -1690, -1690, -1690, -1690,   620, -1690,   227,  -796,
   -1690, -1690, -1096,   225,   154,  -878,   630,   631, -1690,  1714,
   -1690, -1690, -1690,  1453,  -693,   708,  -952, -1690,  -407,   710,
    1092,  -168, -1690, -1690,  1271,  -572,  -924,   894, -1690, -1690,
     498,   145, -1690,  1748, -1690, -1690,    46,   130, -1690,   885,
     128,   913,   641,  -429,  1196,  1589, -1690,  -620, -1690,  -967,
    -929, -1690,  -636, -1690,  -257,  1521,  1263, -1690, -1690,  1281,
     500,   987, -1690, -1690,  -280, -1690, -1690,  1515, -1690,   282,
   -1690, -1690, -1690, -1690,  1511, -1690, -1690,  1519, -1690,  1461,
    -309,  -943,  1416,  -589,  -520, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690,   380, -1690, -1690, -1690, -1690, -1690, -1690,
      36, -1690,  -405, -1690,   827, -1690, -1690,  1485, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690,  -561,  -528,  -565, -1690,  -596,
   -1690, -1690, -1690, -1690, -1690,  1231, -1690,  2161, -1690,  1659,
     362, -1377, -1690,  1594, -1690, -1690, -1690,  1232, -1690,  1549,
   -1690,  1236,  -685,   352,  -720,  -220, -1690,  -299, -1690,  -275,
   -1690, -1690,  -241,  -308,    14, -1690,    -4, -1690, -1404,  -531,
      27,   439, -1690, -1690, -1690, -1690, -1690, -1690, -1690,  -584,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690, -1690,   418,
   -1690,   223, -1690, -1690, -1690, -1668, -1690,   430,   581, -1690,
   -1690, -1690, -1690,   764, -1690, -1690, -1690, -1690, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690, -1690, -1690,   419, -1690, -1690,
   -1690, -1690, -1690, -1690, -1690,  1586,  -849,   779, -1690,   580,
   -1690,   778, -1690, -1690,   312, -1169, -1690, -1690, -1690, -1690,
   -1690, -1451,   228, -1690, -1690, -1690, -1690, -1690, -1690,   222,
   -1690, -1690, -1690, -1690
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
     790,  1394,   259,   260,  1574,  1148,  1149,  1740,  1387,  1388,
    1389,  1538,  1359,  1715,  1716,  1390,  1948,  1717,  1718,  1828,
    1719,  1720,  2086,  1360,  1721,  2153,  2122,  2123,  2124,  2120,
    2089,  1841,  1535,  1842,   549,  1391,    49,   232,   233,  1612,
    1150,   440,    50,  1864,  1884,    51,  1592,  1759,  2133,  2027,
    2057,  1594,  1595,  1596,  1746,  1747,  1955,  1597,  1751,  1598,
    1873,  1874,  1754,  1755,  1871,  1599,  2033,  1600,  1601,  2145,
    1968,  1764,  1155,  1156,    53,   848,  1166,  1770,  1891,  1892,
    1541,  1976,  1894,  1895,  2050,  1982,  2059,   455,   283,  1602,
    1074,  1329,   547,  1603,  1604,    57,   433,   434,   435,  1067,
     164,   427,   728,    58,  2143,  2161,  1727,  1847,  1848,  1123,
    1124,   234,  1365,  2017,  2091,  1845,  1546,  1547,    59,   469,
      60,    61,    62,   724,   953,  1246,   762,   370,   763,  1248,
     764,   161,   599,  1217,   600,   597,   984,  1292,  1496,  1293,
    1684,   235,   169,   170,   437,    64,  1605,   236,   991,   992,
      67,   591,   904,   371,   667,   668,   985,  1282,  1283,  1297,
    1298,  1304,  1621,  1503,   372,   373,   307,   595,   911,   756,
     900,   901,  1205,   374,   375,   376,   377,  1005,   378,  1009,
     379,   380,   638,   381,  1002,   382,   664,   383,   384,   987,
     385,   386,   387,   388,   389,   390,   391,  1314,  1315,  1512,
    1696,  1697,  1819,  1820,  1821,  1822,  2080,  2081,  1931,   392,
     639,   180,   181,   394,   611,   395,   396,   397,   671,   398,
     399,   400,   401,   402,   656,   965,   651,   653,   581,   891,
     927,   928,   892,  1421,   893,   894,   582,   403,   404,   405,
     989,   406,   407,   919,   408,   752,   978,   971,   972,   659,
     660,   975,  1051,  1181,   908,   237,  1615,  1330,  1190,   409,
     585,   586,   410,  1362,   773,   218,   640,   158,  1553,   238,
    1182,   412,    68,   192,  1382,  1383,  1554,    69,   456,   933,
     934,   935,   413,   414,   415,   416,   417,  1439,  1230,  1629,
    1899,  1900,  1986,  1901,  2065,  1630,  1631,  1632,  1450,  1644,
     418,   939,  1233,  1234,  1235,  1452,  1648,   419,  1455,   420,
    1239,  1457,   421,   946,  1241,  1459,  1657,  1658,  1659,  1660,
    1661,  1799,   422,   423,   949,   943,  1225,   940,  1443,  1444,
    1786,  1445,  1446,  1447,  1794,  1795,  1464,  1465,  1919,  1920,
    1996,  1997,  2068,  2111,  1921,  1994,  2001,  2002,  2075,  2003,
    2004,  2074,  2072,   424
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     157,   583,   601,   300,   441,   166,   439,   722,    43,   171,
    1133,   495,   736,   884,   182,   157,    44,   492,   459,  1125,
    1295,    40,   926,   157,   292,   584,    41,   617,  1060,  1367,
    1053,    55,   931,   294,   301,  1361,  1593,   470,   471,   936,
     947,    56,   217,   473,   228,   986,    65,   951,   312,   883,
     750,  1622,   191,   753,   179,  1308,  1309,   807,  1279,   587,
    1299,   228,  1361,   909,  1083,  1122,    45,   157,   312,  1876,
     775,  1460,   637,   641,   907,  1694,   769,  1105,  1106,   487,
    1158,  1159,  1160,  1107,   497,  1227,  2006,  1228,   663,   786,
     665,   172,   967,  1091,  1687,   636,   994,   665,  1242,  -748,
     312,  1834,   476,    46,  -748,   195,   196,   197,   198,   199,
     200,  1902,  2007,   228,  1905,  1974,    54,   536,   537,   538,
     867,   540,   541,   542,  1622,   544,   669,   669,  1859,  1336,
      66,   225,  1622,  1162,  1163,  1146,  1164,   172,   312,  1907,
     855,  1977,   173,  2149,  2150,    63,  1115,   866,  1860,   172,
     979,  2117,  2118,  1041,   980,   514,  1224,   411,   157,   304,
     305,   306,   159,   429,  1975,   477,  1908,  1116,   172,   -88,
     -88,   -88,   -88,   -88,   -88,   172,  1075,  1076,  1077,  -748,
    1959,   876,   877,  2119,  2151,  -748,  1964,    70,  1189,   157,
    1975,   226,    43,    43,    43,    43,    43,   393,  1147,    14,
      44,    44,    44,    44,    44,    40,    40,    40,    40,    40,
      41,    41,    41,    41,    41,    55,    55,    55,    55,    55,
    1042,   489,   157,   157,  -792,    56,    56,    56,    56,    56,
      65,    65,    65,    65,    65,  1084,   217,   503,   160,  1544,
    1949,   157,  1094,    13,   870,    14,  1264,  1875,   157,   512,
      45,    45,    45,    45,    45,   977,   162,    14,   157,   157,
     157,   157,   157,   157,   525,   157,   909,   909,   157,  2026,
    1092,  1544,   909,   539,    13,   718,   229,   157,  2036,   818,
     959,    13,  1812,    14,   301,   550,   551,    46,    46,    46,
      46,    46,  1662,  1173,  1174,  1175,  1176,   598,   872,   438,
      54,    54,    54,    54,    54,   722,   602,   603,  1483,   201,
     202,   203,   204,   753,    66,    66,    66,    66,    66,  2066,
    1861,   580,  1192,  1193,   498,  1194,  1165,   477,   914,    63,
      63,    63,    63,    63,   878,  1301,   620,  1695,   230,   912,
    2096,   787,  2098,  1215,  2008,  1679,  1226,  1484,   669,  2009,
     918,   918,   637,  1279,  1237,  1300,   868,   493,   845,   633,
     227,  1320,  1316,  1195,  1318,  1243,   156,  1092,   672,   814,
     849,  -476,   807,  1090,   436,   636,   770,  1097,  1098,   157,
    2152,   183,    42,  1346,  -748,   636,  -748,   369,  1545,   194,
    1210,  1398,  1461,   997,  1001,  1466,  1877,  1278,   172,  1896,
     969,  1593,  1569,  1014,   369,  -264,  2093,   231,   826,   827,
     828,   829,   723,   957,   654,   655,  1555,  1081,   839,  1092,
     201,   202,   203,   204,   205,  1458,  1556,   219,   669,  2058,
     220, -1130,   171,   309,   228,   172,  1088,   411,  1249,  2144,
     157,  1272,   157,   157,   157,   157,   743,   157,   745,   157,
     157,   821,   956,    52,   754,   474,  1432,   669,  1169,  1170,
    1171,  1172,   665,  1886,  1448,    71,   669,  1887,  1177,  1178,
    1179,  1413,  1417, -1130,  1467,  1967,   157,   393,  2159,  1506,
   -1130,   795,   635,  1361,   797,   798,   799,   800,   801,   802,
     157,   774,   803,  1507,   157,  1567,  1433,   634,   206,  1637,
    1678,   189,   207,   636,    13,  1108,   719,   190,  1327,  1775,
     836,   157,   838,  1965,   157,  1801,  -796,  1802,  1668,  1669,
    1803,   873,   208,  1132,   425,   157,   157,   157,   157,   584,
    1813,   157,   157,   157,   157,  1085,   157,   157,   157,  1846,
     157,    13,  1449,    14,   865,  1247,  1953,   584,  1958,  2073,
     871,  1654,   301,  1858,   753,   466,  1925,   268,  1942,  1983,
    1322,  1856,   917,   587,   163,   209,    42,    42,    42,    42,
      42,  -798,   909,  2020,  1180,  1655,   895,  2128,   172,  -264,
    2058,   587,  2023,  2037,  2163,  1485,   720,   958,   490,   491,
    1634,  1082,  1555,   765,   467,   468,   312,   616,   584,  1129,
    1420,  1646,  1556,  1408,  1213,  1797,   601,   506,  1653,   206,
    1089,   475,  1250,   207,   511,  1273,  2110,   269,   666,   589,
     721,  1825,  2160,   720,   519,   520,   521,   522,   523,   524,
    1835,   526,   587,   208,   533,   167,  1516,    52,    52,    52,
      52,    52,  1435,   543,  1377,  1414,  1418,  1798,  1468,  1793,
    1378,  1857,  1127,  1089,  2040,   174,  2042,   721,   172,  1218,
    1453,   990,   993,  1682,  1490,  1705,   996,  1089,   270,  1568,
   -1130,  1493,  1275,  1638,  1250,  1332,  1706,   963,  1253,   966,
    1532,   271,   791,  1776,    13,  -796,   229,   650,  1529,  1468,
    1211,  1089,  1916,   822,  1089,   590,  1533,  1836,  1448,  1274,
    1712,   988,   223,  1079,  1733,  1713,  1311,  1998,   411,  1534,
    1052,  1530,  1807,  1729,  1058,   301,  1285,  1286,  1287,  1454,
    1288,  1289,  1305,  1290,   168,  1306,  1307,   580,  1826,  1110,
    1733,   224,  1943,  1984,   157,   272,   273,   274,   275,   276,
    -798,   175,   652,  1707,   239,   684,   635,  2021,   393,  1837,
     948,   604,   605,   606,  1945,  1946,  2024,  2038,  2164,  1068,
     493,   634,   635,   499,    13,  1829,    14,   277,   302,   792,
    1917,  1829,   635,  1918,   157,  1409,  1780,   634,  1999,   500,
     278,  2000,   528,  1111,  1112,  1100,   279,   634,   941,   793,
     942,   280,   545,   546,  1838,  1347,   303,  1839,   584,   308,
     649,  1224,  1357,   501,   502, -1095,   737,  1840,   739,   740,
     741,   742,   157,   744,  1130,   746,   747, -1117,  1291,   310,
    1708, -1095,   157,   157,   157,   157,  1714,  2087,   281,  2132,
    1142,   282,   587,   288,   941,   157,   942,  1157,  1157,  1157,
    1157,   669,   781,   669,  1640,   157,   157,   173,   716,   717,
     529,   530,   531,   532,  1619,   311,   813,  1477,  1401,   443,
     817,   304,   305,   306,  1481,  1688,  1482,  1652,   261,   442,
    1656,   426,  1681,  1692,  1685,   457,   303,   837,   430,   458,
     840,   431,   584,  1641,  1348,  1642,  1643,   432,   493,   465,
     635,   851,   852,   853,   854,   753,   472,   857,   858,   859,
     860,   598,   861,   862,   863,   634,   864,  1188,   504,   505,
     602,  1371,  1064,  1219,   478,   753,   587,  1683,   479,  1065,
    1066,  1429,  1430,  1198,   808,   157,  1372,  1373,  1374,  1375,
     685,  1850,  1851,  1229,   480,   815,   262,   263,   264,   265,
    1238,   304,   305,   306,  1397,   584,   584,   809,   481,  1405,
     810,   811,   304,   305,   306,  1058,  1526,  1527,  1528,   486,
     442,  1368,  1011,  1012,  1013,  1285,  1286,  1287,   240,  1288,
    1289,  -536,  1290,   557,   558,   559,   482,   182,   990,   587,
     587,   725,   726,  1296,  1296,  1296,   460,   461,   560,   483,
     464,   266,   561,   562,   563,   326,   327,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   241,   729,   730,   242,
     704,   705,   706,   707,   708,   788,   789,  1276,   988,   494,
     573,   574,   575,   885,   923,   886,   924,   887,   888,   889,
     925,   267,  1207,  1208,  1209,  -958,   304,   305,   306,  -958,
    -958,   228,  -958,  -958,  -958,  -958,  -958,  -958,  -958,  -958,
    -958,  -958,  -958,   496,   243,  1339,   244,  1340,  1341,  1323,
    1808,  1247,  1247,  1539,   846,   847,   245,  1291,  -958,  -958,
     513,  1676,   795,   796,  1331,   797,   798,   799,   800,   801,
     802,   507,  2041,   803,  2043,   508,    15,   584,   509,  1285,
    1286,  1287,   657,   510,   973,   968,  1290,  1344,  1345,   516,
    1072,  2044,  -234,  2045,  2046,  2047,  1349,   157,  1818,   517,
    1351,    26,  1281,   518,  1355,   157,   602,   182,    28,    29,
    1712,   587,  1003,  1004,   885,  1713,   886,  1280,   887,   888,
     889,   890,  1119,  1112,  1376,   765,   765,    31,   654,   655,
    1096,  1142,   970,  1392,   973,   527,   885,   157,   886,  1157,
     887,   888,   889,  1419,  1753,   534,  1869,  1363,   612,   613,
     614,   615,  1872,  1750,  1869,  1251,  1252,  1324,  1325,  -234,
     548,   246,   247,   248,   249,   250,   251,   552,  1126,  1353,
    1354,   312,  1883,  1571,   252,  1889,  1890,  1080,  1134,  1135,
    1136,  1137,  2048,  2049,   195,   196,   197,   198,   199,   200,
    1281,  1152,  2136,  2137,   462,   463,   553,  1656,  -190,  1118,
    1120,  1167,  1168,  2126,  2127,  1280,   253,   765,   592,   593,
     554,  -234,  1357,   555,  1690,  1691,  1818,  1183,  -189,   254,
    1185,  1186,  1187,   905,   906,   255,   556,   588,   256,   594,
     596,   312,  -908,  -779,   584,  1689,  1714,  -781,  1197,  1199,
    1200,  1201,  -777,   201,   202,   203,   204,   607,   608,   576,
     577,   578,   579,   609,   240,   610,  -234,   616,   618,  -234,
     619,  1296,  1296,   990,   621,   622,   623,  -174,   587,  -234,
     990,  1285,  1286,  1287,   804,  1288,  1289,   990,  1290,   624,
    1497,  1223,   625,   626,   627,   628,  1499,   993,   629,   630,
     631,   645,   241,  1133,   821,   242,   646,   673,  1762,  1765,
     647,  1765,   710,   988,   661,  1863,  1058,   580,  1517,   662,
     988,  1191,   711,   712,  1752,   713,  1757,   988,   513,   714,
     715,   732,   584,   584,   795,   584,  -717,   797,   798,   799,
     800,   801,   802,   727,   733,   803,   731,   735,   738,   748,
     243,   674,   244,  1531,   675,   676,   677,   678,   679,   680,
     681,   682,   245,   757,  -958,   683,   587,   587,   205,   587,
     755,  1613,   209,   767,   758,   768,   759,  1552,   783,   685,
     444,   182,   157,  1291,   784,   785,   812,   819,   820,  1570,
    1560,   830,   831,  2135,   833,  1606,  1607,   816,  1561,   841,
     842,   843,   301,   157,  1260,   493,  1262,  1281,  1744,   844,
     850,  1489,   856,   881,   910,   913,  2079,   917,   903,   921,
     874,  1565,  1280,   875,  1623,   879,  1810,   880,   916,   882,
     674,   445,   650,   675,   676,   677,   678,   679,   680,   681,
     682,  1616,   206,  1617,   683,  1618,   207,  1647,  1562,  1957,
    1620,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   652,   896,   208,   246,   247,   248,
     249,   250,   251,  1350,   897,   898,   268,   899,   929,   922,
     252,  1356,   938,   945,   952,  1563,   954,   955,   990,   964,
     990,   368,  1007,  1008,  1552,  1043,  1868,  1623,  1564,   446,
     447,   448,   449,  1878,   937,  1623,  1044,   944,  1046,   209,
    1059,  1062,   253,  1396,  1063,  1070,  1701,   665,  1073,  1078,
    1086,  1711,  -650,  1099,  1103,  1104,  1121,  1128,   988,  1131,
     988,   255,  1138,  1143,   256,  1102,   269,  1741,  1342,  1139,
    1140,  1145,  1101,   450,  1112,  1153,   822,  1732,  1151,   451,
     452,  1161,   669,  1184,   453,   195,   196,   197,   198,   199,
     200,  1206,   685,  1196,  1736,  1222,  1560,  1224,   301,  1231,
    1202,  1969,  1240,  -174,  1561,   303,   990,  1221,  1258,  1236,
    1259,  1269,   557,   558,   559,   -14,     1,   270,  1220,  1261,
    1303,   454,  1312,   685,  1317,  1326,  -780,   560,   765,   765,
     271,   561,   562,   563,   326,   327,   564,   565,   566,   567,
     568,   569,   570,   571,   572,  1319,   179,  1271,  1284,  1321,
    1313,  -782,  -778,  1336,  1562,  1250,  1334,  1338,  1352,   573,
     574,   575,  1343,  1364,  1370,  1785,     2,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,  1366,  1369,     3,
       4,     5,     6,  1147,   272,   273,   274,   275,   276,  1380,
    1381,  1563,     7,     8,     9,    10,  1385,  1393,  1395,  1809,
    2039,    11,  1399,  1400,  1564,  1296,   990,  1402,  1403,  1404,
    2012,  1406,  1552,  1407,  1410,  1411,   277,  1416,  1412,  1415,
    -812,  1422,  1423,  1424,   584,  1425,  1830,  1831,  1438,  1426,
    1428,  1451,  1434,  1436,  1437,   279,  1458,  1456,  1536,  1537,
     280,     3,     4,     5,     6,  1462,   988,  1463,  1469,    12,
    1470,  1471,  1849,  1486,     7,     8,     9,    10,   587,  1854,
    2103,  1476,  1487,    11,  1488,  1492,  1479,  1494,  1495,  1498,
     411,  1865,  1501,  1502,  1509,  1510,  1511,   281,  1566,  1508,
     282,  1513,  1520,  1514,  1518,  1606,  1519,    13,  1521,    14,
    1606,  1523,  1524,  1543,  1540,  1550,  1572,  1551,  1573,  1614,
     643,   644,  1623,  1897,  2013,  2099,   648,  1608,  1575,  1609,
     393,   658,  1525,  1610,  1611,  1624,  1625,  1635,  1639,  1911,
    1649,  1651,  1650,   674,  2108,  1664,   675,   676,   677,   678,
     679,   680,   681,   682,  2131,  1542,  1504,   683,  1548,  1549,
    1680,  1663,  1665,  1693,  1702,  1686,    15,    16,   685,    13,
    1933,    14,  1703,  1704,  1698,  1699,    17,    18,   584,    19,
    1709,    20,    21,    22,    23,   157,    24,  1726,    25,  1730,
    1710,    26,    27,  1723,  1731,  2084,  1737,   674,    28,    29,
     675,   676,   677,   678,   679,   680,   681,   682,  1865,  1738,
    1505,   683,   587,  1739,    30,  1742,  1729,    31,   576,   577,
     578,   579,  1606,   751,  1745,   602,  1766,  1758,    15,    16,
    1733,   751,  1743,  1761,  1768,  1771,  1772,  1760,    17,    18,
     580,    19,  1769,  1773,   700,   701,   702,   703,   704,   705,
     706,   707,   708,    26,    27,    32,  1774,  1783,  1777,  1791,
      28,    29,  1778,  1993,   675,   676,   677,   678,   679,   680,
     681,   682,  1779,  1787,  1782,   683,    30,  1788,  1789,    31,
     157,  1790,  1792,  1796,  1800,  2162,  1776,   683,  1823,  1849,
    1827,  1832,  1748,  2019,  2165,  1824,  1844,  1569,  1855,  1888,
    2022,  1866,  1862,  1867,  1879,  1606,  1893,  1906,  1909,  1910,
    1606,  1915,  1913,  1914,  1927,  1928,  1865,    32,  1865,  1929,
    1930,  1934,  1936,  1935,  1937,  1938,  1940,  1941,  1606,  1944,
    1722,  2064,  1548,  1548,  1950,  1947,  1951,  1952,   666,  1960,
    2055,  1970,   685,  1966,  1971,  2071,  1972,  1973,  2056,  1985,
    1988,  1954,  1980,  2053,   902,  1981,  1322,  1990,  2054,  1992,
    1991,  1995,  2005,  2060,  2011,  2016,  2034,  1987,  2025,  2030,
    2028,  2035,  1606,  2061,  2051,  2067,  2070,  1999,  2062,  2082,
    2088,  2083,  1606,  2090,   602,  2085,  2097,   930,   932,   932,
    2104,  2105,  2106,  2107,  2095,   930,  2100,   932,  2112,  2101,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
    2109,   960,   961,   962,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   976,   751,  2113,
    2121,  2114,  2125,  2129,  2130,  2138,  2140,  2142,  2136,  2155,
    2137,  2157,  1606,  2158,  1606,  1010,  1010,  1010,  1010,  1384,
    1734,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1522,  2146,   485,   484,  1606,
    1050,  1050,  1335,   776,  1109,   299,  2116,  1358,  1735,  2154,
    1606,  2055,  1833,  2141,  2139,   782,  2148,  2134,  1962,  2056,
    1882,  2115,  1870,  1963,  2053,  1767,  2156,   780,  1979,  2054,
    1978,   165,  1843,   428,  2060,  1069,  1728,  1700,  1852,  1853,
    2015,  2018,  2092,  1724,  2061,  1725,  1061,  1667,  1666,  2062,
     766,  1333,  1491,  1811,   734,  1214,  1500,  1302,   915,  1427,
     995,  1006,  1212,  1814,  1015,  1926,  1071,  1045,   293,  1263,
    1904,  1939,   920,  1016,  1266,  1885,  1257,  2063,  1267,   974,
    1903,   869,  1781,  1645,  1244,  1912,   950,  1633,  1784,  1636,
     557,   558,   559,  1989,  2069,     0,  2076,     0,     0,     0,
       0,     0,     0,     0,     0,   560,     0,     0,     0,   561,
     562,   563,   326,   327,   564,   565,   566,   567,   568,   569,
     570,   571,   572,     0,     0,   557,   558,   559,     0,     0,
       0,     0,  1932,     0,     0,     0,     0,   573,   574,   575,
     560,     0,     0,     0,   561,   562,   563,   326,   327,   564,
     565,   566,   567,   568,   569,   570,   571,   572,     0,     0,
       0,     0,     0,     0,     0,     0,  2010,     0,     0,     0,
       0,     0,   573,   574,   575,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,  1232,     0,     0,     0,   930,
       0,     0,     0,     0,     0,   932,    81,     0,   751,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2014,
      83,     0,     0,     0,     0,     0,  1265,     0,     0,  1268,
    1328,    84,     3,     4,  1576,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1577,     0,
    1885,    86,  1885,     0,  1578,     0,     0,     0,     0,     0,
      88,     0,     0,   751,   751,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,  1050,     0,  1050,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,   751,     0,
       0,   117,     0,     0,   118,   751,   576,   577,   578,   579,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1763,     0,     0,     0,     0,     0,
       0,   576,   577,   578,   579,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,  1579,   124,    17,
    1580,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
      31,     0,   143,   144,     0,     0,     0,     0,   902,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,  1431,     0,
       0,  1583,   932,     0,     0,     0,  1584,  1442,    32,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
    1472,  1473,  1474,  1475,     0,     0,     0,     0,     0,     0,
     751,     0,     0,     0,     0,     0,  1480,   751,     0,   751,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1050,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,   172,   176,   981,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,  1628,     0,     0,  1442,    13,   117,
    1277,     0,   118,     0,     0,  1232,     0,     0,     0,     0,
       0,     0,   930,     0,     0,   930,     0,     0,     0,     0,
       0,     0,     0,     0,   751,   751,   751,   751,     0,     0,
       0,     0,     0,     0,   751,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
    -227,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,  -227,   133,
       0,   134,     0,  -227,  -227,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,     0,   142,     0,     0,     0,
     143,   144,     0,     0,  1278,     0,     0,   145,   146,   147,
     148,     0,   149,     0,   150,  -227,     0,  -227,     0,   151,
       0,     0,     0,     0,     0,     0,     0,     0,  1756,     0,
       0,     0,     0,   557,   558,   559,     0,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,     0,   560,   154,
     155,     0,   561,   562,   563,   326,   327,   564,   565,   566,
     567,   568,   569,   570,   571,   572,     0,     0,   983,  -227,
    -227,  -227,     0,     0,     0,     0,     0,     0,     0,     0,
     573,   574,   575,     0,  1442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -227,     0,  -227,     0,     0,     0,
       0,     0,     0,  -227,  -227,     0,     0,     0,  1254,     0,
       0,     0,     0,     0,  -227,     0,  1804,  -227,     0,  1805,
       0,  1806,  -227,     0,     0,     0,     0,  -227,     0,     0,
       0,     0,   685,     0,     0,     0,     0,     0,     0,   902,
       0,     0,     0,   930,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   930,     0,     0,     0,     0,     0,
     930,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -227,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
       0,     0,     0,     0,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,     0,     0,     0,
       0,     0,     0,     0,  1898,  1628,  1628,     0,  1628,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   930,     0,     0,     0,     0,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,   930,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
     172,   176,  1956,   177,   178,     0,     0,     0,  1961,   576,
     577,   578,   579,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,  1255,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,    13,   117,   632,     0,
     118,   353,     0,     0,     0,     0,     0,     0,     0,     0,
    1898,     0,     0,  1628,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,   930,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
    2094,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,   633,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   352,     0,
     118,   353,     0,   998,   999,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1000,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
     172,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,    13,   117,   632,     0,
     118,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,  1749,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   352,     0,
     118,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,   359,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   352,     0,
     118,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,  1216,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
     336,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   352,     0,
     118,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   312,   369,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   324,   325,     0,     0,    78,    79,     0,     0,
      80,   326,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,   328,   329,
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   642,     0,
     118,     0,     0,     0,     0,     0,  1815,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
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
     116,     0,     0,     0,     0,     0,     0,   117,   760,   761,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,   324,   325,     0,   369,    78,
      79,     0,     0,    80,   326,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    82,     0,
       0,   328,   329,   330,   331,   332,   333,   334,     0,    83,
       0,     0,   284,   285,   286,     0,     0,     0,     0,   335,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,   337,     0,     0,
      93,   338,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,   339,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,   343,   344,     0,   345,   346,
     100,   101,   347,   348,   102,   349,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   350,   111,   112,   113,   114,
       0,   115,   351,   116,     0,     0,     0,     0,     0,     0,
     117,   642,     0,   118,     0,     0,  1047,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,   355,     0,     0,     0,     0,     0,     0,     0,     0,
     356,   357,   358,     0,  1048,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,  1049,     0,     0,     0,     0,     0,     0,   135,
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
     334,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,   335,    84,     0,     0,     0,   176,     0,   177,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     337,     0,     0,    93,   338,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,   339,    98,    99,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,   343,   344,
    1627,   345,   346,   100,   101,   347,   348,   102,   349,   103,
     104,   105,   106,   107,   108,   109,   938,   110,   350,   111,
     112,   113,   114,     0,   115,   351,   116,     0,     0,     0,
       0,     0,     0,   117,   642,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,   355,     0,     0,     0,     0,     0,
       0,     0,     0,   356,   357,   358,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
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
     331,   332,   333,   334,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,     0,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,     0,   117,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
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
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,     0,     0,     0,  1816,     0,     0,     0,     0,     0,
       0,  1817,     0,     0,     0,     0,   312,   369,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,     0,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,     0,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,     0,   117,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
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
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
       0,     0,     0,     0,  2077,     0,     0,     0,     0,     0,
       0,  2078,     0,     0,     0,     0,   312,   369,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,   324,   325,     0,     0,    78,    79,     0,     0,    80,
     326,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,   328,   329,   330,
     331,   332,   333,   334,     0,    83,     0,     0,   284,   285,
     286,     0,     0,     0,     0,   335,    84,     0,     0,     0,
     176,     0,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   337,     0,     0,    93,   338,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   339,    98,
      99,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,     0,   345,   346,   100,   101,   347,   348,
     102,   349,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   350,   111,   112,   113,   114,     0,   115,   351,   116,
       0,     0,     0,     0,     0,     0,   117,   642,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   357,   358,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   361,   362,   363,   364,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
     365,   657,     0,     0,   366,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,     0,   324,   325,     0,   369,    78,    79,
       0,     0,    80,   326,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
     328,   329,   330,   331,   332,   333,   334,     0,    83,     0,
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
     115,   351,   116,     0,     0,     0,     0,     0,     0,   117,
     642,   749,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     355,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,     0,     0,     0,     0,     0,     0,   135,     0,
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
       0,     0,   117,   642,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,     0,     0,     0,     0,     0,     0,
       0,     0,   356,   357,   358,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,  1245,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     361,   362,   363,   364,     0,   149,     0,   150,     0,     0,
       0,     0,   151,     0,     0,     0,   365,     0,     0,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     324,   325,     0,   369,    78,    79,     0,     0,    80,   326,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    82,     0,     0,   328,   329,   330,   331,
     332,   333,   334,     0,    83,     0,     0,   284,   285,   286,
       0,     0,     0,     0,   335,    84,     0,     0,   172,   176,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,   337,     0,     0,    93,   338,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,   339,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
     343,   344,     0,   345,   346,   100,   101,   347,   348,   102,
     349,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     350,   111,   112,   113,   114,     0,   115,   351,   116,     0,
       0,     0,     0,     0,     0,   117,   760,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,   355,     0,     0,     0,
       0,     0,     0,     0,     0,   356,   357,   358,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
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
     329,   330,   331,   332,   333,   334,     0,    83,     0,     0,
     284,   285,   286,     0,     0,     0,     0,   335,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,  1440,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,   337,     0,     0,    93,   338,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
     339,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,   343,   344,     0,   345,   346,   100,   101,
     347,   348,   102,   349,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   350,   111,   112,   113,   114,     0,   115,
     351,   116,     0,     0,     0,     0,     0,     0,   117,   642,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   355,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,  1441,
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
       0,   117,   642,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,   355,     0,     0,     0,     0,     0,     0,     0,
       0,   356,   357,   358,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,     0,     0,     0,     0,     0,     0,
     135,     0,     0,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,     0,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   361,
     362,   363,   364,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,   365,  1753,     0,     0,   366,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   153,     0,     0,     0,
       0,   154,   155,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,   324,
     325,     0,   369,    78,    79,     0,     0,    80,   326,   327,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,   328,   329,   330,   331,   332,
     333,   334,     0,    83,     0,     0,   284,   285,   286,     0,
       0,     0,     0,   335,    84,     0,     0,     0,   176,     0,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,   337,     0,     0,    93,   338,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,   339,    98,    99,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,   343,
     344,  1627,   345,   346,   100,   101,   347,   348,   102,   349,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   350,
     111,   112,   113,   114,     0,   115,   351,   116,     0,     0,
       0,     0,     0,     0,   117,   642,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,     0,
       0,     0,     0,     0,   356,   357,   358,     0,     0,     0,
       0,   360,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
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
     330,   331,   332,   333,   334,     0,    83,     0,     0,   284,
     285,   286,     0,     0,     0,     0,   335,    84,     0,     0,
       0,   176,     0,   177,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   337,     0,     0,    93,   338,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,   339,
      98,    99,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,   343,   344,     0,   345,   346,   100,   101,   347,
     348,   102,   349,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   350,   111,   112,   113,   114,     0,   115,   351,
     116,     0,     0,     0,     0,     0,     0,   117,   642,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,   135,     0,     0,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,     0,   142,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,   361,   362,   363,   364,     0,
     149,     0,   150,     0,     0,     0,     0,   151,     0,     0,
       0,   365,     0,     0,     0,   366,   367,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,    78,    79,   154,   155,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
     176,   981,   177,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,   685,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,     0,   115,  1672,   116,
       0,     0,     0,     0,     0,     0,   117,   982,     0,   118,
       0,     0,     0,     0,     0,     0,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,     0,     0,     0,     0,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,  1673,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     3,     4,  1576,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1577,     0,     0,    86,     0,     0,  1578,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,   685,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,     0,     0,     0,     0,   117,     0,     0,   118,     0,
       0,     0,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,     0,     0,     0,     0,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,     0,    15,   122,   123,     0,     0,     0,     0,
       0,     0,   124,    17,  1580,   125,   126,   127,   128,   129,
     130,   131,     0,   132,     0,   133,     0,   134,    26,    27,
       0,     0,     0,     0,   135,    28,    29,   136,     0,     0,
       0,   137,     0,     0,   138,   139,     0,   140,     0,     0,
     141,    30,   142,  1581,    31,     0,   143,   144,     0,     0,
       0,     0,     0,   145,   146,   147,   148,     0,   149,     0,
     150,     0,     0,     0,     0,   151,     0,     0,     0,  1582,
       0,     0,  2031,     0,     0,  1583,  2032,  -349,     0,     0,
       0,     0,    32,    72,    73,    74,    75,    76,    77,   152,
     153,     0,     0,     0,     0,   154,   155,     0,  1270,     0,
      78,    79,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     3,     4,  1576,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1577,     0,
       0,    86,     0,     0,  1578,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
     685,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,     0,     0,     0,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,     0,     0,
       0,     0,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,    15,
     122,   123,     0,     0,     0,     0,     0,  1880,   124,    17,
    1580,  1881,   126,   127,   128,   129,   130,   131,     0,   132,
       0,   133,     0,   134,    26,    27,     0,     0,     0,     0,
     135,    28,    29,   136,     0,     0,     0,   137,     0,     0,
     138,   139,     0,   140,     0,     0,   141,    30,   142,  1581,
      31,     0,   143,   144,     0,     0,     0,     0,     0,   145,
     146,   147,   148,     0,   149,     0,   150,     0,     0,     0,
       0,   151,     0,     0,     0,  1582,     0,     0,     0,     0,
       0,  1583,     0,     0,     0,     0,  1584,     0,    32,    72,
      73,    74,    75,    76,    77,   152,   153,     0,     0,     0,
       0,   154,   155,     0,  1675,     0,    78,    79,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
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
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,     0,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   121,     0,     0,    15,   122,   123,     0,     0,
       0,     0,     0,     0,   124,    17,  1580,   125,   126,   127,
     128,   129,   130,   131,     0,   132,     0,   133,     0,   134,
      26,    27,     0,     0,     0,     0,   135,    28,    29,   136,
       0,     0,     0,   137,     0,     0,   138,   139,     0,   140,
       0,     0,   141,    30,   142,  1581,    31,     0,   143,   144,
       0,     0,     0,     0,     0,   145,   146,   147,   148,     0,
     149,  1478,   150,     0,     0,     0,     0,   151,     0,     0,
       0,  1582,     0,     0,     0,     0,     0,  1583,     0,  -349,
       0,     0,     0,     0,    32,    72,    73,    74,    75,    76,
      77,   152,   153,     0,     0,     0,     0,   154,   155,     0,
       0,     0,    78,    79,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     3,     4,  1576,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1577,     0,     0,    86,     0,     0,  1578,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   685,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     0,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,     0,     0,     0,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,    15,   122,   123,     0,     0,     0,     0,     0,     0,
     124,    17,  1580,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,    26,    27,     0,     0,
       0,     0,   135,    28,    29,   136,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   141,    30,
     142,  1581,    31,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   146,   147,   148,     0,   149,  2029,   150,     0,
       0,     0,     0,   151,     0,     0,     0,  1582,     0,     0,
       0,     0,     0,  1583,     0,     0,     0,     0,     0,  2102,
      32,    72,    73,    74,    75,    76,    77,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,     0,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       3,     4,  1576,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1577,     0,     0,    86,
       0,     0,  1578,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,   685,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,     0,     0,     0,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,     0,     0,     0,     0,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,   121,     0,     0,    15,   122,   123,
       0,     0,     0,     0,     0,     0,   124,    17,  1580,   125,
     126,   127,   128,   129,   130,   131,     0,   132,     0,   133,
       0,   134,    26,    27,     0,     0,     0,     0,   135,    28,
      29,   136,     0,     0,     0,   137,     0,     0,   138,   139,
       0,   140,     0,     0,   141,    30,   142,  1581,    31,     0,
     143,   144,     0,     0,     0,     0,     0,   145,   146,   147,
     148,   970,   149,     0,   150,     0,     0,     0,     0,   151,
       0,     0,     0,  1582,     0,     0,     0,     0,     0,  1583,
      72,    73,    74,    75,    76,    77,    32,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,    78,    79,   154,
     155,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,     0,
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
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,     0,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,    17,  1580,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,    27,     0,     0,     0,     0,   135,    28,    29,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,    30,   142,  1581,     0,     0,   143,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
    1872,   149,     0,   150,     0,     0,     0,     0,   151,     0,
       0,     0,  1582,     0,     0,     0,     0,     0,  1583,     0,
       0,     0,     0,  2052,     0,    32,    72,    73,    74,    75,
      76,    77,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,     0,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     3,     4,  1576,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1577,     0,     0,    86,     0,     0,  1578,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,   685,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,     0,     0,
       0,     0,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,     0,     0,     0,     0,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,    17,  1580,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,   709,    27,     0,
       0,     0,     0,   135,    28,    29,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
      30,   142,  1581,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,     0,     0,     0,  1582,     0,
       0,     0,     0,     0,  1583,     0,     0,     0,     0,     0,
    2147,    32,     0,     0,     0,     0,     0,     0,   152,   153,
       0,     0,     0,     0,   154,   155,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,   240,     0,
       0,     0,     0,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,  1310,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,   685,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,     0,   115,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,     0,     0,
       0,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,     0,     0,     0,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   295,   296,   248,   249,   250,   251,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
       0,   142,     0,     0,     0,   297,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,   284,   285,   286,     0,     0,
       0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
    1670,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,    97,     0,   685,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,     0,   102,     0,   103,
     104,   105,   106,   107,   108,   109,     0,   110,     0,   111,
     112,   113,   114,  1671,   115,     0,   116,     0,     0,     0,
       0,     0,     0,   117,   288,     0,   118,     0,     0,     0,
       0,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,     0,     0,     0,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,   126,   127,   128,   129,   130,   131,
       0,   132,     0,   133,     0,   134,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   289,     0,     0,     0,   137,
       0,     0,   138,   139,     0,   140,     0,     0,   290,     0,
     142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
       0,   145,   291,   147,   148,     0,   149,     0,   150,     0,
       0,     0,     0,   151,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,    80,     0,   152,   153,     0,
       0,     0,     0,   154,   155,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
      97,   685,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,     0,   102,     0,   103,   104,
     105,   106,   107,   108,   109,     0,   110,     0,   111,   112,
     113,   114,     0,   115,     0,   777,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,     0,     0,     0,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,     0,
       0,     0,     0,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,  1203,  1204,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,   446,   447,   448,   449,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   778,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,  1054,  1055,  1056,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   153,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,   176,     0,   177,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,    97,
     685,     0,     0,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,   102,     0,   103,   104,   105,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   113,
     114,     0,   115,     0,   116,     0,     0,     0,     0,  1256,
       0,   117,     0,     0,   118,     0,     0,     0,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,     0,     0,
       0,     0,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,  1057,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   176,     0,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,    97,     0,
     685,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   102,     0,   103,   104,   105,   106,
     107,   108,   109,     0,   110,     0,   111,   112,   113,   114,
    1626,   115,     0,   116,     0,     0,     0,     0,     0,     0,
     117,   616,     0,   118,     0,     0,     0,     0,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,     0,     0,
       0,     0,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,  1054,  1055,  1056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,   176,     0,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,    97,   685,     0,
       0,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,     0,   102,     0,   103,   104,   105,   106,   107,
     108,   109,     0,   110,     0,   111,   112,   113,   114,     0,
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,     0,     0,     0,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,     0,     0,     0,     0,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,  1515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,   176,     0,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,    97,     0,   685,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,   102,     0,   103,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,  1674,   115,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,     0,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,     0,     0,     0,     0,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
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
       0,   110,     0,   111,   112,   113,   114,  1677,   115,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,     0,     0,     0,     0,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,     0,     0,     0,     0,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   685,     0,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,     0,     0,
     102,     0,   103,   104,   105,   106,   107,   108,   109,     0,
     110,     0,   111,   112,   113,   114,  1922,   115,     0,   116,
       0,     0,     0,     0,     0,     0,   117,    14,     0,   118,
       0,     0,     0,     0,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,     0,     0,     0,     0,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,    80,     0,
     152,   153,     0,     0,     0,     0,   154,   155,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,     0,    98,    99,
       0,   685,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,     0,   102,
       0,   103,   104,   105,   106,   107,   108,   109,     0,   110,
       0,   111,   112,   113,   114,     0,   115,     0,   116,     0,
       0,  1923,     0,     0,     0,   117,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1386,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,     0,
       0,     0,     0,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,     0,     0,     0,
     121,     0,  1357,     0,   122,   123,     0,     0,     0,     0,
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
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,     0,     0,
      95,    96,    97,     0,   685,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     0,   102,     0,
     103,   104,   105,   106,   107,   108,   109,     0,   110,     0,
     111,   112,   113,   114,  1924,   115,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,     0,     0,
       0,     0,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,     0,     0,     0,     0,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,     0,   132,     0,   133,     0,   134,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,     0,   140,     0,     0,   141,
     488,   142,     0,     0,     0,   143,   144,     0,     0,     0,
       0,     0,   145,   146,   147,   148,     0,   149,     0,   150,
       0,     0,     0,     0,   151,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,    80,     0,   152,   153,
       0,     0,     0,     0,   154,   155,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   117,   288,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
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
       0,     0,   117,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,     0,
     132,     0,   133,     0,   134,     0,     0,     0,     0,     0,
       0,   135,     0,     0,   136,     0,     0,     0,   137,     0,
       0,   138,   139,     0,   140,     0,     0,   141,     0,   142,
       0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
     145,   146,   147,   148,     0,   149,     0,   150,     0,     0,
       0,     0,   151,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,     0,   152,   670,     0,     0,
       0,     0,   154,   155,     0,     0,    81,     0,     0,    82,
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
       0,   117,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
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
       0,   115,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,   121,     0,  1357,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,     0,   132,     0,
     133,     0,   134,     0,     0,     0,     0,     0,     0,   135,
       0,     0,   136,     0,     0,     0,   137,     0,     0,   138,
     139,     0,   140,     0,     0,   141,     0,   142,     0,     0,
       0,   143,   144,     0,     0,     0,     0,     0,   145,   146,
     147,   148,     0,   149,     0,   150,     0,     0,     0,     0,
     151,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,    80,     0,   152,   153,     0,     0,     0,     0,
     154,   155,     0,     0,    81,     0,     0,    82,     0,     0,
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
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
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
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,     0,   132,     0,   133,     0,
     134,     0,     0,     0,     0,     0,     0,   135,     0,     0,
     136,     0,     0,     0,   137,     0,     0,   138,   139,     0,
     140,     0,     0,   141,     0,   142,     0,     0,     0,   193,
     144,     0,     0,     0,     0,     0,   145,   146,   147,   148,
       0,   149,     0,   150,     0,     0,     0,     0,   151,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      80,     0,   152,   153,     0,     0,     0,     0,   154,   155,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
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
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,     0,
       0,     0,   834,     0,     0,     0,   122,   123,     0,     0,
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
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,     0,   132,     0,   133,     0,   134,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,     0,
       0,     0,   137,     0,     0,   138,   139,     0,   140,     0,
       0,   141,     0,   142,     0,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   145,   146,   147,   148,     0,   149,
       0,   150,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,  1294,     0,     0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
       4,   300,   310,    38,   172,     9,   171,   425,     0,    13,
     823,   231,   441,   578,    18,    19,     0,   229,   183,   815,
     987,     0,   618,    27,    37,   300,     0,   336,   721,  1125,
     715,     0,   621,    37,    38,  1120,  1399,   202,   203,   623,
     629,     0,    28,   208,    11,   665,     0,   631,     3,   577,
     457,  1428,    25,   458,    18,  1007,  1008,   490,   982,   300,
     989,    11,  1147,   594,    14,    16,     0,    71,     3,  1758,
     478,  1240,   352,   353,   594,    85,   469,   797,   798,   224,
     842,   843,   844,   803,    27,   934,    83,   936,   368,   111,
     111,    66,   653,   172,  1498,   352,   668,   111,   947,   174,
       3,  1716,   286,     0,   174,     5,     6,     7,     8,     9,
      10,  1779,   109,    11,  1782,   284,     0,   274,   275,   276,
      58,   278,   279,   280,  1501,   282,   189,   189,    64,   111,
       0,    55,  1509,    64,    65,   111,    67,    66,     3,    83,
     533,   284,    14,    42,    43,     0,    67,   175,    84,    66,
     349,    39,    40,   110,   353,   254,   159,   161,   162,   167,
     168,   169,   179,   167,   333,   349,   110,    88,    66,     5,
       6,     7,     8,     9,    10,    66,   740,   741,   742,   174,
    1869,    21,    22,    71,    83,   174,  1875,   134,    53,   193,
     333,   115,   184,   185,   186,   187,   188,   161,   174,   174,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
     177,   225,   226,   227,     3,   184,   185,   186,   187,   188,
     184,   185,   186,   187,   188,   755,   222,   241,   255,   174,
    1855,   245,   172,   172,   553,   174,   309,   309,   252,   253,
     184,   185,   186,   187,   188,   662,   267,   174,   262,   263,
     264,   265,   266,   267,   268,   269,   797,   798,   272,  1958,
     349,   174,   803,   277,   172,   350,   174,   281,  1967,   499,
     350,   172,  1686,   174,   288,   289,   290,   184,   185,   186,
     187,   188,  1461,   857,   858,   859,   860,   310,   555,   169,
     184,   185,   186,   187,   188,   723,   310,   311,  1275,    64,
      65,    66,    67,   718,   184,   185,   186,   187,   188,  1987,
     256,   349,   883,   884,   267,   890,   257,   349,   349,   184,
     185,   186,   187,   188,   174,   349,   340,   347,   236,   596,
    2029,   486,  2031,   915,   341,   353,   349,  1276,   189,   346,
     607,   608,   632,  1277,   943,   350,   294,   229,   523,   288,
     284,   350,  1047,   891,  1049,   949,     4,   349,   372,   324,
     527,   322,   805,   766,   349,   632,   276,   785,   786,   383,
     279,    19,     0,  1103,   174,   642,   174,   354,   323,    27,
     910,  1153,  1241,   673,   674,  1244,  1759,   288,    66,  1776,
     657,  1764,   172,   683,   354,   175,  2021,   305,   507,   508,
     509,   510,   425,   175,   193,   194,  1382,   175,   517,   349,
      64,    65,    66,    67,   179,   104,  1382,   263,   189,  1982,
     266,   110,   436,    71,    11,    66,   175,   441,   175,  2128,
     444,   175,   446,   447,   448,   449,   450,   451,   452,   453,
     454,    86,   175,     0,   458,   111,   115,   189,   851,   852,
     853,   854,   111,   239,   271,   111,   189,   243,   861,   862,
     863,   175,   175,   152,   175,   316,   480,   441,   110,   175,
     159,   116,   352,  1568,   119,   120,   121,   122,   123,   124,
     494,   477,   127,   175,   498,   175,   155,   352,   253,   175,
     175,     5,   257,   760,   172,   804,   174,    11,  1072,   175,
     514,   515,   516,  1876,   518,   175,     3,   175,  1470,  1471,
     175,   556,   277,   822,   162,   529,   530,   531,   532,   804,
     175,   535,   536,   537,   538,   755,   540,   541,   542,   175,
     544,   172,   349,   174,   548,   952,  1862,   822,   309,  2000,
     554,   126,   556,   175,   959,   193,   175,    55,   175,   175,
     350,    83,   350,   804,    81,   320,   184,   185,   186,   187,
     188,     3,  1103,   175,   873,   150,   580,   309,    66,   349,
    2133,   822,   175,   175,   175,  1278,   254,   349,   226,   227,
    1439,   349,  1558,   465,   117,   118,     3,   174,   873,   819,
    1196,  1450,  1558,  1167,   913,   110,   914,   245,  1457,   253,
     349,   267,   349,   257,   252,   349,  2067,   115,   267,   179,
     288,     3,   254,   254,   262,   263,   264,   265,   266,   267,
     110,   269,   873,   277,   272,    79,  1321,   184,   185,   186,
     187,   188,  1226,   281,    56,   349,   349,   152,   349,   328,
      62,   173,   817,   349,  1970,   189,  1972,   288,    66,   916,
      84,   665,   666,    16,  1284,    99,   670,   349,   166,   349,
     349,  1291,   981,   349,   349,  1082,   110,   650,   958,   652,
     258,   179,   172,   349,   172,   172,   174,   174,   256,   349,
     910,   349,    83,   328,   349,   255,   274,   177,   271,   979,
     128,   665,    58,   110,   349,   133,  1015,    83,   712,   287,
     714,   279,  1679,   349,   718,   719,    69,    70,    71,   143,
      73,    74,  1002,    76,    87,  1005,  1006,   349,   110,   230,
     349,    87,   349,   349,   738,   233,   234,   235,   236,   237,
     172,   270,   174,   177,     0,   383,   616,   349,   712,   229,
     115,   312,   313,   314,  1850,  1851,   349,   349,   349,   732,
     632,   616,   632,   305,   172,  1708,   174,   265,   134,   259,
     161,  1714,   642,   164,   778,  1168,   349,   632,   154,   321,
     278,   157,   166,   284,   285,   791,   284,   642,   153,   279,
     155,   289,    42,    43,   274,  1104,   102,   277,  1073,   134,
     361,   159,   230,   220,   221,   159,   444,   287,   446,   447,
     448,   449,   816,   451,   820,   453,   454,   175,   171,   279,
     254,   175,   826,   827,   828,   829,   254,   175,   326,   175,
     834,   329,  1073,   174,   153,   839,   155,   841,   842,   843,
     844,   189,   480,   189,   110,   849,   850,   719,   409,   410,
     234,   235,   236,   237,  1419,   350,   494,  1264,  1157,   327,
     498,   167,   168,   169,  1271,  1501,  1273,  1456,   166,   175,
    1459,   191,  1492,  1509,  1494,   174,   102,   515,    88,   350,
     518,    91,  1157,   149,  1104,   151,   152,    97,   760,   174,
     760,   529,   530,   531,   532,  1300,   275,   535,   536,   537,
     538,   914,   540,   541,   542,   760,   544,   880,   220,   221,
     914,  1131,    88,   917,   286,  1320,  1157,   270,   349,    95,
      96,  1220,  1221,   896,   256,   929,  1134,  1135,  1136,  1137,
     135,  1727,  1728,   937,   270,   496,   234,   235,   236,   237,
     944,   167,   168,   169,  1152,  1220,  1221,   279,   349,  1161,
     282,   283,   167,   168,   169,   959,  1349,  1350,  1351,    87,
     175,  1126,   680,   681,   682,    69,    70,    71,    17,    73,
      74,    75,    76,     5,     6,     7,   271,   981,   982,  1220,
    1221,    82,    83,   987,   988,   989,   184,   185,    20,   271,
     188,   289,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    55,    89,    90,    58,
     215,   216,   217,   218,   219,   260,   261,   981,   982,   267,
      52,    53,    54,   295,   296,   297,   298,   299,   300,   301,
     302,   329,   904,   905,   906,    20,   167,   168,   169,    24,
      25,    11,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   267,   103,  1095,   105,  1097,  1098,  1063,
    1680,  1468,  1469,  1362,   331,   332,   115,   171,    53,    54,
     313,  1478,   116,   117,  1078,   119,   120,   121,   122,   123,
     124,   284,  1971,   127,  1973,   284,   231,  1362,   284,    69,
      70,    71,   308,   284,   310,   656,    76,  1101,  1102,   326,
     738,  1974,   110,  1976,  1977,  1978,  1110,  1111,  1697,   284,
    1114,   256,   982,   235,  1118,  1119,  1120,  1121,   263,   264,
     128,  1362,   100,   101,   295,   133,   297,   982,   299,   300,
     301,   302,   284,   285,  1138,  1007,  1008,   282,   193,   194,
     778,  1145,   308,  1147,   310,   235,   295,  1151,   297,  1153,
     299,   300,   301,   302,   308,   313,   310,  1121,   331,   332,
     333,   334,   308,  1581,   310,   183,   184,    93,    94,   177,
     228,   220,   221,   222,   223,   224,   225,   303,   816,    89,
      90,     3,     4,  1395,   233,   335,   336,   748,   826,   827,
     828,   829,   333,   334,     5,     6,     7,     8,     9,    10,
    1070,   839,    64,    65,   186,   187,   178,  1796,   284,   810,
     811,   849,   850,  2091,  2092,  1070,   265,  1089,   305,   306,
     178,   229,   230,   178,  1504,  1505,  1815,   875,   284,   278,
     878,   879,   880,   592,   593,   284,   349,   104,   287,   304,
     290,     3,     3,   174,  1519,  1502,   254,   174,   896,   897,
     898,   899,   174,    64,    65,    66,    67,   174,   174,   291,
     292,   293,   294,    22,    17,   174,   274,   174,   174,   277,
     126,  1275,  1276,  1277,   174,   174,   174,   326,  1519,   287,
    1284,    69,    70,    71,   328,    73,    74,  1291,    76,   174,
    1294,   929,   174,   174,   174,   174,  1300,  1301,   174,   174,
     174,   174,    55,  2116,    86,    58,   174,   191,  1607,  1608,
     174,  1610,   339,  1277,   174,  1744,  1320,   349,  1322,   174,
    1284,   882,   350,   349,  1581,   174,  1583,  1291,   313,   174,
     174,    98,  1607,  1608,   116,  1610,   339,   119,   120,   121,
     122,   123,   124,   286,   349,   127,    92,   328,   235,   268,
     103,   178,   105,  1357,   181,   182,   183,   184,   185,   186,
     187,   188,   115,   134,   349,   192,  1607,  1608,   179,  1610,
     306,  1406,   320,   130,   134,   130,   134,  1381,   112,   135,
     115,  1385,  1386,   171,   112,   111,   175,   305,   172,  1393,
    1382,   239,   172,   175,   177,  1399,  1400,   267,  1382,   174,
     174,   174,  1406,  1407,   965,  1277,   967,  1277,  1576,   174,
     235,  1283,   106,    38,   305,   178,  2005,   350,   170,    23,
     174,  1385,  1277,   174,  1428,   174,  1683,   174,   178,   174,
     178,   166,   174,   181,   182,   183,   184,   185,   186,   187,
     188,  1414,   253,  1416,   192,  1418,   257,  1451,  1382,  1867,
    1423,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   174,   174,   277,   220,   221,   222,
     223,   224,   225,  1111,   174,   174,    55,   174,   112,   175,
     233,  1119,   156,     3,   174,  1382,   175,   175,  1492,   172,
    1494,   352,   174,   174,  1498,   174,  1753,  1501,  1382,   234,
     235,   236,   237,  1760,   240,  1509,   207,   240,   175,   320,
     288,    82,   265,  1151,    79,   174,  1520,   111,   174,   350,
     245,  1534,   349,   262,   104,   172,   111,   321,  1492,   172,
    1494,   284,   240,   254,   287,   278,   115,  1572,  1099,   266,
     106,   228,   286,   278,   285,   174,   328,  1551,   270,   284,
     285,   328,   189,    23,   289,     5,     6,     7,     8,     9,
      10,   104,   135,   286,  1568,   111,  1558,   159,  1572,   174,
     349,  1879,   147,   326,  1558,   102,  1580,   349,   175,   349,
     292,   319,     5,     6,     7,     0,     1,   166,   328,   175,
     109,   326,   110,   135,   175,    88,   174,    20,  1470,  1471,
     179,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   175,  1580,   349,   349,   349,
     340,   174,   174,   111,  1558,   349,   266,   263,    90,    52,
      53,    54,   262,   110,   262,  1639,    51,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   322,   111,    64,
      65,    66,    67,   174,   233,   234,   235,   236,   237,    20,
     273,  1558,    77,    78,    79,    80,   236,    99,   328,  1682,
    1969,    86,   175,   349,  1558,  1679,  1680,   175,   175,   175,
    1937,   330,  1686,   270,   175,   175,   265,   349,   175,   175,
     286,   175,   349,   175,  1969,   175,  1709,  1710,   349,   175,
     174,   328,   175,   175,   175,   284,   104,   349,   131,   132,
     289,    64,    65,    66,    67,   175,  1680,   162,   174,   134,
     174,   174,  1726,   175,    77,    78,    79,    80,  1969,  1733,
    2038,   303,   175,    86,   175,    75,   319,    75,    72,   174,
    1744,  1745,   104,   108,   104,   175,   102,   326,  1386,  1310,
     329,   175,   350,   175,   175,  1759,   349,   172,   271,   174,
    1764,   271,    16,   111,   328,   270,   174,   279,   270,  1407,
     354,   355,  1776,  1777,  1939,  2032,   360,   238,   175,   243,
    1744,   365,  1343,   238,   172,   175,   175,   254,   328,  1793,
     144,   175,   144,   178,  2051,   175,   181,   182,   183,   184,
     185,   186,   187,   188,  2103,  1366,   191,   192,  1369,  1370,
      75,   286,   175,   104,   336,   174,   231,   232,   135,   172,
    1824,   174,   279,   254,   175,   175,   241,   242,  2103,   244,
     269,   246,   247,   248,   249,  1839,   251,   174,   253,   240,
     269,   256,   257,   349,     3,  2010,   272,   178,   263,   264,
     181,   182,   183,   184,   185,   186,   187,   188,  1862,     3,
     191,   192,  2103,   172,   279,    77,   349,   282,   291,   292,
     293,   294,  1876,   457,   240,  1879,     5,   317,   231,   232,
     349,   465,   239,   351,   229,   175,   175,   315,   241,   242,
     349,   244,   338,   175,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   256,   257,   320,   175,   175,   350,   175,
     263,   264,   174,  1917,   181,   182,   183,   184,   185,   186,
     187,   188,   349,   270,   349,   192,   279,   270,   270,   282,
    1934,   270,   175,   349,   163,  2155,   349,   192,   262,  1943,
     110,   129,  1580,  1947,  2164,   278,    83,   172,   174,   271,
    1954,   174,   240,   174,   174,  1959,   112,   110,   110,   110,
    1964,   175,   270,   270,   333,   344,  1970,   320,  1972,   344,
     342,   277,   110,   328,   174,   269,   349,   230,  1982,     3,
    1541,  1985,  1543,  1544,   173,   278,    85,    85,   267,   319,
    1982,   240,   135,   134,     5,  1999,   240,     5,  1982,   328,
     155,   350,   337,  1982,   588,   308,   350,   152,  1982,   157,
     152,     3,   191,  1982,   130,    59,   134,   349,   175,   319,
     307,   319,  2026,  1982,   174,   160,   157,   154,  1982,   345,
     113,   333,  2036,    60,  2038,   174,   307,   621,   622,   623,
    2044,  2045,  2046,  2047,   134,   629,   319,   631,   333,   319,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     317,   645,   646,   647,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   661,   662,   343,
     270,   344,    61,   313,   315,   270,   270,   325,    64,   174,
      65,   134,  2096,    41,  2098,   679,   680,   681,   682,  1145,
    1558,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,  1336,  2130,   222,   221,  2133,
     714,   715,  1092,   479,   805,    38,  2085,  1120,  1568,  2137,
    2144,  2133,  1714,  2123,  2122,   481,  2133,  2115,  1874,  2133,
    1764,  2084,  1755,  1874,  2133,  1610,  2144,   480,  1891,  2133,
    1890,     8,  1723,   165,  2133,   733,  1546,  1519,  1729,  1730,
    1943,  1946,  2018,  1543,  2133,  1544,   723,  1469,  1468,  2133,
     466,  1089,  1288,  1685,   436,   914,  1301,   991,   599,  1202,
     669,   676,   911,  1693,   683,  1815,   735,   712,    37,   968,
    1782,  1839,   608,   684,   972,  1766,   349,  1984,   972,   660,
    1780,   552,  1631,  1449,   951,  1796,   630,  1438,  1638,  1441,
       5,     6,     7,  1911,  1996,    -1,  2004,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,  1823,    -1,    -1,    -1,    -1,    52,    53,    54,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1934,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,   939,    -1,    -1,    -1,   943,
      -1,    -1,    -1,    -1,    -1,   949,    38,    -1,   952,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1940,
      52,    -1,    -1,    -1,    -1,    -1,   970,    -1,    -1,   973,
     175,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
    1971,    83,  1973,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,  1007,  1008,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1047,    -1,  1049,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,  1082,    -1,
      -1,   173,    -1,    -1,   176,  1089,   291,   292,   293,   294,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,  1202,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,  1222,    -1,
      -1,   313,  1226,    -1,    -1,    -1,   318,  1231,   320,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1254,  1255,  1256,  1257,    -1,    -1,    -1,    -1,    -1,    -1,
    1264,    -1,    -1,    -1,    -1,    -1,  1270,  1271,    -1,  1273,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1321,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,    -1,   166,    -1,  1438,    -1,    -1,  1441,   172,   173,
     174,    -1,   176,    -1,    -1,  1449,    -1,    -1,    -1,    -1,
      -1,    -1,  1456,    -1,    -1,  1459,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1468,  1469,  1470,  1471,    -1,    -1,
      -1,    -1,    -1,    -1,  1478,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
     110,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   128,   253,
      -1,   255,    -1,   133,   134,    -1,    -1,    -1,   262,    -1,
      -1,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,    -1,   280,    -1,    -1,    -1,
     284,   285,    -1,    -1,   288,    -1,    -1,   291,   292,   293,
     294,    -1,   296,    -1,   298,   175,    -1,   177,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1582,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    20,   333,
     334,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   352,   229,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    -1,  1638,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,   263,   264,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,   274,    -1,  1670,   277,    -1,  1673,
      -1,  1675,   282,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,  1693,
      -1,    -1,    -1,  1697,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1708,    -1,    -1,    -1,    -1,    -1,
    1714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      -1,    -1,    -1,    -1,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1778,  1779,  1780,    -1,  1782,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1796,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,  1815,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,  1866,    69,    70,    -1,    -1,    -1,  1872,   291,
     292,   293,   294,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,   349,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1984,    -1,    -1,  1987,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,  2005,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
    2024,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,   288,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,   177,    -1,   179,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,   207,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,   254,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,   354,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   354,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,
     173,   174,    -1,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,   204,   205,    -1,   207,    -1,    -1,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
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
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
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
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
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
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
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
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,     3,   354,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
     307,   308,    -1,    -1,   311,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   354,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
     204,   205,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
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
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,    -1,   173,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,   205,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,
      -1,   272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,
      -1,    -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,   333,   334,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,   354,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,
      -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
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
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
     205,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
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
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   354,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   204,   205,    -1,    -1,    -1,    -1,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
      -1,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,    -1,   280,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,   308,    -1,    -1,   311,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   354,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,    -1,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
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
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,   311,   312,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    22,    23,   333,   334,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   135,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,   175,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
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
      38,    -1,   349,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,   135,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,
      -1,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,   231,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,   253,    -1,   255,   256,   257,
      -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,
      -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,
     278,   279,   280,   281,   282,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,
     298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,
      -1,    -1,   310,    -1,    -1,   313,   314,   315,    -1,    -1,
      -1,    -1,   320,     5,     6,     7,     8,     9,    10,   327,
     328,    -1,    -1,    -1,    -1,   333,   334,    -1,   349,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
     135,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,   176,    -1,    -1,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    -1,    -1,
      -1,    -1,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,
     232,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    -1,
     262,   263,   264,   265,    -1,    -1,    -1,   269,    -1,    -1,
     272,   273,    -1,   275,    -1,    -1,   278,   279,   280,   281,
     282,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,   293,   294,    -1,   296,    -1,   298,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,   313,    -1,    -1,    -1,    -1,   318,    -1,   320,     5,
       6,     7,     8,     9,    10,   327,   328,    -1,    -1,    -1,
      -1,   333,   334,    -1,   349,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,   135,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,    -1,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
     176,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,   231,   232,   233,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,   253,    -1,   255,
     256,   257,    -1,    -1,    -1,    -1,   262,   263,   264,   265,
      -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,
      -1,    -1,   278,   279,   280,   281,   282,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,
     296,   309,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,   315,
      -1,    -1,    -1,    -1,   320,     5,     6,     7,     8,     9,
      10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,    -1,   159,
     160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,   253,    -1,   255,   256,   257,    -1,    -1,
      -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,   269,
      -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,   279,
     280,   281,   282,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,   293,   294,    -1,   296,   309,   298,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,   319,
     320,     5,     6,     7,     8,     9,    10,   327,   328,    -1,
      -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,   135,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,   176,    -1,    -1,    -1,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,   231,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,   253,
      -1,   255,   256,   257,    -1,    -1,    -1,    -1,   262,   263,
     264,   265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,
      -1,   275,    -1,    -1,   278,   279,   280,   281,   282,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,
     294,   308,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,
       5,     6,     7,     8,     9,    10,   320,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    22,    23,   333,
     334,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,   119,   120,   121,   135,    -1,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,    -1,   159,   160,   161,   162,    -1,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,   176,    -1,    -1,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,   253,    -1,
     255,    -1,   257,    -1,    -1,    -1,    -1,   262,   263,   264,
     265,    -1,    -1,    -1,   269,    -1,    -1,   272,   273,    -1,
     275,    -1,    -1,   278,   279,   280,   281,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,   291,   292,   293,   294,
     308,   296,    -1,   298,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,    -1,   318,    -1,   320,     5,     6,     7,     8,
       9,    10,   327,   328,    -1,    -1,    -1,    -1,   333,   334,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,   268,   257,    -1,
      -1,    -1,    -1,   262,   263,   264,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
     279,   280,   281,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,
     319,   320,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,   107,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,   135,    -1,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,   222,   223,   224,   225,    -1,    -1,   228,
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
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
     112,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,    -1,   159,
     160,   161,   162,   175,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,   176,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,   135,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,   176,    -1,    -1,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   233,   234,   235,   236,   237,    -1,    -1,   240,
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
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
     135,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,   184,
      -1,   173,    -1,    -1,   176,    -1,    -1,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    -1,    -1,
      -1,    -1,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
     135,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,    -1,   159,   160,   161,   162,
     175,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
     173,   174,    -1,   176,    -1,    -1,    -1,    -1,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    -1,    -1,
      -1,    -1,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,   135,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,   176,    -1,    -1,    -1,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,   119,   120,   121,    -1,   135,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,    -1,   159,   160,   161,   162,   175,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,   176,    -1,    -1,    -1,    -1,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,   135,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,   175,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
     176,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,   135,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,   175,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,
      -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,    -1,    -1,    -1,    -1,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,    -1,   166,    -1,
      -1,   175,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    -1,
      -1,    -1,    -1,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,   230,    -1,   232,   233,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
     119,   120,   121,    -1,   135,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,   160,   161,   162,   175,   164,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    -1,    -1,    -1,    -1,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,   253,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,    -1,    -1,    -1,
     269,    -1,    -1,   272,   273,    -1,   275,    -1,    -1,   278,
     279,   280,    -1,    -1,    -1,   284,   285,    -1,    -1,    -1,
      -1,    -1,   291,   292,   293,   294,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,   303,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   327,   328,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,   157,    -1,   159,
     160,   161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    -1,   159,   160,
     161,   162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,
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
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,    -1,   230,    -1,   232,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,   157,    -1,   159,   160,   161,   162,    -1,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,   159,   160,   161,   162,    -1,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,   160,   161,   162,    -1,   164,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   221,    -1,    -1,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,   253,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,   269,    -1,    -1,   272,   273,    -1,   275,    -1,
      -1,   278,    -1,   280,    -1,    -1,    -1,   284,   285,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,    -1,   296,
      -1,   298,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,   333,   334
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   134,   172,   174,   231,   232,   241,   242,   244,
     246,   247,   248,   249,   251,   253,   256,   257,   263,   264,
     279,   282,   320,   356,   362,   363,   366,   367,   368,   369,
     371,   373,   374,   383,   388,   400,   405,   406,   412,   451,
     457,   460,   468,   489,   504,   508,   509,   510,   518,   533,
     535,   536,   537,   556,   560,   561,   562,   565,   687,   692,
     134,   111,     5,     6,     7,     8,     9,    10,    22,    23,
      26,    38,    41,    52,    63,    80,    83,    86,    92,    97,
      98,    99,   105,   113,   116,   119,   120,   121,   126,   127,
     143,   144,   147,   149,   150,   151,   152,   153,   154,   155,
     157,   159,   160,   161,   162,   164,   166,   173,   176,   220,
     221,   228,   232,   233,   240,   243,   244,   245,   246,   247,
     248,   249,   251,   253,   255,   262,   265,   269,   272,   273,
     275,   278,   280,   284,   285,   291,   292,   293,   294,   296,
     298,   303,   327,   328,   333,   334,   655,   681,   682,   179,
     255,   546,   267,    81,   515,   515,   681,    79,    87,   557,
     558,   681,    66,   565,   189,   270,    67,    69,    70,   625,
     626,   627,   681,   655,   359,   358,   360,   361,   357,     5,
      11,   685,   688,   284,   655,     5,     6,     7,     8,     9,
      10,    64,    65,    66,    67,   179,   253,   257,   277,   320,
     384,   391,   392,   393,   395,   396,   397,   679,   680,   263,
     266,   389,   390,    58,    87,    55,   115,   284,    11,   174,
     236,   305,   452,   453,   526,   556,   562,   670,   684,     0,
      17,    55,    58,   103,   105,   115,   220,   221,   222,   223,
     224,   225,   233,   265,   278,   284,   287,   413,   414,   417,
     418,   166,   234,   235,   236,   237,   289,   329,    55,   115,
     166,   179,   233,   234,   235,   236,   237,   265,   278,   284,
     289,   326,   329,   503,    55,    56,    57,    63,   174,   265,
     278,   292,   456,   652,   681,   220,   221,   284,   372,   417,
     449,   681,   134,   102,   167,   168,   169,   581,   134,   655,
     279,   350,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    27,    28,    44,    45,
      46,    47,    48,    49,    50,    62,   106,   110,   114,   125,
     135,   136,   137,   138,   139,   141,   142,   145,   146,   148,
     158,   165,   174,   177,   193,   194,   203,   204,   205,   207,
     210,   291,   292,   293,   294,   307,   311,   312,   352,   354,
     542,   568,   579,   580,   588,   589,   590,   591,   593,   595,
     596,   598,   600,   602,   603,   605,   606,   607,   608,   609,
     610,   611,   624,   625,   628,   630,   631,   632,   634,   635,
     636,   637,   638,   652,   653,   654,   656,   657,   659,   674,
     677,   681,   686,   697,   698,   699,   700,   701,   715,   722,
     724,   727,   737,   738,   768,   655,   191,   516,   516,   681,
      88,    91,    97,   511,   512,   513,   349,   559,   562,   455,
     456,   546,   175,   327,   115,   166,   234,   235,   236,   237,
     278,   284,   285,   289,   326,   502,   693,   174,   350,   455,
     369,   369,   356,   356,   369,   174,   655,   117,   118,   534,
     455,   455,   275,   455,   111,   267,   286,   349,   286,   349,
     270,   349,   271,   271,   391,   384,    87,   511,   279,   681,
     655,   655,   452,   565,   267,   670,   267,    27,   267,   305,
     321,   220,   221,   681,   220,   221,   655,   284,   284,   284,
     284,   655,   681,   313,   365,   365,   326,   284,   235,   655,
     655,   655,   655,   655,   655,   681,   655,   235,   166,   234,
     235,   236,   237,   655,   313,   364,   364,   364,   364,   681,
     364,   364,   364,   655,   364,    42,    43,   507,   228,   449,
     681,   681,   303,   178,   178,   178,   349,     5,     6,     7,
      20,    24,    25,    26,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    52,    53,    54,   291,   292,   293,   294,
     349,   643,   651,   672,   674,   675,   676,   677,   104,   179,
     255,   566,   566,   566,   304,   582,   290,   550,   456,   547,
     549,   678,   681,   681,   686,   686,   686,   174,   174,    22,
     174,   629,   629,   629,   629,   629,   174,   605,   174,   126,
     681,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   288,   556,   562,   579,   589,   597,   625,
     681,   589,   174,   607,   607,   174,   174,   174,   607,   686,
     174,   641,   174,   642,   193,   194,   639,   308,   607,   664,
     665,   174,   174,   589,   601,   111,   267,   569,   570,   189,
     328,   633,   681,   191,   178,   181,   182,   183,   184,   185,
     186,   187,   188,   192,   655,   135,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   268,
     339,   350,   349,   174,   174,   174,   686,   686,   350,   174,
     254,   288,   453,   456,   538,    82,    83,   286,   517,    89,
      90,    92,    98,   349,   558,   328,   568,   655,   235,   655,
     655,   655,   655,   681,   655,   681,   655,   655,   268,   175,
     543,   607,   660,   627,   681,   306,   584,   134,   134,   134,
     174,   175,   541,   543,   545,   565,   534,   130,   130,   507,
     276,   398,   399,   679,   679,   398,   393,   166,   284,   394,
     502,   655,   397,   112,   112,   111,   111,   511,   260,   261,
     415,   172,   259,   279,   401,   116,   117,   119,   120,   121,
     122,   123,   124,   127,   328,   408,   410,   411,   256,   279,
     282,   283,   175,   655,   324,   686,   267,   655,   670,   305,
     172,    86,   328,   407,   409,   411,   365,   365,   365,   365,
     239,   172,   381,   177,   228,   375,   681,   655,   681,   365,
     655,   174,   174,   174,   174,   455,   331,   332,   490,   364,
     235,   655,   655,   655,   655,   507,   106,   655,   655,   655,
     655,   655,   655,   655,   655,   681,   175,    58,   294,   654,
     605,   681,   579,   449,   174,   174,    21,    22,   174,   174,
     174,    38,   174,   641,   642,   295,   297,   299,   300,   301,
     302,   644,   647,   649,   650,   681,   174,   174,   174,   174,
     585,   586,   607,   170,   567,   567,   567,   609,   669,   684,
     305,   583,   579,   178,   349,   570,   178,   350,   579,   658,
     658,    23,   175,   296,   298,   302,   644,   645,   646,   112,
     607,   608,   607,   694,   695,   696,   694,   240,   156,   716,
     742,   153,   155,   740,   240,     3,   728,   608,   115,   739,
     740,   694,   174,   539,   175,   175,   175,   175,   349,   350,
     607,   607,   607,   685,   172,   640,   685,   640,   686,   579,
     308,   662,   663,   310,   664,   666,   607,   543,   661,   349,
     353,    68,   174,   352,   551,   571,   572,   604,   625,   655,
     681,   563,   564,   681,   550,   580,   681,   589,   179,   180,
     190,   589,   599,   100,   101,   592,   592,   174,   174,   594,
     607,   594,   594,   594,   589,   599,   602,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   110,   177,   174,   207,   632,   175,   179,   207,   255,
     607,   667,   681,   667,     8,     9,    10,   207,   681,   288,
     539,   538,    82,    79,    88,    95,    96,   514,   685,   513,
     174,   604,   655,   174,   505,   505,   505,   505,   350,   110,
     686,   175,   349,    14,   609,   670,   245,   370,   175,   349,
     507,   172,   349,   386,   172,   385,   655,   398,   398,   262,
     415,   286,   278,   104,   172,   669,   669,   669,   672,   410,
     230,   284,   285,   403,   404,    67,    88,   402,   404,   284,
     404,   111,    16,   524,   525,   524,   655,   455,   321,   670,
     415,   172,   672,   409,   655,   655,   655,   655,   240,   266,
     106,   376,   681,   254,   377,   228,   111,   174,   420,   421,
     455,   270,   655,   174,   207,   487,   488,   681,   487,   487,
     487,   328,    64,    65,    67,   257,   491,   655,   655,   507,
     507,   507,   507,   505,   505,   505,   505,   507,   507,   507,
     672,   668,   685,   668,    23,   668,   668,   668,   685,    53,
     673,   686,   640,   640,   642,   641,   286,   668,   685,   668,
     668,   668,   349,   226,   227,   587,   104,   565,   565,   565,
     609,   670,   584,   605,   549,   550,   254,   548,   579,   681,
     328,   349,   111,   655,   159,   741,   349,   741,   741,   681,
     703,   174,   607,   717,   718,   719,   349,   608,   681,   725,
     147,   729,   741,   694,   581,   254,   540,   543,   544,   175,
     349,   183,   184,   589,   111,   349,   184,   349,   175,   292,
     686,   175,   686,   650,   309,   607,   662,   666,   607,   319,
     349,   349,   175,   349,   589,   605,   625,   174,   288,   551,
     556,   562,   572,   573,   349,    69,    70,    71,    73,    74,
      76,   171,   552,   554,   328,   574,   681,   574,   575,   575,
     350,   349,   569,   109,   576,   589,   589,   589,   541,   541,
     107,   605,   110,   340,   612,   613,   667,   175,   667,   175,
     350,   349,   350,   681,    93,    94,    88,   505,   175,   506,
     672,   681,   543,   545,   266,   399,   111,   387,   263,   387,
     387,   387,   686,   262,   681,   681,   669,   605,   670,   681,
     655,   681,    90,    89,    90,   681,   655,   230,   424,   427,
     438,   439,   678,   625,   110,   527,   322,   527,   455,   111,
     262,   670,   420,   420,   420,   420,   681,    56,    62,   382,
      20,   273,   689,   690,   376,   236,   186,   423,   424,   425,
     430,   450,   681,    99,   416,   328,   655,   420,   487,   175,
     349,   672,   175,   175,   175,   452,   330,   270,   505,   507,
     175,   175,   175,   175,   349,   175,   349,   175,   349,   302,
     644,   648,   175,   349,   175,   175,   175,   586,   174,   672,
     672,   607,   115,   155,   175,   694,   175,   175,   349,   702,
      83,   254,   607,   743,   744,   746,   747,   748,   271,   349,
     713,   328,   720,    84,   143,   723,   349,   726,   104,   730,
     750,   741,   175,   162,   751,   752,   741,   175,   349,   174,
     174,   174,   607,   607,   607,   607,   303,   543,   309,   319,
     607,   543,   543,   574,   575,   539,   175,   175,   175,   565,
     572,   552,    75,   572,    75,    72,   553,   681,   174,   681,
     564,   104,   108,   578,   191,   191,   175,   175,   686,   104,
     175,   102,   614,   175,   175,   207,   667,   681,   175,   349,
     350,   271,   382,   271,    16,   686,   507,   507,   507,   256,
     279,   681,   258,   274,   287,   447,   131,   132,   426,   672,
     328,   495,   686,   111,   174,   323,   531,   532,   686,   686,
     270,   279,   681,   683,   691,   362,   366,   378,   379,   380,
     383,   388,   400,   405,   504,   625,   655,   175,   349,   172,
     681,   452,   174,   270,   419,   175,    66,    80,    86,   239,
     242,   281,   307,   313,   318,   371,   373,   374,   383,   388,
     400,   405,   461,   464,   466,   467,   468,   472,   474,   480,
     482,   483,   504,   508,   509,   561,   681,   681,   238,   243,
     238,   172,   454,   449,   655,   671,   685,   685,   685,   642,
     685,   577,   656,   681,   175,   175,   175,   140,   607,   704,
     710,   711,   712,   742,   741,   254,   746,   175,   349,   328,
     110,   149,   151,   152,   714,   718,   741,   681,   721,   144,
     144,   175,   608,   741,   126,   150,   608,   731,   732,   733,
     734,   735,   750,   286,   175,   175,   544,   540,   541,   541,
     112,   175,   175,   349,   175,   349,   543,   175,   175,   353,
      75,   572,    16,   270,   555,   572,   174,   683,   577,   579,
     589,   589,   577,   104,    85,   347,   615,   616,   175,   175,
     506,   681,   336,   279,   254,    99,   110,   177,   254,   269,
     269,   456,   128,   133,   254,   428,   429,   432,   433,   435,
     436,   439,   686,   349,   531,   532,   174,   521,   521,   349,
     240,     3,   681,   349,   380,   425,   681,   272,     3,   172,
     422,   449,    77,   239,   546,   240,   469,   470,   655,   284,
     453,   473,   579,   308,   477,   478,   607,   579,   317,   462,
     315,   351,   672,   284,   486,   672,     5,   486,   229,   338,
     492,   175,   175,   175,   175,   175,   349,   350,   174,   349,
     349,   713,   349,   175,   744,   681,   745,   270,   270,   270,
     270,   175,   175,   328,   749,   750,   349,   110,   152,   736,
     163,   175,   175,   175,   607,   607,   607,   574,   572,   456,
     579,   555,   683,   175,   585,   182,   341,   348,   608,   617,
     618,   619,   620,   262,   278,     3,   110,   110,   434,   606,
     456,   456,   129,   434,   432,   110,   177,   229,   274,   277,
     287,   446,   448,   686,    83,   530,   175,   522,   523,   681,
     524,   524,   686,   686,   681,   174,    83,   173,   175,    64,
      84,   256,   240,   568,   458,   681,   174,   174,   579,   310,
     477,   479,   308,   475,   476,   309,   462,   464,   579,   174,
     239,   243,   461,     4,   459,   686,   239,   243,   271,   335,
     336,   493,   494,   112,   497,   498,   656,   681,   607,   705,
     706,   708,   710,   712,   704,   710,   110,    83,   110,   110,
     110,   681,   732,   270,   270,   175,    83,   161,   164,   753,
     754,   759,   175,   175,   175,   175,   618,   333,   344,   344,
     342,   623,   686,   681,   277,   328,   110,   174,   269,   655,
     349,   230,   175,   349,     3,   527,   527,   278,   431,   432,
     173,    85,    85,   458,   350,   471,   607,   453,   309,   462,
     319,   607,   475,   479,   462,   464,   134,   316,   485,   678,
     240,     5,   240,     5,   284,   333,   496,   284,   496,   494,
     337,   308,   500,   175,   349,   328,   707,   349,   155,   749,
     152,   152,   157,   681,   760,     3,   755,   756,    83,   154,
     157,   761,   762,   764,   765,   191,    83,   109,   341,   346,
     655,   130,   579,   455,   686,   523,    59,   528,   528,   681,
     175,   349,   681,   175,   349,   175,   462,   464,   307,   309,
     319,   310,   314,   481,   134,   319,   462,   175,   349,   672,
     458,   459,   458,   459,   495,   495,   495,   495,   333,   334,
     499,   174,   318,   371,   373,   383,   388,   465,   466,   501,
     508,   509,   561,   706,   681,   709,   710,   160,   757,   757,
     157,   681,   767,   756,   766,   763,   764,   341,   348,   608,
     621,   622,   345,   333,   455,   174,   437,   175,   113,   445,
      60,   529,   529,   432,   607,   134,   462,   307,   462,   579,
     319,   319,   319,   678,   681,   681,   681,   681,   579,   317,
     756,   758,   333,   343,   344,   445,   407,    39,    40,    71,
     444,   270,   441,   442,   443,    61,   530,   530,   309,   313,
     315,   672,   175,   463,   443,   175,    64,    65,   270,   442,
     270,   441,   325,   519,   462,   484,   681,   319,   465,    42,
      43,    83,   279,   440,   440,   174,   481,   134,    41,   110,
     254,   520,   670,   175,   349,   670
};

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
     418,   418,   418,   418,   418,   419,   419,   419,   419,   420,
     420,   421,   422,   422,   422,   423,   423,   424,   424,   425,
     425,   425,   426,   426,   427,   427,   428,   428,   429,   429,
     430,   431,   431,   432,   432,   432,   433,   434,   435,   436,
     436,   437,   437,   438,   439,   439,   440,   440,   440,   440,
     440,   441,   442,   443,   443,   443,   443,   443,   444,   444,
     444,   444,   445,   445,   446,   446,   446,   446,   446,   446,
     447,   447,   447,   448,   449,   449,   450,   451,   452,   452,
     453,   453,   454,   454,   455,   455,   456,   457,   458,   459,
     459,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     461,   461,   461,   462,   462,   463,   463,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   465,
     465,   465,   465,   465,   465,   465,   465,   466,   466,   466,
     466,   466,   466,   467,   468,   469,   470,   471,   471,   471,
     472,   473,   473,   473,   474,   474,   475,   476,   476,   477,
     478,   478,   479,   479,   480,   481,   481,   481,   482,   483,
     483,   484,   484,   485,   485,   486,   486,   487,   487,   487,
     488,   488,   489,   490,   490,   491,   491,   491,   491,   491,
     492,   492,   493,   493,   494,   494,   494,   494,   495,   495,
     496,   496,   497,   498,   498,   499,   499,   500,   500,   501,
     501,   502,   502,   502,   502,   502,   503,   503,   503,   503,
     503,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   505,   505,   505,   506,   506,   507,
     507,   507,   369,   369,   508,   508,   508,   508,   508,   509,
     510,   510,   510,   510,   510,   510,   510,   511,   511,   512,
     512,   513,   513,   513,   513,   514,   514,   514,   514,   515,
     515,   516,   516,   516,   517,   517,   518,   518,   518,   518,
     518,   518,   519,   519,   520,   520,   521,   521,   522,   522,
     523,   523,   524,   524,   524,   524,   525,   525,   526,   526,
     526,   526,   526,   527,   527,   528,   528,   529,   529,   530,
     530,   531,   531,   532,   532,   533,   534,   534,   534,   535,
     535,   536,   537,   537,   538,   538,   538,   538,   539,   539,
     540,   540,   541,   541,   542,   543,   544,   544,   545,   545,
     546,   546,   546,   547,   547,   548,   549,   549,   549,   550,
     550,   551,   551,   551,   551,   551,   552,   552,   552,   553,
     553,   554,   554,   554,   555,   555,   369,   556,   557,   557,
     558,   559,   369,   369,   560,   561,   562,   563,   563,   564,
     565,   565,   565,   565,   565,   566,   566,   566,   567,   567,
     567,   568,   569,   570,   570,   571,   571,   572,   572,   572,
     572,   572,   572,   572,   573,   572,   574,   574,   574,   574,
     575,   575,   576,   576,   577,   577,   578,   578,   579,   579,
     580,   580,   581,   581,   582,   582,   582,   583,   583,   583,
     584,   584,   584,   584,   585,   585,   586,   587,   587,   587,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   589,
     589,   590,   590,   591,   591,   592,   592,   592,   593,   593,
     593,   593,   594,   594,   595,   595,   596,   596,   596,   596,
     597,   597,   598,   598,   599,   599,   599,   600,   601,   601,
     602,   603,   604,   604,   604,   605,   605,   605,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   607,   607,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   609,   610,   611,   611,   612,   613,
     613,   614,   614,   615,   615,   616,   616,   617,   617,   618,
     618,   618,   619,   620,   621,   621,   621,   622,   623,   623,
     623,   623,   623,   624,   625,   625,   626,   626,   627,   627,
     627,   627,   628,   628,   628,   628,   628,   628,   629,   629,
     630,   630,   630,   630,   630,   630,   630,   631,   631,   632,
     632,   632,   632,   633,   633,   633,   634,   635,   635,   636,
     636,   637,   637,   638,   638,   638,   638,   638,   638,   638,
     639,   639,   639,   640,   640,   641,   641,   642,   642,   643,
     643,   643,   644,   644,   644,   644,   644,   645,   645,   646,
     646,   646,   647,   648,   648,   649,   649,   650,   650,   651,
     652,   652,   652,   653,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   654,
     655,   655,   655,   656,   656,   656,   657,   657,   658,   659,
     659,   659,   659,   660,   660,   661,   661,   662,   663,   663,
     664,   665,   665,   666,   666,   667,   668,   669,   670,   671,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   673,   673,   674,   675,
     675,   676,   676,   676,   677,   677,   678,   679,   680,   680,
     680,   680,   680,   680,   681,   681,   681,   681,   681,   681,
     681,   681,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,   682,   682,   683,
     683,   684,   685,   685,   686,   686,   687,   688,   688,   689,
     689,   690,   691,   692,   692,   693,   693,   693,   693,   693,
     693,   693,   693,   694,   695,   695,   696,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   698,   699,   700,
     701,   702,   702,   702,   702,   702,   702,   702,   702,   703,
     704,   705,   705,   706,   707,   707,   708,   709,   710,   711,
     711,   712,   713,   713,   714,   714,   714,   714,   714,   715,
     716,   716,   717,   717,   718,   719,   720,   720,   721,   722,
     723,   723,   724,   725,   726,   726,   727,   728,   729,   729,
     730,   731,   731,   732,   732,   733,   734,   735,   735,   736,
     736,   737,   738,   739,   739,   740,   740,   741,   741,   741,
     742,   743,   743,   744,   744,   745,   746,   747,   748,   748,
     749,   749,   750,   750,   751,   751,   752,   753,   753,   754,
     754,   755,   756,   757,   757,   758,   759,   760,   761,   761,
     762,   762,   763,   763,   764,   765,   765,   766,   767,   768
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       0,     3,     5,     6,     5,     5,     5,     7,     6,     1,
       1,     2,     2,     2,     2,     0,     4,     4,     3,     3,
       1,     4,     0,     3,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     2,
       6,     1,     3,     1,     1,     1,     2,     1,     2,     5,
       1,     0,     3,     2,     0,     2,     2,     1,     1,     2,
       2,     3,     3,     0,     1,     1,     2,     2,     0,     1,
       1,     1,     0,     2,     2,     1,     1,     2,     5,     1,
       2,     3,     8,     4,     1,     3,     2,     7,     1,     3,
       1,     1,     0,     3,     0,     1,     3,     6,     3,     1,
       1,    11,     9,    11,    10,    11,    11,     9,     7,     9,
       1,     5,     6,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     0,     1,     3,
       2,     1,     1,     4,     6,     5,     4,     1,     2,     4,
       1,     2,     0,     2,     7,     0,     2,     5,     8,     0,
       2,     0,     1,     2,     4,     4,     1,     1,     1,     0,
       4,     2,     9,     1,     1,     1,     1,     1,     1,     3,
       0,     2,     1,     2,     4,     4,     4,     4,     0,     1,
       0,     1,     3,     0,     3,     1,     1,     0,     4,     1,
       4,     3,     4,     3,     3,     3,     4,     5,     4,     4,
       4,     5,     3,     5,     6,     5,     5,     5,     5,     4,
       3,     3,     3,     4,     0,     3,     2,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     4,     3,     4,     3,     0,     1,     1,
       3,     2,     2,     3,     3,     2,     2,     2,     1,     1,
       0,     2,     3,     0,     0,     3,    14,    13,     6,     9,
       6,     6,     0,     4,     1,     3,     0,     3,     1,     3,
       1,     2,     0,     3,     5,     7,     0,     1,     0,     2,
       2,     4,     4,     0,     3,     0,     1,     0,     2,     0,
       2,     1,     3,     1,     3,     4,     0,     2,     2,     5,
       4,     6,     4,     5,     0,     2,     2,     1,     3,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     3,     1,     3,     3,     3,     0,
       2,     3,     4,     4,     5,     5,     0,     1,     2,     0,
       1,     1,     1,     1,     2,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     4,     6,     5,     1,     3,     1,
       5,     5,     5,     3,     1,     0,     1,     1,     0,     1,
       5,     1,     4,     0,     2,     1,     3,     2,     2,     3,
       2,     3,     1,     1,     0,     5,     5,     2,     4,     1,
       0,     1,     0,     3,     1,     3,     0,     2,     3,     1,
       3,     1,     0,     3,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     1,     3,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     6,     6,     0,     1,     1,     3,     3,
       3,     3,     1,     3,     4,     3,     5,     5,     7,     7,
       1,     3,     4,     4,     1,     1,     1,     2,     1,     3,
       3,     3,     3,     4,     3,     3,     4,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     3,     1,     3,     0,
       3,     0,     3,     0,     3,     1,     1,     1,     1,     2,
       1,     2,     2,     4,     2,     1,     2,     2,     0,     3,
       2,     2,     3,     2,     3,     4,     1,     3,     1,     1,
       1,     1,     6,     2,     2,     2,     2,     2,     0,     2,
       8,     8,     6,     6,     6,     3,     8,     1,     3,     1,
       3,     3,     2,     0,     2,     1,     1,     1,     3,     1,
       3,     1,     3,     4,     6,     5,     5,     4,     6,     1,
       1,     1,     0,     3,     0,     3,     0,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     1,     2,     2,     2,     2,     1,     1,     4,
       1,     3,     5,     1,     3,     5,     6,     6,     1,     6,
       4,     5,     4,     1,     3,     3,     3,     4,     1,     2,
       4,     1,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     1,     4,     1,     1,
       1,     1,     1,     1,     4,     6,     1,     4,     6,     1,
       2,     1,     1,     1,     1,     4,     1,     4,     6,     1,
       4,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     2,     3,     4,     0,
       1,     2,     1,     5,     5,     2,     2,     2,     4,     6,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       7,     0,     2,     4,     6,     4,     2,     4,     2,     1,
       4,     1,     3,     2,     0,     2,     1,     1,     2,     1,
       3,     1,     0,     2,     3,     3,     3,     3,     4,     7,
       0,     2,     1,     3,     2,     1,     0,     2,     1,     6,
       2,     2,     7,     1,     0,     2,     8,     1,     0,     3,
       1,     1,     3,     1,     1,     2,     4,     0,     1,     3,
       3,     5,     6,     1,     1,     1,     1,     0,     2,     2,
       4,     1,     3,     1,     1,     1,     1,     3,     2,     2,
       0,     1,     2,     2,     0,     1,     5,     1,     1,     3,
       3,     1,     1,     0,     2,     1,     2,     1,     0,     1,
       1,     2,     0,     1,     2,     2,     2,     1,     1,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, m); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (m);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, mvc *m)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , m);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, m); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
{
  YYUSE (yyvaluep);
  YYUSE (m);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (mvc *m)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, m);
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 626 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[-1].sym);
		}
		YYACCEPT;
	}
#line 6953 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 636 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6963 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 641 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6977 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 650 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6987 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 655 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 7001 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 665 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7011 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 670 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 7025 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 680 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7039 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 689 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 7045 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 690 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 7055 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 695 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 7061 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 696 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = (yyvsp[-1].sym); YYACCEPT; }
#line 7067 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 697 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7073 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 698 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7079 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 699 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 7085 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 700 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYABORT; }
#line 7091 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 705 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7097 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 709 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7103 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 713 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7109 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 714 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7115 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 718 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 7121 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 719 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 7127 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 742 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_list(l, (yyvsp[-2].l));
		append_symbol(l, (yyvsp[-1].sym));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
#line 7138 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 753 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7144 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 754 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7150 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 759 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[0].l)); }
#line 7156 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 760 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7162 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 765 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
#line 7171 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 770 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol((yyvsp[-3].l), _symbol_create_list( SQL_DECLARE, l)); }
#line 7180 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 779 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, (yyvsp[-2].sval) );
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7189 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 784 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  	append_list(l, (yyvsp[-2].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
#line 7198 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 789 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7210 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 797 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7222 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 805 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7234 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 813 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7246 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 821 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7256 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 827 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 7265 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 836 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_symbol(l, (yyvsp[-2].sym));
		append_symbol(l, (yyvsp[-1].sym));
		append_list(l, (yyvsp[0].l));
		append_int(l, (yyvsp[-4].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
#line 7277 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 844 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_int(l, (yyvsp[0].i_val));
		append_int(l, (yyvsp[-2].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
#line 7287 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 853 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[0].sval) );
	  append_string((yyval.l), NULL ); }
#line 7295 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 857 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 7303 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 861 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[-2].sval) );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 7311 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 870 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 7317 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 871 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[0].sval) ); }
#line 7323 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 875 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 7329 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 880 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7335 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 882 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 7341 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 888 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7347 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 889 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7353 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 893 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7359 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 894 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_role; }
#line 7365 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 899 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
#line 7377 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 909 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
#line 7388 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 918 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7394 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 920 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7400 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 924 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7406 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 925 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7412 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 929 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7418 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 930 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7424 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 935 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7430 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 936 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7436 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 941 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
#line 7448 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 949 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
#line 7459 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 958 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7465 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 959 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7471 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 963 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7477 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 964 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7483 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 969 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[0].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
#line 7491 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 973 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[-2].l));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 7499 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 979 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(L(), (yyvsp[0].i_val)); }
#line 7505 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 981 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(append_int(L(), (yyvsp[-2].i_val)), (yyvsp[0].i_val)); }
#line 7511 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 985 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
#line 7517 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 986 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
#line 7523 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 990 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[0].l)); }
#line 7529 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 991 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[0].l)); }
#line 7535 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 992 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[0].l)); }
#line 7541 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1003 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7547 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1004 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7553 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1009 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7559 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1011 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 7565 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1015 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
#line 7571 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1016 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
#line 7577 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1017 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_TRUNCATE,NULL); }
#line 7583 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1018 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[0].l)); }
#line 7589 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1019 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7595 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1020 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7601 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1021 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
#line 7607 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1025 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7613 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1027 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7619 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1031 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 7625 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1032 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 7631 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1040 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7640 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1045 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, append_list(L(),(yyvsp[0].l))));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7649 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1050 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7658 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1055 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7667 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1060 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7676 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1065 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7685 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1070 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7694 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1075 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7703 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1080 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
#line 7712 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1085 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[-4].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[-6].i_val));
	  append_string(p, (yyvsp[0].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7726 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1097 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[-2].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7737 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1103 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7748 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1110 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[-3].sval));
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, (yyvsp[-5].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7759 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1120 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
#line 7768 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1125 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
#line 7776 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1129 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
#line 7784 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1133 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[-2].sval)); }
#line 7790 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1135 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  if (!strlen((yyvsp[0].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7802 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1143 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7811 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1151 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
#line 7820 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1156 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
#line 7829 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1161 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, 0);
	  append_int(l, FALSE ); /* no if exists check */
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 7840 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1170 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7846 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1171 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7852 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1175 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7858 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1176 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7864 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1177 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7870 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1199 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
#line 7882 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1210 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
#line 7892 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1227 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
#line 7903 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1236 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7909 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1237 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7915 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1241 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7921 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1242 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7927 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1246 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7933 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1247 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[0].l_val)); }
#line 7939 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1248 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7945 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1252 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7951 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1253 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
#line 7957 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1254 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[0].l_val)));  }
#line 7963 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1255 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[0].sym)));  }
#line 7969 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1256 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7975 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1260 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[0].l_val)); }
#line 7981 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1261 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[0].l_val)); }
#line 7987 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1262 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
#line 7993 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1263 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[0].l_val)); }
#line 7999 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1264 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
#line 8005 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1265 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[0].l_val)); }
#line 8011 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1266 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
#line 8017 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1267 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
#line 8023 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1275 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval));
	  append_int(l, (yyvsp[-7].i_val));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
#line 8034 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1284 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 8040 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1285 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ordered_idx; }
#line 8046 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1286 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imprints_idx; }
#line 8052 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1287 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 8058 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1308 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_int(l, (yyvsp[0].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
#line 8067 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1313 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-8].sval));
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-6].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
#line 8079 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1323 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 8085 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1324 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 8091 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1325 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
#line 8097 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1329 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8103 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1330 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-1].sval)), (yyvsp[0].sval)); }
#line 8109 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1335 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8125 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1347 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
      dlist *l = L();
      append_list(l, (yyvsp[-3].l));
      append_symbol(l, (yyvsp[0].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
#line 8136 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1354 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8151 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1365 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8166 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1376 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8181 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1390 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-4].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8196 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1401 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[-5].i_val));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  if ((yyvsp[-5].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[0].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 8213 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1416 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8219 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1417 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8225 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1418 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8231 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1419 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 8237 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1420 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 8243 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1421 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 8249 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1425 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_COMMIT; }
#line 8255 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1426 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DELETE; }
#line 8261 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1427 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_PRESERVE; }
#line 8267 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1428 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DROP; }
#line 8273 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1432 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[-1].l)); }
#line 8279 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1433 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[0].l)); }
#line 8285 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1441 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-3].l));
			  append_symbol((yyval.l), (yyvsp[-1].sym)); 
			  append_int((yyval.l), (yyvsp[0].i_val)); }
#line 8293 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1447 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8299 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1448 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8305 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1449 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8311 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1454 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 8317 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1456 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 8323 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1463 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8329 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1464 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8335 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1469 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			dlist *l = L();
			append_string(l, (yyvsp[-2].sval));
			append_type(l, &(yyvsp[-1].type));
			append_list(l, (yyvsp[0].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
#line 8347 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1477 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
			if ((yyvsp[0].i_val) == 1)
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
			append_string(l, (yyvsp[-1].sval));
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
#line 8401 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1529 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8407 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1535 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8413 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1537 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 8419 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1543 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval) );
	  append_list(l, (yyvsp[-1].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
#line 8428 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1551 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8434 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1553 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 8440 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1559 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[0].sym)); }
#line 8446 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1563 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8452 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1569 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8461 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1577 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
		if (!(yyvsp[0].l))
			(yyvsp[0].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[0].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[0].l));
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
#line 8494 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1606 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8533 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1643 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8539 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1644 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8545 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1651 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8554 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1660 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8560 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1661 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 8566 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1665 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8572 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1666 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8578 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1667 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8584 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1668 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 8590 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1669 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 8596 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1673 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[0].i_val) << 8); }
#line 8602 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1677 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8608 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1681 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
#line 8614 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1682 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8620 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1683 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8626 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1684 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8632 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1685 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8638 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1689 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8644 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1690 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8650 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1691 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8656 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1692 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8662 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1696 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8668 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1697 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8674 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1701 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
#line 8680 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1702 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
#line 8686 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1703 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
#line 8692 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1704 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
#line 8698 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1707 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8709 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1720 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[0].l)); }
#line 8715 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1722 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[0].l)); }
#line 8721 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1726 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-5].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8733 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1738 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8739 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1743 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 8745 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1745 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string( (yyvsp[-2].l), (yyvsp[0].sval) ); }
#line 8751 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1749 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[0].l) ); }
#line 8757 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1754 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  append_int(l, TRUE);	/* persistent view */
	  append_int(l, (yyvsp[-6].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 8771 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1767 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 8777 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1776 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 8783 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1777 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 8789 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1781 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8795 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1786 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8801 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1791 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				append_list(l, (yyvsp[-3].l));
				append_string(l, (yyvsp[0].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
#line 8810 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1798 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval)); }
#line 8816 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1813 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8831 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1827 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, (yyvsp[-1].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[0].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8846 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1841 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				// code does not get cleaner than this people
				if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[-1].sval), "CPP") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f );
		}
#line 8898 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1891 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-9].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8914 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1906 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8929 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1920 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p') {
				if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
					lang = FUNC_LANG_PY3;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY2;
				} else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
					lang = FUNC_LANG_PY2;
				} else {
					lang = FUNC_LANG_PY;
				}
			} else if (l == 'C' || l == 'c') {
				if (strcasecmp((yyvsp[-1].sval), "CPP") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8979 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1969 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8994 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1982 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-4].l));
				append_list(f, (yyvsp[-2].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-6].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9009 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1994 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p') {
				lang = FUNC_LANG_PY;
			} else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[-6].l));
			append_list(f, (yyvsp[-4].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			append_int(f, (yyvsp[-8].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 9033 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2017 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[0].sym)); }
#line 9039 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2021 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 9045 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2025 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 9051 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2040 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 9057 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2042 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 9063 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2046 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 9069 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2048 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 9075 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2096 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9081 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2100 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[0].sym));}
#line 9087 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2105 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L(); 
		  append_list( l, (yyvsp[-3].l));
		  append_list( l, (yyvsp[-1].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
#line 9098 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2116 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L();}
#line 9104 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2117 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 9110 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2119 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9116 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2124 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[0].sym)); }
#line 9122 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2131 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[-1].sym)); }
#line 9128 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2136 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-4].sym)),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 9138 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2142 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 9147 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2150 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 9156 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2158 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 9162 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2160 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 9168 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2165 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 9177 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2173 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 9183 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2175 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 9189 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2179 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9195 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2180 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9201 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2190 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_list(l, (yyvsp[-3].l));
		  append_symbol(l, (yyvsp[-2].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
#line 9212 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2201 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9218 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2203 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[0].l)); }
#line 9224 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2206 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_list(l, (yyvsp[-1].l));
		  append_symbol(l, (yyvsp[0].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
#line 9235 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2220 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l;
		  char *label = (yyvsp[-7].sval)?(yyvsp[-7].sval):(yyvsp[0].sval);
		  if ((yyvsp[-7].sval) && (yyvsp[0].sval) && strcmp((yyvsp[-7].sval), (yyvsp[0].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[-5].sym)); /* condition */
		  append_list(l, (yyvsp[-3].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
#line 9253 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2236 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9259 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2241 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9265 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2247 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 9274 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2252 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 9283 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2260 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[-1].l)); }
#line 9289 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2262 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 9295 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2267 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
#line 9304 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2271 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9310 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2276 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list((yyvsp[-3].l), p); }
#line 9319 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2281 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list(l, p); }
#line 9329 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2331 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-6].l));
	  append_int(l, (yyvsp[-5].i_val));
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, (yyvsp[0].l));
	  append_int(l, (yyvsp[-8].bval));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
#line 9344 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2344 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9350 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2345 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9356 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2350 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
#line 9362 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2351 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
#line 9368 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2352 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TRUNCATE, NULL); }
#line 9374 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2353 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
#line 9380 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2354 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[0].l)); }
#line 9386 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2358 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9392 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2359 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9398 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2363 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9404 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2365 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-1].l), (yyvsp[0].l)); }
#line 9410 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2370 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9416 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2371 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9422 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2372 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9428 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2373 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9434 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2388 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_list((yyval.l), (yyvsp[0].l));
	}
#line 9444 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2395 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9450 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2396 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9456 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2400 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9462 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2401 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9468 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2405 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9474 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2406 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9480 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2411 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9486 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2414 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9492 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2419 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
#line 9502 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2425 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
#line 9512 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2431 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
#line 9522 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2437 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
#line 9532 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2443 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
#line 9542 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2452 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9553 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2459 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9564 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2466 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9575 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2473 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9586 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2480 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.l) = l; }
#line 9597 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2490 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 9607 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2496 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = (yyvsp[-1].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9616 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2501 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9629 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2510 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9642 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2519 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9655 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2528 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9668 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2537 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, FALSE );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9681 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2546 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
#line 9691 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2552 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
#line 9700 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2556 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[0].sval) ); }
#line 9706 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2557 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[0].sval) ); }
#line 9712 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2558 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[0].l) ); }
#line 9718 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2560 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, (yyvsp[-1].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, l );
	}
#line 9728 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2568 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = NULL;}
#line 9734 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 2569 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = (yyvsp[-1].l);}
#line 9740 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 2570 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L(); }
#line 9746 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 2574 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_type(l, &(yyvsp[0].type) );
				  (yyval.l)= l; }
#line 9754 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 2577 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { append_type((yyvsp[0].l), &(yyvsp[-2].type));
				  (yyval.l) = (yyvsp[0].l); }
#line 9761 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 2582 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9767 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2583 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9773 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2584 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9779 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2604 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.sym) = (yyvsp[0].sym);
	  m->type = Q_TRANS;					}
#line 9787 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 2611 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[0].bval));  }
#line 9793 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 2613 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[0].sval)); }
#line 9799 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2615 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[0].sval)); }
#line 9805 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2617 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[-1].bval)), (yyvsp[0].sval) )); }
#line 9813 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2621 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[0].i_val)); }
#line 9819 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2623 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9825 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2625 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9831 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2629 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; }
#line 9837 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2635 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9843 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2637 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[-2].i_val) | (yyvsp[0].i_val)); }
#line 9849 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2642 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_readonly; }
#line 9855 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2643 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_writable; }
#line 9861 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2644 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_serializable; }
#line 9867 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2645 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; /* not supported */ }
#line 9873 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2656 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9879 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2657 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9885 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2661 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 9891 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2662 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9897 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2663 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9903 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2667 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9909 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2668 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9915 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2673 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-10].l));
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-7].l));
	  append_list(l, (yyvsp[-6].l));
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-12].l));
	  append_string(l, (yyvsp[-4].sval));
	  append_int(l, (yyvsp[-3].bval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9933 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2687 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-8].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-11].l));
	  append_string(l, (yyvsp[-3].sval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9951 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2701 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
#line 9960 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2706 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  if ((yyvsp[-7].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
#line 9975 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2717 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9986 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2724 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9997 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2735 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10003 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2736 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10009 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2741 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(L(), (yyvsp[0].l_val)); }
#line 10015 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2743 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng((yyvsp[-2].l), (yyvsp[0].l_val)); }
#line 10021 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2748 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10027 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2749 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10033 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2753 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 10039 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2754 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 10045 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2759 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 10053 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2763 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[-1].sval) );
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 10062 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2771 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 10071 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2776 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 10080 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2781 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, (yyvsp[0].sval));
				  (yyval.l) = l; }
#line 10089 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2786 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-4].sval));
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, sql2str((yyvsp[0].sval)));
				  (yyval.l) = l; }
#line 10099 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2794 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10105 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2795 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10111 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2799 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10117 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 2800 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-1].l_val)), 0); }
#line 10123 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 2801 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[0].l_val)); }
#line 10129 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 2803 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[-1].l_val)); }
#line 10135 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2805 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[0].l_val)); }
#line 10141 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2809 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 10147 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2810 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 10153 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2814 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10159 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 2815 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10165 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2819 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10171 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2820 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10177 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2824 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10183 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2825 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10189 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2829 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 10195 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2830 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10201 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 2834 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10207 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 2836 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10213 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 2842 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
#line 10222 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 2849 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10228 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 2850 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10234 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2851 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10240 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2856 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l) );
	  append_int(l, (yyvsp[-1].i_val) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
#line 10250 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2862 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l) );
	  append_int(l, (yyvsp[-1].i_val) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_TRUNCATE, l ); }
#line 10260 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 2872 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
#line 10271 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 2914 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 10281 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 2922 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 10291 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 2931 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 10297 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2933 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 10303 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2935 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[0].l)); }
#line 10309 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2941 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-1].l)); }
#line 10315 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2943 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-4].l), (yyvsp[-1].l)); }
#line 10321 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 2947 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10327 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2949 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10333 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2953 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10339 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2955 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10345 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 2960 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10367 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2986 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
#line 10373 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 2995 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10379 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 2996 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10385 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 2997 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10391 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 3001 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 10397 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 3003 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 10403 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 3007 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
#line 10409 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 3012 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 10418 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 3017 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym) );
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 10427 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 3022 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
#line 10436 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 3029 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10442 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 3030 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10448 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 3037 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10454 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 3039 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
#line 10463 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 3044 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
#line 10475 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 3052 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[-3].i_val));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 10487 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 3060 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[-2].i_val));
	  append_symbol(l, (yyvsp[0].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 10499 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 3070 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10505 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 3071 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10511 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 3072 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1 + (yyvsp[-1].i_val); }
#line 10517 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 3076 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10523 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 3077 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10529 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 3081 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10535 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 3082 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10541 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 3083 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 10547 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 3087 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10553 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 3089 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[0].l)); }
#line 10559 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 3113 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[-1].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
#line 10570 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 3122 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10576 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 3123 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10582 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 3128 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[-3].sval)));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  append_int(l, FALSE); /* no replace clause */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 10596 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 3152 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-2].bval), (yyvsp[-1].l), NULL,
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10608 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 3163 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-4].bval), (yyvsp[-3].l), (yyvsp[-1].l),
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10620 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 3174 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  (yyval.sym) = (yyvsp[-4].sym);
	  if ((yyvsp[-3].sym) || (yyvsp[-2].sym) || (yyvsp[-1].sym) || (yyvsp[0].sym)) {
	  	if ((yyvsp[-4].sym) != NULL &&
		    ((yyvsp[-4].sym)->token == SQL_SELECT ||
		     (yyvsp[-4].sym)->token == SQL_UNION  ||
		     (yyvsp[-4].sym)->token == SQL_EXCEPT ||
		     (yyvsp[-4].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[-4].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[-4].sym);
	
	  			s -> orderby = (yyvsp[-3].sym);
	  			s -> limit = (yyvsp[-2].sym);
	  			s -> offset = (yyvsp[-1].sym);
	  			s -> sample = (yyvsp[0].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[-4].sym))), NULL, NULL, NULL, (yyvsp[-3].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[-2].sym), (yyvsp[-1].sym), (yyvsp[0].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
#line 10652 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 3204 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10658 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 3206 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10664 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 3216 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
#line 10675 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 3225 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
#line 10686 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 3234 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
#line 10697 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 3240 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10703 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 3245 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10709 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 3246 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10715 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 3247 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10721 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 3252 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10727 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 3254 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 10733 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 3256 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10739 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 3266 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[-3].sym));
	  append_symbol((yyval.l), (yyvsp[-2].sym));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 10749 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 3274 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10755 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 3275 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[0].l)); }
#line 10761 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 3279 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10767 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 3281 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10773 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 3285 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_list(l, (yyvsp[-1].l));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10782 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 3290 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10792 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 3296 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10802 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 3302 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
				  }
				}
#line 10816 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 3312 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
	  				append_int((yyvsp[-1].sym)->data.lval, 1);
				  }
				}
#line 10832 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 3324 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
#line 10841 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 3328 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);
				  append_symbol((yyvsp[0].sym)->data.lval, NULL); }
#line 10848 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 3332 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->caching = 0; }
#line 10854 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 3334 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[-2].sym));
		append_symbol(op, (yyvsp[0].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
#line 10866 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 3345 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10875 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 3350 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10884 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 3355 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10893 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 3360 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10902 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 3367 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10908 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 3368 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10914 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 3372 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10920 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 3373 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) );}
#line 10926 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 3377 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10933 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 3380 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10940 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 3385 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10946 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 3386 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10952 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 3392 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
#line 10961 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 3396 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10967 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 3401 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
#line 10976 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 3405 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10982 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 3409 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10988 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 3411 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l)); }
#line 10994 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 3415 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11000 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 3416 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 11009 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 3420 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11015 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 3424 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11021 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 3425 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 11030 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 3429 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11036 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 3433 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11042 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 3434 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val)));
			}
#line 11051 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 3438 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[0].sval),NULL)));
			}
#line 11060 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 3442 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11066 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 3446 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 11072 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 3448 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 11078 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 3453 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
#line 11087 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 3461 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 11093 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 3462 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 11099 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 3463 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 11105 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3480 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);

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
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[0].sym)); }
#line 11126 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3496 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11132 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3501 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, (yyvsp[-1].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11143 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3508 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11154 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3518 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
#line 11165 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 3525 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
#line 11176 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 3534 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11182 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 3535 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11188 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 3536 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11194 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 3541 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11205 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 3548 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11216 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3555 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11227 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3562 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 11238 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3572 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
#line 11246 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3576 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, SQLSTATE(22019) "ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[-2].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
#line 11263 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3591 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[-3].sym) );}
#line 11269 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3592 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[-2].sym) ); }
#line 11275 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3597 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 11285 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3603 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 11295 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3609 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 11304 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3614 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 11313 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3622 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 11319 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3624 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 11325 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3630 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, (yyvsp[-2].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11336 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3637 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 11347 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3646 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11353 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3647 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 11359 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3648 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11365 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3652 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[0].sym) ); }
#line 11371 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3656 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 11377 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3657 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym));  }
#line 11383 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3661 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 11389 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3666 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-2].l));
		  append_list(l, (yyvsp[-1].l));
		  append_list(l, (yyvsp[0].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
#line 11399 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3675 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11405 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3677 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 11411 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3679 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11417 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3683 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11423 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3685 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 11429 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3687 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11435 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3694 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11446 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3701 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11457 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3708 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11468 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3715 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11479 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3722 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11490 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3729 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11501 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3736 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[-2].sym));
			  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11512 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3743 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11523 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3750 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11534 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3757 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11545 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3764 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11556 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 3771 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11566 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 3777 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11577 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 3784 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11588 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 3791 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11599 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 3798 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11610 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 3805 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11621 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 3812 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11632 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 3819 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11643 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 3826 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11653 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 3832 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11664 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 3839 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11675 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 3846 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11686 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 3853 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11697 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 3860 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11703 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 3862 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[0].sym)->token != SQL_COLUMN || (yyvsp[0].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[0].sym)->token == SQL_COLUMN && (yyvsp[0].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[0].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[0].sym);
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
	  		  	append_symbol(l, (yyvsp[0].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
#line 11729 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 3883 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11735 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 3887 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11741 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 3893 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
#line 11748 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 3895 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
#line 11755 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 3898 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[0].l)); }
#line 11761 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 3902 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[0].l)); }
#line 11767 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 3914 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
#line 11778 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 3984 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[-4].sym)), (yyvsp[-1].l))); }
#line 11785 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 3989 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[-2].l) ); }
#line 11791 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 3995 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[-1].sym)), (yyvsp[0].sym)); }
#line 11797 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 3999 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11803 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 4001 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) ); }
#line 11809 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 4005 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11815 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 4007 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l) ); }
#line 11821 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 4011 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11827 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 4013 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[-1].l), (yyvsp[-2].i_val)), (yyvsp[0].i_val))); }
#line 11833 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 4017 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_ROWS; }
#line 11839 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 4018 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_RANGE; }
#line 11845 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 4022 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[0].sym)), _symbol_create_int(SQL_FRAME, -1)); }
#line 11851 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 4023 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 11857 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 4027 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11863 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 4028 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11869 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 4029 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11875 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 4033 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11881 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 4038 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[0].sym)); }
#line 11887 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 4042 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11893 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 4043 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11899 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 4044 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11905 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 4048 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11911 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 4052 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NONE; }
#line 11917 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 4053 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
#line 11923 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 4054 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_GROUP; }
#line 11929 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 4055 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_TIES; }
#line 11935 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 4056 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
#line 11941 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 4060 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[0].sval) ); }
#line 11947 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 4065 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11955 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 4069 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-3].l));
	  if (dlist_length((yyvsp[-1].l)) == 1) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[-1].l)) == 2) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[-1].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[-1].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
#line 11974 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 4096 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11980 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 4097 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11987 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 4102 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11993 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 4103 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "left"); }
#line 11999 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 4104 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "right"); }
#line 12005 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 4105 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "insert"); }
#line 12011 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 4110 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[-3].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 12022 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 4117 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12031 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 4122 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12040 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 4127 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12049 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 4132 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12058 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 4137 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 12067 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 4144 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 12073 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 4145 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 12079 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 4150 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12093 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 4160 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12107 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 4170 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12118 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 4177 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12129 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 4184 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12140 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 4191 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[-2].sym));
  		  	  append_symbol(l, (yyvsp[0].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 12151 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 4198 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 12165 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 4210 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 12171 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 4212 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 12177 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 4217 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12186 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 4222 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, (yyvsp[-2].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12195 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 4227 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-2].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 12204 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 4232 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-1].sym));
  		  append_string(l, (yyvsp[0].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
#line 12213 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 4239 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 12219 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 4240 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 12225 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 4241 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 12231 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 4246 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		AtomNode *an = (AtomNode*)(yyvsp[0].sym);

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
		AtomNode *an = (AtomNode*)(yyvsp[0].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[0].sym);
	  }
	}
#line 12259 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 4272 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12265 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 4273 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12272 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 4278 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12278 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 4279 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12285 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 4284 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12291 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 4285 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12298 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 4292 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12308 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 4298 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12318 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 4304 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12328 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 4310 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12338 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 4316 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12348 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 4322 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-3].sym));
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 12359 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 4332 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 12365 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 4333 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = -1; }
#line 12371 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 4334 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 12377 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 4338 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 12383 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 4339 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 12389 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 4350 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 12395 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 4352 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0+1; }
#line 12401 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 4356 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 12407 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 4358 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 6+1; }
#line 12413 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 4362 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
#line 12419 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 4364 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[-1].i_val), 0); 
			}
#line 12429 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 801:
#line 4370 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[-1].i_val), 0); 
			}
#line 12439 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 4378 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iyear; }
#line 12445 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 4379 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imonth; }
#line 12451 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 4380 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iday; }
#line 12457 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 4381 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ihour; }
#line 12463 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 4382 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imin; }
#line 12469 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 4387 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = isec; }
#line 12475 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 4392 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iquarter; }
#line 12481 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 4393 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iweek; }
#line 12487 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 4398 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 12494 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 4404 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[0].i_val)), 0);  }
#line 12501 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 4407 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 12508 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 4413 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 12515 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 4416 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 12522 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 817:
#line 4422 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[-2].l)), (yyvsp[0].l) ); }
#line 12529 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 4425 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list( L(), (yyvsp[0].l)); }
#line 12535 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 4429 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
#line 12557 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 4455 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
#line 12567 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 4461 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int len = _strlen((yyvsp[0].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[0].sval);
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
			char *msg = sql_message(SQLSTATE(22003) "Invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
#line 12636 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 4526 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int err = 0;
		  size_t len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  if (lngFromStr((yyvsp[0].sval), &len, &p) < 0 || is_lng_nil(value))
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
			char *msg = sql_message(SQLSTATE(22003) "OID value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12671 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 4557 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int digits = _strlen((yyvsp[0].sval)), err = 0;
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
		  if (hgeFromStr((yyvsp[0].sval), &len, &p) < 0 || is_hge_nil(value))
		  	err = 2;
#else
		  if (lngFromStr((yyvsp[0].sval), &len, &p) < 0 || is_lng_nil(value))
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
			char *msg = sql_message(SQLSTATE(22003) "integer value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12736 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 4618 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[0].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (0 && digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[0].sval),NULL);
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
			char *p = (yyvsp[0].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[0].sval),&p);
			if (p == (yyvsp[0].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
#line 12779 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 4657 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
  		  char *p = (yyvsp[0].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[0].sval),&p);
		  if (p == (yyvsp[0].sval) || is_dbl_nil(val) || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message(SQLSTATE(22003) "Double value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
#line 12800 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 4674 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect date value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12820 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 4690 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timetz":"time", (yyvsp[-2].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect time value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12840 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 4706 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timestamptz":"timestamp",(yyvsp[-2].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message(SQLSTATE(22007) "Incorrect timestamp value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12860 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 4723 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22M28) "incorrect blob %s", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12881 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 834:
#line 4740 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12902 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 4757 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12923 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 4774 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[-1].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[0].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message(SQLSTATE(22000) "type (%s) unknown", (yyvsp[-1].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12948 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 4795 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
#line 12956 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 4799 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
#line 12964 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 4805 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
	  	if (!r || (tpe = parse_interval( m, (yyvsp[-2].i_val), (yyvsp[-1].sval), sk, ek, sp, ep, &i)) < 0) { 
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
#line 13009 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 4850 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 13015 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 4851 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-2].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13024 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 4855 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-4].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[-4].sval)), 
						(yyvsp[-2].sval)), 
					(yyvsp[0].sval))
				;}
#line 13037 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 4866 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				L(), (yyvsp[0].sval)); }
#line 13044 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 4869 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13052 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 4874 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[-4].sval)), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 13061 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 4882 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 13070 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 4888 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 13079 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 4900 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[-3].sym)), (yyvsp[-1].sym))); }
#line 13088 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 4905 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[-1].l)); }
#line 13094 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 4907 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-3].sym)),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 13104 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 4913 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 13113 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 4921 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 13119 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 4923 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13125 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 4928 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[-2].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[0].sym));
			}
#line 13133 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 4932 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13139 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 4938 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 13148 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 858:
#line 4946 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 13154 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 4948 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 13160 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 4953 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 13169 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 861:
#line 4961 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 13175 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 862:
#line 4963 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 13181 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 4967 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13187 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 4968 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13193 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 4978 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 13205 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 4989 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 13217 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 868:
#line 4999 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 13229 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 5009 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 13241 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 5020 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
#line 13247 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 871:
#line 5022 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
#line 13256 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 872:
#line 5026 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
#line 13262 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 5028 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[-1].i_val), 0); }
#line 13268 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 5030 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[-1].i_val), 0); }
#line 13274 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 5032 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[-1].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
#line 13287 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 5040 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
#line 13293 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 5042 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[-1].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
#line 13306 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 5050 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
#line 13312 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 5051 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
#line 13318 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 5052 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
#line 13324 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 5053 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
#line 13330 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 5054 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
#line 13336 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 5056 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
#line 13342 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 5058 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-1].i_val);
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
#line 13359 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 885:
#line 5071 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-3].i_val);
			  int s = (yyvsp[-1].i_val);
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
#line 13381 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 886:
#line 5088 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13387 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 5090 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) > 0 && (yyvsp[-1].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-1].i_val), 0);
			  } else if ((yyvsp[-1].i_val) > 24 && (yyvsp[-1].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-1].i_val), 0);
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 13405 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 5104 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[-3].i_val) > 0 && (yyvsp[-3].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else if ((yyvsp[-3].i_val) > 24 && (yyvsp[-3].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else {
				char *msg = sql_message(SQLSTATE(22003) "Number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 13429 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 5123 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13435 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 5124 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 13441 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 5125 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
#line 13447 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 5128 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 13453 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 895:
#line 5130 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 13459 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 896:
#line 5131 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 13465 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 5133 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 13471 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 5135 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message(SQLSTATE(22003) "Precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[-5].sval), (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  }
			}
#line 13487 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 5146 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[0].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
#line 13505 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 900:
#line 5161 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[-3].sval));
			  if (!t) {
				char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-3].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[-1].i_val), 0);
			  }
			}
#line 13523 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 5174 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13535 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 5181 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-3].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
#line 13555 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 5196 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-3].i_val); 
		int srid = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[-5].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13575 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 5211 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, SQLSTATE(22000) "type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13587 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 5218 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int geoSubType = find_subgeometry_type((yyvsp[0].sval));

	if(geoSubType == 0) {
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));
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
		char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
#line 13615 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 5244 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13637 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 5261 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13659 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 5282 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 	char *t = sql_bind_alias((yyvsp[0].sval));
	  	if (!t) {
			char *msg = sql_message(SQLSTATE(22000) "Type (%s) unknown", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
#line 13675 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 5296 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13681 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 910:
#line 5297 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-1].sval); }
#line 13687 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 5301 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13693 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 5302 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13699 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 5303 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13705 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 5306 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13711 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 5307 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13717 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 5315 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13723 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 919:
#line 5316 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13729 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 920:
#line 5317 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13735 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 5318 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13741 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 5319 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13747 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 5320 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13753 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 5324 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13759 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 5325 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13765 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 5326 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13771 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 5327 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13777 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 5328 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13783 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 5329 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13789 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 5330 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13795 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 5335 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "large"); }
#line 13801 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 933:
#line 5336 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "name"); }
#line 13807 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 934:
#line 5337 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "object"); }
#line 13813 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 5338 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "password"); }
#line 13819 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 5339 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "path"); }
#line 13825 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 5340 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "precision"); }
#line 13831 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 5341 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
#line 13837 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 5342 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "role"); }
#line 13843 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 5343 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "size"); }
#line 13849 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 5344 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "type"); }
#line 13855 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 5345 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "release"); }
#line 13861 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 5346 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "value"); }
#line 13867 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 944:
#line 5347 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "zone"); }
#line 13873 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 945:
#line 5349 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "action"); }
#line 13879 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 5350 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "as"); }
#line 13885 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 5351 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
#line 13891 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 5352 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "column"); }
#line 13897 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 5353 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
#line 13903 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 950:
#line 5354 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
#line 13909 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 5355 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "increment"); }
#line 13915 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 5356 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
#line 13921 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 953:
#line 5357 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
#line 13927 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 5358 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "plan"); }
#line 13933 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 955:
#line 5359 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "schema"); }
#line 13939 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 5360 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "start"); }
#line 13945 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 5361 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "statement"); }
#line 13951 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 958:
#line 5362 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "table"); }
#line 13957 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 5364 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cache"); }
#line 13963 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 5365 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "data"); }
#line 13969 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 5366 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
#line 13975 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 5367 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "match"); }
#line 13981 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 5368 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "options"); }
#line 13987 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 5369 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "row"); }
#line 13993 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 5370 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "key"); }
#line 13999 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 5371 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "language"); }
#line 14005 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 5372 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "level"); }
#line 14011 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 5373 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "session"); }
#line 14017 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 5374 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "date"); }
#line 14023 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 5375 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "time"); }
#line 14029 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 5376 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
#line 14035 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 5377 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "interval"); }
#line 14041 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 5378 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "quarter"); }
#line 14047 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 5379 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "week"); }
#line 14053 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 5380 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
#line 14059 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 5382 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
#line 14065 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 977:
#line 5383 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "execute"); }
#line 14071 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 978:
#line 5384 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "explain"); }
#line 14077 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 979:
#line 5385 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "debug"); }
#line 14083 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 5386 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "trace"); }
#line 14089 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 981:
#line 5387 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "text"); }
#line 14095 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 982:
#line 5388 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
#line 14101 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 5389 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "no"); }
#line 14107 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 5391 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "strip"); }
#line 14113 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 985:
#line 5392 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
#line 14119 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 986:
#line 5393 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "passing"); }
#line 14125 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 987:
#line 5394 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "nil"); }
#line 14131 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 988:
#line 5395 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "ref"); }
#line 14137 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 989:
#line 5396 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "absent"); }
#line 14143 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 990:
#line 5397 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "empty"); }
#line 14149 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 991:
#line 5398 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "document"); }
#line 14155 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 992:
#line 5399 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "element"); }
#line 14161 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 993:
#line 5400 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "content"); }
#line 14167 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 994:
#line 5401 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
#line 14173 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 995:
#line 5402 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "returning"); }
#line 14179 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 996:
#line 5403 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "location"); }
#line 14185 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 997:
#line 5404 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "id"); }
#line 14191 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 998:
#line 5405 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "according"); }
#line 14197 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 999:
#line 5406 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "uri"); }
#line 14203 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 5407 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "filter"); }
#line 14209 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 5408 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
#line 14215 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 5409 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temp"); }
#line 14221 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 5410 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
#line 14227 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 5411 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
#line 14233 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 5412 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "storage"); }
#line 14239 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 5413 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
#line 14245 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 5414 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "replace"); }
#line 14251 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 5415 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "comment"); }
#line 14257 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 5419 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 14263 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 5421 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 14269 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 5426 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
#line 14294 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 5449 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message(SQLSTATE(22003) "Integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 14319 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 5469 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *name = (yyvsp[0].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) unknown", (yyvsp[0].sval));

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
			char *msg = sql_message(SQLSTATE(22000) "Constant (%s) has wrong type (number expected)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 14353 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 5502 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14359 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 5504 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat((yyvsp[-1].sval),(yyvsp[0].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
#line 14368 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 5512 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[0].sym); }
#line 14376 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 5519 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-2].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 14385 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 5524 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-3].i_val));
  	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 14394 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 5538 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14400 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 5543 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[0].l)); }
#line 14406 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 5551 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
#line 14416 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 5557 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COMMENT, l );
	}
#line 14426 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 5565 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_SCHEMA, (yyvsp[0].sval) ); }
#line 14432 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 5566 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_TABLE, (yyvsp[0].l) ); }
#line 14438 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 5567 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VIEW, (yyvsp[0].l) ); }
#line 14444 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 5569 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
#line 14454 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 5575 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l );
	}
#line 14465 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 5581 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_INDEX, (yyvsp[0].l) ); }
#line 14471 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 5582 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SEQUENCE, (yyvsp[0].l) ); }
#line 14477 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 5583 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ROUTINE, (yyvsp[0].l) ); }
#line 14483 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 5592 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 14489 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 5594 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 14495 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 5616 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
#line 14504 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 5624 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
#line 14513 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 5632 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
#line 14522 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 5642 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
#line 14533 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 5652 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 14539 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 5654 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14547 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 5658 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14555 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 5662 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-4].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14563 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 5666 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14571 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 5670 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 14579 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 5674 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14587 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 5678 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 14595 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 5688 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14601 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 5692 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14607 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 5694 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14618 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 5704 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[0].sval));
	  append_symbol(l, (yyvsp[-1].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14627 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 5711 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14633 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 5712 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14639 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 5725 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[-1].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[0].i_val)); 	}
#line 14647 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 5732 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 14653 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 5734 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 14659 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 5742 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14665 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 5743 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 14671 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 5747 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14677 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 5748 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14683 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 5749 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14689 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 5750 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 14695 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 5751 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 14701 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 5758 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-3].l));
	  append_int(l, (yyvsp[-2].i_val));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
#line 14713 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 5768 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14719 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 5769 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14725 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 5774 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 14731 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 5776 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 14737 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 5781 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-1].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[0].sval)); }
#line 14744 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 5786 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14750 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 5790 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14756 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 5791 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14762 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 5795 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14768 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 5802 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_int(l, (yyvsp[-3].i_val) );
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
#line 14778 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 5809 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14784 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 5810 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14790 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 5817 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
#line 14800 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 5829 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14806 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 5831 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14812 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 5842 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14818 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 5888 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
#line 14827 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 5899 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14833 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 5904 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14839 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 5908 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14845 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 5909 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14851 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 5913 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14857 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 5914 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14863 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 5915 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14869 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 5930 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14875 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 5934 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14881 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 5936 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14892 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 5959 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat("xmlns:", (yyvsp[0].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[-2].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14903 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 5968 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[0].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14912 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 5972 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14918 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 6068 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
          dlist *aggr = L();

          if ((yyvsp[-2].sym)) {
	  	if ((yyvsp[-3].sym) != NULL && (yyvsp[-3].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[-3].sym);
	
			s->orderby = (yyvsp[-2].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[-3].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
#line 14942 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;


#line 14946 "src/monetdblite/src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (m, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (m, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, m);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 6089 "src/monetdblite/src/sql/server/sql_parser.y" /* yacc.c:1906  */

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

