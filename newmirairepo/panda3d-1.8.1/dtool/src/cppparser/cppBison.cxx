
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         cppyyparse
#define yylex           cppyylex
#define yyerror         cppyyerror
#define yylval          cppyylval
#define yychar          cppyychar
#define yydebug         cppyydebug
#define yynerrs         cppyynerrs
#define yylloc          cppyylloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "cppBison.yxx"


#include "cppBisonDefs.h"
#include "cppParser.h"
#include "cppExpression.h"
#include "cppSimpleType.h"
#include "cppExtensionType.h"
#include "cppStructType.h"
#include "cppEnumType.h"
#include "cppFunctionType.h"
#include "cppTBDType.h"
#include "cppMakeSeq.h"
#include "cppParameterList.h"
#include "cppInstance.h"
#include "cppClassTemplateParameter.h"
#include "cppTemplateParameterList.h"
#include "cppInstanceIdentifier.h"
#include "cppTypedef.h"
#include "cppTypeDeclaration.h"
#include "cppVisibility.h"
#include "cppIdentifier.h"
#include "cppScope.h"
#include "cppTemplateScope.h"
#include "cppNamespace.h"
#include "cppUsing.h"

////////////////////////////////////////////////////////////////////
// Defining the interface to the parser.
////////////////////////////////////////////////////////////////////

CPPScope *current_scope = NULL;
CPPScope *global_scope = NULL;
CPPPreprocessor *current_lexer = NULL;

static CPPStructType *current_struct = NULL; 
static CPPEnumType *current_enum = NULL;
static int current_storage_class = 0;
static CPPType *current_type = NULL;
static CPPExpression *current_expr = NULL;
static int publish_nest_level = 0;
static CPPVisibility publish_previous;
static YYLTYPE publish_loc;

static vector<CPPScope *> last_scopes;
static vector<int> last_storage_classes;
static vector<CPPStructType *> last_structs;

int yyparse();

#define YYERROR_VERBOSE

static void
yyerror(const string &msg) {
  current_lexer->error(msg);
}

static void
yyerror(const string &msg, YYLTYPE &loc) {
  current_lexer->error(msg, loc.first_line, loc.first_column);
}

static void
yywarning(const string &msg, YYLTYPE &loc) {
  current_lexer->warning(msg, loc.first_line, loc.first_column);
}

static int
yylex(YYSTYPE *lval, YYLTYPE *lloc) {
  CPPToken token = current_lexer->get_next_token();
  *lval = token._lval;
  *lloc = token._lloc;
  return token._token;
}

void
parse_cpp(CPPParser *cp) {
  CPPScope *old_scope = current_scope;
  CPPScope *old_global_scope = global_scope;
  CPPPreprocessor *old_lexer = current_lexer;

  current_scope = cp;
  global_scope = cp;
  current_lexer = cp;
  publish_nest_level = 0;
  yyparse();

  if (publish_nest_level != 0) {
    yyerror("Unclosed __begin_publish", publish_loc);
    publish_nest_level = 0;
  }

  current_scope = old_scope;
  global_scope = old_global_scope;
  current_lexer = old_lexer;
    
}

CPPExpression *
parse_const_expr(CPPPreprocessor *pp, CPPScope *new_current_scope,
                 CPPScope *new_global_scope) {
  CPPScope *old_scope = current_scope;
  CPPScope *old_global_scope = global_scope;
  CPPPreprocessor *old_lexer = current_lexer;
  CPPExpression *old_expr = current_expr;

  current_scope = new_current_scope;
  global_scope = new_global_scope;
  current_expr = (CPPExpression *)NULL;
  current_lexer = pp;
  yyparse();

  CPPExpression *result = current_expr;

  current_scope = old_scope;
  global_scope = old_global_scope;
  current_lexer = old_lexer;
  current_expr = old_expr;

  return result;
}

CPPType *
parse_type(CPPPreprocessor *pp, CPPScope *new_current_scope,
           CPPScope *new_global_scope) {
  CPPScope *old_scope = current_scope;
  CPPScope *old_global_scope = global_scope;
  CPPPreprocessor *old_lexer = current_lexer;
  CPPType *old_type = current_type;

  current_scope = new_current_scope;
  global_scope = new_global_scope;
  current_type = (CPPType *)NULL;
  current_lexer = pp;
  yyparse();

  CPPType *result = current_type;
  
  current_scope = old_scope;
  global_scope = old_global_scope;
  current_lexer = old_lexer;
  current_type = old_type;

  return result;
}

static void
push_scope(CPPScope *new_scope) {
  last_scopes.push_back(current_scope);
  if (new_scope != NULL) {
    current_scope = new_scope;
  }
}

static void
pop_scope() {
  assert(!last_scopes.empty());
  current_scope = last_scopes.back();
  last_scopes.pop_back();
}

static void
push_storage_class(int new_storage_class) {
  last_storage_classes.push_back(current_storage_class);
  current_storage_class = new_storage_class;
}

static void
pop_storage_class() {
  assert(!last_storage_classes.empty());
  current_storage_class = last_storage_classes.back();
  last_storage_classes.pop_back();
}

static void
push_struct(CPPStructType *new_struct) {
  last_structs.push_back(current_struct);
  current_struct = new_struct;
}

static void
pop_struct() {
  assert(!last_structs.empty());
  current_struct = last_structs.back();
  last_structs.pop_back();
}



/* Line 189 of yacc.c  */
#line 270 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INTEGER = 259,
     CHAR_TOK = 260,
     STRING = 261,
     SIMPLE_IDENTIFIER = 262,
     IDENTIFIER = 263,
     TYPENAME_IDENTIFIER = 264,
     SCOPING = 265,
     TYPEDEFNAME = 266,
     ELLIPSIS = 267,
     OROR = 268,
     ANDAND = 269,
     EQCOMPARE = 270,
     NECOMPARE = 271,
     LECOMPARE = 272,
     GECOMPARE = 273,
     LSHIFT = 274,
     RSHIFT = 275,
     POINTSAT_STAR = 276,
     DOT_STAR = 277,
     UNARY = 278,
     UNARY_NOT = 279,
     UNARY_NEGATE = 280,
     UNARY_MINUS = 281,
     UNARY_STAR = 282,
     UNARY_REF = 283,
     POINTSAT = 284,
     SCOPE = 285,
     PLUSPLUS = 286,
     MINUSMINUS = 287,
     TIMESEQUAL = 288,
     DIVIDEEQUAL = 289,
     MODEQUAL = 290,
     PLUSEQUAL = 291,
     MINUSEQUAL = 292,
     OREQUAL = 293,
     ANDEQUAL = 294,
     XOREQUAL = 295,
     LSHIFTEQUAL = 296,
     RSHIFTEQUAL = 297,
     TOKENPASTE = 298,
     KW_BEGIN_PUBLISH = 299,
     KW_BLOCKING = 300,
     KW_BOOL = 301,
     KW_CATCH = 302,
     KW_CHAR = 303,
     KW_WCHAR_T = 304,
     KW_CLASS = 305,
     KW_CONST = 306,
     KW_DELETE = 307,
     KW_DOUBLE = 308,
     KW_DYNAMIC_CAST = 309,
     KW_ELSE = 310,
     KW_END_PUBLISH = 311,
     KW_ENUM = 312,
     KW_EXTENSION = 313,
     KW_EXTERN = 314,
     KW_EXPLICIT = 315,
     KW_PUBLISHED = 316,
     KW_FALSE = 317,
     KW_FLOAT = 318,
     KW_FRIEND = 319,
     KW_FOR = 320,
     KW_GOTO = 321,
     KW_IF = 322,
     KW_INLINE = 323,
     KW_INT = 324,
     KW_LONG = 325,
     KW_LONGLONG = 326,
     KW_MAKE_SEQ = 327,
     KW_MUTABLE = 328,
     KW_NAMESPACE = 329,
     KW_NEW = 330,
     KW_OPERATOR = 331,
     KW_PRIVATE = 332,
     KW_PROTECTED = 333,
     KW_PUBLIC = 334,
     KW_REGISTER = 335,
     KW_RETURN = 336,
     KW_SHORT = 337,
     KW_SIGNED = 338,
     KW_SIZEOF = 339,
     KW_STATIC = 340,
     KW_STATIC_CAST = 341,
     KW_STRUCT = 342,
     KW_TEMPLATE = 343,
     KW_THROW = 344,
     KW_TRUE = 345,
     KW_TRY = 346,
     KW_TYPEDEF = 347,
     KW_TYPENAME = 348,
     KW_UNION = 349,
     KW_UNSIGNED = 350,
     KW_USING = 351,
     KW_VIRTUAL = 352,
     KW_VOID = 353,
     KW_VOLATILE = 354,
     KW_WHILE = 355,
     START_CPP = 356,
     START_CONST_EXPR = 357,
     START_TYPE = 358
   };
