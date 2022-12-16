/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.ypp"

	#include <iostream>
	#include "hw3_output.hpp"
	#include "Utils.h"
	#include "ScopeStacks.h"
	#include "stacks.h"
	
	using namespace std;
	int yylex();
	void yyerror(const char*);
	extern int yylineno;

	ScopeStacks scopeStacks;

	bool isLegalAssignment(TYPE type1, TYPE type2);

#line 88 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BYTE = 5,                       /* BYTE  */
  YYSYMBOL_B = 6,                          /* B  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_SC = 14,                        /* SC  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_RELOP_EQ = 24,                  /* RELOP_EQ  */
  YYSYMBOL_RELOP_REL = 25,                 /* RELOP_REL  */
  YYSYMBOL_BINOP_SUM = 26,                 /* BINOP_SUM  */
  YYSYMBOL_BINOP_MUL = 27,                 /* BINOP_MUL  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_LBRACE = 29,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 30,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 31,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 32,                    /* RPAREN  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_Program = 34,                   /* Program  */
  YYSYMBOL_Funcs = 35,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 36,                  /* FuncDecl  */
  YYSYMBOL_37_1 = 37,                      /* $@1  */
  YYSYMBOL_RetType = 38,                   /* RetType  */
  YYSYMBOL_Formals = 39,                   /* Formals  */
  YYSYMBOL_FormalsList = 40,               /* FormalsList  */
  YYSYMBOL_FormalsDecl = 41,               /* FormalsDecl  */
  YYSYMBOL_Statements = 42,                /* Statements  */
  YYSYMBOL_Statement = 43,                 /* Statement  */
  YYSYMBOL_Call = 44,                      /* Call  */
  YYSYMBOL_ExpList = 45,                   /* ExpList  */
  YYSYMBOL_Type = 46,                      /* Type  */
  YYSYMBOL_Exp = 47,                       /* Exp  */
  YYSYMBOL_BoolExp = 48,                   /* BoolExp  */
  YYSYMBOL_OPEN_MARKER = 49,               /* OPEN_MARKER  */
  YYSYMBOL_WHILE_OPEN_MARKER = 50,         /* WHILE_OPEN_MARKER  */
  YYSYMBOL_CLOSE_MARKER = 51               /* CLOSE_MARKER  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   239

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    69,    70,    74,    73,   113,   114,   117,
     118,   121,   127,   135,   142,   143,   146,   149,   168,   192,
     215,   218,   229,   241,   243,   245,   247,   254,   263,   283,
     303,   308,   315,   316,   317,   321,   323,   346,   363,   380,
     395,   398,   401,   411,   413,   415,   418,   427,   440,   452,
     463,   474,   484,   493,   496,   499
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "BYTE",
  "B", "BOOL", "TRUE", "FALSE", "RETURN", "WHILE", "BREAK", "CONTINUE",
  "SC", "COMMA", "ID", "NUM", "STRING", "ASSIGN", "IF", "ELSE", "OR",
  "AND", "RELOP_EQ", "RELOP_REL", "BINOP_SUM", "BINOP_MUL", "NOT",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "$accept", "Program", "Funcs",
  "FuncDecl", "$@1", "RetType", "Formals", "FormalsList", "FormalsDecl",
  "Statements", "Statement", "Call", "ExpList", "Type", "Exp", "BoolExp",
  "OPEN_MARKER", "WHILE_OPEN_MARKER", "CLOSE_MARKER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
#endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   -90,   -90,   -90,   -90,     6,   -90,    62,     0,   -90,
     -90,   -90,   -13,     5,   -10,   -90,    14,    31,   -90,     5,
     -90,    21,   -90,   136,   163,    23,    44,    57,   -16,    43,
     -90,    94,   -90,    64,    68,   -90,   -90,   -90,    54,    81,
     -90,   167,    72,   -90,    37,   167,   -90,   -90,   167,   142,
     167,   136,   -90,   -90,   -90,    34,   -90,   -90,    65,   201,
     -90,    71,   167,   167,   167,   167,   167,   167,   212,    76,
     179,   -90,    77,    10,    89,   115,   -90,   167,   167,   -90,
     167,   185,    91,    86,    12,   102,   -90,   -90,   -90,   -90,
     167,   -90,   -90,   193,   -90,    98,   136,   -90,   136,   -90,
     -90,   111,   -90,   -90,   167,   -90,   112,    69,   -90,   136,
     -90,   -90
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,    32,    33,    34,     0,     2,     3,     0,     7,
       1,     4,     0,     9,     0,    10,    11,     0,     5,     0,
      13,     0,    12,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    14,     0,     0,    44,    45,    21,    39,    41,
      43,     0,     0,    40,     0,     0,    26,    27,     0,     0,
       0,     0,     6,    15,    20,     0,    42,    46,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    29,     0,    30,     0,     0,    17,     0,     0,    35,
       0,    48,    47,    49,    50,    38,    37,    54,    19,    28,
       0,    53,    55,     0,    51,     0,     0,    31,     0,    16,
      18,     0,    55,    55,     0,    25,    23,    36,    53,     0,
      55,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -90,   -90,   127,   -90,   -90,   -90,   -90,   117,   -90,    87,
     -26,   -23,    47,     4,   -22,   -49,   -84,   -90,   -89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    21,     8,    14,    15,    16,    31,
      32,    43,    72,    34,    68,    69,    51,    96,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    74,    44,    48,     9,    53,    10,    98,    33,     2,
       3,     9,     4,   105,   106,    49,    12,    17,    13,    57,
      59,   111,    18,    17,   109,    90,    70,    73,    33,    19,
      61,    95,    62,    63,    64,    65,    66,    67,    66,    67,
      81,    82,    83,    84,    85,    86,    58,    20,    76,    53,
      23,    60,    33,    77,    45,    93,    94,    61,    46,    62,
      63,    64,    65,    66,    67,     1,     2,     3,    73,     4,
     102,    47,   103,    33,    50,    33,     2,     3,    54,     4,
      35,    36,   107,   110,    55,    49,    33,    56,    38,    39,
      40,    62,    63,    64,    65,    66,    67,    78,     2,     3,
      41,     4,    80,    42,    24,    25,    26,    27,    87,    89,
      28,    65,    66,    67,    29,    64,    65,    66,    67,     2,
       3,    91,     4,    30,    52,    24,    25,    26,    27,    67,
     101,    28,   104,   108,    11,    29,    22,    97,    75,     0,
       2,     3,     0,     4,    30,    92,    24,    25,    26,    27,
      35,    36,    28,     0,     0,     0,    29,     0,    38,    39,
      40,     0,     0,     0,     0,    30,     0,     0,     0,     0,
      41,    35,    36,    42,    71,    35,    36,    37,     0,    38,
      39,    40,     0,    38,    39,    40,     0,     0,     0,     0,
       0,    41,     0,    88,    42,    41,     0,     0,    42,    61,
       0,    62,    63,    64,    65,    66,    67,   100,    63,    64,
      65,    66,    67,    61,     0,    62,    63,    64,    65,    66,
      67,    61,     0,    62,    63,    64,    65,    66,    67,     0,
       0,     0,    61,    79,    62,    63,    64,    65,    66,    67
};

static const yytype_int8 yycheck[] =
{
      23,    50,    24,    19,     0,    31,     0,    91,    31,     4,
       5,     7,     7,   102,   103,    31,    16,    13,    31,    41,
      42,   110,    32,    19,   108,    15,    48,    49,    51,    15,
      20,    80,    22,    23,    24,    25,    26,    27,    26,    27,
      62,    63,    64,    65,    66,    67,    42,    16,    14,    75,
      29,    14,    75,    19,    31,    77,    78,    20,    14,    22,
      23,    24,    25,    26,    27,     3,     4,     5,    90,     7,
      96,    14,    98,    96,    31,    98,     4,     5,    14,     7,
       8,     9,   104,   109,    16,    31,   109,     6,    16,    17,
      18,    22,    23,    24,    25,    26,    27,    32,     4,     5,
      28,     7,    31,    31,    10,    11,    12,    13,    32,    32,
      16,    25,    26,    27,    20,    24,    25,    26,    27,     4,
       5,    32,     7,    29,    30,    10,    11,    12,    13,    27,
      32,    16,    21,    21,     7,    20,    19,    90,    51,    -1,
       4,     5,    -1,     7,    29,    30,    10,    11,    12,    13,
       8,     9,    16,    -1,    -1,    -1,    20,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      28,     8,     9,    31,    32,     8,     9,    14,    -1,    16,
      17,    18,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    14,    31,    28,    -1,    -1,    31,    20,
      -1,    22,    23,    24,    25,    26,    27,    14,    23,    24,
      25,    26,    27,    20,    -1,    22,    23,    24,    25,    26,
      27,    20,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    20,    32,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,    34,    35,    36,    38,    46,
       0,    35,    16,    31,    39,    40,    41,    46,    32,    15,
      16,    37,    40,    29,    10,    11,    12,    13,    16,    20,
      29,    42,    43,    44,    46,     8,     9,    14,    16,    17,
      18,    28,    31,    44,    47,    31,    14,    14,    19,    31,
      31,    49,    30,    43,    14,    16,     6,    47,    46,    47,
      14,    20,    22,    23,    24,    25,    26,    27,    47,    48,
      47,    32,    45,    47,    48,    42,    14,    19,    32,    32,
      31,    47,    47,    47,    47,    47,    47,    32,    14,    32,
      15,    32,    30,    47,    47,    48,    50,    45,    49,    51,
      14,    32,    43,    43,    21,    51,    51,    47,    21,    49,
      43,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    37,    36,    38,    38,    39,
      39,    40,    40,    41,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    44,    44,
      45,    45,    46,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    48,    49,    50,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     9,     1,     1,     0,
       1,     1,     3,     2,     1,     2,     5,     3,     5,     4,
       2,     2,     3,     7,    11,     7,     2,     2,     4,     3,
       1,     3,     1,     1,     1,     3,     7,     3,     3,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     3,     3,
       3,     4,     1,     0,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* Program: Funcs  */
