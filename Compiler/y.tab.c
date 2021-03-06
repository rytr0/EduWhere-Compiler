/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "EduWhere.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "ParseTree.h"
//#include "graph.h"

nodeType *opr(int oper, int nops, ...);
nodeType *id(char *i);
nodeType *con(char * value);
void freeNode(nodeType *p);
int ex(nodeType *p);
extern int yylineno;


/* Line 371 of yacc.c  */
#line 85 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     FLOAT = 259,
     CHAR = 260,
     CONST = 261,
     BOOLEAN = 262,
     IF = 263,
     THEN = 264,
     ELSE = 265,
     WHILE = 266,
     WHILEUNTIL = 267,
     FOR = 268,
     SWITCH = 269,
     CASE = 270,
     BREAK = 271,
     DEFAULT = 272,
     DO = 273,
     REPEAT = 274,
     UNTIL = 275,
     FALSE = 276,
     TRUE = 277,
     COMMENT = 278,
     INTEGERVALUE = 279,
     OCTAVALUE = 280,
     HEXAVALUE = 281,
     FLOATVALUE = 282,
     CHARVALUE = 283,
     IDENTIFIER = 284,
     IFX = 285,
     LOGICALOR = 286,
     LOGICALAND = 287,
     NOTEQUAL = 288,
     ISEQUAL = 289,
     LE = 290,
     GT = 291,
     GE = 292,
     LT = 293,
     UMINUS = 294
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define FLOAT 259
#define CHAR 260
#define CONST 261
#define BOOLEAN 262
#define IF 263
#define THEN 264
#define ELSE 265
#define WHILE 266
#define WHILEUNTIL 267
#define FOR 268
#define SWITCH 269
#define CASE 270
#define BREAK 271
#define DEFAULT 272
#define DO 273
#define REPEAT 274
#define UNTIL 275
#define FALSE 276
#define TRUE 277
#define COMMENT 278
#define INTEGERVALUE 279
#define OCTAVALUE 280
#define HEXAVALUE 281
#define FLOATVALUE 282
#define CHARVALUE 283
#define IDENTIFIER 284
#define IFX 285
#define LOGICALOR 286
#define LOGICALAND 287
#define NOTEQUAL 288
#define ISEQUAL 289
#define LE 290
#define GT 291
#define GE 292
#define LT 293
#define UMINUS 294



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 18 "EduWhere.y"

    nodeType *nPtr; /* node pointer */  
    char* charpointval;


