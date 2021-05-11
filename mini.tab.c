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
#line 2 "mini.y"


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
#define YYLAST   330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

#define YYUNDEFTOK  2
#define YYMAXUTOK   337


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      73,    74,     2,     2,    70,     2,    90,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    71,
       2,    72,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,    93,    95,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,    77,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    75,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    43,    44,    47,    48,    51,    55,    56,
      59,    71,    74,    75,    78,    83,    84,    87,    92,    93,
      94,    95,    98,    98,    98,    98,    98,    98,   101,   102,
     103,   108,   111,   112,   115,   116,   125,   128,   129,   132,
     137,   138,   139,   140,   141,   142,   147,   148,   150,   151,
     154,   155,   157,   158,   161,   162,   167,   168,   173,   176,
     177,   180,   188,   189,   192,   193,   196,   197,   201,   202,
     205,   213,   215,   221,   222,   225,   230,   231,   234,   235,
     240,   240,   243,   244,   248,   252,   255,   258,   262,   263,
     266,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     284,   285,   288,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   296,   299,   300,   303,   304,
     308,   308,   314,   315,   318,   319,   320,   321,   328,   328,
     328,   331,   334,   335,   338,   341,   344,   347,   348,   349,
     354,   355,   358,   363,   366,   369,   376,   376,   376,   376,
     379,   380,   381,   382,   383,   386,   387,   388,   389,   392,
     392,   395,   396,   398,   399,   402,   406,   407,   410
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
  "TIPOS", "UNION", "VARIABLES", "XOR_ASIG", "','", "';'", "'='", "'('",
  "')'", "\"->\"", "'{'", "'}'", "':'", "\"=+\"", "\"=-\"", "\"=*\"",
  "\"=/\"", "\"=%\"", "\"=**\"", "\"=<-\"", "\"=->\"", "\"=&\"", "\"=@\"",
  "\"=|\"", "'.'", "\"^.\"", "'^'", "'\\\\'", "'['", "']'", "$accept",
  "programa", "varias_rutas", "varias_cabeceras", "inicio_programa",
  "declaracion_varias_funciones", "estructura_programa",
  "declaracion_tipo", "varias_declaracion_tipo", "declaraciones_tipos",
  "varias_referencias", "especificacion_tipo", "tipo_basico",
  "tipo_escalar", "tipo_enumerado", "linea_campo", "varias_linea_campo",
  "tipo_estructurado", "declaracion_constante",
  "varias_declaracion_constante", "declaraciones_constantes", "constante",
  "varias_constante", "constante_por_coma_asterisco",
  "varios_elemento_hash", "elemento_hash_por_coma_asterisco",
  "constante_enumerada", "elemento_hash", "campo_constante",
  "varios_campo_constante", "constante_estructurada",
  "varios_identificadores_por_coma_mas", "varias_expresiones_por_coma_mas",
  "declaracion_variables", "varias_declaracion_variables",
  "declaraciones_variables", "declaracion_funcion", "varios_parametros",
  "lista_parametros", "varias_expresion_constante_por_coma_mas",
  "parametros", "tipo_salida", "varias_declaracion_funcion",
  "cuerpo_funcion", "varias_instrucciones", "bloque_instrucciones",
  "instruccion", "instruccion_expresion", "asignacion",
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
  "expresion_logica", YY_NULLPTR
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
      44,    59,    61,    40,    41,   325,   123,   125,    58,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      46,   337,    94,    92,    91,    93
};
# endif