#line 51 "parser.ypp"
                {
			if (yychar == YYEOF) {
						
						
						Symbol sym;
						
						bool found = scopeStacks.tablesStack.findId("main", sym);

						if(!found || !sym.argTypes.empty() || sym.retType != EVOID)
						{
							output::errorMainMissing();
							exit(1);
						}
						scopeStacks.closeScope();
					}
		}
#line 1242 "parser.tab.cpp"
    break;

  case 3: /* Funcs: %empty  */
#line 69 "parser.ypp"
               {}
#line 1248 "parser.tab.cpp"
    break;

  case 4: /* Funcs: FuncDecl Funcs  */
#line 70 "parser.ypp"
                                 {}
#line 1254 "parser.tab.cpp"
    break;

  case 5: /* $@1: %empty  */
#line 74 "parser.ypp"
                        {
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-3])->IdName, sym);
				if(found)
				{
					output::errorDef(yylineno, ((Id*)yyvsp[-3])->IdName);
					exit(1);
				}
				std::vector<TYPE> typesList;
				
				std::vector<string> namesList; 
				
				((ArgumentList*)yyvsp[-1])->generateLists(typesList, namesList);
				sym = Symbol(((Id*)yyvsp[-3])->IdName, typesList, namesList, ((Type*)yyvsp[-4])->type);
				scopeStacks.addSymbol(sym);
				scopeStacks.openScope();

				int offset = -1;
				for(auto it = ((ArgumentList*)(yyvsp[-1]))->arguments.begin(); it!=((ArgumentList*)(yyvsp[-1]))->arguments.end(); it++)
				{
					Symbol tempSym;
					Argument arg = *it;
					bool found = scopeStacks.tablesStack.findId(arg.name, tempSym);
					if(found)
					{
						output::errorDef(yylineno, arg.name);
						exit(1);
					}
					sym = Symbol(arg.name, arg.type, offset);
					
					offset -= 1;
					
					scopeStacks.tablesStack.scopes.back().symTable.push_back(sym);
				}
			}