/* Line 387 of yacc.c  */
#line 212 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 240 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,     2,     2,    47,    36,     2,
      53,    54,    45,    43,     2,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    50,
       2,    31,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    34,    52,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    32,    33,    37,    38,
      39,    40,    41,    42,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    13,    16,    19,    21,
      25,    26,    28,    31,    34,    37,    41,    43,    45,    47,
      49,    53,    57,    61,    65,    69,    73,    77,    81,    85,
      89,    93,    97,   101,   104,   107,   111,   115,   119,   123,
     127,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,   162,   171,   177,   187,   193,   203,
     213,   222,   223,   230,   236,   237,   240,   241,   246
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    57,    58,    -1,    57,     1,    50,
      -1,    50,    -1,    60,    50,    -1,    62,    50,    -1,    65,
      -1,    51,    59,    52,    -1,    -1,    58,    -1,    59,    58,
      -1,    61,    29,    -1,    61,    62,    -1,     6,    61,    62,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,    29,
      31,    62,    -1,    29,    31,    63,    -1,    53,    63,    54,
      -1,    63,    43,    63,    -1,    63,    44,    63,    -1,    63,
      45,    63,    -1,    63,    46,    63,    -1,    63,    47,    63,
      -1,    63,    33,    63,    -1,    63,    32,    63,    -1,    63,
      35,    63,    -1,    63,    36,    63,    -1,    63,    34,    63,
      -1,    48,    63,    -1,    44,    63,    -1,    63,    38,    63,
      -1,    63,    37,    63,    -1,    63,    40,    63,    -1,    63,
      41,    63,    -1,    63,    42,    63,    -1,    63,    39,    63,
      -1,    29,    -1,    64,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    22,    -1,    21,    -1,    66,
      -1,    67,    -1,    68,    -1,     8,    53,    63,    54,     9,
      58,    -1,     8,    53,    63,    54,     9,    58,    10,    58,
      -1,    11,    53,    63,    54,    58,    -1,    13,    53,    62,
      50,    63,    50,    62,    54,    58,    -1,    12,    53,    63,
      54,    58,    -1,    18,    51,    58,    52,    11,    53,    63,
      54,    50,    -1,    19,    51,    58,    52,    20,    53,    63,
      54,    50,    -1,    14,    53,    29,    54,    51,    69,    71,
      52,    -1,    -1,    15,    64,    55,    58,    70,    69,    -1,
      15,    64,    55,    70,    69,    -1,    -1,    16,    50,    -1,
      -1,    17,    55,    58,    70,    -1,    17,    55,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    50,    52,    60,    64,    66,    68,    70,
      74,    76,    78,    82,    86,    90,    96,   100,   104,   108,
     114,   118,   124,   128,   132,   136,   140,   144,   148,   152,
     156,   160,   164,   168,   172,   176,   180,   184,   188,   192,
     196,   200,   204,   210,   215,   219,   223,   227,   231,   235,
     241,   243,   245,   250,   255,   262,   267,   272,   277,   283,
     290,   297,   301,   306,   313,   317,   323,   327,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "CHAR", "CONST",
  "BOOLEAN", "IF", "THEN", "ELSE", "WHILE", "WHILEUNTIL", "FOR", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "DO", "REPEAT", "UNTIL", "FALSE", "TRUE",
  "COMMENT", "INTEGERVALUE", "OCTAVALUE", "HEXAVALUE", "FLOATVALUE",
  "CHARVALUE", "IDENTIFIER", "IFX", "'='", "LOGICALOR", "LOGICALAND",
  "'|'", "'^'", "'&'", "NOTEQUAL", "ISEQUAL", "LE", "GT", "GE", "LT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "';'", "'{'", "'}'",
  "'('", "')'", "':'", "$accept", "program", "statement", "stmt_list",
  "declaration", "type", "assignment", "expr", "value", "special",
  "ifstatement", "loopstatement", "switchstatement", "casestatements",
  "breakstatement", "defaultcase", YY_NULL
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
     285,    61,   286,   287,   124,    94,    38,   288,   289,   290,
     291,   292,   293,    43,    45,    42,    47,    37,    33,   294,
      59,   123,   125,    40,    41,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    58,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      68,    69,    69,    69,    70,    70,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     1,     2,     2,     1,     3,
       0,     1,     2,     2,     2,     3,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     8,     5,     9,     5,     9,     9,
       8,     0,     6,     5,     0,     2,     0,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    16,    17,    18,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     5,    10,     3,
       0,     0,     0,     8,    50,    51,    52,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     6,
      13,    14,     7,    15,    49,    48,    43,    44,    45,    46,
      47,    41,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,    41,    20,    21,     9,    12,    34,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    29,    28,    32,    30,    31,
      36,    35,    40,    37,    38,    39,    23,    24,    25,    26,
      27,     0,    55,    57,     0,    61,     0,     0,    53,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,    64,    64,    60,     0,     0,    56,     0,
      64,    61,    64,    68,    58,    59,    65,    61,    63,    67,
      62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,    38,    20,    21,    22,    55,    56,    23,
      24,    25,    26,   121,   141,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
    -136,    72,  -136,   -45,  -136,  -136,  -136,   100,  -136,   -43,
     -40,   -39,   -35,     6,    17,    18,    43,  -136,   174,  -136,
      31,    58,    32,  -136,  -136,  -136,  -136,  -136,    59,   173,
     173,   173,    59,    60,   174,   174,   183,  -136,   121,  -136,
      43,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,   173,   173,   173,   205,  -136,   228,   251,    42,
      54,    57,    61,    43,  -136,    -5,  -136,  -136,  -136,  -136,
     274,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   101,   174,   174,
     173,    66,   107,    91,  -136,   361,   375,   388,   400,   411,
     422,   422,    53,    53,    53,    53,   -24,   -24,  -136,  -136,
    -136,   174,  -136,  -136,   343,    97,    67,    68,   109,    59,
      39,   113,   173,   173,   174,    77,    81,    82,    86,   297,
     320,  -136,   174,   140,   140,  -136,    92,    99,  -136,   105,
     125,    97,   125,  -136,  -136,  -136,  -136,    97,  -136,  -136,
    -136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   -18,  -136,  -136,   150,   -17,   -28,    40,  -136,
    -136,  -136,  -136,  -135,  -133,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      37,   143,    57,    58,    41,    27,   148,   147,    65,   149,
      29,    43,   150,    30,    31,    59,    61,    62,    32,    64,
      67,    84,    85,    86,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    33,
      44,    45,   114,    46,    47,    48,    49,    50,    34,    35,
     112,   113,     2,     3,    36,     4,     5,     6,     7,     8,
       9,    39,    42,    10,    11,    12,    13,    40,    16,    60,
      14,    15,    90,   118,   129,   130,    82,    83,    84,    85,
      86,    16,   125,     4,     5,     6,   131,     8,    91,    92,
     111,   117,   120,    93,   138,   140,   142,   115,   116,   124,
     122,   123,    17,    18,     4,     5,     6,     7,     8,     9,
     127,   132,    10,    11,    12,    13,   133,   134,   135,    14,
      15,   139,   144,     4,     5,     6,     7,     8,     9,   145,
      16,    10,    11,    12,    13,   146,   139,    28,    14,    15,
     126,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    17,    18,    66,     0,     0,     0,     4,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,     0,
      17,    18,    14,    15,    44,    45,     0,    46,    47,    48,
      49,    50,    51,    16,    44,    45,     0,    46,    47,    48,
      49,    50,    63,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,    17,    18,    54,    52,     0,     0,
       0,    53,     0,     0,     0,     0,    54,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,    87,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,    88,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,    89,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,    94,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,   136,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,   137,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     0,     0,   119,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