#define YYPACT_NINF (-206)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,    -7,    47,     8,    10,  -206,    50,  -206,    39,  -206,
      68,  -206,    29,    65,    67,   136,  -206,  -206,  -206,   119,
    -206,    77,   124,  -206,   109,   211,   100,   252,  -206,  -206,
    -206,    -2,  -206,    80,   -28,  -206,    70,   156,  -206,  -206,
     157,  -206,   121,  -206,  -206,   160,  -206,  -206,  -206,   125,
    -206,  -206,  -206,  -206,  -206,   108,   141,  -206,  -206,  -206,
     142,   166,  -206,  -206,   123,  -206,  -206,  -206,   144,  -206,
     144,     6,  -206,    79,    56,   114,   -26,   134,   118,   151,
       4,   120,   167,   122,     0,   158,   148,  -206,   148,    31,
      31,    66,  -206,  -206,   128,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,   217,  -206,   129,  -206,  -206,  -206,   177,
    -206,    86,  -206,    90,  -206,  -206,  -206,  -206,    22,   164,
     138,  -206,  -206,  -206,   148,  -206,   165,   130,  -206,  -206,
    -206,   140,   145,   195,  -206,   143,  -206,  -206,   171,   148,
     183,   148,   185,    31,   146,     4,   152,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,   148,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,    31,    40,   148,   148,
    -206,  -206,  -206,  -206,  -206,  -206,   154,  -206,   159,   161,
     169,   162,  -206,   172,  -206,    32,  -206,    82,  -206,   124,
    -206,  -206,    -1,   165,  -206,   148,   134,  -206,   -16,   195,
    -206,  -206,   173,   174,   182,  -206,   176,   179,   181,  -206,
      85,  -206,  -206,  -206,   153,  -206,  -206,  -206,   168,  -206,
     193,    46,  -206,     6,  -206,   243,     6,   164,  -206,   148,
    -206,    13,   -57,    67,  -206,   -28,  -206,    -1,   202,  -206,
     226,   238,  -206,  -206,  -206,   148,  -206,   148,  -206,     4,
     148,    31,   148,    37,  -206,  -206,  -206,    22,  -206,  -206,
     154,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,   -28,
     -28,  -206,  -206,  -206,   148,   134,   134,   196,  -206,  -206,
     197,  -206,   201,  -206,   251,     4,  -206,   -43,   204,   -28,
    -206,  -206,  -206,  -206,  -206,   203,     4,    31,   207,   242,
    -206,   133,  -206,  -206,  -206,   -21,   148,  -206,  -206,  -206,
    -206,  -206,   212,  -206,     4,   209,   133,  -206,     4,  -206,
    -206
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     2,     0,     6,
       0,    13,     0,     0,     0,     7,    16,    14,    12,     0,
      38,     0,     0,     9,     0,     0,     0,     0,    39,    37,
      63,     0,    69,     0,     0,     4,     0,     0,    25,    24,
       0,    22,     0,    27,    26,     0,    18,    23,    15,     0,
      17,    19,    20,    21,    11,     0,     0,    16,    70,    68,
       0,     0,     8,    10,     0,     5,    16,    16,     0,    16,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,     0,   134,     0,     0,
       0,     0,    89,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   150,     0,     3,    28,    30,     0,
      33,     0,    29,     0,    43,    42,    40,    41,    47,     0,
       0,    44,    45,    66,     0,    74,    16,     0,   129,   168,
     132,     0,   166,   141,   130,     0,   121,   120,     0,   162,
       0,     0,     0,     0,     0,     0,     0,   155,   157,   158,
      90,    88,   101,   103,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,     0,
     153,   100,    16,    34,    32,    35,    43,    49,     0,    46,
       0,    50,    53,     0,    60,     0,    36,     0,    65,     0,
      81,    80,    83,    16,   133,     0,     0,   136,     0,   137,
     139,   131,     0,     0,   161,   164,     0,     0,     0,   123,
       0,   128,   117,   156,     0,   151,   152,   154,     0,   102,
       0,     0,    54,     0,    55,     0,     0,     0,    61,     0,
      67,     0,     0,    83,    83,     0,    71,    83,     0,   145,
       0,     0,   140,   142,   138,     0,   165,     0,   135,     0,
       0,     0,     0,     0,   160,   159,    31,    47,    56,    48,
       0,    52,    58,    59,    64,    16,    73,    75,    83,     0,
       0,    82,    87,    72,     0,     0,     0,     0,   163,   124,
       0,   122,     0,   118,     0,     0,   116,     0,    78,     0,
      85,    86,   167,   143,   144,     0,     0,     0,     0,     0,
      57,     0,    84,   125,   127,     0,     0,   119,   148,   149,
     146,   147,    79,    77,     0,     0,     0,   126,     0,    76,
     115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,  -206,  -206,  -206,  -206,   272,  -206,  -206,
    -206,   -15,   258,  -206,  -206,    25,   218,  -206,   266,  -206,
     283,   -56,  -206,  -206,  -206,    38,  -206,    69,    83,  -206,
    -206,   126,  -206,   279,  -206,    -9,   280,  -206,  -206,  -206,
    -206,   127,  -205,    76,  -206,   -34,   -52,  -206,  -137,  -206,
    -206,  -206,  -206,  -142,    19,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,   131,     1,  -206,
     -78,   155,  -206,  -206,  -206,   -84,  -206
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    36,    15,     3,    34,     7,    11,    12,     8,
      25,   191,    50,    51,    52,   110,   111,    53,    20,    21,
     233,   177,   178,   179,   180,   181,   121,   182,   184,   185,
     122,    31,   187,    32,    33,   234,   271,   189,   127,   312,
     232,   192,   235,   236,    91,   136,   137,    93,    94,   169,
     286,   253,    95,   138,   210,    96,    97,    98,    99,   100,
     101,   102,   197,   198,   199,   242,   243,   200,   313,   103,
     104,   170,   203,   204,   105,   131,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    26,   145,   212,   146,    23,   209,   142,    60,    92,
      13,   148,   149,   240,   266,   120,    75,   267,     1,   114,
     115,   116,   117,   129,    76,    77,    61,   225,   269,   270,
      78,   300,    79,     4,   241,   176,   115,   116,   117,   151,
     188,    80,    73,   133,    81,   130,    82,     5,    83,   251,
      13,   107,   108,   314,   112,   205,    84,   207,    61,   114,
     115,   116,   117,   289,    17,    85,    86,    22,    56,    10,
     214,   147,   283,   143,     6,    87,    57,    88,    75,   118,
     147,     9,   119,    56,   218,   219,    76,    77,   215,   216,
      10,   265,    78,    16,    79,   118,    89,    90,   119,   284,
     285,   150,   227,    80,    88,    19,    81,   279,    82,   228,
      83,   238,    28,    88,   281,    58,   154,    19,    84,   257,
      30,   173,   119,    89,    90,   175,   109,    85,    86,   125,
     109,   126,    89,    90,   168,    22,   174,    87,   174,    88,
      64,    65,    24,   299,    27,   264,   308,   309,   310,   311,
     123,   124,   229,   230,   304,   251,   252,   220,    89,    90,
     209,   277,   239,   278,    30,   258,   280,   259,   282,    35,
     262,    54,   317,    66,    67,    68,   320,    69,    75,    70,
      71,    72,    74,   106,   109,   128,    76,    77,    61,   134,
     292,   135,    78,   139,    79,   141,   140,   129,   144,   152,
     171,   272,   172,    80,   183,   193,    81,   195,    82,   186,
      83,   194,   190,   196,   201,   202,    37,   211,    84,    38,
      39,    40,   315,   206,   268,   208,   213,    85,    86,   221,
     254,   223,   225,   222,    41,   290,   291,    87,    42,    88,
      43,   293,   294,   224,   226,    44,   245,   248,   246,    45,
     288,    46,   247,   249,   250,   302,   260,    37,    89,    90,
      38,    39,    40,   255,   256,   274,   275,   276,    47,    48,
     295,   296,   297,   298,   303,    41,   301,   307,    49,    42,
     306,    43,   316,   318,    18,    55,    44,    29,   113,   153,
      45,    14,    46,   154,   261,   287,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,    47,
     263,   168,    59,   273,    62,   231,   305,   319,     0,    49,
     237,     0,   217,     0,     0,     0,     0,     0,     0,     0,
     244
};