#line 1294 "parser.tab.cpp"
    break;

  case 6: /* FuncDecl: RetType ID LPAREN Formals RPAREN $@1 LBRACE Statements RBRACE  */
#line 110 "parser.ypp"
                        { scopeStacks.closeScope();}
#line 1300 "parser.tab.cpp"
    break;

  case 7: /* RetType: Type  */
#line 113 "parser.ypp"
               {yyval = yyvsp[0];}
#line 1306 "parser.tab.cpp"
    break;

  case 8: /* RetType: VOID  */
#line 114 "parser.ypp"
                       {yyval = new Type(EVOID);}
#line 1312 "parser.tab.cpp"
    break;

  case 9: /* Formals: %empty  */
#line 117 "parser.ypp"
                 {yyval = new ArgumentList();}
#line 1318 "parser.tab.cpp"
    break;

  case 10: /* Formals: FormalsList  */
#line 118 "parser.ypp"
                              {yyval = yyvsp[0];}
#line 1324 "parser.tab.cpp"
    break;

  case 11: /* FormalsList: FormalsDecl  */
#line 121 "parser.ypp"
                          {
					yyval = new ArgumentList();
					((ArgumentList*)yyval)->addArgument(*((Argument*)yyvsp[0]));
					
					delete yyvsp[0];
					}