static const yytype_int16 yycheck[] =
{
      18,   134,    30,    31,    21,    50,   141,   140,    36,   142,
      53,    28,   147,    53,    53,    32,    34,    35,    53,    36,
      38,    45,    46,    47,    52,    53,    54,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    53,
      21,    22,    90,    24,    25,    26,    27,    28,    51,    51,
      88,    89,     0,     1,    31,     3,     4,     5,     6,     7,
       8,    50,    50,    11,    12,    13,    14,    29,    29,    29,
      18,    19,    50,   111,   122,   123,    43,    44,    45,    46,
      47,    29,   119,     3,     4,     5,   124,     7,    54,    52,
       9,    20,    15,    52,   132,   133,   134,    51,    11,    10,
      53,    53,    50,    51,     3,     4,     5,     6,     7,     8,
      17,    54,    11,    12,    13,    14,    55,    55,    52,    18,
      19,    16,    50,     3,     4,     5,     6,     7,     8,    50,
      29,    11,    12,    13,    14,    50,    16,     7,    18,    19,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    50,    51,    52,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    -1,
      50,    51,    18,    19,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    29,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    -1,    -1,    50,    51,    53,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    50,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,     0,     1,     3,     4,     5,     6,     7,     8,
      11,    12,    13,    14,    18,    19,    29,    50,    51,    58,
      60,    61,    62,    65,    66,    67,    68,    50,    61,    53,
      53,    53,    53,    53,    51,    51,    31,    58,    59,    50,
      29,    62,    50,    62,    21,    22,    24,    25,    26,    27,
      28,    29,    44,    48,    53,    63,    64,    63,    63,    62,
      29,    58,    58,    29,    62,    63,    52,    58,    63,    63,
      63,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    54,    54,    54,
      50,    54,    52,    52,    54,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,     9,    58,    58,    63,    51,    11,    20,    58,    50,
      15,    69,    53,    53,    10,    62,    64,    17,    71,    63,
      63,    58,    54,    55,    55,    52,    54,    54,    58,    16,
      58,    70,    58,    70,    50,    50,    50,    70,    69,    70,
      69
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
        case 3:
/* Line 1792 of yacc.c  */
#line 50 "EduWhere.y"
    {ex((yyvsp[(2) - (2)].nPtr)); freeNode((yyvsp[(2) - (2)].nPtr));}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 53 "EduWhere.y"
    {
            yyerrok;
        }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 60 "EduWhere.y"
    {
                            (yyval.nPtr) = opr(';',2,NULL,NULL);
                            }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 64 "EduWhere.y"
    {(yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 66 "EduWhere.y"
    {(yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 68 "EduWhere.y"
    {(yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 70 "EduWhere.y"
    {(yyval.nPtr) = opr('{',1,(yyvsp[(2) - (3)].nPtr));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 74 "EduWhere.y"
    {(yyval.nPtr) = opr(' ',2,NULL,NULL);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 76 "EduWhere.y"
    {(yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 78 "EduWhere.y"
    {(yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 82 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(IDENTIFIER,2,con((yyvsp[(1) - (2)].charpointval)),id((yyvsp[(2) - (2)].charpointval)));
                                        }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 86 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(IDENTIFIER,3,con((yyvsp[(1) - (2)].charpointval)),(yyvsp[(2) - (2)].nPtr),NULL);
                                        }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 90 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(CONST,2,con((yyvsp[(2) - (3)].charpointval)),(yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 96 "EduWhere.y"
    {
                                        (yyval.charpointval) = "I";
                                        }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 100 "EduWhere.y"
    {
                                        (yyval.charpointval) = "F";
                                        }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 104 "EduWhere.y"
    {
                                        (yyval.charpointval) = "C";
                                        }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 108 "EduWhere.y"
    {
                                        (yyval.charpointval) = "B";
                                        }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 114 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('=', 3, id((yyvsp[(1) - (3)].charpointval)), (yyvsp[(3) - (3)].nPtr),NULL);
                                        }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 118 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (3)].charpointval)), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 124 "EduWhere.y"
    {
                                        (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr);
                                        }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 128 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 132 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 136 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 140 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 144 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 148 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LOGICALAND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 152 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LOGICALOR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 156 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 160 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LOGICALAND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 164 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LOGICALOR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
                                        }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 168 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr('!', 1, (yyvsp[(2) - (2)].nPtr));    
                                        }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 172 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr));
                                        }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 176 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(ISEQUAL, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 180 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(NOTEQUAL, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 184 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(GT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 188 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 192 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 196 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));   
                                        }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 200 "EduWhere.y"
    {
                                        (yyval.nPtr) = id((yyvsp[(1) - (1)].charpointval));
                                        }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 204 "EduWhere.y"
    {
	                                    (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);                  
                                        }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 210 "EduWhere.y"
    {
                                        (yyval.nPtr)= opr('v',2,con((yyvsp[(1) - (1)].charpointval)),con("int"));
                                     
                                        }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 215 "EduWhere.y"
    {
                                       (yyval.nPtr)= opr('v',2,con((yyvsp[(1) - (1)].charpointval)),con("int"));
                                        }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 219 "EduWhere.y"
    {
                                        (yyval.nPtr)= opr('v',2,con((yyvsp[(1) - (1)].charpointval)),con("int"));
                                        }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 223 "EduWhere.y"
    {
                                        (yyval.nPtr)= opr('v',2,con((yyvsp[(1) - (1)].charpointval)),con("float"));
                                        }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 227 "EduWhere.y"
    {
                                        (yyval.nPtr)= opr('v',2,con((yyvsp[(1) - (1)].charpointval)),con("char"));
                                        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 231 "EduWhere.y"
    {
                                       (yyval.nPtr)= opr('v',2,con("1"),con("bool"));
                                        }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 235 "EduWhere.y"
    {
                                        (yyval.nPtr)= opr('v',2,con("0"),con("bool"));
                                        }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 241 "EduWhere.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 243 "EduWhere.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 245 "EduWhere.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 251 "EduWhere.y"
    { 
                                        (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(6) - (6)].nPtr)); 
                                        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 256 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (8)].nPtr), (yyvsp[(6) - (8)].nPtr), (yyvsp[(8) - (8)].nPtr));
                                        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 263 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr));   
                                        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 268 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(FOR, 4, (yyvsp[(3) - (9)].nPtr), (yyvsp[(5) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr), (yyvsp[(9) - (9)].nPtr));   
                                        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 273 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(WHILEUNTIL, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr));   
                                        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 278 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr));
                                             
                                        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 284 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(REPEAT, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr));    
                                        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 291 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(SWITCH, 3, id((yyvsp[(3) - (8)].charpointval)), (yyvsp[(6) - (8)].nPtr),(yyvsp[(7) - (8)].nPtr));    
                                        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 297 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(' ',2,NULL,NULL);
                                        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 302 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(CASE, 4,(yyvsp[(2) - (6)].nPtr), (yyvsp[(4) - (6)].nPtr),(yyvsp[(5) - (6)].nPtr),(yyvsp[(6) - (6)].nPtr));    
                                        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 307 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(CASE, 4,(yyvsp[(2) - (5)].nPtr), NULL,(yyvsp[(4) - (5)].nPtr),(yyvsp[(5) - (5)].nPtr));    
                                        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 313 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(' ',2,NULL,NULL);
                                        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 317 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(BREAK, 0);    
                                        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 323 "EduWhere.y"
    {
                                        (yyval.nPtr) = opr(' ',2,NULL,NULL);
                                        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 328 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(DEFAULT, 2, (yyvsp[(3) - (4)].nPtr), (yyvsp[(4) - (4)].nPtr));    
                                        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 333 "EduWhere.y"
    {
                                         (yyval.nPtr) = opr(DEFAULT, 2, NULL, (yyvsp[(3) - (3)].nPtr));    
                                        }
    break;


/* Line 1792 of yacc.c  */
#line 2128 "y.tab.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


/* Line 2055 of yacc.c  */
#line 340 "EduWhere.y"

#define SIZEOF_NODETYPE ((char *)&p->con - (char *)p)
nodeType *con(char * value) {
    nodeType *p;
    size_t nodeSize;
    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(conNodeType);
    if ((p = malloc(nodeSize)) == NULL)
    yyerror("out of memory");
    /* copy information */
    p->type = typeCon;
    p->con.value = strdup(value);
    return p;
}
nodeType *id(char *i) {

    nodeType *p;
    size_t nodeSize;
    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(idNodeType);
    if ((p = malloc(nodeSize)) == NULL)
	yyerror("out of memory");
    /* copy information */
    p->type = typeId;
    p->id.i = strdup(i);
    return p;
}
nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    size_t nodeSize;
    int i;
    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(oprNodeType) +
    (nops - 1) * sizeof(nodeType*);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++){
        p->opr.op[i] = va_arg(ap, nodeType*);
        
    }
    
    va_end(ap);
    return p;
}	
void freeNode(nodeType *p) {
    int i;
    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
        freeNode(p->opr.op[i]);
    }
    free (p);
}

main()
{
 yyparse();
 printTable();
 return 0;
}
yyerror(s)
char *s;
{
  printf("%s at line %d\n",s,yylineno);
}
yywrap()
{
  return(1);
}
