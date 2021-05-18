/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini.y"


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);


#line 82 "mini.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MINI_TAB_H_INCLUDED
# define YY_YY_MINI_TAB_H_INCLUDED
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
    AND = 258,
    AND_ASIG = 259,
    ARRAY = 260,
    CABECERA = 261,
    CADA = 262,
    CADENA = 263,
    CARACTER = 264,
    CONJUNTO = 265,
    CONSTANTES = 266,
    CONTINUAR = 267,
    CTC_CADENA = 268,
    CTC_CARACTER = 269,
    CTC_ENTERA = 270,
    CTC_REAL = 271,
    DE = 272,
    DEFECTO = 273,
    DIV_ASIG = 274,
    DEVOLVER = 275,
    EJECUTA = 276,
    ENCAMBIO = 277,
    ENTERO = 278,
    EQ = 279,
    ES = 280,
    ESCAPE = 281,
    ESTRUCTURA = 282,
    ETIQUETA = 283,
    EXCEPCION = 284,
    FD_ASIG = 285,
    FI_ASIG = 286,
    FLECHA_DCHA = 287,
    FLECHA_IZDA = 288,
    FICHERO = 289,
    FIN = 290,
    FUNCION = 291,
    HACER = 292,
    HASH = 293,
    GE = 294,
    IDENTIFICADOR = 295,
    INDIRECCION = 296,
    LANZA = 297,
    LE = 298,
    MIENTRAS = 299,
    MOD_ASIG = 300,
    MULT_ASIG = 301,
    NADA = 302,
    NEQ = 303,
    OR = 304,
    OTRA = 305,
    OR_ASIG = 306,
    PARA = 307,
    POT_ASIG = 308,
    PRINCIPIO = 309,
    PROGRAMA = 310,
    POTENCIA = 311,
    REAL = 312,
    REF = 313,
    RESTA_ASIG = 314,
    RUTA = 315,
    SALTAR = 316,
    SI = 317,
    SINO = 318,
    SUMA_ASIG = 319,
    TAMANO = 320,
    TIPOS = 321,
    UNION = 322,
    VARIABLES = 323,
    XOR_ASIG = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