#line 1335 "parser.tab.cpp"
    break;

  case 12: /* FormalsList: FormalsDecl COMMA FormalsList  */
#line 127 "parser.ypp"
                                                        {					
					((ArgumentList*)yyvsp[0])->addArgument(*((Argument*)yyvsp[-2]));
					yyval = yyvsp[0];
					
					delete yyvsp[-2];
					}
#line 1346 "parser.tab.cpp"
    break;

  case 13: /* FormalsDecl: Type ID  */
#line 135 "parser.ypp"
                      {yyval = new Argument(((Type*)yyvsp[-1])->type, ((Id*)yyvsp[0])->IdName);
				delete yyvsp[-1];
				
				delete yyvsp[0];
				}
#line 1356 "parser.tab.cpp"
    break;

  case 14: /* Statements: Statement  */
#line 142 "parser.ypp"
                       {}
#line 1362 "parser.tab.cpp"
    break;

  case 15: /* Statements: Statements Statement  */
#line 143 "parser.ypp"
                                               {}
#line 1368 "parser.tab.cpp"
    break;

  case 16: /* Statement: LBRACE OPEN_MARKER Statements RBRACE CLOSE_MARKER  */
#line 146 "parser.ypp"
                                                              {}
#line 1374 "parser.tab.cpp"
    break;

  case 17: /* Statement: Type ID SC  */
#line 149 "parser.ypp"
                                     {				
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-1])->IdName, sym);

				if(found)
				{
					output::errorDef(yylineno, ((Id*)yyvsp[-1])->IdName);
					exit(1);
				}

				sym = Symbol(((Id*)yyvsp[-1])->IdName,((Type*)yyvsp[-2])->type, scopeStacks.offsetsStack.getOffset());
				scopeStacks.addSymbol(sym);
				delete yyvsp[-2];
				
				delete yyvsp[-1];
				}
#line 1395 "parser.tab.cpp"
    break;

  case 18: /* Statement: Type ID ASSIGN Exp SC  */
#line 168 "parser.ypp"
                                                {
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-3])->IdName, sym);
				
				if(found)
				{
					output::errorDef(yylineno, ((Id*)yyvsp[-3])->IdName);
					exit(1);
				}
				
				if(!isLegalAssignment(((Type*)yyvsp[-4])->type, ((Type*)yyvsp[-1])->type)) {
					output::errorMismatch(yylineno);
					exit(1);
				}
				sym = Symbol(((Id*)yyvsp[-3])->IdName,((Type*)yyvsp[-4])->type, scopeStacks.offsetsStack.getOffset());
				scopeStacks.addSymbol(sym);
				delete yyvsp[-4];
				
				delete yyvsp[-3];
				
				delete yyvsp[-1];
				}
#line 1422 "parser.tab.cpp"
    break;

  case 19: /* Statement: ID ASSIGN Exp SC  */
#line 192 "parser.ypp"
                                           {				
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-3])->IdName, sym);

				if(!found || sym.type==EFUNC)
				{
					
					output::errorUndef(yylineno, ((Id*)yyvsp[-3])->IdName);
					exit(1);
				}

				if(!isLegalAssignment(sym.type, ((Type*)yyvsp[-1])->type)) {
					output::errorMismatch(yylineno);
					exit(1);
				}

				
				delete yyvsp[-3];

				delete yyvsp[-1];
				}
#line 1448 "parser.tab.cpp"
    break;

  case 20: /* Statement: Call SC  */
#line 215 "parser.ypp"
                                  {}
#line 1454 "parser.tab.cpp"
    break;

  case 21: /* Statement: RETURN SC  */
#line 218 "parser.ypp"
                                    {				
				if(scopeStacks.tablesStack.lastFuncRetType()!= EVOID)
					{
						output::errorMismatch(yylineno);
						
						exit(1);
					}
				}
