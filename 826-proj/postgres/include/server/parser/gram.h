
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     ABORT_P = 269,
     ABSOLUTE_P = 270,
     ACCESS = 271,
     ACTION = 272,
     ADD_P = 273,
     ADMIN = 274,
     AFTER = 275,
     AGGREGATE = 276,
     ALL = 277,
     ALSO = 278,
     ALTER = 279,
     ALWAYS = 280,
     ANALYSE = 281,
     ANALYZE = 282,
     AND = 283,
     ANY = 284,
     ARRAY = 285,
     AS = 286,
     ASC = 287,
     ASSERTION = 288,
     ASSIGNMENT = 289,
     ASYMMETRIC = 290,
     AT = 291,
     ATTRIBUTE = 292,
     AUTHORIZATION = 293,
     BACKWARD = 294,
     BEFORE = 295,
     BEGIN_P = 296,
     BETWEEN = 297,
     BIGINT = 298,
     BINARY = 299,
     BIT = 300,
     BOOLEAN_P = 301,
     BOTH = 302,
     BY = 303,
     CACHE = 304,
     CALLED = 305,
     CASCADE = 306,
     CASCADED = 307,
     CASE = 308,
     CAST = 309,
     CATALOG_P = 310,
     CHAIN = 311,
     CHAR_P = 312,
     CHARACTER = 313,
     CHARACTERISTICS = 314,
     CHECK = 315,
     CHECKPOINT = 316,
     CLASS = 317,
     CLOSE = 318,
     CLUSTER = 319,
     COALESCE = 320,
     COLLATE = 321,
     COLLATION = 322,
     COLUMN = 323,
     COMMENT = 324,
     COMMENTS = 325,
     COMMIT = 326,
     COMMITTED = 327,
     CONCURRENTLY = 328,
     CONFIGURATION = 329,
     CONNECTION = 330,
     CONSTRAINT = 331,
     CONSTRAINTS = 332,
     CONTENT_P = 333,
     CONTINUE_P = 334,
     CONVERSION_P = 335,
     COPY = 336,
     COST = 337,
     CREATE = 338,
     CROSS = 339,
     CSV = 340,
     CURRENT_P = 341,
     CURRENT_CATALOG = 342,
     CURRENT_DATE = 343,
     CURRENT_ROLE = 344,
     CURRENT_SCHEMA = 345,
     CURRENT_TIME = 346,
     CURRENT_TIMESTAMP = 347,
     CURRENT_USER = 348,
     CURSOR = 349,
     CYCLE = 350,
     DATA_P = 351,
     DATABASE = 352,
     DAY_P = 353,
     DEALLOCATE = 354,
     DEC = 355,
     DECIMAL_P = 356,
     DECLARE = 357,
     DEFAULT = 358,
     DEFAULTS = 359,
     DEFERRABLE = 360,
     DEFERRED = 361,
     DEFINER = 362,
     DELETE_P = 363,
     DELIMITER = 364,
     DELIMITERS = 365,
     DESC = 366,
     DICTIONARY = 367,
     DISABLE_P = 368,
     DISCARD = 369,
     DISTINCT = 370,
     DO = 371,
     DOCUMENT_P = 372,
     DOMAIN_P = 373,
     DOUBLE_P = 374,
     DROP = 375,
     EACH = 376,
     ELSE = 377,
     ENABLE_P = 378,
     ENCODING = 379,
     ENCRYPTED = 380,
     END_P = 381,
     ENUM_P = 382,
     ESCAPE = 383,
     EVENT = 384,
     EXCEPT = 385,
     EXCLUDE = 386,
     EXCLUDING = 387,
     EXCLUSIVE = 388,
     EXECUTE = 389,
     EXISTS = 390,
     EXPLAIN = 391,
     EXTENSION = 392,
     EXTERNAL = 393,
     EXTRACT = 394,
     FALSE_P = 395,
     FAMILY = 396,
     FETCH = 397,
     FILTER = 398,
     FIRST_P = 399,
     FLOAT_P = 400,
     FOLLOWING = 401,
     FOR = 402,
     FORCE = 403,
     FOREIGN = 404,
     FORWARD = 405,
     FREEZE = 406,
     FROM = 407,
     FULL = 408,
     FUNCTION = 409,
     FUNCTIONS = 410,
     GLOBAL = 411,
     GRANT = 412,
     GRANTED = 413,
     GREATEST = 414,
     GROUP_P = 415,
     HANDLER = 416,
     HAVING = 417,
     HEADER_P = 418,
     HOLD = 419,
     HOUR_P = 420,
     IDENTITY_P = 421,
     IF_P = 422,
     ILIKE = 423,
     IMMEDIATE = 424,
     IMMUTABLE = 425,
     IMPLICIT_P = 426,
     IMPORT_P = 427,
     IN_P = 428,
     INCLUDING = 429,
     INCREMENT = 430,
     INDEX = 431,
     INDEXES = 432,
     INHERIT = 433,
     INHERITS = 434,
     INITIALLY = 435,
     INLINE_P = 436,
     INNER_P = 437,
     INOUT = 438,
     INPUT_P = 439,
     INSENSITIVE = 440,
     INSERT = 441,
     INSTEAD = 442,
     INT_P = 443,
     INTEGER = 444,
     INTERSECT = 445,
     INTERVAL = 446,
     INTO = 447,
     INVOKER = 448,
     IS = 449,
     ISNULL = 450,
     ISOLATION = 451,
     JOIN = 452,
     KEY = 453,
     LABEL = 454,
     LANGUAGE = 455,
     LARGE_P = 456,
     LAST_P = 457,
     LATERAL_P = 458,
     LEADING = 459,
     LEAKPROOF = 460,
     LEAST = 461,
     LEFT = 462,
     LEVEL = 463,
     LIKE = 464,
     LIMIT = 465,
     LISTEN = 466,
     LOAD = 467,
     LOCAL = 468,
     LOCALTIME = 469,
     LOCALTIMESTAMP = 470,
     LOCATION = 471,
     LOCK_P = 472,
     LOCKED = 473,
     LOGGED = 474,
     MAPPING = 475,
     MATCH = 476,
     MATERIALIZED = 477,
     MAXVALUE = 478,
     MINUTE_P = 479,
     MINVALUE = 480,
     MODE = 481,
     MONTH_P = 482,
     MOVE = 483,
     NAME_P = 484,
     NAMES = 485,
     NATIONAL = 486,
     NATURAL = 487,
     NCHAR = 488,
     NEXT = 489,
     NO = 490,
     NONE = 491,
     NOT = 492,
     NOTHING = 493,
     NOTIFY = 494,
     NOTNULL = 495,
     NOWAIT = 496,
     NULL_P = 497,
     NULLIF = 498,
     NULLS_P = 499,
     NUMERIC = 500,
     OBJECT_P = 501,
     OF = 502,
     OFF = 503,
     OFFSET = 504,
     OIDS = 505,
     ON = 506,
     ONLY = 507,
     OPERATOR = 508,
     OPTION = 509,
     OPTIONS = 510,
     OR = 511,
     ORDER = 512,
     ORDINALITY = 513,
     OUT_P = 514,
     OUTER_P = 515,
     OVER = 516,
     OVERLAPS = 517,
     OVERLAY = 518,
     OWNED = 519,
     OWNER = 520,
     PARSER = 521,
     PARTIAL = 522,
     PARTITION = 523,
     PASSING = 524,
     PASSWORD = 525,
     PLACING = 526,
     PLANS = 527,
     POLICY = 528,
     POSITION = 529,
     PRECEDING = 530,
     PRECISION = 531,
     PRESERVE = 532,
     PREPARE = 533,
     PREPARED = 534,
     PRIMARY = 535,
     PRIOR = 536,
     PRIVILEGES = 537,
     PROCEDURAL = 538,
     PROCEDURE = 539,
     PROGRAM = 540,
     QUOTE = 541,
     RANGE = 542,
     READ = 543,
     REAL = 544,
     REASSIGN = 545,
     RECHECK = 546,
     RECURSIVE = 547,
     REF = 548,
     REFERENCES = 549,
     REFRESH = 550,
     REINDEX = 551,
     RELATIVE_P = 552,
     RELEASE = 553,
     RENAME = 554,
     REPEATABLE = 555,
     REPLACE = 556,
     REPLICA = 557,
     RESET = 558,
     RESTART = 559,
     RESTRICT = 560,
     RETURNING = 561,
     RETURNS = 562,
     REVOKE = 563,
     RIGHT = 564,
     ROLE = 565,
     ROLLBACK = 566,
     ROW = 567,
     ROWS = 568,
     RULE = 569,
     SAVEPOINT = 570,
     SCHEMA = 571,
     SCROLL = 572,
     SEARCH = 573,
     SECOND_P = 574,
     SECURITY = 575,
     SELECT = 576,
     SEQUENCE = 577,
     SEQUENCES = 578,
     SERIALIZABLE = 579,
     SERVER = 580,
     SESSION = 581,
     SESSION_USER = 582,
     SET = 583,
     SETOF = 584,
     SHARE = 585,
     SHOW = 586,
     SIMILAR = 587,
     SIMPLE = 588,
     SKIP = 589,
     SMALLINT = 590,
     SNAPSHOT = 591,
     SOME = 592,
     STABLE = 593,
     STANDALONE_P = 594,
     START = 595,
     STATEMENT = 596,
     STATISTICS = 597,
     STDIN = 598,
     STDOUT = 599,
     STORAGE = 600,
     STRICT_P = 601,
     STRIP_P = 602,
     SUBSTRING = 603,
     SYMMETRIC = 604,
     SYSID = 605,
     SYSTEM_P = 606,
     TABLE = 607,
     TABLES = 608,
     TABLESPACE = 609,
     TEMP = 610,
     TEMPLATE = 611,
     TEMPORARY = 612,
     TEXT_P = 613,
     THEN = 614,
     TIME = 615,
     TIMESTAMP = 616,
     TO = 617,
     TRAILING = 618,
     TRANSACTION = 619,
     TREAT = 620,
     TRIGGER = 621,
     TRIM = 622,
     TRUE_P = 623,
     TRUNCATE = 624,
     TRUSTED = 625,
     TYPE_P = 626,
     TYPES_P = 627,
     UNBOUNDED = 628,
     UNCOMMITTED = 629,
     UNENCRYPTED = 630,
     UNION = 631,
     UNIQUE = 632,
     UNKNOWN = 633,
     UNLISTEN = 634,
     UNLOGGED = 635,
     UNTIL = 636,
     UPDATE = 637,
     USER = 638,
     USING = 639,
     VACUUM = 640,
     VALID = 641,
     VALIDATE = 642,
     VALIDATOR = 643,
     VALUE_P = 644,
     VALUES = 645,
     VARCHAR = 646,
     VARIADIC = 647,
     VARYING = 648,
     VERBOSE = 649,
     VERSION_P = 650,
     VIEW = 651,
     VIEWS = 652,
     VOLATILE = 653,
     WHEN = 654,
     WHERE = 655,
     WHITESPACE_P = 656,
     WINDOW = 657,
     WITH = 658,
     WITHIN = 659,
     WITHOUT = 660,
     WORK = 661,
     WRAPPER = 662,
     WRITE = 663,
     XML_P = 664,
     XMLATTRIBUTES = 665,
     XMLCONCAT = 666,
     XMLELEMENT = 667,
     XMLEXISTS = 668,
     XMLFOREST = 669,
     XMLPARSE = 670,
     XMLPI = 671,
     XMLROOT = 672,
     XMLSERIALIZE = 673,
     YEAR_P = 674,
     YES_P = 675,
     ZONE = 676,
     NULLS_FIRST = 677,
     NULLS_LAST = 678,
     WITH_ORDINALITY = 679,
     WITH_TIME = 680,
     POSTFIXOP = 681,
     UMINUS = 682
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 189 "gram.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;



/* Line 1676 of yacc.c  */
#line 519 "gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