#endif
/* Tokens.  */
#define REAL 258
#define INTEGER 259
#define CHAR_TOK 260
#define STRING 261
#define SIMPLE_IDENTIFIER 262
#define IDENTIFIER 263
#define TYPENAME_IDENTIFIER 264
#define SCOPING 265
#define TYPEDEFNAME 266
#define ELLIPSIS 267
#define OROR 268
#define ANDAND 269
#define EQCOMPARE 270
#define NECOMPARE 271
#define LECOMPARE 272
#define GECOMPARE 273
#define LSHIFT 274
#define RSHIFT 275
#define POINTSAT_STAR 276
#define DOT_STAR 277
#define UNARY 278
#define UNARY_NOT 279
#define UNARY_NEGATE 280
#define UNARY_MINUS 281
#define UNARY_STAR 282
#define UNARY_REF 283
#define POINTSAT 284
#define SCOPE 285
#define PLUSPLUS 286
#define MINUSMINUS 287
#define TIMESEQUAL 288
#define DIVIDEEQUAL 289
#define MODEQUAL 290
#define PLUSEQUAL 291
#define MINUSEQUAL 292
#define OREQUAL 293
#define ANDEQUAL 294
#define XOREQUAL 295
#define LSHIFTEQUAL 296
#define RSHIFTEQUAL 297
#define TOKENPASTE 298
#define KW_BEGIN_PUBLISH 299
#define KW_BLOCKING 300
#define KW_BOOL 301
#define KW_CATCH 302
#define KW_CHAR 303
#define KW_WCHAR_T 304
#define KW_CLASS 305
#define KW_CONST 306
#define KW_DELETE 307
#define KW_DOUBLE 308
#define KW_DYNAMIC_CAST 309
#define KW_ELSE 310
#define KW_END_PUBLISH 311
#define KW_ENUM 312
#define KW_EXTENSION 313
#define KW_EXTERN 314
#define KW_EXPLICIT 315
#define KW_PUBLISHED 316
#define KW_FALSE 317
#define KW_FLOAT 318
#define KW_FRIEND 319
#define KW_FOR 320
#define KW_GOTO 321
#define KW_IF 322
#define KW_INLINE 323
#define KW_INT 324
#define KW_LONG 325
#define KW_LONGLONG 326
#define KW_MAKE_SEQ 327
#define KW_MUTABLE 328
#define KW_NAMESPACE 329
#define KW_NEW 330
#define KW_OPERATOR 331
#define KW_PRIVATE 332
#define KW_PROTECTED 333
#define KW_PUBLIC 334
#define KW_REGISTER 335
#define KW_RETURN 336
#define KW_SHORT 337
#define KW_SIGNED 338
#define KW_SIZEOF 339
#define KW_STATIC 340
#define KW_STATIC_CAST 341
#define KW_STRUCT 342
#define KW_TEMPLATE 343
#define KW_THROW 344
#define KW_TRUE 345
#define KW_TRY 346
#define KW_TYPEDEF 347
#define KW_TYPENAME 348
#define KW_UNION 349
#define KW_UNSIGNED 350
#define KW_USING 351
#define KW_VIRTUAL 352
#define KW_VOID 353
#define KW_VOLATILE 354
#define KW_WHILE 355
#define START_CPP 356
#define START_CONST_EXPR 357
#define START_TYPE 358




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 530 "y.tab.c"

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
# if YYENABLE_NLS
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  534
/* YYNRULES -- Number of states.  */
#define YYNSTATES  958

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,     2,     2,   119,   112,     2,
     122,   124,   117,   115,   105,   116,   121,   118,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   106,
     113,   108,   114,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   123,     2,   127,   111,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,   110,   125,   120,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    17,    20,    22,
      26,    31,    32,    38,    40,    42,    44,    46,    48,    50,
      53,    55,    57,    60,    63,    66,    69,    79,    80,    84,
      86,    89,    93,    96,    99,   102,   105,   108,   111,   114,
     117,   120,   122,   126,   130,   131,   136,   137,   143,   146,
     151,   154,   159,   160,   165,   166,   172,   176,   179,   184,
     187,   192,   193,   200,   201,   208,   209,   217,   218,   229,
     230,   242,   243,   252,   253,   263,   265,   267,   269,   274,
     280,   282,   284,   286,   288,   290,   292,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   312,   314,   316,   318,
     320,   322,   324,   326,   328,   330,   332,   334,   336,   338,
     340,   342,   344,   346,   348,   350,   353,   356,   358,   360,
     362,   364,   365,   372,   374,   376,   378,   382,   385,   390,
     394,   399,   401,   403,   405,   408,   410,   413,   416,   419,
     422,   426,   431,   435,   439,   440,   447,   449,   451,   453,
     457,   460,   462,   466,   468,   471,   473,   476,   478,   482,
     488,   492,   497,   499,   501,   504,   506,   510,   514,   520,
     524,   528,   533,   535,   537,   539,   541,   544,   547,   550,
     554,   559,   561,   563,   565,   568,   571,   574,   578,   583,
     591,   595,   597,   600,   603,   606,   610,   615,   623,   625,
     627,   630,   632,   634,   636,   638,   641,   644,   646,   648,
     651,   653,   655,   657,   659,   662,   665,   667,   669,   672,
     675,   678,   681,   685,   686,   692,   693,   701,   703,   705,
     708,   712,   715,   718,   721,   725,   729,   733,   737,   741,
     745,   746,   752,   753,   760,   762,   764,   767,   769,   773,
     777,   783,   785,   787,   789,   791,   792,   799,   804,   807,
     811,   813,   815,   817,   819,   821,   823,   825,   827,   829,
     831,   833,   835,   838,   841,   844,   847,   849,   852,   854,
     858,   861,   863,   864,   867,   869,   872,   874,   876,   878,
     880,   882,   884,   886,   888,   890,   892,   894,   896,   898,
     900,   902,   904,   906,   908,   910,   912,   914,   916,   918,
     920,   922,   924,   926,   928,   930,   932,   934,   936,   938,
     940,   942,   944,   946,   948,   950,   952,   954,   956,   958,
     960,   962,   964,   966,   968,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   990,   992,   994,   996,   998,
    1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,
    1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,  1036,  1038,
    1040,  1042,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,
    1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,  1078,
    1080,  1084,  1086,  1088,  1090,  1092,  1094,  1098,  1100,  1105,
    1113,  1121,  1126,  1129,  1132,  1135,  1138,  1141,  1145,  1149,
    1153,  1157,  1161,  1165,  1169,  1173,  1177,  1181,  1185,  1189,
    1193,  1197,  1201,  1205,  1211,  1216,  1221,  1225,  1229,  1233,
    1237,  1239,  1244,  1252,  1260,  1265,  1270,  1275,  1280,  1285,
    1290,  1295,  1300,  1305,  1310,  1315,  1320,  1323,  1329,  1332,
    1335,  1338,  1341,  1344,  1348,  1352,  1356,  1360,  1364,  1368,
    1372,  1376,  1380,  1384,  1388,  1392,  1396,  1400,  1404,  1408,
    1412,  1416,  1422,  1427,  1432,  1436,  1440,  1444,  1448,  1450,
    1452,  1454,  1456,  1458,  1460,  1462,  1464,  1469,  1477,  1485,
    1490,  1493,  1499,  1502,  1505,  1508,  1511,  1515,  1519,  1523,
    1527,  1531,  1535,  1539,  1543,  1547,  1551,  1555,  1559,  1563,
    1567,  1571,  1575,  1579,  1583,  1589,  1594,  1599,  1603,  1607,
    1611,  1615,  1617,  1619,  1621,  1623,  1625,  1627,  1629,  1632,
    1635,  1637,  1639,  1641,  1644
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     129,     0,    -1,   101,   130,    -1,   102,   214,    -1,   103,
     183,    -1,   221,    -1,   130,   106,    -1,   130,   135,    -1,
     132,    -1,   131,   105,   132,    -1,   219,   122,   211,   124,
      -1,    -1,   138,   104,   134,   130,   125,    -1,   139,    -1,
     161,    -1,   133,    -1,   199,    -1,   201,    -1,   136,    -1,
      92,   145,    -1,    44,    -1,    56,    -1,    61,   107,    -1,
      79,   107,    -1,    78,   107,    -1,    77,   107,    -1,    72,
     122,   219,   105,   219,   105,   219,   124,   106,    -1,    -1,
      64,   137,   135,    -1,   221,    -1,   138,    59,    -1,   138,
      59,   220,    -1,   138,    85,    -1,   138,    68,    -1,   138,
      97,    -1,   138,    60,    -1,   138,    99,    -1,   138,    73,
      -1,   138,    80,    -1,   138,    45,    -1,   138,    58,    -1,
     140,    -1,   138,   181,   106,    -1,   138,   150,   173,    -1,
      -1,   138,   181,   141,   143,    -1,    -1,   138,    51,   180,
     142,   144,    -1,   167,   173,    -1,   167,   172,   105,   143,
      -1,   167,   173,    -1,   167,   172,   105,   144,    -1,    -1,
     138,   181,   146,   148,    -1,    -1,   138,    51,   180,   147,
     149,    -1,   138,   150,   173,    -1,   167,   173,    -1,   167,
     172,   105,   148,    -1,   167,   173,    -1,   167,   172,   105,
     149,    -1,    -1,     8,   122,   151,   169,   124,   158,    -1,
      -1,     9,   122,   152,   169,   124,   158,    -1,    -1,   120,
     219,   122,   153,   169,   124,   158,    -1,    -1,     9,   122,
     117,   167,   124,   122,   154,   169,   124,   158,    -1,    -1,
       9,   122,    10,   117,   167,   124,   122,   155,   169,   124,
     158,    -1,    -1,    76,   180,   177,   122,   156,   169,   124,
     158,    -1,    -1,    76,    51,   180,   177,   122,   157,   169,
     124,   158,    -1,     8,    -1,   221,    -1,    51,    -1,   158,
      89,   122,   124,    -1,   158,    89,   122,   219,   124,    -1,
     126,    -1,   120,    -1,   117,    -1,   118,    -1,   119,    -1,
     115,    -1,   116,    -1,   110,    -1,   112,    -1,   111,    -1,
      13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,   113,    -1,   114,    -1,    19,    -1,    20,    -1,
     108,    -1,   105,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    29,    -1,
     123,   127,    -1,   122,   124,    -1,    75,    -1,    52,    -1,
     139,    -1,   161,    -1,    -1,    88,   162,   113,   163,   114,
     160,    -1,   221,    -1,   164,    -1,   165,    -1,   164,   105,
     165,    -1,    50,   219,    -1,    50,   219,   108,   183,    -1,
     166,   178,   171,    -1,    51,   166,   178,   171,    -1,   202,
      -1,     8,    -1,     9,    -1,    93,   219,    -1,   219,    -1,
      76,   159,    -1,    51,   167,    -1,   117,   167,    -1,   112,
     167,    -1,    10,   117,   167,    -1,   167,   123,   210,   127,
      -1,   167,   107,     4,    -1,   122,   167,   124,    -1,    -1,
     167,   122,   168,   169,   124,   158,    -1,   221,    -1,    12,
      -1,   170,    -1,   170,   105,    12,    -1,   170,    12,    -1,
     176,    -1,   170,   105,   176,    -1,   221,    -1,   108,   213,
      -1,   221,    -1,   108,   214,    -1,   106,    -1,   104,   206,
     125,    -1,   107,   131,   104,   206,   125,    -1,   108,   214,
     106,    -1,   108,   104,   174,   125,    -1,   221,    -1,   175,
      -1,   175,   105,    -1,   214,    -1,   104,   174,   125,    -1,
     175,   105,   214,    -1,   175,   105,   104,   174,   125,    -1,
     180,   178,   172,    -1,     8,   178,   172,    -1,    51,   180,
     178,   172,    -1,   216,    -1,   221,    -1,     8,    -1,     9,
      -1,    51,   177,    -1,   117,   177,    -1,   112,   177,    -1,
      10,   117,   177,    -1,   177,   123,   210,   127,    -1,   221,
      -1,     8,    -1,     9,    -1,    51,   178,    -1,   117,   178,
      -1,   112,   178,    -1,    10,   117,   178,    -1,   178,   123,
     210,   127,    -1,   122,   178,   124,   122,   169,   124,   158,
      -1,   122,   178,   124,    -1,   221,    -1,    51,   179,    -1,
     117,   179,    -1,   112,   179,    -1,    10,   117,   179,    -1,
     179,   123,   210,   127,    -1,   122,   179,   124,   122,   169,
     124,   158,    -1,   202,    -1,     9,    -1,    93,   219,    -1,
     184,    -1,   186,    -1,   191,    -1,   193,    -1,   198,   219,
      -1,   197,   219,    -1,   202,    -1,     9,    -1,    93,   219,
      -1,   184,    -1,   186,    -1,   191,    -1,   193,    -1,   198,
     219,    -1,   197,   219,    -1,   202,    -1,     9,    -1,    93,
     219,    -1,   198,   219,    -1,   197,   219,    -1,   180,   179,
      -1,    51,   180,   179,    -1,    -1,   198,   104,   185,   130,
     125,    -1,    -1,   198,   219,   187,   188,   104,   130,   125,
      -1,   221,    -1,   189,    -1,   107,   190,    -1,   189,   105,
     190,    -1,    79,   218,    -1,    78,   218,    -1,    77,   218,
      -1,    97,    79,   218,    -1,    97,    78,   218,    -1,    97,
      77,   218,    -1,    79,    97,   218,    -1,    78,    97,   218,
      -1,    77,    97,   218,    -1,    -1,   197,   104,   192,   195,
     125,    -1,    -1,   197,   219,   104,   194,   195,   125,    -1,
     221,    -1,   196,    -1,   196,   105,    -1,   219,    -1,   219,
     108,   214,    -1,   196,   105,   219,    -1,   196,   105,   219,
     108,   214,    -1,    57,    -1,    50,    -1,    87,    -1,    94,
      -1,    -1,    74,   219,   104,   200,   130,   125,    -1,    74,
     104,   130,   125,    -1,    96,   219,    -1,    96,    74,   219,
      -1,   203,    -1,   204,    -1,   205,    -1,    46,    -1,    48,
      -1,    49,    -1,    82,    -1,    70,    -1,    71,    -1,    95,
      -1,    83,    -1,    69,    -1,    82,   203,    -1,    70,   203,
      -1,    95,   203,    -1,    83,   203,    -1,    63,    -1,    70,
      63,    -1,    53,    -1,    70,    70,    63,    -1,    70,    53,
      -1,    98,    -1,    -1,   207,   208,    -1,   221,    -1,   208,
     209,    -1,     3,    -1,     4,    -1,     6,    -1,     5,    -1,
       8,    -1,     9,    -1,    10,    -1,     7,    -1,    12,    -1,
      13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    57,    -1,
      59,    -1,    60,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    73,    -1,    75,    -1,    77,    -1,    78,    -1,
      79,    -1,    61,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    95,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,    43,    -1,    76,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   112,    -1,   110,    -1,   111,    -1,
     126,    -1,   120,    -1,   108,    -1,   119,    -1,   113,    -1,
     114,    -1,   122,    -1,   124,    -1,   121,    -1,   105,    -1,
     106,    -1,   107,    -1,   123,    -1,   127,    -1,   109,    -1,
     104,   208,   125,    -1,   221,    -1,   214,    -1,   221,    -1,
     212,    -1,   214,    -1,   212,   105,   214,    -1,   215,    -1,
     122,   183,   124,   213,    -1,    86,   113,   183,   114,   122,
     212,   124,    -1,    54,   113,   183,   114,   122,   212,   124,
      -1,    84,   122,   183,   124,    -1,   126,   213,    -1,   120,
     213,    -1,   116,   213,    -1,   117,   213,    -1,   112,   213,
      -1,   213,   117,   213,    -1,   213,   118,   213,    -1,   213,
     119,   213,    -1,   213,   115,   213,    -1,   213,   116,   213,
      -1,   213,   110,   213,    -1,   213,   111,   213,    -1,   213,
     112,   213,    -1,   213,    13,   213,    -1,   213,    14,   213,
      -1,   213,    15,   213,    -1,   213,    16,   213,    -1,   213,
      17,   213,    -1,   213,    18,   213,    -1,   213,    19,   213,
      -1,   213,    20,   213,    -1,   213,   109,   213,   107,   213,
      -1,   213,   123,   214,   127,    -1,   213,   122,   212,   124,
      -1,   213,   122,   124,    -1,   213,   121,   213,    -1,   213,
      29,   213,    -1,   122,   212,   124,    -1,   215,    -1,   122,
     183,   124,   214,    -1,    86,   113,   183,   114,   122,   212,
     124,    -1,    54,   113,   183,   114,   122,   212,   124,    -1,
       9,   122,   211,   124,    -1,    69,   122,   211,   124,    -1,
      48,   122,   211,   124,    -1,    49,   122,   211,   124,    -1,
      46,   122,   211,   124,    -1,    82,   122,   211,   124,    -1,
      70,   122,   211,   124,    -1,    95,   122,   211,   124,    -1,
      83,   122,   211,   124,    -1,    63,   122,   211,   124,    -1,
      53,   122,   211,   124,    -1,    84,   122,   183,   124,    -1,
      75,   182,    -1,    75,   182,   122,   211,   124,    -1,   126,
     214,    -1,   120,   214,    -1,   116,   214,    -1,   117,   214,
      -1,   112,   214,    -1,   214,   117,   214,    -1,   214,   118,
     214,    -1,   214,   119,   214,    -1,   214,   115,   214,    -1,
     214,   116,   214,    -1,   214,   110,   214,    -1,   214,   111,
     214,    -1,   214,   112,   214,    -1,   214,    13,   214,    -1,
     214,    14,   214,    -1,   214,    15,   214,    -1,   214,    16,
     214,    -1,   214,    17,   214,    -1,   214,    18,   214,    -1,
     214,   113,   214,    -1,   214,   114,   214,    -1,   214,    19,
     214,    -1,   214,    20,   214,    -1,   214,   109,   214,   107,
     214,    -1,   214,   123,   214,   127,    -1,   214,   122,   212,
     124,    -1,   214,   122,   124,    -1,   214,   121,   214,    -1,
     214,    29,   214,    -1,   122,   212,   124,    -1,     4,    -1,
      90,    -1,    62,    -1,     5,    -1,     3,    -1,   220,    -1,
       8,    -1,   217,    -1,   122,   183,   124,   214,    -1,    86,
     113,   183,   114,   122,   212,   124,    -1,    54,   113,   183,
     114,   122,   212,   124,    -1,    84,   122,   183,   124,    -1,
      75,   182,    -1,    75,   182,   122,   211,   124,    -1,   126,
     214,    -1,   120,   214,    -1,   116,   214,    -1,   112,   214,
      -1,   216,   117,   214,    -1,   216,   118,   214,    -1,   216,
     119,   214,    -1,   216,   115,   214,    -1,   216,   116,   214,
      -1,   216,   110,   214,    -1,   216,   111,   214,    -1,   216,
     112,   214,    -1,   216,    13,   214,    -1,   216,    14,   214,
      -1,   216,    15,   214,    -1,   216,    16,   214,    -1,   216,
      17,   214,    -1,   216,    18,   214,    -1,   216,   113,   214,
      -1,   216,   114,   214,    -1,   216,    19,   214,    -1,   216,
      20,   214,    -1,   216,   109,   214,   107,   214,    -1,   216,
     123,   214,   127,    -1,   216,   122,   212,   124,    -1,   216,
     122,   124,    -1,   216,   121,   214,    -1,   216,    29,   214,
      -1,   122,   212,   124,    -1,     4,    -1,    90,    -1,    62,
      -1,     5,    -1,     3,    -1,   220,    -1,   219,    -1,   198,
     219,    -1,    93,   219,    -1,     8,    -1,     9,    -1,     6,
      -1,   220,     6,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   382,   382,   383,   387,   394,   395,   396,   400,   401,
     405,   418,   417,   429,   430,   431,   432,   433,   434,   435,
     436,   449,   458,   462,   470,   474,   478,   487,   486,   501,
     505,   509,   520,   524,   528,   532,   536,   540,   544,   548,
     552,   559,   563,   572,   584,   583,   599,   598,   616,   624,
     635,   644,   658,   657,   673,   672,   683,   697,   705,   716,
     725,   740,   739,   762,   761,   786,   785,   816,   815,   831,
     830,   848,   847,   879,   878,   904,   917,   921,   925,   929,
     936,   940,   944,   948,   952,   956,   960,   964,   968,   972,
     976,   980,   984,   988,   992,   996,  1000,  1004,  1008,  1012,
    1016,  1020,  1024,  1028,  1032,  1036,  1040,  1044,  1048,  1052,
    1056,  1060,  1064,  1068,  1072,  1076,  1080,  1084,  1088,  1095,
    1096,  1101,  1100,  1111,  1112,  1116,  1122,  1131,  1135,  1139,
    1145,  1155,  1159,  1164,  1169,  1177,  1181,  1195,  1200,  1205,
    1210,  1215,  1220,  1225,  1231,  1230,  1252,  1256,  1261,  1265,
    1270,  1278,  1283,  1291,  1295,  1302,  1306,  1313,  1317,  1321,
    1325,  1329,  1336,  1337,  1338,  1342,  1345,  1346,  1347,  1351,
    1356,  1364,  1370,  1380,  1384,  1388,  1392,  1397,  1402,  1407,
    1412,  1420,  1424,  1428,  1432,  1437,  1442,  1447,  1452,  1457,
    1463,  1471,  1475,  1480,  1485,  1490,  1495,  1500,  1509,  1513,
    1518,  1522,  1526,  1530,  1534,  1538,  1554,  1573,  1577,  1582,
    1586,  1590,  1594,  1598,  1602,  1618,  1637,  1641,  1646,  1650,
    1666,  1685,  1691,  1702,  1701,  1726,  1725,  1755,  1756,  1760,
    1761,  1765,  1769,  1773,  1777,  1781,  1785,  1789,  1793,  1797,
    1805,  1804,  1817,  1816,  1828,  1829,  1830,  1834,  1839,  1844,
    1849,  1857,  1864,  1868,  1872,  1880,  1879,  1901,  1905,  1911,
    1920,  1921,  1922,  1926,  1930,  1934,  1938,  1943,  1948,  1953,
    1958,  1963,  1967,  1972,  1981,  1986,  1994,  1998,  2003,  2007,
    2012,  2020,  2030,  2030,  2040,  2041,  2045,  2048,  2051,  2054,
    2057,  2060,  2063,  2066,  2069,  2069,  2069,  2070,  2070,  2070,
    2070,  2071,  2071,  2071,  2071,  2071,  2072,  2072,  2072,  2073,
    2073,  2073,  2073,  2073,  2074,  2074,  2074,  2074,  2074,  2075,
    2075,  2075,  2075,  2075,  2075,  2076,  2076,  2076,  2076,  2076,
    2077,  2077,  2077,  2078,  2078,  2078,  2078,  2079,  2079,  2079,
    2080,  2080,  2080,  2080,  2080,  2081,  2081,  2081,  2081,  2082,
    2082,  2082,  2082,  2082,  2083,  2083,  2083,  2083,  2083,  2083,
    2084,  2084,  2084,  2084,  2084,  2085,  2085,  2086,  2089,  2089,
    2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,  2090,
    2090,  2090,  2090,  2090,  2090,  2090,  2090,  2090,  2090,  2091,
    2091,  2095,  2099,  2106,  2110,  2117,  2121,  2128,  2132,  2136,
    2140,  2144,  2148,  2152,  2156,  2168,  2172,  2176,  2180,  2184,
    2188,  2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,  2224,
    2228,  2232,  2236,  2240,  2244,  2248,  2252,  2256,  2260,  2264,
    2272,  2276,  2280,  2284,  2288,  2295,  2301,  2307,  2313,  2319,
    2326,  2333,  2340,  2347,  2353,  2359,  2363,  2367,  2371,  2375,
    2379,  2391,  2395,  2399,  2403,  2407,  2411,  2415,  2419,  2423,
    2427,  2431,  2435,  2439,  2443,  2447,  2451,  2455,  2459,  2463,
    2467,  2471,  2475,  2479,  2483,  2487,  2491,  2495,  2502,  2506,
    2510,  2514,  2518,  2522,  2526,  2540,  2544,  2548,  2552,  2556,
    2560,  2564,  2568,  2572,  2576,  2588,  2592,  2596,  2600,  2604,
    2608,  2612,  2616,  2620,  2624,  2628,  2632,  2636,  2640,  2644,
    2648,  2652,  2656,  2660,  2664,  2668,  2672,  2676,  2680,  2684,
    2688,  2695,  2699,  2703,  2707,  2711,  2715,  2722,  2730,  2738,
    2761,  2765,  2772,  2776,  2782
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INTEGER", "CHAR_TOK", "STRING",
  "SIMPLE_IDENTIFIER", "IDENTIFIER", "TYPENAME_IDENTIFIER", "SCOPING",
  "TYPEDEFNAME", "ELLIPSIS", "OROR", "ANDAND", "EQCOMPARE", "NECOMPARE",
  "LECOMPARE", "GECOMPARE", "LSHIFT", "RSHIFT", "POINTSAT_STAR",
  "DOT_STAR", "UNARY", "UNARY_NOT", "UNARY_NEGATE", "UNARY_MINUS",
  "UNARY_STAR", "UNARY_REF", "POINTSAT", "SCOPE", "PLUSPLUS", "MINUSMINUS",
  "TIMESEQUAL", "DIVIDEEQUAL", "MODEQUAL", "PLUSEQUAL", "MINUSEQUAL",
  "OREQUAL", "ANDEQUAL", "XOREQUAL", "LSHIFTEQUAL", "RSHIFTEQUAL",
  "TOKENPASTE", "KW_BEGIN_PUBLISH", "KW_BLOCKING", "KW_BOOL", "KW_CATCH",
  "KW_CHAR", "KW_WCHAR_T", "KW_CLASS", "KW_CONST", "KW_DELETE",
  "KW_DOUBLE", "KW_DYNAMIC_CAST", "KW_ELSE", "KW_END_PUBLISH", "KW_ENUM",
  "KW_EXTENSION", "KW_EXTERN", "KW_EXPLICIT", "KW_PUBLISHED", "KW_FALSE",
  "KW_FLOAT", "KW_FRIEND", "KW_FOR", "KW_GOTO", "KW_IF", "KW_INLINE",
  "KW_INT", "KW_LONG", "KW_LONGLONG", "KW_MAKE_SEQ", "KW_MUTABLE",
  "KW_NAMESPACE", "KW_NEW", "KW_OPERATOR", "KW_PRIVATE", "KW_PROTECTED",
  "KW_PUBLIC", "KW_REGISTER", "KW_RETURN", "KW_SHORT", "KW_SIGNED",
  "KW_SIZEOF", "KW_STATIC", "KW_STATIC_CAST", "KW_STRUCT", "KW_TEMPLATE",
  "KW_THROW", "KW_TRUE", "KW_TRY", "KW_TYPEDEF", "KW_TYPENAME", "KW_UNION",
  "KW_UNSIGNED", "KW_USING", "KW_VIRTUAL", "KW_VOID", "KW_VOLATILE",
  "KW_WHILE", "START_CPP", "START_CONST_EXPR", "START_TYPE", "'{'", "','",
  "';'", "':'", "'='", "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'~'", "'.'", "'('", "'['", "')'", "'}'",
  "'!'", "']'", "$accept", "grammar", "cpp", "constructor_inits",
  "constructor_init", "extern_c", "$@1", "declaration",
  "friend_declaration", "$@2", "storage_class", "type_like_declaration",
  "multiple_var_declaration", "$@3", "$@4",
  "multiple_instance_identifiers", "multiple_const_instance_identifiers",
  "typedef_declaration", "$@5", "$@6", "typedef_instance_identifiers",
  "typedef_const_instance_identifiers", "function_prototype", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "function_post",
  "function_operator", "more_template_declaration", "template_declaration",
  "$@14", "template_formal_parameters",
  "template_nonempty_formal_parameters", "template_formal_parameter",
  "template_formal_parameter_type", "instance_identifier", "$@15",
  "formal_parameter_list", "formal_parameters",
  "template_parameter_maybe_initialize", "maybe_initialize",
  "maybe_initialize_or_function_body", "structure_init",
  "structure_init_body", "formal_parameter",
  "not_paren_formal_parameter_identifier", "formal_parameter_identifier",
  "empty_instance_identifier", "type", "type_decl", "predefined_type",
  "full_type", "anonymous_struct", "$@16", "named_struct", "$@17",
  "maybe_class_derivation", "class_derivation", "base_specification",
  "anonymous_enum", "$@18", "named_enum", "$@19", "enum_body",
  "enum_body_no_trailing_comma", "enum_keyword", "struct_keyword",
  "namespace_declaration", "$@20", "using_declaration", "simple_type",
  "simple_int_type", "simple_float_type", "simple_void_type", "code",
  "$@21", "code_block", "element", "optional_const_expr",
  "optional_const_expr_comma", "const_expr_comma",
  "no_angle_bracket_const_expr", "const_expr", "const_operand",
  "formal_const_expr", "formal_const_operand", "class_derivation_name",
  "name", "string", "empty", 0
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
     355,   356,   357,   358,   123,    44,    59,    58,    61,    63,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
     126,    46,    40,    91,    41,   125,    33,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   129,   129,   130,   130,   130,   131,   131,
     132,   134,   133,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   137,   136,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   141,   140,   142,   140,   143,   143,
     144,   144,   146,   145,   147,   145,   145,   148,   148,   149,
     149,   151,   150,   152,   150,   153,   150,   154,   150,   155,
     150,   156,   150,   157,   150,   150,   158,   158,   158,   158,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   160,
     160,   162,   161,   163,   163,   164,   164,   165,   165,   165,
     165,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   167,   169,   169,   169,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     173,   173,   174,   174,   174,   175,   175,   175,   175,   176,
     176,   176,   176,   177,   177,   177,   177,   177,   177,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   182,   182,   182,   182,
     182,   183,   183,   185,   184,   187,   186,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     192,   191,   194,   193,   195,   195,   195,   196,   196,   196,
     196,   197,   198,   198,   198,   200,   199,   199,   201,   201,
     202,   202,   202,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   204,   204,   204,   204,
     204,   205,   207,   206,   208,   208,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     215,   215,   215,   215,   215,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   217,   217,   217,   217,   217,   217,   218,   218,   218,
     219,   219,   220,   220,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     2,     1,     3,
       4,     0,     5,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     2,     2,     2,     9,     0,     3,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     3,     0,     4,     0,     5,     2,     4,
       2,     4,     0,     4,     0,     5,     3,     2,     4,     2,
       4,     0,     6,     0,     6,     0,     7,     0,    10,     0,
      11,     0,     8,     0,     9,     1,     1,     1,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     0,     6,     1,     1,     1,     3,     2,     4,     3,
       4,     1,     1,     1,     2,     1,     2,     2,     2,     2,
       3,     4,     3,     3,     0,     6,     1,     1,     1,     3,
       2,     1,     3,     1,     2,     1,     2,     1,     3,     5,
       3,     4,     1,     1,     2,     1,     3,     3,     5,     3,
       3,     4,     1,     1,     1,     1,     2,     2,     2,     3,
       4,     1,     1,     1,     2,     2,     2,     3,     4,     7,
       3,     1,     2,     2,     2,     3,     4,     7,     1,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       2,     2,     3,     0,     5,     0,     7,     1,     1,     2,
       3,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       0,     5,     0,     6,     1,     1,     2,     1,     3,     3,
       5,     1,     1,     1,     1,     0,     6,     4,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     2,     1,     3,
       2,     1,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     4,     7,
       7,     4,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     4,     4,     3,     3,     3,     3,
       1,     4,     7,     7,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     5,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     4,     4,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     7,     7,     4,
       2,     5,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     4,     4,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   534,     0,     0,     0,   534,     5,   482,   478,   481,
     532,   484,     0,     0,     0,     0,     0,     0,   480,     0,
       0,     0,     0,     0,     0,     0,     0,   479,     0,     0,
       0,     0,     0,     0,     0,     3,   430,   483,   199,   263,
     264,   265,   252,     0,   278,   251,   276,   271,   267,   268,
     266,   270,   253,     0,   254,   269,   281,   534,     4,   201,
     202,   203,   204,     0,     0,   198,   260,   261,   262,     1,
      20,    21,     0,    27,     0,     0,     0,     0,     0,   121,
     534,     0,     6,    15,     7,    18,     0,    13,    41,    14,
      16,    17,    29,   534,   534,   534,   534,   534,     0,   534,
     534,   534,   217,     0,   446,     0,     0,   216,   534,   534,
       0,     0,   534,   452,   450,   451,   449,   199,   263,   264,
     265,   278,   276,   271,   267,   266,   270,   269,     0,     0,
     395,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   533,   534,   280,   277,   267,
     273,   267,   272,   275,   530,   531,   200,   274,     0,   534,
     534,   534,   534,   221,   191,   240,   206,   223,   205,    22,
     534,     0,   534,     0,    25,    24,    23,     0,     0,    19,
       0,   258,    75,   208,    39,     0,    40,    30,    35,    33,
      37,     0,    38,    32,     0,    34,    36,    11,     0,     0,
      44,   210,   211,   212,   213,     0,     0,   207,     0,   394,
     393,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     534,   220,   219,     0,     0,     0,     0,     0,     0,     0,
     477,   461,   462,   463,   464,   465,   466,   469,   470,   476,
       0,   458,   459,   460,   467,   468,   456,   457,   453,   454,
     455,   475,   474,     0,     0,   222,   279,   534,   192,   194,
     193,     0,   534,   534,   242,   534,   534,    28,     0,   534,
     255,   534,     0,     0,    52,   259,    61,    63,    46,    31,
       0,   534,   209,   534,     0,   282,   157,     0,     0,    43,
      42,     0,   215,   214,   434,   438,   436,   437,   444,     0,
     443,   435,   440,     0,   439,   442,   445,     0,   441,   431,
     396,     0,   473,   472,   195,     0,     0,   392,   391,     0,
     245,   247,   244,   534,   534,     0,     0,   228,   227,     0,
     257,   534,   132,   133,     0,     0,     0,     0,   124,   125,
     534,   131,   123,    54,    56,     0,   534,     0,     0,   534,
       0,   534,   174,   175,     0,   534,   534,   534,     0,   173,
     534,    65,     0,   534,     0,     8,     0,   534,     0,     0,
       0,     0,     0,     0,     0,    45,   534,   135,     0,   447,
       0,   471,   534,   196,   241,   246,     0,     0,   224,     0,
       0,     0,     0,   229,   534,     0,     0,   534,   127,   534,
     134,   534,     0,   182,   183,     0,   534,   534,   534,   534,
     534,   181,     0,    53,   534,   525,   521,   524,   534,   147,
       0,     0,   523,     0,     0,     0,   522,     0,     0,     0,
       0,     0,     0,   148,   151,   534,   172,   485,   526,   146,
       0,     0,     0,    47,   534,     0,   534,   176,   178,   177,
      71,   534,    12,   534,   158,   283,   284,   282,     0,   534,
     534,     0,   163,   165,   162,   160,     0,   137,    90,    91,
      92,    93,    94,    95,    98,    99,   114,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   118,
     117,   101,   100,    87,    89,    88,    96,    97,    85,    86,
      82,    83,    84,    81,     0,     0,    80,   136,   139,   138,
       0,     0,     0,   144,   534,     0,    48,   155,     0,     0,
       0,   249,   248,   243,     0,     0,     0,   233,   527,     0,
     232,     0,   231,     0,     0,     0,   534,   230,     0,   256,
       0,   534,     0,   119,   122,   120,   126,   534,   184,   186,
     185,     0,     0,   534,   129,   153,    55,   534,     0,    57,
     534,   534,     0,   490,     0,     0,   495,   494,   493,     0,
       0,   492,   534,   150,     0,   534,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   534,     0,    50,    73,   179,   534,     0,     0,
     286,   287,   289,   288,   293,   290,   291,   292,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   366,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   346,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   367,
     343,   344,   345,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   534,   384,   385,   386,   377,   389,   373,   374,
     372,   379,   380,   368,   369,   370,   371,   378,   376,   383,
     381,   387,   382,   375,   388,   285,     0,     9,     0,     0,
     161,   164,   140,   116,   115,   143,   142,   156,   534,     0,
       0,   433,   432,   534,     0,   529,   239,   528,   238,   237,
     236,   235,   234,   226,     0,   128,   130,   187,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   397,
       0,     0,    59,     0,     0,   170,   534,     0,   534,     0,
       0,     0,   520,    77,    62,    76,   149,   152,   169,   504,
     505,   506,   507,   508,   509,   512,   513,   519,     0,   501,
     502,   503,   510,   511,   499,   500,   496,   497,   498,   518,
     517,     0,     0,     0,    67,    64,     0,   534,     0,   180,
     534,     0,   159,    10,   166,   534,   167,     0,   141,    49,
     197,   250,     0,   534,     0,     0,     0,   406,   404,   405,
     403,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   188,     0,    58,   156,   171,
       0,     0,   489,     0,   486,     0,     0,   516,   515,    69,
     534,    51,     0,   534,    66,   390,     0,   534,    26,     0,
       0,     0,     0,     0,   429,   415,   416,   417,   418,   419,
     420,   421,   422,   428,     0,   412,   413,   414,   410,   411,
     407,   408,   409,   427,   426,     0,     0,    60,     0,   491,
       0,     0,   514,   534,     0,   534,    72,   168,   145,   534,
       0,   401,     0,   398,     0,   425,   424,     0,     0,    78,
       0,     0,   534,    74,   189,     0,     0,   423,   488,   487,
      79,   534,    68,     0,     0,    70,   400,   399
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,   374,   375,    83,   293,    84,    85,   180,
      86,    87,    88,   301,   360,   385,   453,   189,   355,   422,
     423,   566,   209,   356,   359,   463,   880,   923,   617,   817,
     784,   517,   554,    89,   187,   347,   348,   349,   350,   386,
     738,   442,   443,   564,   525,   299,   471,   472,   444,   368,
     420,   173,    57,   210,   104,    58,    59,   275,    60,   276,
     336,   337,   403,    61,   273,    62,   333,   329,   330,    63,
      64,    90,   341,    91,    65,    66,    67,    68,   372,   373,
     465,   725,   326,   218,   219,   768,   130,    36,   446,   447,
     537,   387,    37,   220
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -453
static const yytype_int16 yypact[] =
{
     -29,  -453,  2069,  3071,    30,   232,  -453,  -453,  -453,  -453,
    -453,  -453,   -90,   -86,   -82,   -58,   -44,   -61,  -453,   -20,
     -15,    -8,  3173,    27,    44,    56,     6,  -453,    58,  2069,
    2069,  2069,  2069,  1341,  2069,  2512,  -453,   118,  -453,  -453,
    -453,  -453,  -453,  3224,  -453,  -453,  -453,  -453,  1690,  -453,
    1823,  1823,  -453,   164,  -453,  1823,  -453,    17,  -453,  -453,
    -453,  -453,  -453,    49,    61,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,    45,  -453,    60,   123,   144,   152,   166,  -453,
    -453,    38,  -453,  -453,  -453,  -453,  2282,  -453,  -453,  -453,
    -453,  -453,  -453,  2069,  2069,  2069,  2069,  2069,  3071,  2069,
    2069,  2069,  -453,   164,   111,   164,   164,  -453,  2069,  2069,
    3071,  3071,  2069,   125,   125,   125,   125,   -90,   -86,   -82,
     -58,   -44,   -20,   -15,  1647,  1337,  1529,  1735,   153,   -57,
    2512,   125,  2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,
    2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,
    2069,  2069,  2069,   681,  2069,  -453,    17,  -453,  -453,  1778,
    -453,  1823,  -453,  -453,  -453,  -453,  -453,  -453,   162,    17,
      17,    17,    17,   120,  -453,  -453,   187,  -453,   -22,  -453,
    2869,   164,  -453,   195,  -453,  -453,  -453,   206,  2348,  -453,
     164,  -453,   214,   217,  -453,  3224,  -453,   324,  -453,  -453,
    -453,  3122,  -453,  -453,   164,  -453,  -453,  -453,   164,   341,
     237,  -453,  -453,  -453,  -453,    49,    61,  -453,   224,   248,
    -453,   233,   235,   244,   250,   261,   256,   257,   260,  -453,
    2069,  -453,  -453,   262,   265,   270,   281,   278,  2069,  2069,
    -453,  2673,  2704,   740,   740,   712,   712,   372,   372,  -453,
    1359,  2719,  2734,  2858,   712,   712,   119,   119,   125,   125,
     125,  -453,  -453,   -43,   891,   120,  -453,    17,   120,   120,
     120,   106,  2069,   164,  -453,  -453,   300,  -453,   304,  3236,
    -453,  2989,  3224,   341,  -453,  -453,  -453,    10,  -453,   118,
    3224,    33,  -453,  -453,   289,  -453,  -453,   164,  1629,  -453,
    -453,    29,   187,   -22,  -453,  -453,  -453,  -453,  -453,   298,
    -453,  -453,  -453,   297,  -453,  -453,  -453,   309,  -453,   125,
    2512,  2069,  -453,  -453,   120,   320,   295,  2512,  -453,   301,
     338,   344,  -453,   164,  3277,   208,   350,   351,  -453,   164,
    -453,  -453,  -453,  -453,   164,  3020,   164,   343,   353,  -453,
      25,  -453,  -453,  -453,  -453,    29,  1437,   342,    29,  1437,
      29,    33,  -453,  -453,   346,    33,    33,    33,   142,  -453,
    3302,  -453,   336,  -453,   177,  -453,   348,  1717,  1551,   347,
      29,  2203,    29,    29,    29,  -453,   194,  -453,  2069,  -453,
    2069,  2512,  1437,  -453,  -453,   164,  2069,   349,  -453,   379,
     555,   697,   178,  -453,  -453,   208,   373,  3340,   371,    25,
    -453,   392,  2989,  -453,  -453,   375,    25,    25,    25,    25,
     -48,  -453,    29,  -453,   194,  -453,  -453,  -453,    25,  -453,
    3224,   383,  -453,  3173,   376,   386,  -453,  2069,  2069,  2069,
    1341,  2069,   377,    54,  -453,    25,  2529,  -453,   118,  -453,
      29,   228,   378,  -453,   194,   203,    33,   381,   381,   381,
    -453,  2069,  -453,  1437,  -453,  1215,  -453,  -453,   164,  2069,
    1717,   380,   406,  2512,  -453,  -453,    29,   223,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,   388,   397,  -453,  -453,   223,   223,
     255,   107,  1629,  -453,  2069,   414,  -453,  -453,   -16,    59,
     405,   425,  2512,  -453,   164,   306,   164,  -453,  -453,   306,
    -453,   306,  -453,   306,   306,   306,  3365,  -453,   164,  -453,
    3071,   -48,  2404,  -453,  -453,  -453,  -453,    25,   411,   411,
     411,   247,   592,  2069,  -453,  -453,  -453,   194,   432,  -453,
      12,    25,  3071,   421,  3071,  3071,   125,   125,   125,   420,
     121,   125,   497,  -453,  1533,    12,  2069,  2069,  2069,  2069,
    2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,  2069,
    2069,  2069,  2069,  2069,  2069,  2069,  2069,  1805,  2069,   317,
     548,   431,   497,   450,  -453,  -453,   381,  1437,   430,   434,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   435,  -453,   441,   442,
    -453,  1893,   223,  -453,  -453,  -453,  -453,  1551,  1437,   444,
      29,  -453,  -453,   497,  2069,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,   448,  -453,  -453,   411,   437,   455,
     451,   461,   592,   592,   592,   592,  1341,   592,  2563,  -453,
     449,   470,  -453,    29,  2069,  -453,    12,   463,  2069,   454,
     468,  2069,  -453,  -453,   498,  -453,  -453,  -453,  -453,  2673,
    2704,   740,   740,   712,   712,   372,   372,  -453,  2491,  2719,
    2734,  2858,   712,   712,   119,   119,   125,   125,   125,  -453,
    -453,   126,  2153,   466,  -453,   498,    29,  1437,   465,  -453,
     497,  1090,  -453,  -453,  -453,  1717,  2512,   475,  -453,  -453,
     498,  2512,   486,  1437,  3071,  3071,  3071,   146,   146,   146,
     146,   477,   129,   146,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,  1981,  2069,  -453,    29,  -453,  2512,  -453,
     480,   482,  -453,   485,   125,   487,  2069,  -453,  -453,  -453,
    1437,  -453,   484,   497,   498,  -453,   488,   497,  -453,   490,
     496,   491,   503,   592,  -453,  2689,  2749,   935,   935,   753,
     753,   399,   399,  -453,  2546,  2873,  2888,  2903,   315,   315,
     146,   146,   146,  -453,  -453,   165,  2183,  -453,  2069,  -453,
    2069,    20,  2512,  1437,   494,   497,   498,  -453,   498,   497,
     499,  -453,   500,   146,   592,  -453,  -453,   189,   198,  -453,
     495,   501,   497,   498,   498,  2069,  2069,  2563,  -453,  -453,
    -453,   497,   498,   207,   218,   498,  -453,  -453
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -453,  -453,  -165,  -453,   155,  -453,  -453,   440,  -453,  -453,
     -77,   213,  -453,  -453,  -453,  -113,  -188,  -453,  -453,  -453,
    -144,  -235,   445,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -416,  -453,  -453,   225,  -453,  -453,  -453,   222,   290,  -222,
    -453,  -333,  -453,    88,  -393,  -230,  -452,  -453,    57,  -316,
    -322,   -79,   -38,   452,   210,    11,   -84,  -453,   -75,  -453,
    -453,  -453,   240,   -71,  -453,   -70,  -453,   314,  -453,   -21,
      -3,  -453,  -453,  -453,     2,   136,  -453,  -453,   183,  -453,
     -51,  -453,  -438,   -87,   -27,   184,    69,   134,  -453,  -453,
    -346,   422,  -134,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -226
static const yytype_int16 yytable[] =
{
       6,   105,   211,   188,    92,   156,   129,   221,   222,   223,
     224,   212,   226,   227,   228,   213,   214,   279,   729,   106,
     357,   233,   234,   618,   107,   237,   452,   168,   164,   165,
      69,   568,    93,   413,   414,   415,    94,   164,   165,   379,
      95,   362,   363,   364,   128,   455,   164,   165,   239,   457,
     458,   459,    98,   354,   540,   542,   174,   164,   165,   530,
     562,   613,   239,   289,    96,   215,   583,   240,   169,   164,
     165,    35,     1,     2,     3,   563,   416,   265,    97,    92,
     380,   322,  -225,   216,   365,  -225,   739,   551,   217,   239,
     268,   269,   270,   271,   558,   559,   560,   561,   113,   114,
     115,   116,    99,   131,   211,   381,   570,   100,   741,   225,
     334,   736,   190,   212,   101,   164,   165,   213,   214,   111,
     774,   235,   236,   585,   155,   770,   263,   358,   370,   170,
     619,   164,   165,   424,   171,   563,   451,   417,   454,   172,
     616,   382,   418,   313,   939,   366,   383,   419,   140,   108,
     367,   384,   179,   175,   140,   174,   526,   288,   477,   584,
     518,   519,   520,   291,   239,   177,   109,   215,   174,   174,
     174,   174,   164,   165,   771,   852,   407,   775,   110,    92,
     112,     6,   181,   742,   160,   216,   162,   163,   324,   746,
     217,   167,   788,   748,   569,   749,   815,   750,   751,   752,
     567,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   448,   264,   614,   448,   239,   182,   609,   272,
     325,   239,    -2,   230,   239,   757,   149,   150,   151,   546,
     152,   153,   154,   272,   353,   782,   152,   153,   154,   776,
     877,   184,   361,   894,   732,   543,   544,   545,   448,   185,
     160,   162,   163,   167,   460,   461,   174,   862,   863,   864,
     239,   328,   332,   186,     6,   338,    70,   238,    92,   267,
     352,   467,   468,   351,   818,   399,   400,   401,    71,   935,
     369,   274,     6,    72,   239,   160,    73,   160,   295,   280,
     296,   521,   522,   239,    74,   402,    75,   319,   320,    76,
      77,    78,   239,   948,   164,   165,   523,   524,   445,   281,
      79,   445,   949,   239,    80,   615,   461,   830,    81,   448,
      10,   956,   332,    92,   552,   610,   286,   772,    82,   287,
       6,   327,   957,   300,   852,   523,   524,   351,   304,   421,
     523,   524,   611,   239,   445,   449,    42,   305,   449,   306,
     369,   528,   610,   529,   369,   369,   369,   378,   307,    92,
     563,   758,   466,   886,   308,   309,   474,   523,   524,   735,
     310,   311,   728,   869,   312,   527,   314,   164,   165,   315,
     391,   449,   571,    52,   316,   317,   536,   536,   536,   534,
      54,   140,   318,     6,   884,   827,    92,   335,   421,   339,
      92,   371,   105,   580,   351,   421,   421,   421,   421,   565,
     388,   389,   393,   527,   610,   445,   394,   421,   852,    42,
     106,   390,   859,   860,   861,   107,   862,   863,   864,   523,
     524,   813,   392,   395,   421,   295,   473,   296,   297,   298,
     448,   579,   396,   527,   404,   369,   405,   411,   412,   450,
     328,   464,   449,   456,   476,   532,    52,   926,   211,   474,
     469,   928,   534,    54,   533,   166,   535,   212,   548,   550,
      79,   213,   214,   448,   882,   176,   178,   147,   148,   149,
     150,   151,   557,   152,   153,   154,   572,   183,   574,   575,
     889,   582,   612,   191,   461,   730,   576,   577,   578,   943,
     581,   731,   733,   944,   857,   858,   859,   860,   861,   740,
     862,   863,   864,   328,   734,   229,   952,   231,   232,   743,
     327,   215,   536,   744,   563,   955,   536,   773,   536,   473,
     536,   536,   536,   778,   781,    92,   445,   924,   783,   216,
     565,   424,   736,   814,   217,   816,   421,   819,   820,   833,
     822,   755,   328,   164,   165,   823,   527,   824,   834,   527,
     421,   828,   832,   835,   836,   866,   865,   870,   872,   445,
     811,   785,   873,   777,   527,   779,   780,   875,   879,   883,
     941,   737,   888,   327,   454,     7,     8,     9,    10,   887,
      11,   893,   918,   278,   448,    42,   919,   920,   925,   921,
     930,   785,   285,   927,   929,   931,   449,   932,   942,   950,
     277,   945,   946,   727,   553,   951,   292,   829,   881,   867,
     294,   917,   327,   283,   556,   409,   555,   302,   303,   756,
     284,   787,    52,   573,   567,   547,   759,   397,   534,    54,
     726,   821,   539,     0,    18,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   806,   807,   808,   809,   760,   812,   761,     0,
       0,     0,    27,   448,     7,     8,     9,    10,     0,    11,
      12,   871,     0,     0,     0,   331,   769,     0,     0,   448,
     445,   466,     0,     0,   762,   164,   165,     0,   763,   764,
       0,     0,   765,     0,   766,     0,     0,     0,   767,   376,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    14,
      15,   138,   139,     0,    16,    17,     0,   449,     0,   842,
       0,   140,   785,    18,    19,     0,   448,    42,     0,     0,
      20,    21,     0,     0,     0,   331,    22,   136,   137,   138,
     139,   406,     0,    23,    24,    25,   408,    26,   410,   140,
       0,    27,   850,   851,     0,   527,    28,   841,     0,   445,
       0,     0,   852,     0,    52,     0,     0,     0,     0,   448,
     534,    54,     0,    29,   541,   445,     0,    30,    31,     0,
     826,    32,     0,    33,     0,   262,     0,    34,     0,     0,
       0,     0,     0,   831,     0,     0,   449,   531,     0,   785,
       0,   538,   538,   538,   474,     0,     0,   147,   148,   149,
     150,   151,   449,   152,   153,   154,   915,     0,     0,     0,
       0,     0,   445,   868,     0,   890,   891,   892,     0,     0,
     874,     0,     0,   145,   146,   147,   148,   149,   150,   151,
       0,   152,   153,   154,     0,     0,     0,     0,   857,   858,
     859,   860,   861,     0,   862,   863,   864,     0,     0,   449,
       0,     0,   785,     0,     0,   445,   785,     0,     0,     0,
     376,   937,     0,   938,   473,     0,   769,   769,   769,   769,
       0,   769,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,   953,   954,
     140,     0,   449,     0,   785,     0,     0,     0,   785,     0,
       0,     0,     0,   916,     0,     0,     0,     0,     0,     0,
       0,   785,     0,   376,     0,   922,   837,   838,   839,   840,
     785,   843,   848,   849,   850,   851,   745,   538,   747,     0,
       0,   538,     0,   538,   852,   538,   538,   538,     0,     0,
     754,     0,     0,     0,     0,     0,     0,     0,   769,   769,
     769,   769,   769,   769,   769,   769,   769,   769,   769,   769,
     769,   769,   769,   769,   769,   769,   769,     0,     0,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,   152,   153,   154,     0,     0,     0,   323,     0,
       0,     0,     0,     0,     0,     0,     0,   769,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,     0,     0,     0,
     857,   858,   859,   860,   861,     0,   862,   863,   864,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,   933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   620,   621,   622,   623,   624,   625,   626,
     627,     0,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,     0,     0,     0,     0,     0,   947,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,     0,     0,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,     0,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,     0,     0,   677,     0,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,   689,   690,     0,   691,
     692,   693,   694,   695,   696,   697,     0,   698,   699,   700,
     701,     0,     0,     0,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   885,   723,   724,   620,   621,
     622,   623,   624,   625,   626,   627,     0,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,     0,     0,
       0,     0,     0,     0,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,     0,
       0,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,     0,     0,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,     0,   691,   692,   693,   694,   695,   696,
     697,     0,   698,   699,   700,   701,     0,     0,     0,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
       0,   723,   724,   940,     7,     8,     9,    10,     0,    11,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,     0,    39,     0,    40,    41,   118,   140,   119,
     120,    42,    43,     0,   121,    17,     0,     0,    45,     0,
       0,     0,     0,    18,   122,     0,    47,   161,    49,     0,
     123,   124,    49,     0,     0,     0,    22,     0,     0,    50,
      51,     0,     0,   125,   126,    25,     0,    26,    52,     0,
       0,    27,    55,     0,    53,    54,   127,     0,     0,    56,
     425,   426,   427,    10,     0,   428,    38,     0,     0,   429,
       0,     0,     0,    29,     0,     0,     0,    30,    31,   108,
       0,    32,     0,    33,     0,     0,   321,    34,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
     152,   153,   154,    39,     0,    40,    41,    42,   430,     0,
      44,   431,     0,     0,    45,     0,     0,     0,     0,   432,
      46,     0,     0,     0,     0,     0,    47,    48,    49,     0,
       0,     0,   433,     0,     0,     0,     0,     0,     0,    50,
      51,   434,     0,   435,    52,     0,     0,   436,     0,     0,
      53,    54,    55,     0,     0,    56,   425,   426,   427,    10,
       0,   428,    38,     0,     0,   786,     0,     0,     0,   437,
       0,     0,     0,   438,     0,     0,     0,   439,     0,   440,
       0,     0,     0,   441,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,    39,     0,    40,    41,    39,
     140,    40,    41,    42,   430,     0,    44,   431,     0,     0,
      45,     0,     0,     0,     0,   432,    46,     0,    47,   161,
      49,     0,    47,    48,    49,     0,     0,     0,   433,     0,
       0,    50,    51,     0,     0,    50,    51,   434,     0,   435,
      52,     0,     0,   436,    55,     0,    53,    54,    55,     0,
       0,    56,     7,     8,     9,    10,     0,    11,    12,     0,
       0,     0,     0,     0,     0,   437,     0,     0,     0,   438,
       0,   109,     0,   439,     0,   440,     0,   475,     0,   441,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,   152,   153,   154,    13,     0,    14,    15,     0,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    18,    19,    39,     0,    40,    41,     0,    20,    21,
     157,     0,     0,     0,    22,     0,     0,     0,     0,     0,
     158,    23,    24,    25,     0,    26,    47,   159,    49,    27,
       7,     8,     9,    10,    28,    11,    12,     0,     0,    50,
      51,     0,     0,   377,     0,     0,    39,     0,    40,    41,
       0,    29,    55,   157,     0,    30,    31,     0,     0,    32,
       0,    33,     0,   158,     0,    34,     0,     0,     0,    47,
     159,    49,     0,    13,     0,    14,    15,     0,     0,   101,
      16,    17,    50,    51,     0,     0,     0,     0,     0,    18,
      19,    39,     0,    40,    41,    55,    20,    21,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,    23,
      24,    25,     0,    26,    47,   161,    49,    27,     7,     8,
       9,    10,    28,    11,    12,     0,     0,    50,    51,     0,
       0,   470,     0,     0,    39,     0,    40,    41,     0,    29,
      55,     0,     0,    30,    31,     0,     0,    32,     0,    33,
       0,   266,     0,    34,     0,     0,     0,    47,   161,    49,
       0,    13,     0,    14,    15,     0,     0,   112,    16,    17,
      50,    51,     0,     0,     0,     0,     0,    18,    19,    39,
       0,    40,    41,    55,    20,    21,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    23,    24,    25,
       0,    26,    47,   161,    49,    27,     7,     8,     9,    10,
      28,    11,    12,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    55,     0,
       0,    30,    31,     0,     0,    32,     0,    33,     0,   810,
       0,    34,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    14,    15,     0,     0,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,    18,    19,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,    23,    24,    25,     0,    26,
       0,     0,     0,    27,     7,     8,     9,    10,    28,    11,
      12,     0,     0,     0,     0,     0,     0,   825,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,    30,
      31,     0,     0,    32,     0,    33,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    14,
      15,     0,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,    18,    19,     0,     0,     0,     0,     0,
      20,    21,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,    23,    24,    25,     0,    26,     0,     0,
       0,    27,     7,     8,     9,    10,    28,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,    30,    31,     0,
       0,    32,     0,    33,     0,   914,     0,    34,     0,     0,
       0,     0,     0,     0,     0,    13,     0,    14,    15,     0,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,     0,     0,     0,     0,    20,    21,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,    23,    24,    25,     0,    26,     0,     0,     0,    27,
       0,     0,     0,     0,    28,     0,   132,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,    29,   140,     0,     0,    30,    31,     0,     0,    32,
       0,    33,     0,     0,     0,    34,   132,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   478,   479,   480,   481,
     482,   483,   484,   485,     0,     0,     0,     0,     0,     0,
       0,     0,   486,     0,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   499,     0,     0,     0,     0,
       0,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,   152,   153,   154,     0,   500,     0,
     878,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,   193,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,   152,   153,   154,     0,   501,     0,
     936,   502,     0,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   194,    39,   516,
      40,    41,    42,   195,     0,    44,     0,     0,     0,    45,
     196,   197,   198,     0,     0,    46,     0,     0,     0,     0,
     199,    47,    48,    49,     0,   200,   192,   193,   201,     0,
       0,     0,   202,     0,    50,    51,     0,   203,     0,    52,
       0,     0,     0,     0,     0,   204,    54,    55,     0,   205,
      56,   206,     0,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,   194,    39,     0,    40,    41,    42,   282,
       0,    44,   208,     0,     0,    45,   196,   197,   198,     0,
       0,    46,   192,   193,     0,     0,   199,    47,    48,    49,
       0,   200,     0,     0,   201,     0,     0,     0,   202,     0,
      50,    51,     0,   203,     0,    52,     0,     0,     0,     0,
       0,   204,    54,    55,     0,   205,    56,   206,     0,   194,
      39,     0,    40,    41,    42,   195,     0,    44,     0,     0,
       0,    45,   196,   197,   198,     0,     0,    46,   208,     0,
       0,     0,   199,    47,    48,    49,     0,   200,     0,     0,
     201,     0,     0,     0,   202,     0,    50,    51,     0,   203,
       0,    52,     0,     0,     0,     0,     0,   204,    54,    55,
       0,   205,    56,   206,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,   208,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   586,   587,   588,   589,   590,   591,   592,   593,
       0,     0,     0,     0,     0,     0,     0,     0,   594,   844,
     845,   846,   847,   848,   849,   850,   851,     0,     0,     0,
       0,     0,     0,     0,     0,   852,   844,   845,   846,   847,
     848,   849,   850,   851,     0,     0,     0,     0,     0,     0,
       0,     0,   852,     0,     0,     0,     0,     0,   876,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,   152,   153,   154,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,   152,   153,   154,     0,     0,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,     0,
     606,   607,   608,   934,     0,   853,   854,   855,   856,     0,
       0,   857,   858,   859,   860,   861,     0,   862,   863,   864,
       0,     0,   853,   854,   855,   856,     0,     0,   857,   858,
     859,   860,   861,     0,   862,   863,   864,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,   140,   845,   846,   847,   848,   849,   850,   851,
       0,     0,     0,     0,     0,     0,     0,     0,   852,   134,
     135,   136,   137,   138,   139,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   134,   135,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,   140,   134,
     135,   136,   137,   138,   139,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   846,   847,   848,   849,   850,   851,
       0,     0,     0,     0,     0,     0,     0,     0,   852,     0,
       0,     0,     0,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,   152,   153,   154,     0,     0,   854,
     855,   856,     0,     0,   857,   858,   859,   860,   861,     0,
     862,   863,   864,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,   152,   153,   154,     0,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
     152,   153,   154,     0,     0,     0,   144,   145,   146,   147,
     148,   149,   150,   151,     0,   152,   153,   154,     0,   854,
     855,   856,     0,     0,   857,   858,   859,   860,   861,     0,
     862,   863,   864,   134,   135,   136,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   846,   847,
     848,   849,   850,   851,     0,     0,     0,     0,     0,     0,
       0,     0,   852,   846,   847,   848,   849,   850,   851,     0,
       0,     0,     0,    70,     0,     0,     0,   852,   846,   847,
     848,   849,   850,   851,     0,    71,     0,     0,     0,     0,
      72,     0,   852,    73,     0,     0,     0,     0,     0,     0,
       0,    74,     0,    75,     0,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,    80,     0,     0,     0,    81,     0,     0,     0,     0,
       0,   145,   146,   147,   148,   149,   150,   151,     0,   152,
     153,   154,     0,     0,   855,   856,     0,     0,   857,   858,
     859,   860,   861,     0,   862,   863,   864,   342,   343,     0,
     856,     0,     0,   857,   858,   859,   860,   861,     0,   862,
     863,   864,     0,     0,     0,     0,     0,     0,   857,   858,
     859,   860,   861,     0,   862,   863,   864,     0,   342,   343,
       0,     0,     0,     0,     0,    39,     0,    40,    41,   344,
     345,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    39,     0,    40,    41,
       0,    50,    51,    44,     0,     0,     0,     0,     0,     0,
      38,     0,   346,    46,    55,     0,     0,    56,     0,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   346,     0,    55,     0,    39,    56,    40,
      41,    42,    43,     0,    44,     0,     0,     0,    45,     0,
       0,    38,     0,     0,    46,     0,     0,     0,     0,     0,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,    52,     0,
       0,     0,     0,     0,    53,    54,    55,     0,    39,    56,
      40,    41,    42,   290,     0,    44,     0,     0,     0,    45,
       0,     0,   102,     0,     0,    46,     0,     0,     0,     0,
       0,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,    52,
       0,     0,     0,     0,     0,    53,    54,    55,     0,    39,
      56,    40,    41,    42,     0,     0,    44,     0,     0,     0,
      45,     0,     0,    38,     0,     0,    46,     0,     0,     0,
       0,     0,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
      52,     0,     0,     0,     0,     0,   103,    54,    55,     0,
      39,    56,    40,    41,    42,     0,     0,    44,     0,     0,
      70,    45,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,    71,    47,    48,    49,     0,    72,     0,     0,
      73,     0,     0,     0,     0,     0,    50,    51,    74,     0,
      75,    52,     0,    76,    77,    78,     0,    53,    54,    55,
       0,    70,    56,     0,    79,     0,     0,     0,    80,     0,
       0,     0,    81,    71,     0,     0,     0,     0,    72,     0,
       0,    73,    82,     0,     0,     0,    70,     0,     0,    74,
       0,    75,     0,     0,    76,    77,    78,     0,    71,     0,
       0,   340,     0,    72,     0,    79,    73,     0,     0,    80,
       0,     0,     0,    81,    74,     0,    75,     0,     0,    76,
      77,    78,     0,    82,    70,     0,     0,     0,     0,     0,
      79,     0,     0,     0,    80,     0,    71,     0,    81,     0,
       0,    72,   398,     0,    73,     0,     0,     0,    82,    70,
       0,     0,    74,     0,    75,     0,     0,    76,    77,    78,
       0,    71,     0,     0,     0,     0,    72,   462,    79,    73,
       0,     0,    80,     0,     0,     0,    81,    74,     0,    75,
       0,     0,    76,    77,    78,     0,    82,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,    80,     0,     0,
       0,    81,     0,     0,     0,   549,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     753
};

static const yytype_int16 yycheck[] =
{
       1,    22,    86,    80,     5,    43,    33,    94,    95,    96,
      97,    86,    99,   100,   101,    86,    86,   182,   470,    22,
      10,   108,   109,   461,    22,   112,   359,    10,     8,     9,
       0,   424,   122,     8,     9,    10,   122,     8,     9,    10,
     122,     8,     9,    10,    33,   361,     8,     9,   105,   365,
     366,   367,   113,   283,   400,   401,    57,     8,     9,   392,
     108,   454,   105,   197,   122,    86,    12,   124,    51,     8,
       9,     2,   101,   102,   103,   123,    51,   156,   122,    80,
      51,   124,   104,    86,    51,   107,   524,   409,    86,   105,
     169,   170,   171,   172,   416,   417,   418,   419,    29,    30,
      31,    32,   122,    34,   188,    76,   428,   122,   124,    98,
     275,     4,    74,   188,   122,     8,     9,   188,   188,   113,
     108,   110,   111,   445,     6,   563,   153,   117,   293,   112,
     463,     8,     9,   355,   117,   123,   358,   112,   360,   122,
     456,   112,   117,   230,   124,   112,   117,   122,    29,   122,
     117,   122,   107,   104,    29,   156,   386,   195,   380,   105,
     382,   383,   384,   201,   105,   104,   122,   188,   169,   170,
     171,   172,     8,     9,   567,    29,   341,   570,   122,   180,
     122,   182,   122,   124,    48,   188,    50,    51,   267,   535,
     188,    55,   585,   539,   424,   541,   612,   543,   544,   545,
     422,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   356,   154,   454,   359,   105,   104,   450,   123,
     124,   105,     0,   122,   105,   557,   117,   118,   119,   404,
     121,   122,   123,   123,   282,   124,   121,   122,   123,   571,
     124,   107,   290,   124,   476,    77,    78,    79,   392,   107,
     124,   125,   126,   127,   122,   123,   267,   121,   122,   123,
     105,   272,   273,   107,   275,   276,    44,   124,   279,   117,
     281,   104,   105,   281,   617,    77,    78,    79,    56,   124,
     291,   104,   293,    61,   105,   159,    64,   161,   104,   104,
     106,   107,   108,   105,    72,    97,    74,   238,   239,    77,
      78,    79,   105,   124,     8,     9,   122,   123,   356,   113,
      88,   359,   124,   105,    92,   122,   123,   743,    96,   463,
       6,   124,   333,   334,   411,   107,   122,   567,   106,   122,
     341,   272,   124,   106,    29,   122,   123,   345,   124,   350,
     122,   123,   124,   105,   392,   356,    50,   124,   359,   124,
     361,   388,   107,   390,   365,   366,   367,   298,   124,   370,
     123,   124,   373,   825,   124,   114,   377,   122,   123,   124,
     124,   124,   469,   776,   124,   386,   124,     8,     9,   124,
     321,   392,   430,    87,   124,   114,   399,   400,   401,    93,
      94,    29,   124,   404,   820,   738,   407,   107,   409,   105,
     411,   122,   433,   440,   412,   416,   417,   418,   419,   420,
     122,   124,   127,   424,   107,   463,   125,   428,    29,    50,
     433,   122,   117,   118,   119,   433,   121,   122,   123,   122,
     123,   124,   122,   105,   445,   104,   377,   106,   107,   108,
     584,   440,   108,   454,   104,   456,   105,   114,   105,   117,
     461,   125,   463,   117,   117,   396,    87,   883,   552,   470,
     122,   887,    93,    94,   125,    53,    97,   552,   105,   108,
      88,   552,   552,   617,   817,    63,    64,   115,   116,   117,
     118,   119,   117,   121,   122,   123,   113,    75,   122,   113,
     833,   124,   124,    81,   123,   125,   437,   438,   439,   925,
     441,   105,   124,   929,   115,   116,   117,   118,   119,   105,
     121,   122,   123,   524,   127,   103,   942,   105,   106,   124,
     461,   552,   535,   108,   123,   951,   539,   105,   541,   470,
     543,   544,   545,   122,   124,   546,   584,   880,    51,   552,
     551,   773,     4,   122,   552,   105,   557,   127,   124,   122,
     125,   550,   563,     8,     9,   124,   567,   125,   113,   570,
     571,   127,   124,   122,   113,   105,   127,   114,   124,   617,
     607,   582,   114,   572,   585,   574,   575,    89,   122,   124,
     923,   522,   106,   524,   816,     3,     4,     5,     6,   124,
       8,   124,   122,   181,   738,    50,   124,   122,   124,   122,
     114,   612,   190,   125,   124,   124,   617,   114,   124,   124,
     180,   122,   122,   468,   411,   124,   204,   740,   816,   773,
     208,   866,   563,   188,   412,   345,   411,   215,   216,   551,
     188,   584,    87,   433,   866,   405,    54,   333,    93,    94,
     467,   702,    97,    -1,    62,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,    84,   608,    86,    -1,
      -1,    -1,    90,   817,     3,     4,     5,     6,    -1,     8,
       9,   778,    -1,    -1,    -1,   273,   562,    -1,    -1,   833,
     738,   702,    -1,    -1,   112,     8,     9,    -1,   116,   117,
      -1,    -1,   120,    -1,   122,    -1,    -1,    -1,   126,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,
      49,    19,    20,    -1,    53,    54,    -1,   738,    -1,   766,
      -1,    29,   743,    62,    63,    -1,   880,    50,    -1,    -1,
      69,    70,    -1,    -1,    -1,   333,    75,    17,    18,    19,
      20,   339,    -1,    82,    83,    84,   344,    86,   346,    29,
      -1,    90,    19,    20,    -1,   776,    95,   766,    -1,   817,
      -1,    -1,    29,    -1,    87,    -1,    -1,    -1,    -1,   923,
      93,    94,    -1,   112,    97,   833,    -1,   116,   117,    -1,
     731,   120,    -1,   122,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,   744,    -1,    -1,   817,   395,    -1,   820,
      -1,   399,   400,   401,   825,    -1,    -1,   115,   116,   117,
     118,   119,   833,   121,   122,   123,   863,    -1,    -1,    -1,
      -1,    -1,   880,   774,    -1,   834,   835,   836,    -1,    -1,
     781,    -1,    -1,   113,   114,   115,   116,   117,   118,   119,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    -1,    -1,   880,
      -1,    -1,   883,    -1,    -1,   923,   887,    -1,    -1,    -1,
     468,   918,    -1,   920,   825,    -1,   762,   763,   764,   765,
      -1,   767,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,   945,   946,
      29,    -1,   923,    -1,   925,    -1,    -1,    -1,   929,    -1,
      -1,    -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   942,    -1,   521,    -1,   876,   762,   763,   764,   765,
     951,   767,    17,    18,    19,    20,   534,   535,   536,    -1,
      -1,   539,    -1,   541,    29,   543,   544,   545,    -1,    -1,
     548,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   861,   862,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   893,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   861,   862,    -1,    -1,    -1,
     115,   116,   117,   118,   119,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   934,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,   934,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    99,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,   921,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    46,    -1,    48,    49,    46,    29,    48,
      49,    50,    51,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    69,    70,    71,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    82,
      83,    -1,    -1,    82,    83,    84,    -1,    86,    87,    -1,
      -1,    90,    95,    -1,    93,    94,    95,    -1,    -1,    98,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,   112,    -1,    -1,    -1,   116,   117,   122,
      -1,   120,    -1,   122,    -1,    -1,   107,   126,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,    46,    -1,    48,    49,    50,    51,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    87,    -1,    -1,    90,    -1,    -1,
      93,    94,    95,    -1,    -1,    98,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,   112,
      -1,    -1,    -1,   116,    -1,    -1,    -1,   120,    -1,   122,
      -1,    -1,    -1,   126,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    46,    -1,    48,    49,    46,
      29,    48,    49,    50,    51,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    69,    70,
      71,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    82,    83,    -1,    -1,    82,    83,    84,    -1,    86,
      87,    -1,    -1,    90,    95,    -1,    93,    94,    95,    -1,
      -1,    98,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,   116,
      -1,   122,    -1,   120,    -1,   122,    -1,   106,    -1,   126,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,   123,    46,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    46,    -1,    48,    49,    -1,    69,    70,
      53,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      63,    82,    83,    84,    -1,    86,    69,    70,    71,    90,
       3,     4,     5,     6,    95,     8,     9,    -1,    -1,    82,
      83,    -1,    -1,   104,    -1,    -1,    46,    -1,    48,    49,
      -1,   112,    95,    53,    -1,   116,   117,    -1,    -1,   120,
      -1,   122,    -1,    63,    -1,   126,    -1,    -1,    -1,    69,
      70,    71,    -1,    46,    -1,    48,    49,    -1,    -1,   122,
      53,    54,    82,    83,    -1,    -1,    -1,    -1,    -1,    62,
      63,    46,    -1,    48,    49,    95,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    69,    70,    71,    90,     3,     4,
       5,     6,    95,     8,     9,    -1,    -1,    82,    83,    -1,
      -1,   104,    -1,    -1,    46,    -1,    48,    49,    -1,   112,
      95,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,   122,
      -1,    63,    -1,   126,    -1,    -1,    -1,    69,    70,    71,
      -1,    46,    -1,    48,    49,    -1,    -1,   122,    53,    54,
      82,    83,    -1,    -1,    -1,    -1,    -1,    62,    63,    46,
      -1,    48,    49,    95,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    86,    69,    70,    71,    90,     3,     4,     5,     6,
      95,     8,     9,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    95,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,   122,    -1,   124,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,    86,
      -1,    -1,    -1,    90,     3,     4,     5,     6,    95,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    86,    -1,    -1,
      -1,    90,     3,     4,     5,     6,    95,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,   122,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    86,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    95,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    29,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,   122,    -1,    -1,    -1,   126,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    -1,    75,    -1,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    -1,   105,    -1,
     127,   108,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,   122,   123,    45,    46,   126,
      48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,    57,
      58,    59,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    -1,    73,     8,     9,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      -1,    53,   120,    -1,    -1,    57,    58,    59,    60,    -1,
      -1,    63,     8,     9,    -1,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,    45,
      46,    -1,    48,    49,    50,    51,    -1,    53,    -1,    -1,
      -1,    57,    58,    59,    60,    -1,    -1,    63,   120,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      -1,    97,    98,    99,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,   120,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,   122,   123,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
      -1,    -1,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,   123,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,   123,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    29,    15,    16,
      17,    18,    19,    20,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    29,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,    -1,    -1,   111,   112,    -1,    -1,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,     8,     9,    -1,
     112,    -1,    -1,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,
      -1,    82,    83,    53,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    93,    63,    95,    -1,    -1,    98,    -1,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    95,    -1,    46,    98,    48,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,     9,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    -1,    46,    98,
      48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,     9,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,    46,
      98,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,     9,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,
      46,    98,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      44,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    56,    69,    70,    71,    -1,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    82,    83,    72,    -1,
      74,    87,    -1,    77,    78,    79,    -1,    93,    94,    95,
      -1,    44,    98,    -1,    88,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    96,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,   106,    -1,    -1,    -1,    44,    -1,    -1,    72,
      -1,    74,    -1,    -1,    77,    78,    79,    -1,    56,    -1,
      -1,   125,    -1,    61,    -1,    88,    64,    -1,    -1,    92,
      -1,    -1,    -1,    96,    72,    -1,    74,    -1,    -1,    77,
      78,    79,    -1,   106,    44,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,    -1,    56,    -1,    96,    -1,
      -1,    61,   125,    -1,    64,    -1,    -1,    -1,   106,    44,
      -1,    -1,    72,    -1,    74,    -1,    -1,    77,    78,    79,
      -1,    56,    -1,    -1,    -1,    -1,    61,   125,    88,    64,
      -1,    -1,    92,    -1,    -1,    -1,    96,    72,    -1,    74,
      -1,    -1,    77,    78,    79,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    96,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   101,   102,   103,   129,   130,   221,     3,     4,     5,
       6,     8,     9,    46,    48,    49,    53,    54,    62,    63,
      69,    70,    75,    82,    83,    84,    86,    90,    95,   112,
     116,   117,   120,   122,   126,   214,   215,   220,     9,    46,
      48,    49,    50,    51,    53,    57,    63,    69,    70,    71,
      82,    83,    87,    93,    94,    95,    98,   180,   183,   184,
     186,   191,   193,   197,   198,   202,   203,   204,   205,     0,
      44,    56,    61,    64,    72,    74,    77,    78,    79,    88,
      92,    96,   106,   133,   135,   136,   138,   139,   140,   161,
     199,   201,   221,   122,   122,   122,   122,   122,   113,   122,
     122,   122,     9,    93,   182,   197,   198,   202,   122,   122,
     122,   113,   122,   214,   214,   214,   214,     9,    46,    48,
      49,    53,    63,    69,    70,    82,    83,    95,   183,   212,
     214,   214,    13,    14,    15,    16,    17,    18,    19,    20,
      29,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   121,   122,   123,     6,   180,    53,    63,    70,
     203,    70,   203,   203,     8,     9,   219,   203,    10,    51,
     112,   117,   122,   179,   221,   104,   219,   104,   219,   107,
     137,   122,   104,   219,   107,   107,   107,   162,   138,   145,
      74,   219,     8,     9,    45,    51,    58,    59,    60,    68,
      73,    76,    80,    85,    93,    97,    99,   104,   120,   150,
     181,   184,   186,   191,   193,   197,   198,   202,   211,   212,
     221,   211,   211,   211,   211,   183,   211,   211,   211,   219,
     122,   219,   219,   211,   211,   183,   183,   211,   124,   105,
     124,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   124,   212,   214,   179,    63,   117,   179,   179,
     179,   179,   123,   192,   104,   185,   187,   135,   219,   130,
     104,   113,    51,   150,   181,   219,   122,   122,   180,   220,
      51,   180,   219,   134,   219,   104,   106,   107,   108,   173,
     106,   141,   219,   219,   124,   124,   124,   124,   124,   114,
     124,   124,   124,   211,   124,   124,   124,   114,   124,   214,
     214,   107,   124,   127,   179,   124,   210,   214,   221,   195,
     196,   219,   221,   194,   130,   107,   188,   189,   221,   105,
     125,   200,     8,     9,    50,    51,    93,   163,   164,   165,
     166,   202,   221,   180,   173,   146,   151,    10,   117,   152,
     142,   180,     8,     9,    10,    51,   112,   117,   177,   221,
     130,   122,   206,   207,   131,   132,   219,   104,   214,    10,
      51,    76,   112,   117,   122,   143,   167,   219,   122,   124,
     122,   214,   122,   127,   125,   105,   108,   195,   125,    77,
      78,    79,    97,   190,   104,   105,   219,   130,   219,   166,
     219,   114,   105,     8,     9,    10,    51,   112,   117,   122,
     178,   221,   147,   148,   167,     3,     4,     5,     8,    12,
      51,    54,    62,    75,    84,    86,    90,   112,   116,   120,
     122,   126,   169,   170,   176,   180,   216,   217,   220,   221,
     117,   167,   169,   144,   167,   177,   117,   177,   177,   177,
     122,   123,   125,   153,   125,   208,   221,   104,   105,   122,
     104,   174,   175,   214,   221,   106,   117,   167,    13,    14,
      15,    16,    17,    18,    19,    20,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    52,
      75,   105,   108,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   122,   123,   126,   159,   167,   167,
     167,   107,   108,   122,   123,   172,   173,   221,   212,   212,
     169,   219,   214,   125,    93,    97,   198,   218,   219,    97,
     218,    97,   218,    77,    78,    79,   130,   190,   105,   125,
     108,   178,   138,   139,   160,   161,   165,   117,   178,   178,
     178,   178,   108,   123,   171,   221,   149,   167,   172,   173,
     178,   180,   113,   182,   122,   113,   214,   214,   214,   183,
     212,   214,   124,    12,   105,   178,    13,    14,    15,    16,
      17,    18,    19,    20,    29,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   121,   122,   123,   167,
     107,   124,   124,   172,   173,   122,   177,   156,   210,   169,
       3,     4,     5,     6,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    57,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    73,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    89,    90,    91,    92,    93,    94,    95,    97,    98,
      99,   100,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   126,   127,   209,   206,   132,   211,   174,
     125,   105,   167,   124,   127,   124,     4,   214,   168,   210,
     105,   124,   124,   124,   108,   219,   218,   219,   218,   218,
     218,   218,   218,   125,   219,   183,   171,   178,   124,    54,
      84,    86,   112,   116,   117,   120,   122,   126,   213,   215,
     210,   172,   173,   105,   108,   172,   178,   183,   122,   183,
     183,   124,   124,    51,   158,   221,    12,   176,   172,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     124,   212,   214,   124,   122,   158,   105,   157,   169,   127,
     124,   208,   125,   124,   125,   104,   214,   169,   127,   143,
     158,   214,   124,   122,   113,   122,   113,   213,   213,   213,
     213,   183,   212,   213,    13,    14,    15,    16,    17,    18,
      19,    20,    29,   109,   110,   111,   112,   115,   116,   117,
     118,   119,   121,   122,   123,   127,   105,   148,   214,   172,
     114,   211,   124,   114,   214,    89,   107,   124,   127,   122,
     154,   144,   169,   124,   158,   125,   174,   124,   106,   169,
     183,   183,   183,   124,   124,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   124,   212,   214,   149,   122,   124,
     122,   122,   214,   155,   169,   124,   158,   125,   158,   124,
     114,   124,   114,   213,   107,   124,   127,   212,   212,   124,
     219,   169,   124,   158,   158,   122,   122,   213,   124,   124,
     124,   124,   158,   212,   212,   158,   124,   124
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 384 "cppBison.yxx"
    {
  current_expr = (yyvsp[(2) - (2)].u.expr);
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 388 "cppBison.yxx"
    {
  current_type = (yyvsp[(2) - (2)].u.type);
}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 406 "cppBison.yxx"
    {
  delete (yyvsp[(3) - (4)].u.expr);
}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 418 "cppBison.yxx"
    {
  push_storage_class((current_storage_class & ~CPPInstance::SC_c_binding) | 
                     ((yyvsp[(1) - (2)].u.integer) & CPPInstance::SC_c_binding));
}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 423 "cppBison.yxx"
    {
  pop_storage_class();
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 437 "cppBison.yxx"
    {
  if (publish_nest_level != 0) {
    yyerror("Unclosed __begin_publish", publish_loc);
    publish_nest_level = 0;
    current_scope->set_current_vis(V_public);
  }

  publish_previous = current_scope->get_current_vis();
  publish_loc = (yylsp[(1) - (1)]);
  publish_nest_level++;
  current_scope->set_current_vis(V_published);
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 450 "cppBison.yxx"
    {
  if (publish_nest_level != 1) {
    yyerror("Unmatched __end_publish", (yylsp[(1) - (1)]));
  } else {
    current_scope->set_current_vis(publish_previous);
  }
  publish_nest_level = 0;
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 459 "cppBison.yxx"
    {
  current_scope->set_current_vis(V_published);
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 463 "cppBison.yxx"
    {
  if (publish_nest_level > 0) {
    current_scope->set_current_vis(V_published);
  } else {
    current_scope->set_current_vis(V_public);
  }
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 471 "cppBison.yxx"
    {
  current_scope->set_current_vis(V_protected);
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 475 "cppBison.yxx"
    {
  current_scope->set_current_vis(V_private);
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 479 "cppBison.yxx"
    {
  CPPMakeSeq *make_seq = new CPPMakeSeq((yyvsp[(3) - (9)].u.identifier)->get_simple_name(), (yyvsp[(5) - (9)].u.identifier)->get_simple_name(), (yyvsp[(7) - (9)].u.identifier)->get_simple_name(), (yylsp[(1) - (9)]).file);
  current_scope->add_declaration(make_seq, global_scope, current_lexer, (yylsp[(1) - (9)]));
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 487 "cppBison.yxx"
    {
  CPPScope *new_scope = new CPPScope(current_scope, CPPNameComponent("temp"),
                                     V_public);
  push_scope(new_scope);
}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 493 "cppBison.yxx"
    {
  delete current_scope;
  pop_scope();
}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 502 "cppBison.yxx"
    {
  (yyval.u.integer) = 0;
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 506 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_extern;
}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 510 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (3)].u.integer) | (int)CPPInstance::SC_extern;
  if ((yyvsp[(3) - (3)].str) == "C") {
    (yyval.u.integer) |= (int)CPPInstance::SC_c_binding;
  } else if ((yyvsp[(3) - (3)].str) == "C++") {
    (yyval.u.integer) &= ~(int)CPPInstance::SC_c_binding;
  } else {
    yywarning("Ignoring unknown linkage type \"" + (yyvsp[(3) - (3)].str) + "\"", (yylsp[(3) - (3)]));
  }
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 521 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_static;
}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 525 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_inline;
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 529 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_virtual;
}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 533 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_explicit;
}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 537 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_volatile;
}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 541 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_mutable;
}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 545 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_register;
}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 549 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_blocking;
}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 553 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (2)].u.integer) | (int)CPPInstance::SC_extension;
}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 560 "cppBison.yxx"
    {
  /* multiple_var_declaration adds itself to the scope. */
}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 564 "cppBison.yxx"
    {
  // We don't really care about the storage class here.  In fact, it's
  // not actually legal to define a class or struct using a particular
  // storage class, but we require it just to help yacc out in its
  // parsing.

  current_scope->add_declaration((yyvsp[(2) - (3)].u.decl), global_scope, current_lexer, (yylsp[(2) - (3)]));
}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 573 "cppBison.yxx"
    {
  if ((yyvsp[(2) - (3)].u.instance) != (CPPInstance *)NULL) {
    (yyvsp[(2) - (3)].u.instance)->_storage_class |= (current_storage_class | (yyvsp[(1) - (3)].u.integer));
    current_scope->add_declaration((yyvsp[(2) - (3)].u.instance), global_scope, current_lexer, (yylsp[(2) - (3)]));
    (yyvsp[(2) - (3)].u.instance)->set_initializer((yyvsp[(3) - (3)].u.expr));
  }
}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 584 "cppBison.yxx"
    {
  // We don't need to push/pop type, because we can't nest
  // multiple_var_declarations.
  if ((yyvsp[(2) - (2)].u.decl)->as_type_declaration()) {
    current_type = (yyvsp[(2) - (2)].u.decl)->as_type_declaration()->_type;
  } else {
    current_type = (yyvsp[(2) - (2)].u.decl)->as_type();
  }
  push_storage_class((yyvsp[(1) - (2)].u.integer));
}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 595 "cppBison.yxx"
    {
  pop_storage_class();
}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 599 "cppBison.yxx"
    {
  // We don't need to push/pop type, because we can't nest
  // multiple_var_declarations.
  current_type = (yyvsp[(3) - (3)].u.type);
  push_storage_class((yyvsp[(1) - (3)].u.integer));
}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 606 "cppBison.yxx"
    {
  pop_storage_class();
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 617 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (2)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (2)]).file);
  inst->set_initializer((yyvsp[(2) - (2)].u.expr));
  current_scope->add_declaration(inst, global_scope, current_lexer, (yylsp[(1) - (2)]));
}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 625 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (4)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (4)]).file);
  inst->set_initializer((yyvsp[(2) - (4)].u.expr));
  current_scope->add_declaration(inst, global_scope, current_lexer, (yylsp[(1) - (4)]));
}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 636 "cppBison.yxx"
    {
  (yyvsp[(1) - (2)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (2)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (2)]).file);
  inst->set_initializer((yyvsp[(2) - (2)].u.expr));
  current_scope->add_declaration(inst, global_scope, current_lexer, (yylsp[(1) - (2)]));
}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 645 "cppBison.yxx"
    {
  (yyvsp[(1) - (4)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (4)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (4)]).file);
  inst->set_initializer((yyvsp[(2) - (4)].u.expr));
  current_scope->add_declaration(inst, global_scope, current_lexer, (yylsp[(1) - (4)]));
}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 658 "cppBison.yxx"
    {
  // We don't need to push/pop type, because we can't nest
  // multiple_var_declarations.
  if ((yyvsp[(2) - (2)].u.decl)->as_type_declaration()) {
    current_type = (yyvsp[(2) - (2)].u.decl)->as_type_declaration()->_type;
  } else {
    current_type = (yyvsp[(2) - (2)].u.decl)->as_type();
  }
  push_storage_class((yyvsp[(1) - (2)].u.integer));
}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 669 "cppBison.yxx"
    {
  pop_storage_class();
}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 673 "cppBison.yxx"
    {
  // We don't need to push/pop type, because we can't nest
  // multiple_var_declarations.
  current_type = (yyvsp[(3) - (3)].u.type);
  push_storage_class((yyvsp[(1) - (3)].u.integer));
}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 680 "cppBison.yxx"
    {
  pop_storage_class();
}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 684 "cppBison.yxx"
    {
  if ((yyvsp[(2) - (3)].u.instance) != (CPPDeclaration *)NULL) {
    CPPInstance *inst = (yyvsp[(2) - (3)].u.instance)->as_instance();
    if (inst != (CPPInstance *)NULL) {
      inst->_storage_class |= (current_storage_class | (yyvsp[(1) - (3)].u.integer));
      current_scope->add_declaration(inst, global_scope, current_lexer, (yylsp[(2) - (3)]));
      current_scope->add_declaration(new CPPTypedef(inst, current_scope == global_scope), global_scope, current_lexer, (yylsp[(2) - (3)]));
    }
  }
}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 698 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (2)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (2)]).file);
  inst->set_initializer((yyvsp[(2) - (2)].u.expr));
  current_scope->add_declaration(new CPPTypedef(inst, current_scope == global_scope), global_scope, current_lexer, (yylsp[(1) - (2)]));
}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 706 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (4)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (4)]).file);
  inst->set_initializer((yyvsp[(2) - (4)].u.expr));
  current_scope->add_declaration(new CPPTypedef(inst, current_scope == global_scope), global_scope, current_lexer, (yylsp[(1) - (4)]));
}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 717 "cppBison.yxx"
    {
  (yyvsp[(1) - (2)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (2)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (2)]).file);
  inst->set_initializer((yyvsp[(2) - (2)].u.expr));
  current_scope->add_declaration(new CPPTypedef(inst, current_scope == global_scope), global_scope, current_lexer, (yylsp[(1) - (2)]));
}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 726 "cppBison.yxx"
    {
  (yyvsp[(1) - (4)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance(current_type, (yyvsp[(1) - (4)].u.inst_ident),
                                      current_storage_class,
                                      (yylsp[(1) - (4)]).file);
  inst->set_initializer((yyvsp[(2) - (4)].u.expr));
  current_scope->add_declaration(new CPPTypedef(inst, current_scope == global_scope), global_scope, current_lexer, (yylsp[(1) - (4)]));
}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 740 "cppBison.yxx"
    {
  push_scope((yyvsp[(1) - (2)].u.identifier)->get_scope(current_scope, global_scope));
}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 744 "cppBison.yxx"
    {
  pop_scope();
  CPPType *type;
  if ((yyvsp[(1) - (6)].u.identifier)->get_simple_name() == current_scope->get_simple_name()) {
    // This is a constructor, and has no return.
    type = new CPPSimpleType(CPPSimpleType::T_void);
  } else {
    // This isn't a constructor, so it has an implicit return type of
    // int.
    type = new CPPSimpleType(CPPSimpleType::T_int);
  }

  CPPInstanceIdentifier *ii = new CPPInstanceIdentifier((yyvsp[(1) - (6)].u.identifier));
  ii->add_func_modifier((yyvsp[(4) - (6)].u.param_list), (yyvsp[(6) - (6)].u.integer));

  (yyval.u.instance) = new CPPInstance(type, ii, 0, (yylsp[(1) - (6)]).file);
}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 762 "cppBison.yxx"
    {
  push_scope((yyvsp[(1) - (2)].u.identifier)->get_scope(current_scope, global_scope));
}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 766 "cppBison.yxx"
    {
  pop_scope();
  CPPType *type;
  if ((yyvsp[(1) - (6)].u.identifier)->get_simple_name() == current_scope->get_simple_name()) {
    // This is a constructor, and has no return.
    type = new CPPSimpleType(CPPSimpleType::T_void);
  } else {
    // This isn't a constructor, so it has an implicit return type of
    // int.
    type = new CPPSimpleType(CPPSimpleType::T_int);
  }

  CPPInstanceIdentifier *ii = new CPPInstanceIdentifier((yyvsp[(1) - (6)].u.identifier));
  ii->add_func_modifier((yyvsp[(4) - (6)].u.param_list), (yyvsp[(6) - (6)].u.integer));

  (yyval.u.instance) = new CPPInstance(type, ii, 0, (yylsp[(1) - (6)]).file);
}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 786 "cppBison.yxx"
    {
  push_scope((yyvsp[(2) - (3)].u.identifier)->get_scope(current_scope, global_scope));
}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 790 "cppBison.yxx"
    {
  pop_scope();
  if ((yyvsp[(2) - (7)].u.identifier)->is_scoped()) {
    yyerror("Invalid destructor name: ~" + (yyvsp[(2) - (7)].u.identifier)->get_fully_scoped_name(), (yylsp[(2) - (7)]));
  } else {
    CPPIdentifier *ident = 
      new CPPIdentifier("~" + (yyvsp[(2) - (7)].u.identifier)->get_simple_name(), (yylsp[(2) - (7)]).file);
    delete (yyvsp[(2) - (7)].u.identifier);

    CPPType *type;
    type = new CPPSimpleType(CPPSimpleType::T_void);
    
    CPPInstanceIdentifier *ii = new CPPInstanceIdentifier(ident);
    ii->add_func_modifier((yyvsp[(5) - (7)].u.param_list), (yyvsp[(7) - (7)].u.integer));

    (yyval.u.instance) = new CPPInstance(type, ii, 0, (yylsp[(2) - (7)]).file);
  }
}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 816 "cppBison.yxx"
    {
  push_scope((yyvsp[(4) - (6)].u.inst_ident)->get_scope(current_scope, global_scope));
}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 820 "cppBison.yxx"
    {
  pop_scope();
  CPPType *type = (yyvsp[(1) - (10)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert(type != NULL);

  CPPInstanceIdentifier *ii = (yyvsp[(4) - (10)].u.inst_ident);
  ii->add_modifier(IIT_pointer);
  ii->add_func_modifier((yyvsp[(8) - (10)].u.param_list), (yyvsp[(10) - (10)].u.integer));
  (yyval.u.instance) = new CPPInstance(type, ii, 0, (yylsp[(1) - (10)]).file);
}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 831 "cppBison.yxx"
    {
  push_scope((yyvsp[(5) - (7)].u.inst_ident)->get_scope(current_scope, global_scope));
}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 835 "cppBison.yxx"
    {
  pop_scope();
  CPPType *type = (yyvsp[(1) - (11)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert(type != NULL);

  CPPInstanceIdentifier *ii = (yyvsp[(5) - (11)].u.inst_ident);
  ii->add_scoped_pointer_modifier((yyvsp[(3) - (11)].u.identifier));
  ii->add_func_modifier((yyvsp[(9) - (11)].u.param_list), (yyvsp[(11) - (11)].u.integer));
  (yyval.u.instance) = new CPPInstance(type, ii, 0, (yylsp[(1) - (11)]).file);
}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 848 "cppBison.yxx"
    {
  if ((yyvsp[(1) - (4)].u.identifier) != NULL) {
    push_scope((yyvsp[(1) - (4)].u.identifier)->get_scope(current_scope, global_scope));
  }
}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 854 "cppBison.yxx"
    {
  if ((yyvsp[(1) - (8)].u.identifier) != NULL) {
    pop_scope();
  }

  // We use formal_parameter_identifier, because that can match a type
  // name with or without an identifier, but especially without, which
  // is what follows the keyword "operator" in a typecast function.
  // As an added bonus, the type of the formal_parameter will be the
  // typecast type, i.e. the return type of the typecast function.

  // We give typecast operators the name "operator typecast <name>",
  // where <name> is a simple name of the type to be typecast.  Use
  // the method's return type to determine the full type description.
  string name = "operator typecast " + (yyvsp[(2) - (8)].u.type)->get_simple_name();
  CPPIdentifier *ident = (yyvsp[(1) - (8)].u.identifier);
  if (ident == NULL) {
    ident = new CPPIdentifier(name, (yylsp[(1) - (8)]).file);
  } else {
    ident->add_name(name);
  }
  (yyval.u.instance) = CPPInstance::make_typecast_function
    (new CPPInstance((yyvsp[(2) - (8)].u.type), (yyvsp[(3) - (8)].u.inst_ident), 0, (yylsp[(3) - (8)]).file), ident, (yyvsp[(6) - (8)].u.param_list), (yyvsp[(8) - (8)].u.integer));
}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 879 "cppBison.yxx"
    {
  if ((yyvsp[(1) - (5)].u.identifier) != NULL) {
    push_scope((yyvsp[(1) - (5)].u.identifier)->get_scope(current_scope, global_scope));
  }
}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 885 "cppBison.yxx"
    {
  if ((yyvsp[(1) - (9)].u.identifier) != NULL) {
    pop_scope();
  }

  CPPIdentifier *ident = (yyvsp[(1) - (9)].u.identifier);
  if (ident == NULL) {
    ident = new CPPIdentifier("operator typecast", (yylsp[(1) - (9)]).file);
  } else {
    ident->add_name("operator typecast");
  }
  (yyvsp[(4) - (9)].u.inst_ident)->add_modifier(IIT_const);
  (yyval.u.instance) = CPPInstance::make_typecast_function
    (new CPPInstance((yyvsp[(3) - (9)].u.type), (yyvsp[(4) - (9)].u.inst_ident), 0, (yylsp[(4) - (9)]).file), ident, (yyvsp[(7) - (9)].u.param_list), (yyvsp[(9) - (9)].u.integer));
}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 905 "cppBison.yxx"
    {
  CPPDeclaration *decl = 
    (yyvsp[(1) - (1)].u.identifier)->find_symbol(current_scope, global_scope, current_lexer);
  if (decl != (CPPDeclaration *)NULL) {
    (yyval.u.instance) = decl->as_instance();
  } else {
    (yyval.u.instance) = (CPPInstance *)NULL;
  }
}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 918 "cppBison.yxx"
    {
  (yyval.u.integer) = 0;
}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 922 "cppBison.yxx"
    {
  (yyval.u.integer) = (int)CPPFunctionType::F_const_method;
}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 926 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (4)].u.integer);
}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 930 "cppBison.yxx"
    {
  (yyval.u.integer) = (yyvsp[(1) - (5)].u.integer);
}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 937 "cppBison.yxx"
    {
  (yyval.str) = "!";
}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 941 "cppBison.yxx"
    {
  (yyval.str) = "~";
}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 945 "cppBison.yxx"
    {
  (yyval.str) = "*";
}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 949 "cppBison.yxx"
    {
  (yyval.str) = "/";
}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 953 "cppBison.yxx"
    {
  (yyval.str) = "%";
}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 957 "cppBison.yxx"
    {
  (yyval.str) = "+";
}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 961 "cppBison.yxx"
    {
  (yyval.str) = "-";
}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 965 "cppBison.yxx"
    {
  (yyval.str) = "|";
}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 969 "cppBison.yxx"
    {
  (yyval.str) = "&";
}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 973 "cppBison.yxx"
    {
  (yyval.str) = "^";
}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 977 "cppBison.yxx"
    {
  (yyval.str) = "||";
}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 981 "cppBison.yxx"
    {
  (yyval.str) = "&&";
}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 985 "cppBison.yxx"
    {
  (yyval.str) = "==";
}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 989 "cppBison.yxx"
    {
  (yyval.str) = "!=";
}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 993 "cppBison.yxx"
    {
  (yyval.str) = "<=";
}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 997 "cppBison.yxx"
    {
  (yyval.str) = ">=";
}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1001 "cppBison.yxx"
    {
  (yyval.str) = "<";
}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1005 "cppBison.yxx"
    {
  (yyval.str) = ">";
}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1009 "cppBison.yxx"
    {
  (yyval.str) = "<<";
}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1013 "cppBison.yxx"
    {
  (yyval.str) = ">>";
}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1017 "cppBison.yxx"
    {
  (yyval.str) = "=";
}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1021 "cppBison.yxx"
    {
  (yyval.str) = ",";
}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1025 "cppBison.yxx"
    {
  (yyval.str) = "++";
}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1029 "cppBison.yxx"
    {
  (yyval.str) = "--";
}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1033 "cppBison.yxx"
    {
  (yyval.str) = "*=";
}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1037 "cppBison.yxx"
    {
  (yyval.str) = "/=";
}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1041 "cppBison.yxx"
    {
  (yyval.str) = "%=";
}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1045 "cppBison.yxx"
    {
  (yyval.str) = "+=";
}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1049 "cppBison.yxx"
    {
  (yyval.str) = "-=";
}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1053 "cppBison.yxx"
    {
  (yyval.str) = "|=";
}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1057 "cppBison.yxx"
    {
  (yyval.str) = "&=";
}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1061 "cppBison.yxx"
    {
  (yyval.str) = "^=";
}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1065 "cppBison.yxx"
    {
  (yyval.str) = "<<=";
}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1069 "cppBison.yxx"
    {
  (yyval.str) = ">>=";
}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1073 "cppBison.yxx"
    {
  (yyval.str) = "->";
}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1077 "cppBison.yxx"
    {
  (yyval.str) = "[]";
}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1081 "cppBison.yxx"
    {
  (yyval.str) = "()";
}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1085 "cppBison.yxx"
    {
  (yyval.str) = "new";
}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1089 "cppBison.yxx"
    {
  (yyval.str) = "delete";
}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1101 "cppBison.yxx"
    {
  push_scope(new CPPTemplateScope(current_scope));
}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1105 "cppBison.yxx"
    {
  pop_scope();
}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1117 "cppBison.yxx"
    {
  CPPTemplateScope *ts = current_scope->as_template_scope();
  assert(ts != NULL);
  ts->add_template_parameter((yyvsp[(1) - (1)].u.decl));
}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1123 "cppBison.yxx"
    {
  CPPTemplateScope *ts = current_scope->as_template_scope();
  assert(ts != NULL);
  ts->add_template_parameter((yyvsp[(3) - (3)].u.decl));
}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1132 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type(new CPPClassTemplateParameter((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1136 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type(new CPPClassTemplateParameter((yyvsp[(2) - (4)].u.identifier), (yyvsp[(4) - (4)].u.type)));
}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1140 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance((yyvsp[(1) - (3)].u.type), (yyvsp[(2) - (3)].u.inst_ident), 0, (yylsp[(2) - (3)]).file);
  inst->set_initializer((yyvsp[(3) - (3)].u.expr));
  (yyval.u.decl) = inst;
}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1146 "cppBison.yxx"
    {
  (yyvsp[(3) - (4)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance((yyvsp[(2) - (4)].u.type), (yyvsp[(3) - (4)].u.inst_ident), 0, (yylsp[(3) - (4)]).file);
  inst->set_initializer((yyvsp[(4) - (4)].u.expr));
  (yyval.u.decl) = inst;
}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1156 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.simple_type));
}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1160 "cppBison.yxx"
    {
  yywarning("Not a type: " + (yyvsp[(1) - (1)].u.identifier)->get_fully_scoped_name(), (yylsp[(1) - (1)]));
  (yyval.u.type) = CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_unknown));
}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1165 "cppBison.yxx"
    {
  (yyval.u.type) = (yyvsp[(1) - (1)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert((yyval.u.type) != NULL);
}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1170 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1178 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((yyvsp[(1) - (1)].u.identifier));
}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1182 "cppBison.yxx"
    {
  // For an operator function.  We implement this simply by building a
  // ficticious name for the function; in other respects it's just
  // like a regular function.
  CPPIdentifier *ident = (yyvsp[(1) - (2)].u.identifier);
  if (ident == NULL) {
    ident = new CPPIdentifier("operator "+(yyvsp[(2) - (2)].str), (yylsp[(2) - (2)]).file);
  } else {
    ident->_names.push_back("operator "+(yyvsp[(2) - (2)].str));
  }

  (yyval.u.inst_ident) = new CPPInstanceIdentifier(ident);
}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1196 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_const);
}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1201 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_pointer);
}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1206 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_reference);
}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1211 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(3) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_scoped_pointer_modifier((yyvsp[(1) - (3)].u.identifier));
}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1216 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(1) - (4)].u.inst_ident);
  (yyval.u.inst_ident)->add_array_modifier((yyvsp[(3) - (4)].u.expr));
}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1221 "cppBison.yxx"
    {
  // bitfield definition.  We ignore the bitfield for now.
  (yyval.u.inst_ident) = (yyvsp[(1) - (3)].u.inst_ident);
}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1226 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_paren);
}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1231 "cppBison.yxx"
    {
  push_scope((yyvsp[(1) - (2)].u.inst_ident)->get_scope(current_scope, global_scope));
}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1235 "cppBison.yxx"
    {
  pop_scope();
  (yyval.u.inst_ident) = (yyvsp[(1) - (6)].u.inst_ident);
  if ((yyvsp[(4) - (6)].u.param_list)->is_parameter_expr() && (yyvsp[(6) - (6)].u.integer) == 0) {
    // Oops, this must have been an instance declaration with a
    // parameter list, not a function prototype.
    (yyval.u.inst_ident)->add_initializer_modifier((yyvsp[(4) - (6)].u.param_list));

  } else {
    // This was (probably) a function prototype.
    (yyval.u.inst_ident)->add_func_modifier((yyvsp[(4) - (6)].u.param_list), (yyvsp[(6) - (6)].u.integer));
  }
}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1253 "cppBison.yxx"
    {
  (yyval.u.param_list) = new CPPParameterList;
}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1257 "cppBison.yxx"
    {
  (yyval.u.param_list) = new CPPParameterList;
  (yyval.u.param_list)->_includes_ellipsis = true;
}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1262 "cppBison.yxx"
    {
  (yyval.u.param_list) = (yyvsp[(1) - (1)].u.param_list);
}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1266 "cppBison.yxx"
    {
  (yyval.u.param_list) = (yyvsp[(1) - (3)].u.param_list);
  (yyval.u.param_list)->_includes_ellipsis = true;
}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1271 "cppBison.yxx"
    {
  (yyval.u.param_list) = (yyvsp[(1) - (2)].u.param_list);
  (yyval.u.param_list)->_includes_ellipsis = true;
}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1279 "cppBison.yxx"
    {
  (yyval.u.param_list) = new CPPParameterList;
  (yyval.u.param_list)->_parameters.push_back((yyvsp[(1) - (1)].u.instance));
}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1284 "cppBison.yxx"
    {
  (yyval.u.param_list) = (yyvsp[(1) - (3)].u.param_list);
  (yyval.u.param_list)->_parameters.push_back((yyvsp[(3) - (3)].u.instance));
}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1292 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1296 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1303 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1307 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1314 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1318 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1322 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1326 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr);
}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1330 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1343 "cppBison.yxx"
    {
}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1352 "cppBison.yxx"
    {
  (yyval.u.instance) = new CPPInstance((yyvsp[(1) - (3)].u.type), (yyvsp[(2) - (3)].u.inst_ident), 0, (yylsp[(2) - (3)]).file);
  (yyval.u.instance)->set_initializer((yyvsp[(3) - (3)].u.expr));
}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1357 "cppBison.yxx"
    {
  yywarning("Not a type: " + (yyvsp[(1) - (3)].u.identifier)->get_fully_scoped_name(), (yylsp[(1) - (3)]));
  CPPType *type =
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_unknown));
  (yyval.u.instance) = new CPPInstance(type, (yyvsp[(2) - (3)].u.inst_ident), 0, (yylsp[(2) - (3)]).file);
  (yyval.u.instance)->set_initializer((yyvsp[(3) - (3)].u.expr));
}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1365 "cppBison.yxx"
    {
  (yyvsp[(3) - (4)].u.inst_ident)->add_modifier(IIT_const);
  (yyval.u.instance) = new CPPInstance((yyvsp[(2) - (4)].u.type), (yyvsp[(3) - (4)].u.inst_ident), 0, (yylsp[(3) - (4)]).file);
  (yyval.u.instance)->set_initializer((yyvsp[(4) - (4)].u.expr));
}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1371 "cppBison.yxx"
    {
  CPPType *type =
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_parameter));
  (yyval.u.instance) = new CPPInstance(type, "expr");
  (yyval.u.instance)->set_initializer((yyvsp[(1) - (1)].u.expr));
}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1381 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((CPPIdentifier *)NULL);
}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1385 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((yyvsp[(1) - (1)].u.identifier));
}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1389 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((yyvsp[(1) - (1)].u.identifier));
}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1393 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_const);
}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1398 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_pointer);
}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1403 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_reference);
}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1408 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(3) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_scoped_pointer_modifier((yyvsp[(1) - (3)].u.identifier));
}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1413 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(1) - (4)].u.inst_ident);
  (yyval.u.inst_ident)->add_array_modifier((yyvsp[(3) - (4)].u.expr));
}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1421 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((CPPIdentifier *)NULL);
}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1425 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((yyvsp[(1) - (1)].u.identifier));
}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1429 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((yyvsp[(1) - (1)].u.identifier));
}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1433 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_const);
}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1438 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_pointer);
}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1443 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_reference);
}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1448 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(3) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_scoped_pointer_modifier((yyvsp[(1) - (3)].u.identifier));
}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1453 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(1) - (4)].u.inst_ident);
  (yyval.u.inst_ident)->add_array_modifier((yyvsp[(3) - (4)].u.expr));
}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1458 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (7)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_paren);
  (yyval.u.inst_ident)->add_func_modifier((yyvsp[(5) - (7)].u.param_list), (yyvsp[(7) - (7)].u.integer));
}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1464 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_paren);
}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1472 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = new CPPInstanceIdentifier((CPPIdentifier *)NULL);
}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1476 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_const);
}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1481 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_pointer);
}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1486 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (2)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_reference);
}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1491 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(3) - (3)].u.inst_ident);
  (yyval.u.inst_ident)->add_scoped_pointer_modifier((yyvsp[(1) - (3)].u.identifier));
}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1496 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(1) - (4)].u.inst_ident);
  (yyval.u.inst_ident)->add_array_modifier((yyvsp[(3) - (4)].u.expr));
}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1501 "cppBison.yxx"
    {
  (yyval.u.inst_ident) = (yyvsp[(2) - (7)].u.inst_ident);
  (yyval.u.inst_ident)->add_modifier(IIT_paren);
  (yyval.u.inst_ident)->add_func_modifier((yyvsp[(5) - (7)].u.param_list), (yyvsp[(7) - (7)].u.integer));
}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1510 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.simple_type));
}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1514 "cppBison.yxx"
    {
  (yyval.u.type) = (yyvsp[(1) - (1)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert((yyval.u.type) != NULL);
}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1519 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1523 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.struct_type));
}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1527 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.struct_type));
}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1531 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.enum_type));
}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1535 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.enum_type));
}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1539 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.type) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.type) = et;
  }
}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1555 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.type) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.type) = et;
  }
}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1574 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type((yyvsp[(1) - (1)].u.simple_type));
}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1578 "cppBison.yxx"
    {
  (yyval.u.decl) = (yyvsp[(1) - (1)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert((yyval.u.decl) != NULL);
}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1583 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1587 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type((yyvsp[(1) - (1)].u.struct_type));
}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1591 "cppBison.yxx"
    {
  (yyval.u.decl) = new CPPTypeDeclaration(CPPType::new_type((yyvsp[(1) - (1)].u.struct_type)));
}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1595 "cppBison.yxx"
    {
  (yyval.u.decl) = CPPType::new_type((yyvsp[(1) - (1)].u.enum_type));
}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1599 "cppBison.yxx"
    {
  (yyval.u.decl) = new CPPTypeDeclaration(CPPType::new_type((yyvsp[(1) - (1)].u.enum_type)));
}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1603 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.decl) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.decl) = et;
  }
}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1619 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.decl) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.decl) = et;
  }
}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1638 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type((yyvsp[(1) - (1)].u.simple_type));
}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1642 "cppBison.yxx"
    {
  (yyval.u.type) = (yyvsp[(1) - (1)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert((yyval.u.type) != NULL);
}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1647 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1651 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.type) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.type) = et;
  }
}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1667 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  if (type != NULL) {
    (yyval.u.type) = type;
  } else {
    CPPExtensionType *et = 
      CPPType::new_type(new CPPExtensionType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope, (yylsp[(1) - (2)]).file))
      ->as_extension_type();
    CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope);
    if (scope != NULL) {
      scope->define_extension_type(et);
    }
    (yyval.u.type) = et;
  }
}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1686 "cppBison.yxx"
    {
  CPPInstance *inst = new CPPInstance((yyvsp[(1) - (2)].u.type), (yyvsp[(2) - (2)].u.inst_ident), 0, (yylsp[(1) - (2)]).file);
  (yyval.u.type) = inst->_type;
  delete inst;
}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1692 "cppBison.yxx"
    {
  (yyvsp[(3) - (3)].u.inst_ident)->add_modifier(IIT_const);
  CPPInstance *inst = new CPPInstance((yyvsp[(2) - (3)].u.type), (yyvsp[(3) - (3)].u.inst_ident), 0, (yylsp[(1) - (3)]).file);
  (yyval.u.type) = inst->_type;
  delete inst;
}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1702 "cppBison.yxx"
    {
  CPPVisibility starting_vis = 
  ((yyvsp[(1) - (2)].u.extension_enum) == CPPExtensionType::T_class) ? V_private : V_public;
  
  CPPScope *new_scope = new CPPScope(current_scope, CPPNameComponent("anon"),
                                     starting_vis);
  CPPStructType *st = new CPPStructType((yyvsp[(1) - (2)].u.extension_enum), NULL, current_scope,
                                        new_scope, (yylsp[(1) - (2)]).file);
  new_scope->set_struct_type(st);

  push_scope(new_scope);
  push_struct(st);
}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1716 "cppBison.yxx"
    {
  (yyval.u.struct_type) = current_struct;
  current_struct->_incomplete = false;
  pop_struct();
  pop_scope();
}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1726 "cppBison.yxx"
    {
  CPPVisibility starting_vis = 
  ((yyvsp[(1) - (2)].u.extension_enum) == CPPExtensionType::T_class) ? V_private : V_public;

  CPPScope *scope = (yyvsp[(2) - (2)].u.identifier)->get_scope(current_scope, global_scope, current_lexer);
  if (scope == NULL) {
    scope = current_scope;
  }
  CPPScope *new_scope = new CPPScope(scope, (yyvsp[(2) - (2)].u.identifier)->_names.back(),
                                     starting_vis);

  CPPStructType *st = new CPPStructType((yyvsp[(1) - (2)].u.extension_enum), (yyvsp[(2) - (2)].u.identifier), current_scope,
                                        new_scope, (yylsp[(1) - (2)]).file);
  new_scope->set_struct_type(st);
  current_scope->define_extension_type(st);
  
  push_scope(new_scope);
  push_struct(st);
}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1746 "cppBison.yxx"
    {
  (yyval.u.struct_type) = current_struct;
  current_struct->_incomplete = false;
  pop_struct();
  pop_scope();
}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1766 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(2) - (2)].u.type), V_public, false);
}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1770 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(2) - (2)].u.type), V_protected, false);
}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1774 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(2) - (2)].u.type), V_private, false);
}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1778 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_public, true);
}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1782 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_protected, true);
}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1786 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_private, true);
}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1790 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_public, true);
}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1794 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_protected, true);
}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1798 "cppBison.yxx"
    {
  current_struct->append_derivation((yyvsp[(3) - (3)].u.type), V_private, true);
}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1805 "cppBison.yxx"
    {
  current_enum = new CPPEnumType(NULL, current_scope, (yylsp[(1) - (2)]).file);
}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1809 "cppBison.yxx"
    {
  (yyval.u.enum_type) = current_enum;
  current_enum = NULL;
}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1817 "cppBison.yxx"
    {
  current_enum = new CPPEnumType((yyvsp[(2) - (3)].u.identifier), current_scope, (yylsp[(1) - (3)]).file);
}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1821 "cppBison.yxx"
    {
  (yyval.u.enum_type) = current_enum;
  current_enum = NULL;
}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1835 "cppBison.yxx"
    {
  assert(current_enum != NULL);
  current_enum->add_element((yyvsp[(1) - (1)].u.identifier)->get_simple_name(), current_scope);
}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1840 "cppBison.yxx"
    {
  assert(current_enum != NULL);
  current_enum->add_element((yyvsp[(1) - (3)].u.identifier)->get_simple_name(), current_scope, (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1845 "cppBison.yxx"
    {
  assert(current_enum != NULL);
  current_enum->add_element((yyvsp[(3) - (3)].u.identifier)->get_simple_name(), current_scope);
}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1850 "cppBison.yxx"
    {
  assert(current_enum != NULL);
  current_enum->add_element((yyvsp[(3) - (5)].u.identifier)->get_simple_name(), current_scope, (yyvsp[(5) - (5)].u.expr));
}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1858 "cppBison.yxx"
    {
  (yyval.u.extension_enum) = CPPExtensionType::T_enum;
}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1865 "cppBison.yxx"
    {
  (yyval.u.extension_enum) = CPPExtensionType::T_class;
}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1869 "cppBison.yxx"
    {
  (yyval.u.extension_enum) = CPPExtensionType::T_struct;
}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1873 "cppBison.yxx"
    {
  (yyval.u.extension_enum) = CPPExtensionType::T_union;
}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1880 "cppBison.yxx"
    {
  CPPScope *scope = (yyvsp[(2) - (3)].u.identifier)->find_scope(current_scope, global_scope, current_lexer);
  if (scope == NULL) {
    // This must be a new namespace declaration.
    CPPScope *parent_scope = 
      (yyvsp[(2) - (3)].u.identifier)->get_scope(current_scope, global_scope, current_lexer);
    if (parent_scope == NULL) {
      parent_scope = current_scope;
    }
    scope = new CPPScope(parent_scope, (yyvsp[(2) - (3)].u.identifier)->_names.back(), V_public);
  }

  CPPNamespace *nspace = new CPPNamespace((yyvsp[(2) - (3)].u.identifier), scope, (yylsp[(1) - (3)]).file);
  current_scope->add_declaration(nspace, global_scope, current_lexer, (yylsp[(1) - (3)]));
  current_scope->define_namespace(nspace);
  push_scope(scope);
}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1898 "cppBison.yxx"
    {
  pop_scope();
}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1906 "cppBison.yxx"
    {
  CPPUsing *using_decl = new CPPUsing((yyvsp[(2) - (2)].u.identifier), false, (yylsp[(1) - (2)]).file);
  current_scope->add_declaration(using_decl, global_scope, current_lexer, (yylsp[(1) - (2)]));
  current_scope->add_using(using_decl, global_scope, current_lexer);
}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1912 "cppBison.yxx"
    {
  CPPUsing *using_decl = new CPPUsing((yyvsp[(3) - (3)].u.identifier), true, (yylsp[(1) - (3)]).file);
  current_scope->add_declaration(using_decl, global_scope, current_lexer, (yylsp[(1) - (3)]));
  current_scope->add_using(using_decl, global_scope, current_lexer);
}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1927 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_bool);
}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1931 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_char);
}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1935 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_wchar_t);
}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1939 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int,
                         CPPSimpleType::F_short);
}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1944 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int,
                         CPPSimpleType::F_long);
}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1949 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int,
                         CPPSimpleType::F_longlong);
}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1954 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int,
                         CPPSimpleType::F_unsigned);
}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1959 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int,
                         CPPSimpleType::F_signed);
}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1964 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_int);
}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1968 "cppBison.yxx"
    {
  (yyval.u.simple_type) = (yyvsp[(2) - (2)].u.simple_type);
  (yyval.u.simple_type)->_flags |= CPPSimpleType::F_short;
}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1973 "cppBison.yxx"
    {
  (yyval.u.simple_type) = (yyvsp[(2) - (2)].u.simple_type);
  if ((yyval.u.simple_type)->_flags & CPPSimpleType::F_long) {
    (yyval.u.simple_type)->_flags |= CPPSimpleType::F_longlong;
  } else {
    (yyval.u.simple_type)->_flags |= CPPSimpleType::F_long;
  }
}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1982 "cppBison.yxx"
    {
  (yyval.u.simple_type) = (yyvsp[(2) - (2)].u.simple_type);
  (yyval.u.simple_type)->_flags |= CPPSimpleType::F_unsigned;
}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1987 "cppBison.yxx"
    {
  (yyval.u.simple_type) = (yyvsp[(2) - (2)].u.simple_type);
  (yyval.u.simple_type)->_flags |= CPPSimpleType::F_signed;
}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1995 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_float);
}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1999 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_float,
                         CPPSimpleType::F_long);
}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2004 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_double);
}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2008 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_float,
                         CPPSimpleType::F_longlong);
}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2013 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_double,
                         CPPSimpleType::F_long);
}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2021 "cppBison.yxx"
    {
  (yyval.u.simple_type) = new CPPSimpleType(CPPSimpleType::T_void);
}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2030 "cppBison.yxx"
    {
  current_lexer->_resolve_identifiers = false;
}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2034 "cppBison.yxx"
    {
  current_lexer->_resolve_identifiers = true;
}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2046 "cppBison.yxx"
    {
}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2049 "cppBison.yxx"
    {
}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2052 "cppBison.yxx"
    {
}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2055 "cppBison.yxx"
    {
}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2058 "cppBison.yxx"
    {
}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2061 "cppBison.yxx"
    {
}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2064 "cppBison.yxx"
    {
}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2067 "cppBison.yxx"
    {
}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 2087 "cppBison.yxx"
    {
}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2096 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2100 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2107 "cppBison.yxx"
    {
  (yyval.u.expr) = (CPPExpression *)NULL;
}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2111 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2118 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2122 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(',', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2129 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2133 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(2) - (4)].u.type), (yyvsp[(4) - (4)].u.expr)));
}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2137 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2141 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2145 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::sizeof_func((yyvsp[(3) - (4)].u.type)));
}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2149 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NOT, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2153 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NEGATE, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2157 "cppBison.yxx"
    {
  if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_integer) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._integer = -(yyval.u.expr)->_u._integer;
  } else if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_real) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._real = -(yyval.u.expr)->_u._real;
  } else {
    (yyval.u.expr) = new CPPExpression(UNARY_MINUS, (yyvsp[(2) - (2)].u.expr));
  }
}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2169 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_STAR, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2173 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_REF, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2177 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('*', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2181 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('/', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2185 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('%', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2189 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('+', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2193 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('-', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2197 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('|', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2201 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('^', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2205 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('&', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 2209 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(OROR, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2213 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(ANDAND, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2217 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(EQCOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2221 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(NECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2225 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2229 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(GECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2233 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2237 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(RSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2241 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('?', (yyvsp[(1) - (5)].u.expr), (yyvsp[(3) - (5)].u.expr), (yyvsp[(5) - (5)].u.expr));
}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2245 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('[', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2249 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2253 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (3)].u.expr));
}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2257 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('.', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 2261 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(POINTSAT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2265 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr);
}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 2273 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2277 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(2) - (4)].u.type), (yyvsp[(4) - (4)].u.expr)));
}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 2281 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2285 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 2289 "cppBison.yxx"
    {
  // A constructor call.
  CPPType *type = (yyvsp[(1) - (4)].u.identifier)->find_type(current_scope, global_scope, false, current_lexer);
  assert(type != NULL);
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 2296 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_int));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 2302 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_char));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 2308 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_wchar_t));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 2314 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_bool));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2320 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_int,
                                        CPPSimpleType::F_short));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 2327 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_int,
                                        CPPSimpleType::F_long));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2334 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_int,
                                        CPPSimpleType::F_unsigned));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2341 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_int,
                                        CPPSimpleType::F_signed));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2348 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_float));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2354 "cppBison.yxx"
    {
  CPPType *type = 
    CPPType::new_type(new CPPSimpleType(CPPSimpleType::T_double));
  (yyval.u.expr) = new CPPExpression(CPPExpression::construct_op(type, (yyvsp[(3) - (4)].u.expr)));
}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2360 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::sizeof_func((yyvsp[(3) - (4)].u.type)));
}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2364 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::new_op((yyvsp[(2) - (2)].u.type)));
}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2368 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::new_op((yyvsp[(2) - (5)].u.type), (yyvsp[(4) - (5)].u.expr)));
}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2372 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NOT, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2376 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NEGATE, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2380 "cppBison.yxx"
    {
  if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_integer) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._integer = -(yyval.u.expr)->_u._integer;
  } else if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_real) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._real = -(yyval.u.expr)->_u._real;
  } else {
    (yyval.u.expr) = new CPPExpression(UNARY_MINUS, (yyvsp[(2) - (2)].u.expr));
  }
}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2392 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_STAR, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2396 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_REF, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2400 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('*', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2404 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('/', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2408 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('%', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2412 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('+', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2416 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('-', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2420 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('|', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2424 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('^', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2428 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('&', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2432 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(OROR, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2436 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(ANDAND, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2440 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(EQCOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2444 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(NECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2448 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2452 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(GECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2456 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('<', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2460 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('>', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2464 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2468 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(RSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2472 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('?', (yyvsp[(1) - (5)].u.expr), (yyvsp[(3) - (5)].u.expr), (yyvsp[(5) - (5)].u.expr));
}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2476 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('[', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2480 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2484 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (3)].u.expr));
}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2488 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('.', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2492 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(POINTSAT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2496 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr);
}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2503 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.integer));
}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2507 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(true);
}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2511 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(false);
}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2515 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.integer));
}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2519 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.real));
}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2523 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].str));
}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2527 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.identifier), current_scope, global_scope, current_lexer);
}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2541 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2545 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(2) - (4)].u.type), (yyvsp[(4) - (4)].u.expr)));
}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2549 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2553 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::typecast_op((yyvsp[(3) - (7)].u.type), (yyvsp[(6) - (7)].u.expr)));
}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2557 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::sizeof_func((yyvsp[(3) - (4)].u.type)));
}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2561 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::new_op((yyvsp[(2) - (2)].u.type)));
}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2565 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(CPPExpression::new_op((yyvsp[(2) - (5)].u.type), (yyvsp[(4) - (5)].u.expr)));
}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2569 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NOT, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2573 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_NEGATE, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2577 "cppBison.yxx"
    {
  if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_integer) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._integer = -(yyval.u.expr)->_u._integer;
  } else if ((yyvsp[(2) - (2)].u.expr)->_type == CPPExpression::T_real) {
    (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
    (yyval.u.expr)->_u._real = -(yyval.u.expr)->_u._real;
  } else {
    (yyval.u.expr) = new CPPExpression(UNARY_MINUS, (yyvsp[(2) - (2)].u.expr));
  }
}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2589 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(UNARY_REF, (yyvsp[(2) - (2)].u.expr));
}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2593 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('*', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2597 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('/', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2601 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('%', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2605 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('+', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2609 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('-', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 2613 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('|', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 2617 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('^', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 2621 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('&', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2625 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(OROR, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2629 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(ANDAND, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2633 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(EQCOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2637 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(NECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2641 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2645 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(GECOMPARE, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 2649 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('<', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 2653 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('>', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 2657 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(LSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 2661 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(RSHIFT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 2665 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('?', (yyvsp[(1) - (5)].u.expr), (yyvsp[(3) - (5)].u.expr), (yyvsp[(5) - (5)].u.expr));
}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 2669 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('[', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 2673 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr));
}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 2677 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('f', (yyvsp[(1) - (3)].u.expr));
}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2681 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression('.', (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2685 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(POINTSAT, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr));
}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 2689 "cppBison.yxx"
    {
  (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr);
}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2696 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.integer));
}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2700 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(true);
}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2704 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression(false);
}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 2708 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.integer));
}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 2712 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].u.real));
}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2716 "cppBison.yxx"
    {
  (yyval.u.expr) = new CPPExpression((yyvsp[(1) - (1)].str));
}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2723 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(1) - (1)].u.identifier)->find_type(current_scope, global_scope, true);
  if (type == NULL) {
    type = CPPType::new_type(new CPPTBDType((yyvsp[(1) - (1)].u.identifier)));
  }
  (yyval.u.type) = type;
}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 2731 "cppBison.yxx"
    {
  CPPType *type = (yyvsp[(2) - (2)].u.identifier)->find_type(current_scope, global_scope, true, current_lexer);
  if (type == NULL) {
    type = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
  }
  (yyval.u.type) = type;
}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 2739 "cppBison.yxx"
    {
  (yyval.u.type) = CPPType::new_type(new CPPTBDType((yyvsp[(2) - (2)].u.identifier)));
}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 2762 "cppBison.yxx"
    {
  (yyval.u.identifier) = (yyvsp[(1) - (1)].u.identifier);
}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 2766 "cppBison.yxx"
    {
  (yyval.u.identifier) = (yyvsp[(1) - (1)].u.identifier);
}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 2773 "cppBison.yxx"
    {
  (yyval.str) = (yyvsp[(1) - (1)].str);
}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 2777 "cppBison.yxx"
    {
  (yyval.str) = (yyvsp[(1) - (2)].str) + (yyvsp[(2) - (2)].str);
}
    break;



/* Line 1455 of yacc.c  */
#line 7267 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