#line 1467 "parser.tab.cpp"
    break;

  case 22: /* Statement: RETURN Exp SC  */
#line 229 "parser.ypp"
                                        {
				if(scopeStacks.tablesStack.lastFuncRetType() == EVOID || !isLegalAssignment(scopeStacks.tablesStack.lastFuncRetType(), ((Type*)yyvsp[-1])->type))
				{
					output::errorMismatch(yylineno);
					
					exit(1);
				}
				yyval=yyvsp[-1];
				}
#line 1481 "parser.tab.cpp"
    break;

  case 23: /* Statement: IF LPAREN BoolExp RPAREN OPEN_MARKER Statement CLOSE_MARKER  */
#line 241 "parser.ypp"
                                                                                               {}
#line 1487 "parser.tab.cpp"
    break;

  case 24: /* Statement: IF LPAREN BoolExp RPAREN OPEN_MARKER Statement CLOSE_MARKER ELSE OPEN_MARKER Statement CLOSE_MARKER  */
#line 243 "parser.ypp"
                                                                                                                              {}
#line 1493 "parser.tab.cpp"
    break;

  case 25: /* Statement: WHILE LPAREN BoolExp RPAREN WHILE_OPEN_MARKER Statement CLOSE_MARKER  */
#line 245 "parser.ypp"
                                                                                               {}
#line 1499 "parser.tab.cpp"
    break;

  case 26: /* Statement: BREAK SC  */
#line 247 "parser.ypp"
                                   {
				if(!scopeStacks.isWhileScope())
				{
					output::errorUnexpectedBreak(yylineno);
					exit(1);
				}
			}
#line 1511 "parser.tab.cpp"
    break;

  case 27: /* Statement: CONTINUE SC  */
#line 254 "parser.ypp"
                                      {			
				if(!scopeStacks.isWhileScope())
				{
					output::errorUnexpectedContinue(yylineno);
					exit(1);
				}
			}
#line 1523 "parser.tab.cpp"
    break;

  case 28: /* Call: ID LPAREN ExpList RPAREN  */
#line 263 "parser.ypp"
                                {
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-3])->IdName, sym);
				if(!found)
				{
					output::errorUndefFunc(yylineno, ((Id*)yyvsp[-3])->IdName);
					exit(1);
				}

				if (!sym.checkArgTypes(*((TypeList*)yyvsp[-1]))){
					vector<string> typeList = sym.typeStringList();
					output::errorPrototypeMismatch(yylineno, sym.name, typeList);
					exit(1);
				}

				yyval = new Type(sym.retType);
				delete yyvsp[-3];
				delete yyvsp[-1];
				}
#line 1547 "parser.tab.cpp"
    break;

  case 29: /* Call: ID LPAREN RPAREN  */
#line 283 "parser.ypp"
                           {
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[-2])->IdName, sym);
				if(!found || sym.type != EFUNC)
				{
					output::errorUndefFunc(yylineno, ((Id*)yyvsp[-2])->IdName);
					exit(1);
				}

				if (!sym.argTypes.empty()){
					vector<string> typeList = sym.typeStringList();
					output::errorPrototypeMismatch(yylineno, sym.name, typeList);
					exit(1);
				}

				yyval = new Type(sym.retType);
				delete yyvsp[-2];
				}
#line 1570 "parser.tab.cpp"
    break;

  case 30: /* ExpList: Exp  */
#line 303 "parser.ypp"
              {
			yyval = new TypeList();
			((TypeList*)yyval)->types.push_front(((Type*)yyvsp[0])->type);
			delete yyvsp[0];
		}
#line 1580 "parser.tab.cpp"
    break;

  case 31: /* ExpList: Exp COMMA ExpList  */
#line 308 "parser.ypp"
                                    {
			((TypeList*)yyvsp[0])->types.push_front(((Type*)yyvsp[-2])->type);
			yyval = yyvsp[0];
			delete yyvsp[-2];
			}
#line 1590 "parser.tab.cpp"
    break;

  case 32: /* Type: INT  */
#line 315 "parser.ypp"
              {yyval = new Type(EINT);}
#line 1596 "parser.tab.cpp"
    break;

  case 33: /* Type: BYTE  */
#line 316 "parser.ypp"
                       {yyval = new Type(EBYTE);}