#define YYUNDEFTOK  2
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      94,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    72,    76,     2,
      96,    97,    70,    73,    92,    81,   112,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,    93,
      85,    95,    86,     2,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   116,   115,   117,   114,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,    78,    99,    82,     2,     2,     2,
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
      65,    66,    67,    68,    69,    74,    75,    79,    80,    84,
      87,    88,    89,    90,    91,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   113
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    32,    33,    36,    37,    40,    43,    44,
      47,    63,    64,    67,    68,    71,    71,    75,    76,    79,
      82,    83,    84,    85,    88,    89,    90,    91,    92,    93,
      94,    97,    98,    99,   102,   103,   106,   107,   110,   111,
     118,   119,   122,   123,   126,   126,   130,   131,   132,   133,
     134,   135,   139,   141,   142,   146,   148,   149,   152,   153,
     154,   158,   162,   163,   166,   167,   170,   178,   179,   182,
     183,   186,   187,   188,   192,   193,   196,   196,   204,   206,
     211,   212,   215,   219,   220,   223,   224,   228,   228,   231,
     232,   235,   246,   247,   250,   257,   258,   259,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   272,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   290,   293,   294,   297,   298,   302,   302,   306,   307,
     310,   311,   312,   313,   314,   318,   319,   320,   323,   326,
     327,   330,   333,   336,   339,   340,   341,   345,   346,   349,
     353,   356,   359,   366,   367,   368,   369,   370,   373,   374,
     375,   376,   377,   380,   381,   382,   383,   384,   387,   387,
     390,   392,   393,   396,   397,   400,   401,   404,   405,   408,
     409,   412,   413,   416,   417,   420,   421,   422,   425,   426,
     429,   430,   433,   434,   437,   438,   439,   442,   443,   444,
     447,   448,   451,   452,   455,   456,   457,   458,   459,   462,
     463
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "AND_ASIG", "ARRAY", "CABECERA",
  "CADA", "CADENA", "CARACTER", "CONJUNTO", "CONSTANTES", "CONTINUAR",
  "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "DE", "DEFECTO",
  "DIV_ASIG", "DEVOLVER", "EJECUTA", "ENCAMBIO", "ENTERO", "EQ", "ES",
  "ESCAPE", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG", "FI_ASIG",
  "FLECHA_DCHA", "FLECHA_IZDA", "FICHERO", "FIN", "FUNCION", "HACER",
  "HASH", "GE", "IDENTIFICADOR", "INDIRECCION", "LANZA", "LE", "MIENTRAS",
  "MOD_ASIG", "MULT_ASIG", "NADA", "NEQ", "OR", "OTRA", "OR_ASIG", "PARA",
  "POT_ASIG", "PRINCIPIO", "PROGRAMA", "POTENCIA", "REAL", "REF",
  "RESTA_ASIG", "RUTA", "SALTAR", "SI", "SINO", "SUMA_ASIG", "TAMANO",
  "TIPOS", "UNION", "VARIABLES", "XOR_ASIG", "'*'", "'/'", "'%'", "'+'",
  "\"<-\"", "\"->\"", "'&'", "'@'", "'|'", "\"&&\"", "\"||\"", "'-'",
  "'~'", "'!'", "\"tamano\"", "'<'", "'>'", "\"=<\"", "\"=>\"", "\"==\"",
  "\"!=\"", "\"**\"", "','", "';'", "'\\n'", "'='", "'('", "')'", "'{'",
  "'}'", "':'", "\"=+\"", "\"=-\"", "\"=*\"", "\"=/\"", "\"=%\"",
  "\"=**\"", "\"=<-\"", "\"=->\"", "\"=&\"", "\"=@\"", "\"=|\"", "'.'",
  "\"^.\"", "'^'", "'\\\\'", "'['", "']'", "$accept", "programa",
  "varias_rutas", "varias_cabeceras", "inicio_programa",
  "declaracion_varias_funciones", "bloque_programa", "declaracion_tipo",
  "varias_declaracion_tipo", "declaraciones_tipos", "varias_referencias",
  "especificacion_tipo", "tipo_basico", "tipo_escalar", "tipo_enumerado",
  "linea_campo", "varias_linea_campo", "tipo_estructurado",
  "declaracion_constante", "varias_declaracion_constante",
  "declaraciones_constantes", "constante", "varias_constante",
  "avarias_costante", "varios_elemento_hash", "avarios_hashs",
  "constante_enumerada", "elemento_hash", "campo_constante",
  "varios_campo_constante", "constante_estructurada",
  "varios_identificadores_por_coma_mas", "varias_expresiones_por_coma_mas",
  "declaracion_variables", "varias_declaracion_variables",
  "declaraciones_variables", "declaracion_funcion", "varios_parametros",
  "lista_parametros", "varias_expresion_constante_por_coma_mas",
  "parametros", "tipo_salida", "varias_declaracion_funcion",
  "cuerpo_funcion", "varias_instrucciones", "bloque_instrucciones",
  "instruccion_expresion", "instruccion", "asignacion",
  "operador_asignacion", "otros_casos", "v_otros_casos",
  "instruccion_bifurcacion", "accion", "v_asignacion", "instruccion_bucle",
  "instruccion_salto", "instruccion_destino_salto", "instruccion_devolver",
  "instruccion_vacia", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas",
  "v_clausula_excepcion_especifica", "clausulas_excepcion",
  "clausula_excepcion_especifica", "clausula_excepcion_general",
  "clausula_defecto", "expresion_constante", "expresion_indexada",
  "expresion_basica", "indice", "varias_expresion_por_coma_asterisco",
  "varias_expresion", "expresion_funcional", "expresion",
  "expresion_logica", "expresion_or", "expresion_and", "expresion_igual",
  "expresion_comparacion", "expresion_orbin", "expresion_xorbin",
  "expresion_andbin", "expresion_desplazamiento", "expresion_sumares",
  "expresion_mult", "expresion_potencia", "expresion_prefija", "operandos", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      42,    47,    37,    43,   325,   326,    38,    64,   124,   327,
     328,    45,   126,    33,   329,    60,    62,   330,   331,   332,
     333,   334,    44,    59,    10,    61,    40,    41,   123,   125,
      58,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    46,   346,    94,    92,    91,    93
};
# endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    53,    95,    37,    32,  -168,    24,  -168,   162,  -168,
      84,   160,  -168,    27,    31,   139,   189,  -168,  -168,  -168,
    -168,   105,   196,  -168,    54,   126,  -168,   168,   366,   142,
    -168,   402,  -168,  -168,   138,  -168,   -62,  -168,   123,     4,
    -168,   113,   159,   240,  -168,  -168,   244,  -168,   219,  -168,
    -168,   260,  -168,  -168,  -168,   225,  -168,  -168,  -168,  -168,
    -168,   187,  -168,   245,  -168,  -168,  -168,   247,   301,  -168,
    -168,   229,  -168,  -168,  -168,  -168,   128,  -168,   128,    38,
    -168,    40,   -19,   205,   216,    47,   256,   221,   272,   182,
     223,   286,   224,     0,   283,   134,  -168,    35,   -17,   -17,
     246,  -168,  -168,   231,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,    10,  -168,   232,  -168,  -168,  -168,   234,   305,
    -168,   137,  -168,   140,  -168,  -168,  -168,  -168,     3,   294,
     233,  -168,  -168,  -168,   134,   288,  -168,   304,  -168,  -168,
    -168,  -168,   -17,    88,   -12,   275,   337,   320,  -168,   156,
     271,   277,   276,   185,   -42,   285,   265,   131,   -17,   339,
    -168,   266,  -168,  -168,   314,   236,   324,   251,   328,   -17,
     279,   127,  -168,   -28,  -168,  -168,  -168,  -168,  -168,   284,
    -168,   134,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,   -17,   -30,   134,   134,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,   338,  -168,  -168,   280,   281,   282,
     289,  -168,   -22,  -168,   -56,  -168,   163,   331,  -168,  -168,
     162,   329,   288,   156,   134,  -168,   134,   134,   134,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,    88,   256,  -168,    -2,   339,  -168,
    -168,   287,  -168,   290,   292,   331,   293,   182,   -25,   295,
    -168,   167,  -168,  -168,  -168,  -168,   -29,  -168,  -168,  -168,
     -37,   331,   297,    38,  -168,    38,  -168,   369,    38,    38,
     294,  -168,   134,  -168,   139,  -168,   -51,    94,   162,   337,
     102,   320,  -168,   271,   271,   277,   276,   185,   -42,   -42,
     285,   285,   265,    62,   -17,   -17,   -17,   -17,  -168,   345,
     359,  -168,  -168,  -168,   134,  -168,   134,  -168,  -168,   182,
     134,   -17,   134,   135,  -168,  -168,  -168,  -168,  -168,   338,
    -168,  -168,  -168,  -168,   331,  -168,  -168,  -168,  -168,  -168,
     134,   256,   256,   -23,   331,  -168,   -15,  -168,    -5,  -168,
     370,   182,  -168,     4,   303,   331,  -168,  -168,   306,   182,
     -17,   300,   367,  -168,  -168,   249,  -168,  -168,   -50,   134,
    -168,   307,  -168,  -168,  -168,  -168,   313,  -168,   182,   -14,
    -168,   249,  -168,   182,  -168,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    16,     0,     1,     0,     2,    45,     6,
       0,     0,    14,     0,     0,    77,     7,    12,    18,    15,
      13,     0,     0,    43,     0,     0,     9,     0,     0,     0,
      41,     0,    44,    42,     0,    68,     0,    75,     0,     0,
       4,     0,     0,     0,    27,    26,     0,    24,     0,    29,
      28,     0,    20,    25,    17,     0,    19,    21,    22,    23,
      11,     0,    73,     0,    18,    76,    74,     0,     0,     8,
      10,     0,     5,    30,    18,    18,     0,    18,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,    98,    93,     0,    99,   100,   101,   102,   103,   104,
     105,   106,     0,   158,     0,     3,    31,    33,     0,     0,
      37,     0,    32,     0,    49,    48,    46,    47,     0,     0,
       0,    50,    51,    71,     0,    18,    81,     0,    97,   136,
     163,   139,     0,   210,     0,   175,   178,   180,   182,   184,
     187,   189,   191,   193,   196,   199,   201,   203,   208,   148,
     137,     0,   127,   126,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,   166,   167,    94,    92,    96,     0,
     108,     0,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,   161,    95,    35,
      18,    38,    36,    39,    49,    60,    54,     0,    52,     0,
      55,    57,     0,    65,     0,    40,     0,    70,    88,    87,
      45,     0,    18,   183,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,   143,     0,   144,   146,
     138,     0,   174,     0,   170,   172,     0,     0,     0,     0,
     129,     0,   135,   123,   164,   120,     0,   159,   160,   162,
       0,   107,     0,     0,    58,     0,    59,     0,     0,     0,
       0,    66,     0,    72,    77,    78,     0,     0,    45,   177,
       0,   179,   181,   185,   186,   188,   190,   192,   194,   195,
     197,   198,   200,   202,   205,   204,   206,   207,   152,     0,
       0,   147,   149,   145,     0,   173,     0,   142,   131,     0,
       0,     0,     0,     0,   169,   168,    34,    61,    53,     0,
      56,    63,    62,    64,    69,    90,    18,    80,    82,    79,
       0,     0,     0,     0,   171,   130,     0,   128,     0,   124,
       0,     0,   122,     0,    85,   176,   150,   151,     0,     0,
       0,     0,     0,    89,    91,     0,   132,   134,     0,     0,
     125,     0,   155,   156,   153,   154,    86,    84,     0,     0,
     157,     0,   133,     0,    83,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   395,  -168,  -168,
    -168,   -18,   378,  -168,  -168,   -58,   335,  -168,   390,  -168,
     409,  -119,  -168,  -168,  -168,  -168,  -168,   141,   146,  -168,
    -168,   198,  -168,   382,  -168,   143,    68,  -168,  -168,  -168,
    -168,   200,  -168,   144,  -168,   -36,  -168,   -39,  -164,  -168,
    -168,  -168,  -168,  -167,    70,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   180,    56,   -67,
     -84,   241,  -168,  -168,  -168,   -89,  -168,   210,   211,   213,
     302,    65,   208,   214,   212,    66,    67,   209,   204,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    41,    16,     3,    39,     7,    12,    13,     8,
      28,   219,    56,    57,    58,   120,   121,    59,    23,    24,
     284,   130,   207,   208,   209,   210,   131,   211,   213,   214,
     132,    36,   216,    37,    38,    26,    69,   221,   137,   376,
     287,   220,   353,   285,   100,   162,   101,   163,   103,   196,
     352,   323,   104,   164,   261,   105,   106,   107,   108,   109,
     110,   111,   246,   247,   248,   311,   312,   249,   377,   143,
     113,   197,   253,   254,   114,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,   112,   278,    70,   263,   260,   171,   168,   173,   206,
     140,   179,   224,   135,   174,   175,   204,   125,   126,   127,
     224,   224,   112,   140,   224,    10,   224,   309,    10,   102,
      63,   236,    21,   112,   224,   224,   280,   224,    64,   237,
      67,    63,   321,   281,   224,   217,    81,   378,   310,   336,
     159,   124,   125,   126,   127,    21,   116,   117,    68,   122,
       1,   177,    19,   202,    11,   202,    97,    11,   181,   264,
     324,    22,   319,   279,   358,   140,   255,   136,   258,    97,
     325,   225,   359,   383,    98,    99,   195,   140,   360,    32,
     318,   244,   266,     4,    22,     5,   169,    98,    99,   128,
     205,   129,   112,     6,   112,   180,   270,   271,   181,   267,
     268,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    34,     9,   195,    34,    83,   118,
     142,    97,   172,   133,   128,   134,   129,   290,   118,    84,
     141,   118,   142,    97,   241,   242,   243,    85,    86,    98,
      99,   224,   345,    87,   327,    88,   328,   347,    65,   331,
     332,    98,    99,    35,    89,   340,    35,    90,   119,    91,
     349,    92,   201,    14,   140,   203,   224,   119,    17,    93,
     119,    68,   272,    83,   362,    18,   181,   337,    94,    95,
     112,   338,   367,   334,    84,    27,   260,   350,   351,    30,
     193,   194,    85,    86,   195,    71,    72,    25,    87,   308,
      88,   382,   240,   241,   242,   243,   385,   234,   235,    89,
      96,    31,    90,    97,    91,   343,    92,   344,    40,   142,
      97,   346,    62,   348,    93,    60,    68,   244,   244,   244,
     244,    98,    99,    94,    95,   229,   230,    83,    98,    99,
     371,   355,   112,    73,   112,   282,   283,    74,    84,   321,
     322,    75,   372,   373,   374,   375,    85,    86,   304,   305,
     306,   307,    87,    76,    88,    96,   140,    77,    97,    78,
     379,   176,    79,    89,   112,    80,    90,    82,    91,   115,
      92,   140,   112,   112,   293,   294,    98,    99,    93,   138,
     298,   299,    83,   300,   301,   356,   357,    94,    95,   139,
      68,   112,   161,    84,   160,   166,   112,   364,   354,   165,
     167,    85,    86,   170,   178,   198,   215,    87,   199,    88,
     200,   142,    97,   252,   212,   218,   222,   226,    89,    96,
     227,    90,    97,    91,   228,    92,   142,    97,   257,   231,
      98,    99,   233,    93,   232,   238,   239,   245,   251,   250,
      98,    99,    94,    95,   256,    98,    99,    42,   259,    35,
     273,    43,   262,   275,    44,    45,    46,   274,   265,   276,
     224,   277,   329,   314,   316,   341,   317,   315,   342,    47,
     326,   320,   361,    48,    96,    49,   369,    97,   365,   366,
      50,   380,   370,    42,    51,   381,    52,    43,    20,    61,
      44,    45,    46,   123,    33,    98,    99,    15,   330,   286,
      66,   363,   288,    53,    54,    47,   333,   335,   313,    48,
     368,    49,   339,    55,   289,   269,    50,   384,   291,   295,
      51,   292,    52,   303,   223,   297,   296,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55
};