static const yytype_int16 yycheck[] =
{
      34,    16,    86,   145,    88,    14,   143,     7,    36,    61,
      11,    89,    90,    29,    71,    71,    12,    74,    55,    13,
      14,    15,    16,    49,    20,    21,    54,    70,   233,   234,
      26,    74,    28,    40,    50,    13,    14,    15,    16,    91,
     124,    37,    57,    77,    40,    71,    42,     0,    44,    70,
      11,    66,    67,    74,    69,   139,    52,   141,    54,    13,
      14,    15,    16,   268,    35,    61,    62,    68,    70,    40,
     154,    40,    35,    73,    66,    71,    78,    73,    12,    73,
      40,    71,    76,    70,   168,   169,    20,    21,   166,   167,
      40,    78,    26,    25,    28,    73,    92,    93,    76,    62,
      63,    35,    70,    37,    73,    40,    40,   249,    42,    77,
      44,   195,    35,    73,   251,    35,    76,    40,    52,    73,
      40,    35,    76,    92,    93,    35,    40,    61,    62,    73,
      40,    75,    92,    93,    94,    68,   111,    71,   113,    73,
      70,    71,     6,   285,    25,   229,    13,    14,    15,    16,
      71,    72,    70,    71,   296,    70,    71,   172,    92,    93,
     297,   245,   196,   247,    40,   221,   250,   223,   252,    60,
     226,    71,   314,    17,    17,    54,   318,    17,    12,    54,
      72,    40,    40,    60,    40,    71,    20,    21,    54,    71,
     274,    40,    26,    73,    28,    73,    29,    49,    40,    71,
      71,   235,    25,    37,    40,    75,    40,    62,    42,    71,
      44,    71,    47,    18,    71,    44,     5,    71,    52,     8,
       9,    10,   306,    40,   233,    40,    74,    61,    62,    75,
      77,    70,    70,    74,    23,   269,   270,    71,    27,    73,
      29,   275,   276,    74,    72,    34,    73,    71,    74,    38,
     265,    40,    70,    74,    73,   289,    13,     5,    92,    93,
       8,     9,    10,    95,    71,    63,    40,    29,    57,    58,
      74,    74,    71,    22,    71,    23,    72,    35,    67,    27,
      73,    29,    70,    74,    12,    27,    34,    21,    70,    72,
      38,     8,    40,    76,   225,   257,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    57,
     227,    94,    33,   237,    34,   189,   297,   316,    -1,    67,
     193,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    97,   100,    40,     0,    66,   102,   105,    71,
      40,   103,   104,    11,   116,    99,    25,    35,   103,    40,
     114,   115,    68,   131,     6,   106,   107,    25,    35,   114,
      40,   127,   129,   130,   101,    60,    98,     5,     8,     9,
      10,    23,    27,    29,    34,    38,    40,    57,    58,    67,
     108,   109,   110,   113,    71,   108,    70,    78,    35,   129,
      36,    54,   132,   141,    70,    71,    17,    17,    54,    17,
      54,    72,    40,   107,    40,    12,    20,    21,    26,    28,
      37,    40,    42,    44,    52,    61,    62,    71,    73,    92,
      93,   140,   142,   143,   144,   148,   151,   152,   153,   154,
     155,   156,   157,   165,   166,   170,    60,   107,   107,    40,
     111,   112,   107,   112,    13,    14,    15,    16,    73,    76,
     117,   122,   126,    71,    72,    73,    75,   134,    71,    49,
      71,   171,   172,   141,    71,    40,   141,   142,   149,    73,
      29,    73,     7,    73,    40,   171,   171,    40,   166,   166,
      35,   142,    71,    72,    76,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    94,   145,
     167,    71,    25,    35,   111,    35,    13,   117,   118,   119,
     120,   121,   123,    40,   124,   125,    71,   128,   171,   133,
      47,   107,   137,    75,    71,    62,    18,   158,   159,   160,
     163,    71,    44,   168,   169,   171,    40,   171,    40,   144,
     150,    71,   149,    74,   171,   166,   166,   167,   171,   171,
     107,    75,    74,    70,    74,    70,    72,    70,    77,    70,
      71,   127,   136,   116,   131,   138,   139,   137,   171,   141,
      29,    50,   161,   162,   163,    73,    74,    70,    71,    74,
      73,    70,    71,   147,    77,    95,    71,    73,   117,   117,
      13,   123,   117,   124,   171,    78,    71,    74,   131,   138,
     138,   132,   141,   139,    63,    40,    29,   171,   171,   149,
     171,   144,   171,    35,    62,    63,   146,   121,   107,   138,
     141,   141,   171,   141,   141,    74,    74,    71,    22,   149,
      74,    72,   141,    71,   149,   150,    73,    35,    13,    14,
      15,    16,   135,   164,    74,   171,    70,   149,    74,   164,
     149
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,   100,   101,   101,
     102,   103,   104,   104,   105,   106,   106,   107,   108,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   112,   112,   113,   113,   114,   115,   115,   116,
     117,   117,   117,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   125,
     125,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   132,   132,   133,   133,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   139,   140,   140,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   152,   152,
     152,   153,   154,   154,   155,   156,   157,   158,   158,   158,
     159,   159,   160,   161,   162,   163,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   166,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   171,   171,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     4,     0,     4,     2,     0,
       5,     4,     2,     1,     3,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     4,     2,     1,     4,     4,     6,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     1,
       1,     0,     3,     1,     3,     3,     3,     5,     3,     3,
       1,     3,     3,     1,     3,     1,     4,     6,     2,     1,
       3,     5,     6,     3,     0,     4,     3,     1,     3,     5,
       1,     1,     2,     0,     4,     3,     3,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     2,     0,     5,     7,
       1,     1,     3,     1,     5,     7,     9,     7,     3,     2,
       2,     3,     2,     3,     1,     4,     3,     1,     2,     1,
       2,     0,     2,     3,     3,     2,     1,     1,     1,     1,
       1,     3,     3,     2,     3,     1,     3,     2,     2,     3,
       3,     1,     0,     3,     1,     4,     1,     5,     1
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
  case 4:
#line 44 "mini.y"
                     { printf("rutas -> RUTA\n"); }
#line 1643 "mini.tab.c"
    break;

  case 5:
#line 47 "mini.y"
                                                              { printf("fich_cabecera -> CABECERA rutas\n"); }
#line 1649 "mini.tab.c"
    break;


#line 1653 "mini.tab.c"

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
#line 413 "mini.y"


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