#line 1602 "parser.tab.cpp"
    break;

  case 34: /* Type: BOOL  */
#line 317 "parser.ypp"
                       {yyval = new Type(EBOOL);}
#line 1608 "parser.tab.cpp"
    break;

  case 35: /* Exp: LPAREN Exp RPAREN  */
#line 321 "parser.ypp"
                        {yyval = yyvsp[-1];}
#line 1614 "parser.tab.cpp"
    break;

  case 36: /* Exp: Exp IF LPAREN BoolExp RPAREN ELSE Exp  */
#line 323 "parser.ypp"
                                               {

		
				if (((Type*)yyvsp[-6])->type == EBOOL && ((Type*)yyvsp[0])->type == EBOOL) {
					yyval = new Type(EBOOL);
				}
                else if (((Type*)yyvsp[-6])->type == ESTRING && ((Type*)yyvsp[0])->type == ESTRING) {
					yyval = new Type(ESTRING);
				}
				else if( !((Type*)yyvsp[-6])->isLegalNum() || !((Type*)yyvsp[0])->isLegalNum())
				{
					output::errorMismatch(yylineno);
					exit(1);
				}					
				else if (((Type*)yyvsp[-6])->type == EINT || ((Type*)yyvsp[0])->type == EINT) {
					yyval = new Type(EINT);
				}
				else {
					yyval = new Type(EBYTE);
				}
				delete yyvsp[-6];
				delete yyvsp[0];
			}
#line 1642 "parser.tab.cpp"
    break;

  case 37: /* Exp: Exp BINOP_MUL Exp  */
#line 346 "parser.ypp"
                            {
				if(!((Type*)yyvsp[-2])->isLegalNum() || !((Type*)yyvsp[0])->isLegalNum())
				{
					output::errorMismatch(yylineno);
					exit(1);
				}
				if (((Type*)yyvsp[-2])->type == EINT || ((Type*)yyvsp[0])->type == EINT) {
					yyval = new Type(EINT);
				}
				else {
					yyval = new Type(EBYTE);
				}
				delete yyvsp[-2];
				delete yyvsp[0];
			}
#line 1662 "parser.tab.cpp"
    break;

  case 38: /* Exp: Exp BINOP_SUM Exp  */
#line 363 "parser.ypp"
                            {
				if(!((Type*)yyvsp[-2])->isLegalNum() || !((Type*)yyvsp[0])->isLegalNum())
				{
					output::errorMismatch(yylineno);
					exit(1);
				}
				if (((Type*)yyvsp[-2])->type == EINT || ((Type*)yyvsp[0])->type == EINT) {
					yyval = new Type(EINT);
				}
				else {
					yyval = new Type(EBYTE);
				}
				delete yyvsp[-2];
				delete yyvsp[0];
				}
#line 1682 "parser.tab.cpp"
    break;

  case 39: /* Exp: ID  */
#line 380 "parser.ypp"
             {
				Symbol sym;
				bool found = scopeStacks.tablesStack.findId(((Id*)yyvsp[0])->IdName, sym);

				if(!found || sym.type == EFUNC)
				{
					output::errorUndef(yylineno, ((Id*)yyvsp[0])->IdName);
					exit(1);
				}

				yyval = new Type(sym.type);
				delete yyvsp[0];
			}
#line 1700 "parser.tab.cpp"
    break;

  case 40: /* Exp: Call  */
#line 395 "parser.ypp"
               {yyval = yyvsp[0];}
#line 1706 "parser.tab.cpp"
    break;

  case 41: /* Exp: NUM  */
#line 398 "parser.ypp"
              {yyval = new Type(EINT);}
#line 1712 "parser.tab.cpp"
    break;

  case 42: /* Exp: NUM B  */
#line 401 "parser.ypp"
                {
				if (((Num*)yyvsp[-1])->value > 255){
		
					output::errorByteTooLarge(yylineno, std::to_string(((Num*)yyvsp[-1])->value));
					exit(1);
				}
				yyval = new Type(EBYTE);
			}
#line 1725 "parser.tab.cpp"
    break;

  case 43: /* Exp: STRING  */
#line 411 "parser.ypp"
                 {yyval = new Type(ESTRING);}
#line 1731 "parser.tab.cpp"
    break;

  case 44: /* Exp: TRUE  */