static const yytype_int16 yycheck[] =
{
      18,    68,    24,    39,   171,   169,    95,     7,    97,   128,
      40,     1,    49,    32,    98,    99,    13,    14,    15,    16,
      49,    49,    89,    40,    49,     1,    49,    29,     1,    68,
      92,    73,     1,   100,    49,    49,    92,    49,   100,    81,
      36,    92,    92,    99,    49,   134,    64,    97,    50,   100,
      86,    13,    14,    15,    16,     1,    74,    75,    54,    77,
      55,   100,    35,   121,    40,   123,    96,    40,    98,    97,
      99,    40,    97,    95,    97,    40,   165,    96,   167,    96,
     117,    93,    97,    97,   114,   115,   116,    40,    93,    35,
     257,   158,   181,    40,    40,     0,    96,   114,   115,    96,
      97,    98,   169,    66,   171,    95,   195,   196,    98,   193,
     194,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     1,    93,   116,     1,     1,     1,
      95,    96,    97,    93,    96,    95,    98,   226,     1,    12,
      93,     1,    95,    96,    82,    83,    84,    20,    21,   114,
     115,    49,   319,    26,   273,    28,   275,   321,    35,   278,
     279,   114,   115,    40,    37,    63,    40,    40,    40,    42,
      35,    44,    35,    11,    40,    35,    49,    40,    94,    52,
      40,    54,   200,     1,   351,    25,    98,    93,    61,    62,
     257,    97,   359,   282,    12,     6,   360,    62,    63,    94,
     112,   113,    20,    21,   116,    92,    93,    68,    26,   245,
      28,   378,    81,    82,    83,    84,   383,    32,    33,    37,
      93,    25,    40,    96,    42,   314,    44,   316,    60,    95,
      96,   320,    94,   322,    52,    93,    54,   304,   305,   306,
     307,   114,   115,    61,    62,    89,    90,     1,   114,   115,
       1,   340,   319,    94,   321,    92,    93,    17,    12,    92,
      93,    17,    13,    14,    15,    16,    20,    21,   240,   241,
     242,   243,    26,    54,    28,    93,    40,    17,    96,    54,
     369,    35,    95,    37,   351,    40,    40,    40,    42,    60,
      44,    40,   359,   360,   229,   230,   114,   115,    52,    94,
     234,   235,     1,   236,   237,   341,   342,    61,    62,    93,
      54,   378,    40,    12,    93,    29,   383,   353,   336,    96,
      96,    20,    21,    40,    93,    93,    93,    26,    94,    28,
      25,    95,    96,    97,    40,    47,    32,    62,    37,    93,
       3,    40,    96,    42,    24,    44,    95,    96,    97,    78,
     114,   115,    76,    52,    77,    70,    91,    18,    44,    93,
     114,   115,    61,    62,    40,   114,   115,     1,    40,    40,
      32,     5,    93,    92,     8,     9,    10,    97,    94,    97,
      49,    92,    13,    96,    92,    40,    93,    97,    29,    23,
      93,    96,    22,    27,    93,    29,    96,    96,    95,    93,
      34,    94,    35,     1,    38,    92,    40,     5,    13,    31,
       8,     9,    10,    78,    24,   114,   115,     8,   277,   221,
      38,   353,   222,    57,    58,    23,   280,   284,   248,    27,
     360,    29,   288,    67,   224,   194,    34,   381,   227,   231,
      38,   228,    40,   239,   142,   233,   232,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,   119,   122,    40,     0,    66,   124,   127,    93,
       1,    40,   125,   126,    11,   138,   121,    94,    25,    35,
     125,     1,    40,   136,   137,    68,   153,     6,   128,   129,
      94,    25,    35,   136,     1,    40,   149,   151,   152,   123,
      60,   120,     1,     5,     8,     9,    10,    23,    27,    29,
      34,    38,    40,    57,    58,    67,   130,   131,   132,   135,
      93,   130,    94,    92,   100,    35,   151,    36,    54,   154,
     163,    92,    93,    94,    17,    17,    54,    17,    54,    95,
      40,   129,    40,     1,    12,    20,    21,    26,    28,    37,
      40,    42,    44,    52,    61,    62,    93,    96,   114,   115,
     162,   164,   165,   166,   170,   173,   174,   175,   176,   177,
     178,   179,   187,   188,   192,    60,   129,   129,     1,    40,
     133,   134,   129,   134,    13,    14,    15,    16,    96,    98,
     139,   144,   148,    93,    95,    32,    96,   156,    94,    93,
      40,    93,    95,   187,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   163,
      93,    40,   163,   165,   171,    96,    29,    96,     7,    96,
      40,   193,    97,   193,   188,   188,    35,   165,    93,     1,
      95,    98,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   116,   167,   189,    93,    94,
      25,    35,   133,    35,    13,    97,   139,   140,   141,   142,
     143,   145,    40,   146,   147,    93,   150,   193,    47,   129,
     159,   155,    32,   198,    49,    93,    62,     3,    24,    89,
      90,    78,    77,    76,    32,    33,    73,    81,    70,    91,
      81,    82,    83,    84,   187,    18,   180,   181,   182,   185,
      93,    44,    97,   190,   191,   193,    40,    97,   193,    40,
     166,   172,    93,   171,    97,    94,   193,   188,   188,   189,
     193,   193,   129,    32,    97,    92,    97,    92,    24,    95,
      92,    99,    92,    93,   138,   161,   149,   158,   159,   195,
     193,   196,   197,   199,   199,   200,   201,   202,   203,   203,
     204,   204,   205,   206,   207,   207,   207,   207,   163,    29,
      50,   183,   184,   185,    96,    97,    92,    93,   171,    97,
      96,    92,    93,   169,    99,   117,    93,   139,   139,    13,
     145,   139,   139,   146,   193,   153,   100,    93,    97,   161,
      63,    40,    29,   193,   193,   171,   193,   166,   193,    35,
      62,    63,   168,   160,   129,   193,   163,   163,    97,    97,
      93,    22,   171,   154,   163,    95,    93,   171,   172,    96,
      35,     1,    13,    14,    15,    16,   157,   186,    97,   193,
      94,    92,   171,    97,   186,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   120,   120,   121,   121,   122,   123,   123,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   140,   141,   141,   142,   143,   143,   144,   144,
     144,   145,   146,   146,   147,   147,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   174,   174,   174,   175,   176,
     176,   177,   178,   179,   180,   180,   180,   181,   181,   182,
     183,   184,   185,   186,   186,   186,   186,   186,   187,   187,
     187,   187,   187,   188,   188,   188,   188,   188,   189,   189,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   206,   206,   206,   207,
     207
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     4,     0,     4,     2,     0,
       5,     4,     2,     2,     1,     3,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     4,     2,     2,     1,     4,     4,
       6,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     1,     3,     3,
       2,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     4,     6,     2,     2,     1,     3,     0,     5,     6,
       3,     0,     4,     3,     1,     3,     5,     1,     1,     2,
       0,     4,     2,     1,     3,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     6,     2,     0,     5,     7,     1,     1,     3,     1,
       5,     4,     7,     9,     7,     3,     2,     2,     3,     2,
       3,     1,     4,     3,     1,     2,     1,     2,     0,     2,
       3,     3,     2,     1,     1,     1,     1,     2,     1,     3,
       3,     2,     3,     1,     3,     2,     2,     2,     3,     3,
       1,     3,     1,     4,     3,     1,     5,     3,     1,     3,
       1,     3,     1,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     1,     2,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 29 "mini.y"
                                           { printf("programa -> inicio_programa bloque_programa\n"); }
#line 1712 "mini.tab.c"
    break;

  case 3:
#line 32 "mini.y"
                                     { printf("varias_rutas -> varias_rutas ',' RUTA\n"); }
#line 1718 "mini.tab.c"
    break;

  case 4:
#line 33 "mini.y"
                     { printf("rutas -> RUTA\n"); }
#line 1724 "mini.tab.c"
    break;

  case 5:
#line 36 "mini.y"
                                                              { printf("fich_cabecera -> CABECERA rutas\n"); }
#line 1730 "mini.tab.c"
    break;

  case 7:
#line 40 "mini.y"
                                                              { printf("inic_prog -> PROGRAMA ID ';' librerias \n"); }
#line 1736 "mini.tab.c"
    break;

  case 8:
#line 43 "mini.y"
                                                                                { printf("declaracion_varias_funciones -> declaracion_varias_funciones declaracion_funcion\n"); }
#line 1742 "mini.tab.c"
    break;

  case 10:
#line 51 "mini.y"
                                       { printf("bloque_programa -> declaraciones bloque_instrucciones\n"); }
#line 1748 "mini.tab.c"
    break;

  case 11:
#line 63 "mini.y"
                                                            { printf("declaracion_tipo -> IDENTIFICADOR ES especificacion_tipo ';'\n"); }
#line 1754 "mini.tab.c"
    break;

  case 12:
#line 64 "mini.y"
                          {yyerrok;}
#line 1760 "mini.tab.c"
    break;

  case 13:
#line 67 "mini.y"
                                                                   { printf("varias_declaracion_tipo -> varias_declaracion_tipo declaracion_tipo \n"); }
#line 1766 "mini.tab.c"
    break;

  case 19:
#line 79 "mini.y"
                                                     { printf("espec_tipo -> refs tipo_basico\n"); }
#line 1772 "mini.tab.c"
    break;

  case 20:
#line 82 "mini.y"
                            { printf("tipo basico -> IDENTIFICADOR\n"); }
#line 1778 "mini.tab.c"
    break;

  case 21:
#line 83 "mini.y"
                           { printf("tipo basico -> tipo escalar\n"); }
#line 1784 "mini.tab.c"
    break;

  case 22:
#line 84 "mini.y"
                             { printf("tipo basico -> tipo_enum\n"); }
#line 1790 "mini.tab.c"
    break;

  case 23:
#line 85 "mini.y"
                                { printf("tipo basico -> tipo estructurado\n"); }
#line 1796 "mini.tab.c"
    break;

  case 24:
#line 88 "mini.y"
                      { printf("tipo_escalar -> ENTERO\n"); }
#line 1802 "mini.tab.c"
    break;

  case 25:
#line 89 "mini.y"
                    { printf("tipo_escalar -> REAL\n"); }
#line 1808 "mini.tab.c"
    break;

  case 26:
#line 90 "mini.y"
                        { printf("tipo_escalar -> CARACTER\n"); }
#line 1814 "mini.tab.c"
    break;

  case 27:
#line 91 "mini.y"
                      { printf("tipo_escalar -> CADENA\n"); }
#line 1820 "mini.tab.c"
    break;

  case 28:
#line 92 "mini.y"
                       { printf("tipo_escalar -> FICHERO\n"); }
#line 1826 "mini.tab.c"
    break;

  case 29:
#line 93 "mini.y"
                          { printf("tipo_escalar -> EXCEPCION\n"); }
#line 1832 "mini.tab.c"
    break;

  case 30:
#line 94 "mini.y"
                           {yyerrok;}
#line 1838 "mini.tab.c"
    break;

  case 31:
#line 97 "mini.y"
                                              { printf("array -> ARRAY DE espec_tipo\n"); }
#line 1844 "mini.tab.c"
    break;

  case 32:
#line 98 "mini.y"
                                             { printf("array -> HASH DE espec_tipo\n"); }
#line 1850 "mini.tab.c"
    break;

  case 33:
#line 99 "mini.y"
                                                 { printf("array -> CONJUNTO DE espec_tipo\n"); }
#line 1856 "mini.tab.c"
    break;

  case 34:
#line 102 "mini.y"
                                                       { printf("declr_tipo -> ID ES espec_tipo\n"); }
#line 1862 "mini.tab.c"
    break;

  case 35:
#line 103 "mini.y"
                          {yyerrok;}
#line 1868 "mini.tab.c"
    break;

  case 36:
#line 106 "mini.y"
                                                    { printf("lista_declr_tipos -> declr_tipo\n"); }
#line 1874 "mini.tab.c"
    break;

  case 38:
#line 110 "mini.y"
                                                                { printf("ESTRUCTURA PRINCIPIO varias_linea_campo FIN\n"); }
#line 1880 "mini.tab.c"
    break;

  case 39:
#line 111 "mini.y"
                                                           { printf("UNION PRINCIPIO varias_linea_campo FIN\n"); }
#line 1886 "mini.tab.c"
    break;

  case 40:
#line 118 "mini.y"
                                                                       { printf("IDENTIFICADOR ES tipo_basico '=' constante ';'\n"); }
#line 1892 "mini.tab.c"
    break;

  case 41:
#line 119 "mini.y"
                          {yyerrok;}
#line 1898 "mini.tab.c"
    break;

  case 42:
#line 122 "mini.y"
                                                                                  { printf("varias_declaracion_constante -> varias_declaracion_constante declaracion_constante\n"); }
#line 1904 "mini.tab.c"
    break;

  case 46:
#line 130 "mini.y"
                       { printf("constante -> CTC_ENTERA\n"); }
#line 1910 "mini.tab.c"
    break;

  case 47:
#line 131 "mini.y"
                     { printf("constante -> CTC_REAL\n"); }
#line 1916 "mini.tab.c"
    break;

  case 48:
#line 132 "mini.y"
                         { printf("constante -> CTC_CARACTER\n"); }
#line 1922 "mini.tab.c"
    break;

  case 49:
#line 133 "mini.y"
                       { printf("constante -> CTC_CADENA\n"); }
#line 1928 "mini.tab.c"
    break;

  case 50:
#line 134 "mini.y"
                                { printf("constante -> constante_enumerada\n"); }
#line 1934 "mini.tab.c"
    break;

  case 51:
#line 135 "mini.y"
                                   { printf("constante -> constante_estructurada\n"); }
#line 1940 "mini.tab.c"
    break;

  case 53:
#line 141 "mini.y"
                                                  { printf("avarias_constante -> avarias_costante ',' constante \n"); }
#line 1946 "mini.tab.c"
    break;

  case 54:
#line 142 "mini.y"
                               { printf("avarias_constante -> constante \n"); }
#line 1952 "mini.tab.c"
    break;

  case 55:
#line 146 "mini.y"
                                     { printf("varios_elemento_hash -> avarios_hashs\n"); }
#line 1958 "mini.tab.c"
    break;

  case 56:
#line 148 "mini.y"
                                                { printf("avarios_hashs -> avarios_hashs ',' elemento_hash\n"); }
#line 1964 "mini.tab.c"
    break;

  case 57:
#line 149 "mini.y"
                              { printf("avarios_hashs -> elemento_hash\n"); }
#line 1970 "mini.tab.c"
    break;

  case 58:
#line 152 "mini.y"
                                               { printf("constante_enumerada -> '(' varias_constante ')'\n"); }
#line 1976 "mini.tab.c"
    break;

  case 59:
#line 153 "mini.y"
                                                   { printf("constante_enumerada -> '(' varios_elemento_hash ')'\n"); }
#line 1982 "mini.tab.c"
    break;

  case 60:
#line 154 "mini.y"
                              { printf("constante_enumerada -> '(' ')'\n"); }
#line 1988 "mini.tab.c"
    break;

  case 61:
#line 158 "mini.y"
                                                 { printf("CTC_CADENA -> constante\n"); }
#line 1994 "mini.tab.c"
    break;

  case 64:
#line 166 "mini.y"
                                                                    { printf("varios_campo_constante ',' campo_constante \n"); }
#line 2000 "mini.tab.c"
    break;

  case 65:
#line 167 "mini.y"
                                         { printf("varios_campo_constante -> campo_constante \n"); }
#line 2006 "mini.tab.c"
    break;

  case 66:
#line 170 "mini.y"
                                                        { printf("constante_estructurada -> '{' varios_campo_constante '}' \n"); }
#line 2012 "mini.tab.c"
    break;

  case 73:
#line 188 "mini.y"
                                   { yyerrok; }
#line 2018 "mini.tab.c"
    break;

  case 74:
#line 192 "mini.y"
                                                                                  { printf("varias_declaracion_variables -> varias_declaracion_variables declaracion_variables\n"); }
#line 2024 "mini.tab.c"
    break;

  case 76:
#line 196 "mini.y"
                                                                     { printf("declaraciones_variables -> VARIABLES varias_declaracion_variables FIN\n"); }
#line 2030 "mini.tab.c"
    break;

  case 78:
#line 205 "mini.y"
                                     { printf("declaracion_funcion ->  FUNCION IDENTIFICADOR FLECHA_DCHA tipo_salida cuerpo_funcion\n"); }
#line 2036 "mini.tab.c"
    break;

  case 79:
#line 207 "mini.y"
                                     { printf("declaracion_funcion ->  FUNCION IDENTIFICADOR lista_parametros FLECHA_DCHA tipo_salida cuerpo_funcion\n"); }
#line 2042 "mini.tab.c"
    break;

  case 92:
#line 246 "mini.y"
                                                        { printf("varias_instrucciones ->  varias_instrucciones instruccion"); }
#line 2048 "mini.tab.c"
    break;

  case 93:
#line 247 "mini.y"
                                   { printf("varias_instrucciones -> instruccion"); }
#line 2054 "mini.tab.c"
    break;

  case 94:
#line 250 "mini.y"
                                                          { printf("bloque_instrucciones ->  PRINCIPIO instrucciones FIN"); }
#line 2060 "mini.tab.c"
    break;

  case 95:
#line 257 "mini.y"
                                                { printf("expresion_funcional ';'\n"); }
#line 2066 "mini.tab.c"
    break;

  case 96:
#line 258 "mini.y"
                                       { printf("expresion_funcional ';'\n"); }
#line 2072 "mini.tab.c"
    break;

  case 97:
#line 259 "mini.y"
                                   {yyerrok;}
#line 2078 "mini.tab.c"
    break;

  case 98:
#line 261 "mini.y"
                                    { printf("instruccion -> instruccion_expresion\n"); }
#line 2084 "mini.tab.c"
    break;

  case 99:
#line 262 "mini.y"
                                      { printf("instruccion -> instruccion_bifurcacion\n"); }
#line 2090 "mini.tab.c"
    break;

  case 100:
#line 263 "mini.y"
                                { printf("instruccion -> instruccion_bucle\n"); }
#line 2096 "mini.tab.c"
    break;

  case 101:
#line 264 "mini.y"
                                { printf("instruccion -> instruccion_salto\n"); }
#line 2102 "mini.tab.c"
    break;

  case 102:
#line 265 "mini.y"
                                        { printf("instruccion -> instruccion_destino_salto\n"); }
#line 2108 "mini.tab.c"
    break;

  case 103:
#line 266 "mini.y"
                                   { printf("instruccion -> instruccion_devolver\n"); }
#line 2114 "mini.tab.c"
    break;

  case 104:
#line 267 "mini.y"
                                { printf("instruccion -> instruccion_vacia\n"); }
#line 2120 "mini.tab.c"
    break;

  case 105:
#line 268 "mini.y"
                                                { printf("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2126 "mini.tab.c"
    break;

  case 106:
#line 269 "mini.y"
                                            { printf("instruccion -> instruccion_captura_excepcion\n"); }
#line 2132 "mini.tab.c"
    break;

  case 107:
#line 272 "mini.y"
                                                              { printf("asignacion -> expresion_indexada operador_asignacion expresion\n"); }
#line 2138 "mini.tab.c"
    break;

  case 108:
#line 275 "mini.y"
                            { printf("operador_asignacion -> '='\n"); }
#line 2144 "mini.tab.c"
    break;

  case 109:
#line 276 "mini.y"
                            { printf("operador_asignacion -> '=+'\n"); }
#line 2150 "mini.tab.c"
    break;

  case 110:
#line 277 "mini.y"
                            { printf("operador_asignacion -> '=-'\n"); }
#line 2156 "mini.tab.c"
    break;

  case 111:
#line 278 "mini.y"
                            { printf("operador_asignacion -> '=*'\n"); }
#line 2162 "mini.tab.c"
    break;

  case 112:
#line 279 "mini.y"
                            { printf("operador_asignacion -> '=/'\n"); }
#line 2168 "mini.tab.c"
    break;

  case 113:
#line 280 "mini.y"
                            { printf("operador_asignacion ->  =%% \n"); }
#line 2174 "mini.tab.c"
    break;

  case 114:
#line 281 "mini.y"
                            { printf("operador_asignacion -> '=**'\n"); }
#line 2180 "mini.tab.c"
    break;

  case 115:
#line 282 "mini.y"
                            { printf("operador_asignacion -> '=<-'\n"); }
#line 2186 "mini.tab.c"
    break;

  case 116:
#line 283 "mini.y"
                            { printf("operador_asignacion -> '=->'\n"); }
#line 2192 "mini.tab.c"
    break;

  case 117:
#line 284 "mini.y"
                            { printf("operador_asignacion -> '=&'\n"); }
#line 2198 "mini.tab.c"
    break;

  case 118:
#line 285 "mini.y"
                            { printf("operador_asignacion -> '=@'\n"); }
#line 2204 "mini.tab.c"
    break;

  case 119:
#line 286 "mini.y"
                            { printf("operador_asignacion -> '=|'\n"); }
#line 2210 "mini.tab.c"
    break;

  case 120:
#line 287 "mini.y"
                                 {yyerrok;}
#line 2216 "mini.tab.c"
    break;

  case 121:
#line 290 "mini.y"
                                                   { printf("otros_casos -> SI ENCAMBIO '(' expresion ')' accion\n"); }
#line 2222 "mini.tab.c"
    break;

  case 130:
#line 310 "mini.y"
                                                      {printf("instruccion_bucle ->  MIENTRAS '(' expresion ')' accion\n"); }
#line 2228 "mini.tab.c"
    break;

  case 131:
#line 311 "mini.y"
                                            {printf("instruccion_bucle ->  MIENTRAS '(' ')' accion\n"); }
#line 2234 "mini.tab.c"
    break;

  case 132:
#line 312 "mini.y"
                                                                {printf("instruccion_bucle ->  HACER accion MIENTRAS '(' expresion ')' ';'\n"); }
#line 2240 "mini.tab.c"
    break;

  case 133:
#line 313 "mini.y"
                                                                                    {printf("PARA '(' v_asignacion ';' expresion ';' v_asignacion ')' accion\n"); }
#line 2246 "mini.tab.c"
    break;

  case 134:
#line 314 "mini.y"
                                                                     {printf("instruccion_bucle ->  PARA CADA IDENTIFICADOR '(' expresion ')' accion\n"); }
#line 2252 "mini.tab.c"
    break;

  case 135:
#line 318 "mini.y"
                                             { printf("instruccion_salto -> SALTAR IDENTIFICADOR ';'\n"); }
#line 2258 "mini.tab.c"
    break;

  case 136:
#line 319 "mini.y"
                                   { printf("instruccion_salto -> CONTINUAR ';'\n"); }
#line 2264 "mini.tab.c"
    break;

  case 137:
#line 320 "mini.y"
                                { printf("instruccion_salto -> ESCAPE ';'\n"); }
#line 2270 "mini.tab.c"
    break;

  case 138:
#line 323 "mini.y"
                                                       { printf("instruccion_destino_salto -> ETIQUETA IDENTIFICADOR ';'\n"); }
#line 2276 "mini.tab.c"
    break;

  case 139:
#line 326 "mini.y"
                                     { printf("instruccion_devolver -> DEVOLVER ';'\n"); }
#line 2282 "mini.tab.c"
    break;

  case 140:
#line 327 "mini.y"
                                              { printf("instruccion_devolver -> DEVOLVER expresion ';'\n"); }
#line 2288 "mini.tab.c"
    break;

  case 141:
#line 330 "mini.y"
                        { printf("instruccion_vacia -> ';'\n"); }
#line 2294 "mini.tab.c"
    break;

  case 143:
#line 336 "mini.y"
                                                                       { printf("instruccion_captura_excepcion -> EJECUTA bloque_instrucciones clausulas\n"); }
#line 2300 "mini.tab.c"
    break;

  case 150:
#line 353 "mini.y"
                                                                             { printf("clausula_excepcion_especifica -> EXCEPCION IDENTIFICADOR bloque_instrucciones\n"); }
#line 2306 "mini.tab.c"
    break;

  case 151:
#line 356 "mini.y"
                                                                 { printf("clausula_excepcion_general -> OTRA EXCEPCION bloque_instrucciones\n"); }
#line 2312 "mini.tab.c"
    break;

  case 152:
#line 359 "mini.y"
                                                { printf("clausula_defecto -> DEFECTO bloque_instrucciones\n"); }
#line 2318 "mini.tab.c"
    break;

  case 153:
#line 366 "mini.y"
                                 { printf("expresion_constante -> CTC_ENTERA\n"); }
#line 2324 "mini.tab.c"
    break;

  case 154:
#line 367 "mini.y"
                               { printf("expresion_constante -> CTC_REAL\n"); }
#line 2330 "mini.tab.c"
    break;

  case 155:
#line 368 "mini.y"
                                 { printf("expresion_constante -> CTC_CADENA\n"); }
#line 2336 "mini.tab.c"
    break;

  case 156:
#line 369 "mini.y"
                                   { printf("expresion_constante -> CTC_CARACTER\n"); }
#line 2342 "mini.tab.c"
    break;

  case 157:
#line 370 "mini.y"
                                 { yyerrok; }
#line 2348 "mini.tab.c"
    break;

  case 158:
#line 373 "mini.y"
                                      { printf("expresion_indexada -> expresion_basica\n"); }
#line 2354 "mini.tab.c"
    break;

  case 159:
#line 374 "mini.y"
                                                             { printf("expresion_indexada -> expresion_indexada '.' expresion_basica\n"); }
#line 2360 "mini.tab.c"
    break;

  case 160:
#line 375 "mini.y"
                                                              { printf("expresion_indexada -> expresion_indexada '^.' expresion_basica\n"); }
#line 2366 "mini.tab.c"
    break;

  case 161:
#line 376 "mini.y"
                                               { printf("expresion_indexada -> expresion_indexada indice\n"); }
#line 2372 "mini.tab.c"
    break;

  case 162:
#line 377 "mini.y"
                                                    { printf("expresion_indexada -> expresion_indexada '^.' indice\n"); }
#line 2378 "mini.tab.c"
    break;

  case 163:
#line 380 "mini.y"
                                 { printf("expresion_basica -> IDENTIFICADOR\n"); }
#line 2384 "mini.tab.c"
    break;

  case 164:
#line 381 "mini.y"
                                     { printf("expresion_basica -> '(' expresion ')'\n"); }
#line 2390 "mini.tab.c"
    break;

  case 165:
#line 382 "mini.y"
                           { printf("expresion_basica -> '(' ')'\n"); }
#line 2396 "mini.tab.c"
    break;

  case 166:
#line 383 "mini.y"
                                        { printf("expresion_basica -> '^' expresion_basica\n"); }
#line 2402 "mini.tab.c"
    break;

  case 167:
#line 384 "mini.y"
                                         { printf("expresion_basica -> '\\' expresion_basica\n"); }
#line 2408 "mini.tab.c"
    break;

  case 170:
#line 390 "mini.y"
                                                       { printf("varias_expresion_por_coma_asterisco -> varias_expresion\n"); }
#line 2414 "mini.tab.c"
    break;

  case 171:
#line 392 "mini.y"
                                                  { printf("varias_expresion -> varias_expresion ',' expresion\n"); }
#line 2420 "mini.tab.c"
    break;

  case 172:
#line 393 "mini.y"
                            { printf("varias_expresion -> expresion\n"); }
#line 2426 "mini.tab.c"
    break;

  case 173:
#line 396 "mini.y"
                                                                                { printf("expresion_funcional -> IDENTIFICADOR '(' varias_expresion_por_coma_asterisco ')'\n"); }
#line 2432 "mini.tab.c"
    break;

  case 174:
#line 397 "mini.y"
                                            { printf("expresion_funcional -> IDENTIFICADOR '(' ')'\n"); }
#line 2438 "mini.tab.c"
    break;

  case 177:
#line 404 "mini.y"
                                             { printf("expresion lógica -> expresion_or\n"); }
#line 2444 "mini.tab.c"
    break;

  case 179:
#line 408 "mini.y"
                                              { printf("expresion_or -> expresion_and\n"); }
#line 2450 "mini.tab.c"
    break;

  case 181:
#line 412 "mini.y"
                                                 { printf("expresion_and -> expresion_igual\n"); }
#line 2456 "mini.tab.c"
    break;

  case 183:
#line 416 "mini.y"
                                            { printf("expresion_igual -> expresion_comparacion\n"); }
#line 2462 "mini.tab.c"
    break;

  case 185:
#line 420 "mini.y"
                                                                   { printf("expresion_comparacion -> expresion_orbin\n"); }
#line 2468 "mini.tab.c"
    break;

  case 186:
#line 421 "mini.y"
                                                             { printf("expresion_comparacion -> expresion_orbin\n"); }
#line 2474 "mini.tab.c"
    break;

  case 188:
#line 425 "mini.y"
                                                       { printf("expresion_orbin -> expresion_xorbin\n"); }
#line 2480 "mini.tab.c"
    break;

  case 190:
#line 429 "mini.y"
                                                         { printf("expresion_xorbin -> expresion_andbin\n"); }
#line 2486 "mini.tab.c"
    break;

  case 192:
#line 433 "mini.y"
                                                                 { printf("expresion_andbin -> expresion_desplazamiento\n"); }
#line 2492 "mini.tab.c"
    break;

  case 194:
#line 437 "mini.y"
                                                                                 { printf("expresion_desplazamiento -> expresion_sumares\n"); }
#line 2498 "mini.tab.c"
    break;

  case 195:
#line 438 "mini.y"
                                                                                  { printf("expresion_desplazamiento -> expresion_sumares\n"); }
#line 2504 "mini.tab.c"
    break;

  case 197:
#line 442 "mini.y"
                                                         { printf("expresion_sumares -> expresion_mult\n"); }
#line 2510 "mini.tab.c"
    break;

  case 198:
#line 443 "mini.y"
                                                         { printf("expresion_sumares -> expresion_mult\n"); }
#line 2516 "mini.tab.c"
    break;

  case 200:
#line 447 "mini.y"
                                                       { printf("expresion_mult -> expresion_potencia\n"); }
#line 2522 "mini.tab.c"
    break;

  case 202:
#line 451 "mini.y"
                                                               { printf("expresion_potencia -> expresion_prefija\n"); }
#line 2528 "mini.tab.c"
    break;

  case 204:
#line 455 "mini.y"
                                                    { printf("expresion_prefija -> operandos\n"); }
#line 2534 "mini.tab.c"
    break;

  case 205:
#line 456 "mini.y"
                                                     { printf("expresion_prefija -> operandos\n"); }
#line 2540 "mini.tab.c"
    break;

  case 206:
#line 457 "mini.y"
                                                     { printf("expresion_prefija -> operandos\n"); }
#line 2546 "mini.tab.c"
    break;

  case 207:
#line 458 "mini.y"
                                                          { printf("expresion_prefija -> operandos\n"); }
#line 2552 "mini.tab.c"
    break;

  case 209:
#line 462 "mini.y"
                                          { printf("operandos -> expresion_indexada\n"); }
#line 2558 "mini.tab.c"
    break;


#line 2562 "mini.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 466 "mini.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./mini NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