#line 413 "parser.ypp"
               {yyval = new Type(EBOOL);}
#line 1737 "parser.tab.cpp"
    break;

  case 45: /* Exp: FALSE  */
#line 415 "parser.ypp"
                {yyval = new Type(EBOOL);}
#line 1743 "parser.tab.cpp"
    break;

  case 46: /* Exp: NOT Exp  */
#line 418 "parser.ypp"
                  {
				if (((Type*)yyvsp[0])->type != EBOOL) {
					output::errorMismatch(yylineno);
					exit(1);
				}
				yyval = yyvsp[0];
			}
#line 1755 "parser.tab.cpp"
    break;

  case 47: /* Exp: Exp AND Exp  */
#line 427 "parser.ypp"
                      {
				if(((Type*)yyvsp[-2])->type != EBOOL || ((Type*)yyvsp[0])->type != EBOOL)
				{
					output::errorMismatch(yylineno);
					exit(1);
				}

				yyval = new Type(EBOOL);
				delete yyvsp[-2];
				delete yyvsp[0];
			}
#line 1771 "parser.tab.cpp"
    break;

  case 48: /* Exp: Exp OR Exp  */
#line 440 "parser.ypp"
                     {				
				if(((Type*)yyvsp[-2])->type!=EBOOL || ((Type*)yyvsp[0])->type!=EBOOL)
				{
					output::errorMismatch(yylineno);
					exit(1);
				}
				
				yyval = new Type(EBOOL);
				delete yyvsp[-2];
				delete yyvsp[0];	}
#line 1786 "parser.tab.cpp"
    break;

  case 49: /* Exp: Exp RELOP_EQ Exp  */
#line 452 "parser.ypp"
                           {
				if(!(((Type*)yyvsp[-2])->isLegalNum()) || !(((Type*)yyvsp[0])->isLegalNum())) {
					output::errorMismatch(yylineno);
					exit(1);
				}

				yyval = new Type(EBOOL);
				delete yyvsp[-2];
				delete yyvsp[0];	}
#line 1800 "parser.tab.cpp"
    break;

  case 50: /* Exp: Exp RELOP_REL Exp  */
#line 463 "parser.ypp"
                            {
				if(!(((Type*)yyvsp[-2])->isLegalNum()) || !(((Type*)yyvsp[0])->isLegalNum())) {
					output::errorMismatch(yylineno);
					exit(1);
				}

				yyval = new Type(EBOOL);
				delete yyvsp[-2];
				delete yyvsp[0];}
#line 1814 "parser.tab.cpp"
    break;

  case 51: /* Exp: LPAREN Type RPAREN Exp  */
#line 474 "parser.ypp"
                                 {
				if(!((Type*)yyvsp[-2])->isLegalNum() || !((Type*)yyvsp[0])->isLegalNum())
				{
					output::errorMismatch(yylineno);
					exit(1);
				}
				yyval=new Type(((Type*)yyvsp[-2])->type);
				delete yyvsp[0];
				delete yyvsp[-2];}
#line 1828 "parser.tab.cpp"
    break;

  case 52: /* BoolExp: Exp  */
#line 485 "parser.ypp"
                        {
				if (((Type*)yyvsp[0])->type != EBOOL) {
					output::errorMismatch(yylineno);
					exit(1);
				}
				yyval=yyvsp[0];
			}
#line 1840 "parser.tab.cpp"
    break;

  case 53: /* OPEN_MARKER: %empty  */
#line 493 "parser.ypp"
                     {scopeStacks.openScope(scopeStacks.isWhileScope());}
#line 1846 "parser.tab.cpp"
    break;

  case 54: /* WHILE_OPEN_MARKER: %empty  */
#line 496 "parser.ypp"
                           {scopeStacks.openScope(true);}
#line 1852 "parser.tab.cpp"
    break;

  case 55: /* CLOSE_MARKER: %empty  */
#line 499 "parser.ypp"
                      {scopeStacks.closeScope();}
#line 1858 "parser.tab.cpp"
    break;


#line 1862 "parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 501 "parser.ypp"


int main()
{
	yyparse();
}

bool isLegalAssignment(TYPE type1, TYPE type2){
	return ((type1 == EINT && type2 == EBYTE) || (type1 == type2));
}

void yyerror(const char * message)
{
	output::errorSyn(yylineno);
	exit(0);
}


