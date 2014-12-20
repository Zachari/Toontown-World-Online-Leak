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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse eggyyparse
#define yylex   eggyylex
#define yyerror eggyyerror
#define yylval  eggyylval
#define yychar  eggyychar
#define yydebug eggyydebug
#define yynerrs eggyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EGG_NUMBER = 258,
     EGG_ULONG = 259,
     EGG_STRING = 260,
     ANIMPRELOAD = 261,
     BEZIERCURVE = 262,
     BFACE = 263,
     BILLBOARD = 264,
     BILLBOARDCENTER = 265,
     BINORMAL = 266,
     BUNDLE = 267,
     CLOSED = 268,
     COLLIDE = 269,
     COMMENT = 270,
     COMPONENT = 271,
     COORDSYSTEM = 272,
     CV = 273,
     DART = 274,
     DNORMAL = 275,
     DRGBA = 276,
     DUV = 277,
     DXYZ = 278,
     DCS = 279,
     DISTANCE = 280,
     DTREF = 281,
     DYNAMICVERTEXPOOL = 282,
     EXTERNAL_FILE = 283,
     GROUP = 284,
     DEFAULTPOSE = 285,
     JOINT = 286,
     KNOTS = 287,
     INCLUDE = 288,
     INSTANCE = 289,
     LINE = 290,
     LOOP = 291,
     MATERIAL = 292,
     MATRIX3 = 293,
     MATRIX4 = 294,
     MODEL = 295,
     MREF = 296,
     NORMAL = 297,
     NURBSCURVE = 298,
     NURBSSURFACE = 299,
     OBJECTTYPE = 300,
     ORDER = 301,
     OUTTANGENT = 302,
     POINTLIGHT = 303,
     POLYGON = 304,
     REF = 305,
     RGBA = 306,
     ROTATE = 307,
     ROTX = 308,
     ROTY = 309,
     ROTZ = 310,
     SANIM = 311,
     SCALAR = 312,
     SCALE = 313,
     SEQUENCE = 314,
     SHADING = 315,
     SWITCH = 316,
     SWITCHCONDITION = 317,
     TABLE = 318,
     TABLE_V = 319,
     TAG = 320,
     TANGENT = 321,
     TEXLIST = 322,
     TEXTURE = 323,
     TLENGTHS = 324,
     TRANSFORM = 325,
     TRANSLATE = 326,
     TREF = 327,
     TRIANGLEFAN = 328,
     TRIANGLESTRIP = 329,
     TRIM = 330,
     TXT = 331,
     UKNOTS = 332,
     UV = 333,
     AUX = 334,
     VKNOTS = 335,
     VERTEX = 336,
     VERTEXANIM = 337,
     VERTEXPOOL = 338,
     VERTEXREF = 339,
     XFMANIM = 340,
     XFMSANIM = 341,
     START_EGG = 342,
     START_GROUP_BODY = 343,
     START_TEXTURE_BODY = 344,
     START_PRIMITIVE_BODY = 345
   };
#endif
/* Tokens.  */
#define EGG_NUMBER 258
#define EGG_ULONG 259
#define EGG_STRING 260
#define ANIMPRELOAD 261
#define BEZIERCURVE 262
#define BFACE 263
#define BILLBOARD 264
#define BILLBOARDCENTER 265
#define BINORMAL 266
#define BUNDLE 267
#define CLOSED 268
#define COLLIDE 269
#define COMMENT 270
#define COMPONENT 271
#define COORDSYSTEM 272
#define CV 273
#define DART 274
#define DNORMAL 275
#define DRGBA 276
#define DUV 277
#define DXYZ 278
#define DCS 279
#define DISTANCE 280
#define DTREF 281
#define DYNAMICVERTEXPOOL 282
#define EXTERNAL_FILE 283
#define GROUP 284
#define DEFAULTPOSE 285
#define JOINT 286
#define KNOTS 287
#define INCLUDE 288
#define INSTANCE 289
#define LINE 290
#define LOOP 291
#define MATERIAL 292
#define MATRIX3 293
#define MATRIX4 294
#define MODEL 295
#define MREF 296
#define NORMAL 297
#define NURBSCURVE 298
#define NURBSSURFACE 299
#define OBJECTTYPE 300
#define ORDER 301
#define OUTTANGENT 302
#define POINTLIGHT 303
#define POLYGON 304
#define REF 305
#define RGBA 306
#define ROTATE 307
#define ROTX 308
#define ROTY 309
#define ROTZ 310
#define SANIM 311
#define SCALAR 312
#define SCALE 313
#define SEQUENCE 314
#define SHADING 315
#define SWITCH 316
#define SWITCHCONDITION 317
#define TABLE 318
#define TABLE_V 319
#define TAG 320
#define TANGENT 321
#define TEXLIST 322
#define TEXTURE 323
#define TLENGTHS 324
#define TRANSFORM 325
#define TRANSLATE 326
#define TREF 327
#define TRIANGLEFAN 328
#define TRIANGLESTRIP 329
#define TRIM 330
#define TXT 331
#define UKNOTS 332
#define UV 333
#define AUX 334
#define VKNOTS 335
#define VERTEX 336
#define VERTEXANIM 337
#define VERTEXPOOL 338
#define VERTEXREF 339
#define XFMANIM 340
#define XFMSANIM 341
#define START_EGG 342
#define START_GROUP_BODY 343
#define START_TEXTURE_BODY 344
#define START_PRIMITIVE_BODY 345




/* Copy the first part of user declarations.  */
#line 6 "parser.yxx"


#include "pandabase.h"
#include "config_egg.h"
#include "parserDefs.h"
#include "lexerDefs.h"
#include "eggObject.h"
#include "eggGroup.h"
#include "eggVertex.h"
#include "eggVertexPool.h"
#include "eggVertexUV.h"
#include "eggVertexAux.h"
#include "eggPolygon.h"
#include "eggCompositePrimitive.h"
#include "eggTriangleFan.h"
#include "eggTriangleStrip.h"
#include "eggPoint.h"
#include "eggLine.h"
#include "eggNurbsSurface.h"
#include "eggNurbsCurve.h"
#include "eggTable.h"
#include "eggSAnimData.h"
#include "eggXfmSAnim.h"
#include "eggXfmAnimData.h"
#include "eggTexture.h"
#include "eggMaterial.h"
#include "eggComment.h"
#include "eggCoordinateSystem.h"
#include "eggExternalReference.h"
#include "eggData.h"
#include "eggAnimPreload.h"
#include "eggTransform.h"
#include "pt_EggTexture.h"
#include "pt_EggMaterial.h"

#include "string_utils.h"
#include "filename.h"
#include "luse.h"
#include "lmatrix.h"
#include "coordinateSystem.h"
#include "pvector.h"
#include "dcast.h"
#include "thread.h"

// Because our token type contains objects of type string, which
// require correct copy construction (and not simply memcpying), we
// cannot use bison's built-in auto-stack-grow feature.  As an easy
// solution, we ensure here that we have enough yacc stack to start
// with, and that it doesn't ever try to grow.
#define YYINITDEPTH 1000
#define YYMAXDEPTH 1000

// We need a stack of EggObject pointers.  Each time we encounter a
// nested EggObject of some kind, we'll allocate a new one of these
// and push it onto the stack.  At any given time, the top of the
// stack is the EggObject we are currently scanning.

typedef pvector< PT(EggObject) > EggStack;
static EggStack egg_stack;

// This is used just when parsing a <Transform> or <DefaultPose> entry.
static EggTransform *egg_top_transform;

// There's one "top-level" egg node, which is where we should parent
// things (e.g. implicit textures) encountered in the egg file that
// don't have an explicit place in the tree.  If this is NULL, such
// things won't be parented anywhere.
static EggGroupNode *egg_top_node;

// We need a table mapping vertex pool names to vertex pools.
typedef pmap<string,  PT(EggVertexPool) > VertexPools;
static VertexPools vertex_pools;

// And another one mapping texture names to textures.
typedef pmap<string,  PT_EggTexture > Textures;
static Textures textures;

// And again for material names to materials.
typedef pmap<string,  PT_EggMaterial > Materials;
static Materials materials;

// Group names to groups.
typedef pmap<string,  PT(EggGroup) > Groups;
static Groups groups;

// We need to be able to save the index number requested for a vertex
// temporarily.
static int vertex_index;

// We need to hold a matrix for a little bit while parsing the
// <Transform> entries.
static LMatrix3d matrix_2d;


////////////////////////////////////////////////////////////////////
// Defining the interface to the parser.
////////////////////////////////////////////////////////////////////

void
egg_init_parser(istream &in, const string &filename,
                EggObject *tos, EggGroupNode *top_node) {
  egg_init_lexer(in, filename);

  egg_stack.clear();
  vertex_pools.clear();
  textures.clear();
  materials.clear();
  groups.clear();

  egg_stack.push_back(tos);
  egg_top_node = top_node;
}

void
egg_cleanup_parser() {
  // Check for undefined vertex pools.
  VertexPools::const_iterator vpi;
  for (vpi = vertex_pools.begin(); vpi != vertex_pools.end(); ++vpi) {
    EggVertexPool *pool = (*vpi).second;
    if (pool->has_forward_vertices()) {
      if (!pool->has_defined_vertices()) {
        eggyyerror("Undefined vertex pool " + pool->get_name());
      } else {
        eggyyerror("Undefined vertices in pool " + pool->get_name());
        
        egg_cat.error(false)
          << "Undefined vertex index numbers:";
        EggVertexPool::const_iterator vi;
        for (vi = pool->begin(); vi != pool->end(); ++vi) {
          EggVertex *vertex = (*vi);
          if (vertex->is_forward_reference()) {
            egg_cat.error(false)
              << " " << vertex->get_index();
          }
        }
        egg_cat.error(false) 
          << "\n";
      }
    }
  }

  // Clean these out after we're done, so we don't keep big memory
  // structures around needlessly.
  egg_stack.clear();
  vertex_pools.clear();
  textures.clear();
  materials.clear();
  groups.clear();
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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 446 "y.tab.c"

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNRULES -- Number of states.  */
#define YYNSTATES  756

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
       2,     2,     2,    91,     2,    92,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    17,    20,    22,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    61,    67,    68,
      76,    78,    85,    88,    89,    96,    98,   105,   111,   118,
     119,   126,   128,   131,   132,   138,   139,   146,   148,   151,
     155,   160,   161,   169,   170,   178,   184,   190,   199,   208,
     211,   215,   223,   231,   239,   248,   256,   265,   266,   271,
     275,   284,   293,   298,   308,   318,   319,   326,   327,   334,
     335,   342,   344,   351,   357,   365,   373,   379,   385,   391,
     397,   403,   409,   415,   422,   428,   431,   434,   437,   440,
     446,   449,   451,   453,   456,   457,   463,   464,   470,   472,
     475,   478,   481,   484,   487,   490,   493,   496,   499,   502,
     505,   508,   514,   521,   526,   531,   536,   541,   549,   555,
     562,   567,   572,   574,   584,   589,   591,   608,   618,   620,
     627,   632,   644,   657,   658,   665,   666,   673,   674,   681,
     682,   689,   690,   697,   698,   705,   706,   713,   715,   721,
     727,   729,   730,   738,   744,   750,   756,   759,   765,   771,
     777,   784,   786,   792,   798,   804,   807,   813,   819,   825,
     831,   837,   843,   846,   852,   859,   861,   867,   873,   879,
     882,   888,   894,   900,   906,   912,   919,   921,   923,   925,
     929,   938,   947,   952,   962,   972,   974,   983,   986,   988,
     990,   992,   998,  1000,  1003,  1005,  1007,  1008,  1015,  1016,
    1023,  1025,  1028,  1031,  1034,  1037,  1040,  1041,  1048,  1050,
    1057,  1063,  1064,  1071,  1073,  1080,  1086,  1087,  1094,  1096,
    1103,  1106,  1107,  1114,  1116,  1123,  1125,  1128,  1130,  1133,
    1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,
    1155,  1157,  1159,  1161,  1163,  1165,  1167,  1170,  1172,  1174,
    1176,  1178,  1180,  1182,  1184
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    87,    95,    -1,    88,   125,    -1,    89,
     101,    -1,    90,   166,    -1,   217,    -1,    95,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   102,    -1,   105,    -1,
     106,    -1,   119,    -1,   121,    -1,   123,    -1,   151,    -1,
     153,    -1,   155,    -1,   157,    -1,   159,    -1,   161,    -1,
     163,    -1,   184,    -1,   198,    -1,    17,    91,   209,    92,
      -1,    15,   208,    91,   212,    92,    -1,    -1,    68,   207,
      91,   209,   100,   101,    92,    -1,   217,    -1,   101,    57,
     207,    91,   215,    92,    -1,   101,   128,    -1,    -1,    37,
     207,    91,   103,   104,    92,    -1,   217,    -1,   104,    57,
     207,    91,   215,    92,    -1,    28,   208,    91,   209,    92,
      -1,   211,    28,   208,    91,   209,    92,    -1,    -1,    83,
     207,   107,    91,   108,    92,    -1,   217,    -1,   108,   109,
      -1,    -1,    81,   110,    91,   112,    92,    -1,    -1,    81,
     216,   111,    91,   112,    92,    -1,   214,    -1,   214,   214,
      -1,   214,   214,   214,    -1,   214,   214,   214,   214,    -1,
      -1,   112,    78,   208,    91,   113,   115,    92,    -1,    -1,
     112,    79,   207,    91,   114,   116,    92,    -1,   112,    42,
      91,   117,    92,    -1,   112,    51,    91,   118,    92,    -1,
     112,    23,   211,    91,   214,   214,   214,    92,    -1,   112,
      23,    91,   211,   214,   214,   214,    92,    -1,   214,   214,
      -1,   214,   214,   214,    -1,   115,    66,    91,   214,   214,
     214,    92,    -1,   115,    11,    91,   214,   214,   214,    92,
      -1,   115,    22,   211,    91,   214,   214,    92,    -1,   115,
      22,   211,    91,   214,   214,   214,    92,    -1,   115,    22,
      91,   211,   214,   214,    92,    -1,   115,    22,    91,   211,
     214,   214,   214,    92,    -1,    -1,   214,   214,   214,   214,
      -1,   214,   214,   214,    -1,   117,    20,   211,    91,   214,
     214,   214,    92,    -1,   117,    20,    91,   211,   214,   214,
     214,    92,    -1,   214,   214,   214,   214,    -1,   118,    21,
     211,    91,   214,   214,   214,   214,    92,    -1,   118,    21,
      91,   211,   214,   214,   214,   214,    92,    -1,    -1,    29,
     208,   120,    91,   125,    92,    -1,    -1,    31,   208,   122,
      91,   125,    92,    -1,    -1,    34,   208,   124,    91,   125,
      92,    -1,   217,    -1,   125,    57,   207,    91,   215,    92,
      -1,   125,     9,    91,   211,    92,    -1,   125,    10,    91,
     214,   214,   214,    92,    -1,   125,    14,   208,    91,   126,
     127,    92,    -1,   125,    24,    91,   216,    92,    -1,   125,
      24,    91,     5,    92,    -1,   125,    19,    91,   216,    92,
      -1,   125,    19,    91,     5,    92,    -1,   125,    61,    91,
     216,    92,    -1,   125,    45,    91,   209,    92,    -1,   125,
      40,    91,   216,    92,    -1,   125,    65,   208,    91,   212,
      92,    -1,   125,    67,    91,   216,    92,    -1,   125,   128,
      -1,   125,   130,    -1,   125,   147,    -1,   125,   149,    -1,
     125,    50,    91,   206,    92,    -1,   125,    96,    -1,   211,
      -1,   217,    -1,   127,   211,    -1,    -1,    70,   129,    91,
     132,    92,    -1,    -1,    30,   131,    91,   132,    92,    -1,
     217,    -1,   132,   133,    -1,   132,   134,    -1,   132,   135,
      -1,   132,   136,    -1,   132,   137,    -1,   132,   138,    -1,
     132,   139,    -1,   132,   140,    -1,   132,   141,    -1,   132,
     142,    -1,   132,   143,    -1,   132,   145,    -1,    71,    91,
     214,   214,    92,    -1,    71,    91,   214,   214,   214,    92,
      -1,    52,    91,   214,    92,    -1,    53,    91,   214,    92,
      -1,    54,    91,   214,    92,    -1,    55,    91,   214,    92,
      -1,    52,    91,   214,   214,   214,   214,    92,    -1,    58,
      91,   214,   214,    92,    -1,    58,    91,   214,   214,   214,
      92,    -1,    58,    91,   214,    92,    -1,    38,    91,   144,
      92,    -1,   217,    -1,   214,   214,   214,   214,   214,   214,
     214,   214,   214,    -1,    39,    91,   146,    92,    -1,   217,
      -1,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,    -1,    84,    91,
     201,   148,    50,    91,   205,    92,    92,    -1,   217,    -1,
     148,    57,   207,    91,   215,    92,    -1,    62,    91,   150,
      92,    -1,    25,    91,   214,   214,    81,    91,   214,   214,
     214,    92,    92,    -1,    25,    91,   214,   214,   214,    81,
      91,   214,   214,   214,    92,    92,    -1,    -1,    49,   208,
     152,    91,   166,    92,    -1,    -1,    73,   208,   154,    91,
     166,    92,    -1,    -1,    74,   208,   156,    91,   166,    92,
      -1,    -1,    48,   208,   158,    91,   166,    92,    -1,    -1,
      35,   208,   160,    91,   166,    92,    -1,    -1,    44,   208,
     162,    91,   168,    92,    -1,    -1,    43,   208,   164,    91,
     169,    92,    -1,   217,    -1,   165,    42,    91,   173,    92,
      -1,   165,    51,    91,   174,    92,    -1,   217,    -1,    -1,
     166,    16,   216,    91,   167,   165,    92,    -1,   166,    72,
      91,   170,    92,    -1,   166,    68,    91,   171,    92,    -1,
     166,    41,    91,   172,    92,    -1,   166,   176,    -1,   166,
      42,    91,   173,    92,    -1,   166,    51,    91,   174,    92,
      -1,   166,     8,    91,   175,    92,    -1,   166,    57,   207,
      91,   215,    92,    -1,   217,    -1,   168,    72,    91,   170,
      92,    -1,   168,    68,    91,   171,    92,    -1,   168,    41,
      91,   172,    92,    -1,   168,   176,    -1,   168,    42,    91,
     173,    92,    -1,   168,    51,    91,   174,    92,    -1,   168,
       8,    91,   175,    92,    -1,   168,    46,    91,   177,    92,
      -1,   168,    77,    91,   178,    92,    -1,   168,    80,    91,
     179,    92,    -1,   168,   163,    -1,   168,    75,    91,   180,
      92,    -1,   168,    57,   207,    91,   215,    92,    -1,   217,
      -1,   169,    72,    91,   170,    92,    -1,   169,    68,    91,
     171,    92,    -1,   169,    41,    91,   172,    92,    -1,   169,
     176,    -1,   169,    42,    91,   173,    92,    -1,   169,    51,
      91,   174,    92,    -1,   169,     8,    91,   175,    92,    -1,
     169,    46,    91,   182,    92,    -1,   169,    32,    91,   183,
      92,    -1,   169,    57,   207,    91,   215,    92,    -1,   203,
      -1,   207,    -1,   204,    -1,   214,   214,   214,    -1,   173,
      20,   211,    91,   214,   214,   214,    92,    -1,   173,    20,
      91,   211,   214,   214,   214,    92,    -1,   214,   214,   214,
     214,    -1,   174,    21,   211,    91,   214,   214,   214,   214,
      92,    -1,   174,    21,    91,   211,   214,   214,   214,   214,
      92,    -1,   216,    -1,    84,    91,   201,    50,    91,   205,
      92,    92,    -1,   216,   216,    -1,   202,    -1,   202,    -1,
     217,    -1,   180,    36,    91,   181,    92,    -1,   217,    -1,
     181,   163,    -1,   216,    -1,   202,    -1,    -1,    63,   208,
     185,    91,   188,    92,    -1,    -1,    12,   208,   187,    91,
     188,    92,    -1,   217,    -1,   188,   184,    -1,   188,   186,
      -1,   188,   189,    -1,   188,   192,    -1,   188,   195,    -1,
      -1,    56,   208,   190,    91,   191,    92,    -1,   217,    -1,
     191,    57,   207,    91,   215,    92,    -1,   191,    64,    91,
     202,    92,    -1,    -1,    85,   208,   193,    91,   194,    92,
      -1,   217,    -1,   194,    57,   207,    91,   215,    92,    -1,
     194,    64,    91,   202,    92,    -1,    -1,    86,   208,   196,
      91,   197,    92,    -1,   217,    -1,   197,    57,   207,    91,
     215,    92,    -1,   197,   189,    -1,    -1,     6,   208,   199,
      91,   200,    92,    -1,   217,    -1,   200,    57,   207,    91,
     215,    92,    -1,   217,    -1,   201,   216,    -1,   217,    -1,
     202,   214,    -1,   207,    -1,   207,    -1,   207,    -1,   207,
      -1,   217,    -1,   211,    -1,   210,    -1,   217,    -1,   211,
      -1,   217,    -1,   211,    -1,     3,    -1,     4,    -1,     5,
      -1,   217,    -1,   213,    -1,   211,    -1,   213,   211,    -1,
       3,    -1,     4,    -1,     3,    -1,     4,    -1,     5,    -1,
       3,    -1,     4,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   232,   232,   233,   234,   235,   246,   247,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   291,   314,   329,   328,
     356,   357,   703,   715,   714,   741,   742,   837,   844,   865,
     864,   904,   905,   917,   916,   928,   927,   973,   977,   981,
     985,   990,   989,  1005,  1004,  1019,  1020,  1021,  1029,  1048,
    1052,  1056,  1064,  1072,  1080,  1088,  1096,  1113,  1114,  1128,
    1132,  1140,  1158,  1162,  1170,  1189,  1188,  1214,  1213,  1235,
    1234,  1259,  1260,  1405,  1417,  1422,  1429,  1435,  1448,  1455,
    1468,  1474,  1480,  1486,  1491,  1497,  1498,  1499,  1500,  1501,
    1510,  1524,  1554,  1555,  1578,  1577,  1594,  1593,  1614,  1615,
    1616,  1617,  1618,  1619,  1620,  1621,  1622,  1623,  1624,  1625,
    1626,  1630,  1637,  1644,  1651,  1658,  1665,  1672,  1679,  1686,
    1693,  1700,  1704,  1705,  1717,  1721,  1722,  1744,  1777,  1781,
    1806,  1818,  1823,  1841,  1840,  1860,  1859,  1879,  1878,  1898,
    1897,  1917,  1916,  1936,  1935,  1955,  1954,  1974,  1975,  1976,
    1987,  1989,  1988,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2016,  2091,  2092,  2093,  2094,  2095,  2096,  2097,  2098,  2099,
    2100,  2101,  2102,  2108,  2109,  2175,  2176,  2177,  2178,  2179,
    2180,  2181,  2182,  2183,  2184,  2185,  2256,  2273,  2313,  2330,
    2334,  2342,  2360,  2364,  2372,  2390,  2406,  2437,  2455,  2475,
    2495,  2500,  2511,  2517,  2536,  2552,  2574,  2573,  2597,  2596,
    2617,  2618,  2622,  2626,  2630,  2634,  2650,  2649,  2670,  2671,
    2683,  2698,  2697,  2718,  2719,  2736,  2751,  2750,  2771,  2772,
    2787,  2803,  2802,  2823,  2824,  2848,  2852,  2866,  2870,  2884,
    2905,  2926,  2951,  2972,  2977,  2989,  3001,  3006,  3017,  3021,
    3035,  3039,  3043,  3056,  3060,  3076,  3080,  3094,  3095,  3110,
    3116,  3122,  3139,  3147,  3153
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EGG_NUMBER", "EGG_ULONG", "EGG_STRING",
  "ANIMPRELOAD", "BEZIERCURVE", "BFACE", "BILLBOARD", "BILLBOARDCENTER",
  "BINORMAL", "BUNDLE", "CLOSED", "COLLIDE", "COMMENT", "COMPONENT",
  "COORDSYSTEM", "CV", "DART", "DNORMAL", "DRGBA", "DUV", "DXYZ", "DCS",
  "DISTANCE", "DTREF", "DYNAMICVERTEXPOOL", "EXTERNAL_FILE", "GROUP",
  "DEFAULTPOSE", "JOINT", "KNOTS", "INCLUDE", "INSTANCE", "LINE", "LOOP",
  "MATERIAL", "MATRIX3", "MATRIX4", "MODEL", "MREF", "NORMAL",
  "NURBSCURVE", "NURBSSURFACE", "OBJECTTYPE", "ORDER", "OUTTANGENT",
  "POINTLIGHT", "POLYGON", "REF", "RGBA", "ROTATE", "ROTX", "ROTY", "ROTZ",
  "SANIM", "SCALAR", "SCALE", "SEQUENCE", "SHADING", "SWITCH",
  "SWITCHCONDITION", "TABLE", "TABLE_V", "TAG", "TANGENT", "TEXLIST",
  "TEXTURE", "TLENGTHS", "TRANSFORM", "TRANSLATE", "TREF", "TRIANGLEFAN",
  "TRIANGLESTRIP", "TRIM", "TXT", "UKNOTS", "UV", "AUX", "VKNOTS",
  "VERTEX", "VERTEXANIM", "VERTEXPOOL", "VERTEXREF", "XFMANIM", "XFMSANIM",
  "START_EGG", "START_GROUP_BODY", "START_TEXTURE_BODY",
  "START_PRIMITIVE_BODY", "'{'", "'}'", "$accept", "grammar", "egg",
  "node", "coordsystem", "comment", "texture", "@1", "texture_body",
  "material", "@2", "material_body", "external_reference", "vertex_pool",
  "@3", "vertex_pool_body", "vertex", "@4", "@5", "vertex_body", "@6",
  "@7", "vertex_uv_body", "vertex_aux_body", "vertex_normal_body",
  "vertex_color_body", "group", "@8", "joint", "@9", "instance", "@10",
  "group_body", "cs_type", "collide_flags", "transform", "@11",
  "default_pose", "@12", "transform_body", "translate2d", "translate3d",
  "rotate2d", "rotx", "roty", "rotz", "rotate3d", "scale2d", "scale3d",
  "uniform_scale", "matrix3", "matrix3_body", "matrix4", "matrix4_body",
  "group_vertex_ref", "group_vertex_membership", "switchcondition",
  "switchcondition_body", "polygon", "@13", "trianglefan", "@14",
  "trianglestrip", "@15", "point_light", "@16", "line", "@17",
  "nurbs_surface", "@18", "nurbs_curve", "@19", "primitive_component_body",
  "primitive_body", "@20", "nurbs_surface_body", "nurbs_curve_body",
  "primitive_tref_body", "primitive_texture_body",
  "primitive_material_body", "primitive_normal_body",
  "primitive_color_body", "primitive_bface_body", "primitive_vertex_ref",
  "nurbs_surface_order_body", "nurbs_surface_uknots_body",
  "nurbs_surface_vknots_body", "nurbs_surface_trim_body",
  "nurbs_surface_trim_loop_body", "nurbs_curve_order_body",
  "nurbs_curve_knots_body", "table", "@21", "bundle", "@22", "table_body",
  "sanim", "@23", "sanim_body", "xfmanim", "@24", "xfmanim_body",
  "xfm_s_anim", "@25", "xfm_s_anim_body", "anim_preload", "@26",
  "anim_preload_body", "integer_list", "real_list", "texture_name",
  "material_name", "vertex_pool_name", "group_name", "required_name",
  "optional_name", "required_string", "optional_string", "string",
  "repeated_string", "repeated_string_body", "real", "real_or_string",
  "integer", "empty", 0
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
     345,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    98,   100,    99,
     101,   101,   101,   103,   102,   104,   104,   105,   105,   107,
     106,   108,   108,   110,   109,   111,   109,   112,   112,   112,
     112,   113,   112,   114,   112,   112,   112,   112,   112,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   118,   120,   119,   122,   121,   124,
     123,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   127,   127,   129,   128,   131,   130,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   144,   145,   146,   146,   147,   148,   148,
     149,   150,   150,   152,   151,   154,   153,   156,   155,   158,
     157,   160,   159,   162,   161,   164,   163,   165,   165,   165,
     166,   167,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   170,   171,   172,   173,
     173,   173,   174,   174,   174,   175,   176,   177,   178,   179,
     180,   180,   181,   181,   182,   183,   185,   184,   187,   186,
     188,   188,   188,   188,   188,   188,   190,   189,   191,   191,
     191,   193,   192,   194,   194,   194,   196,   195,   197,   197,
     197,   199,   198,   200,   200,   201,   201,   202,   202,   203,
     204,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   211,   211,   212,   212,   213,   213,   214,   214,   215,
     215,   215,   216,   216,   217
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     0,     7,
       1,     6,     2,     0,     6,     1,     6,     5,     6,     0,
       6,     1,     2,     0,     5,     0,     6,     1,     2,     3,
       4,     0,     7,     0,     7,     5,     5,     8,     8,     2,
       3,     7,     7,     7,     8,     7,     8,     0,     4,     3,
       8,     8,     4,     9,     9,     0,     6,     0,     6,     0,
       6,     1,     6,     5,     7,     7,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     2,     2,     2,     2,     5,
       2,     1,     1,     2,     0,     5,     0,     5,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     5,     6,     4,     4,     4,     4,     7,     5,     6,
       4,     4,     1,     9,     4,     1,    16,     9,     1,     6,
       4,    11,    12,     0,     6,     0,     6,     0,     6,     0,
       6,     0,     6,     0,     6,     0,     6,     1,     5,     5,
       1,     0,     7,     5,     5,     5,     2,     5,     5,     5,
       6,     1,     5,     5,     5,     2,     5,     5,     5,     5,
       5,     5,     2,     5,     6,     1,     5,     5,     5,     2,
       5,     5,     5,     5,     5,     6,     1,     1,     1,     3,
       8,     8,     4,     9,     9,     1,     8,     2,     1,     1,
       1,     5,     1,     2,     1,     1,     0,     6,     0,     6,
       1,     2,     2,     2,     2,     2,     0,     6,     1,     6,
       5,     0,     6,     1,     6,     5,     0,     6,     1,     6,
       2,     0,     6,     1,     6,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   274,   274,   274,   274,     0,     2,     6,     3,    81,
       4,    30,     5,   160,     1,   260,   261,   262,   274,   274,
       0,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,   274,     0,
       0,   106,     0,     0,     0,   274,     0,     0,   274,     0,
     104,     0,   100,    95,    96,    97,    98,   274,    32,     0,
       0,     0,     0,     0,   274,     0,     0,     0,   166,   241,
     255,   259,   258,     0,   274,     0,    75,    77,    79,   151,
       0,   254,   253,   155,   153,   149,   143,   216,     0,   145,
     147,    39,   274,     0,     0,     0,     0,     0,     0,     0,
     274,   274,     0,     0,     0,     0,     0,     0,   274,     0,
       0,   272,   273,     0,   274,     0,     0,     0,   274,   274,
     274,     0,   274,     0,   257,   256,   274,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,   267,   268,     0,     0,     0,     0,     0,
       0,   274,     0,     0,     0,   252,     0,     0,     0,     0,
     274,     0,   274,   274,   245,     0,     0,   205,   161,     0,
     198,   250,     0,     0,     0,     0,     0,     0,   197,     0,
     196,   249,     0,   274,   265,     0,   264,   263,    26,     0,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
      28,   274,   274,   274,   274,    83,     0,   274,   101,    89,
      88,    87,    86,     0,   108,    92,    91,    99,   269,   270,
     271,     0,    90,     0,   140,     0,    94,     0,     0,   246,
     138,     0,   169,   274,   165,     0,   167,     0,     0,   168,
       0,     0,   164,   163,     0,     0,   243,    27,   266,    37,
       0,     0,     0,     0,     0,    35,     0,   185,     0,   171,
       0,     0,     0,   220,   274,     0,     0,     0,    41,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    82,     0,    93,   105,     0,   274,
      31,     0,   157,     0,     0,   199,     0,     0,     0,   170,
     274,   274,   242,    76,    78,    80,   152,   274,    34,     0,
       0,     0,     0,     0,     0,   274,     0,     0,   156,   189,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,   154,   182,   175,   150,   144,   274,   274,   274,   274,
     217,   221,   222,   223,   224,   225,     0,   146,   148,    43,
      40,    42,    38,    84,    85,   103,   274,   274,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,   162,
       0,     0,     0,     0,   202,     0,   251,     0,     0,     0,
     274,   274,     0,     0,     0,     0,   274,   274,     0,   274,
       0,     0,     0,     0,   274,   274,   274,   274,   274,   218,
     226,   231,   236,    29,     0,    45,     0,     0,   132,     0,
       0,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   215,   247,     0,     0,     0,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,     0,   208,     0,   209,     0,     0,
       0,     0,     0,     0,   131,     0,   134,     0,   123,     0,
     124,   125,   126,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,   192,
     194,   248,   188,   190,   193,   191,     0,   187,   186,   178,
     174,   176,   179,   207,   177,     0,   173,   172,     0,   183,
     180,   181,   274,   274,   274,   274,     0,    47,     0,     0,
       0,     0,   128,     0,   121,     0,     0,     0,   137,   139,
     158,   159,     0,     0,     0,     0,   244,    36,   195,   184,
     274,     0,     0,   228,     0,   233,     0,   238,     0,     0,
       0,   274,   274,    44,    48,     0,     0,     0,     0,   129,
     122,     0,     0,   201,   200,     0,     0,     0,   212,   219,
     274,     0,   227,   274,     0,   232,   274,   237,   240,     0,
       0,     0,     0,     0,     0,    49,    46,     0,     0,   127,
       0,     0,   204,   203,   211,   213,     0,   274,     0,   274,
       0,     0,     0,     0,     0,     0,     0,    51,    53,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,    56,     0,     0,    67,     0,
       0,   141,     0,     0,   230,     0,   235,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,   229,   234,   239,     0,     0,     0,     0,
       0,     0,    72,     0,     0,     0,    52,    59,    54,     0,
     133,     0,    58,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    70,     0,     0,     0,     0,
       0,     0,     0,    74,    73,    62,    65,     0,    63,     0,
      61,     0,    66,    64,     0,   136
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    72,    37,    38,    39,   284,    10,    40,
     214,   274,    41,    42,   160,   287,   381,   434,   493,   546,
     657,   658,   676,   678,   633,   635,    43,   147,    44,   148,
      45,   149,     8,   227,   291,    73,   127,    74,   118,   233,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   436,   313,   439,    75,   248,    76,   179,    46,   155,
      47,   158,    48,   159,    49,   154,    50,   150,    51,   153,
      52,   152,   321,    12,   253,   278,   276,   199,   197,   189,
     192,   194,   186,    88,   476,   484,   486,   482,   597,   467,
     462,    53,   156,   372,   488,   282,   373,   489,   572,   374,
     490,   574,   375,   491,   576,    54,   141,   265,   183,   463,
     200,   190,   405,   174,   191,    89,   143,    90,   101,   205,
     206,   521,   241,   187,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -422
static const yytype_int16 yypact[] =
{
     237,  -422,  -422,  -422,  -422,    20,   841,  -422,  1285,  -422,
      85,  -422,   410,  -422,  -422,  -422,  -422,  -422,   295,   295,
     -65,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,     2,   -49,   -31,   295,    34,
      96,  -422,   118,   156,   164,   295,   166,   168,   295,   179,
    -422,   188,  -422,  -422,  -422,  -422,  -422,   295,  -422,   190,
     201,   191,   193,   196,   295,   202,   211,   212,  -422,  -422,
    -422,  -422,  -422,   216,   295,   217,  -422,  -422,  -422,  -422,
     219,  -422,  -422,  -422,  -422,  -422,  -422,  -422,   220,  -422,
    -422,  -422,   295,   295,   270,   222,   325,   330,   223,   201,
     295,   295,   225,   201,   128,   228,   201,   231,  -422,   251,
     201,  -422,  -422,   253,   295,   270,   270,   255,   295,   295,
    -422,   258,   295,    65,  -422,  -422,   295,   259,   263,   267,
     268,  -422,   274,   275,   281,   282,   291,   295,   292,   293,
     294,   307,   198,  -422,  -422,   270,   295,   200,   203,   308,
     310,  -422,   317,   318,   319,  -422,   336,   320,   322,   324,
     295,   327,  -422,   201,  -422,   336,   329,  -422,  -422,   332,
    -422,  -422,    16,   270,    74,   270,   336,   335,  -422,   337,
    -422,  -422,   112,  -422,  -422,   340,   295,  -422,  -422,   341,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,   295,  -422,   270,  -422,  -422,  -422,
    -422,  -422,  -422,   434,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,   342,  -422,   270,  -422,   343,  -422,   485,    77,  -422,
    -422,   344,  -422,  -422,  -422,    76,  -422,   270,    80,  -422,
     270,   346,  -422,  -422,   323,    87,  -422,  -422,  -422,  -422,
     963,  1111,  1183,   199,    99,  -422,   170,  -422,   142,  -422,
     264,   296,   289,  -422,  -422,   412,   768,   132,  -422,   347,
     349,    54,  -422,   331,   351,   353,   355,   356,   357,   374,
     377,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,   270,  -422,  -422,   379,   295,
    -422,    67,  -422,   295,   380,  -422,   295,   383,   270,  -422,
     295,   295,  -422,  -422,  -422,  -422,  -422,   295,  -422,   384,
     385,   386,   388,   390,   392,   295,   394,   399,  -422,  -422,
     400,   402,   408,   419,   420,   295,   421,   422,   423,   428,
     429,  -422,  -422,  -422,  -422,  -422,   295,   295,   295,   295,
    -422,  -422,  -422,  -422,  -422,  -422,    78,  -422,  -422,   201,
    -422,  -422,  -422,  -422,  -422,  -422,   270,   270,   270,   270,
     270,   270,   270,   270,    83,   295,   430,   431,   436,  -422,
     270,   270,   270,   270,  -422,   409,  -422,   437,   438,   201,
    -422,   295,   270,   201,   270,   439,   295,   295,   201,   295,
     270,   201,   270,   440,   295,   295,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,   441,  -422,   433,   270,  -422,   442,
     270,  -422,     5,   443,   449,   450,    51,   270,   453,   305,
     454,   336,   270,   270,   270,   270,   270,   270,   455,   336,
     336,   457,   465,   270,  -422,   466,    28,   469,  -422,   100,
     336,   470,   472,   473,   474,    31,   477,   201,   103,   336,
     478,   479,   -25,  -422,   481,   270,   482,   270,   487,   488,
     489,   490,   270,   491,  -422,   270,  -422,   270,  -422,   270,
    -422,  -422,  -422,  -422,    60,    62,   270,   492,   484,   493,
      84,   105,   270,   270,   270,   270,  -422,   494,   496,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,   501,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,   504,  -422,  -422,   506,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,   152,   270,   270,   270,
     270,   270,  -422,   507,  -422,   508,   270,   270,  -422,  -422,
    -422,  -422,   509,   510,   270,   270,  -422,  -422,  -422,  -422,
    -422,   345,   194,  -422,   204,  -422,    55,  -422,    86,   513,
     514,   295,   295,  -422,   270,   197,   270,   270,   515,  -422,
    -422,   270,   270,  -422,  -422,   516,   519,    53,  -422,  -422,
     295,   521,  -422,   295,   522,  -422,   295,  -422,  -422,   295,
     525,   270,   270,   526,   528,   270,  -422,   270,   270,  -422,
     530,   270,  -422,  -422,  -422,  -422,   532,  -422,   534,  -422,
     535,   270,   270,    90,   270,   109,   270,  -422,  -422,  -422,
     270,   270,   536,   537,   336,    66,   336,    69,   336,   270,
     270,    89,  -422,   270,    95,  -422,   270,   270,   270,   270,
     270,  -422,   538,   539,  -422,   540,  -422,   541,   270,   270,
     295,   545,  -422,   295,   547,   270,    39,   270,   548,   270,
     270,   270,  -422,  -422,  -422,  -422,   549,   550,   270,   270,
     270,   270,  -422,   555,    98,   556,  -422,   270,  -422,   270,
    -422,   270,  -422,  -422,   270,   270,   270,   270,   270,   295,
     558,   270,  -422,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,  -422,   270,   559,   562,   270,   270,   270,
     270,   270,   270,   270,  -422,  -422,   563,   565,   566,    71,
      73,   573,   270,  -422,  -422,  -422,  -422,   574,  -422,   576,
    -422,   270,  -422,  -422,   270,  -422
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -422,  -422,  -422,   184,  -422,  -422,  -422,  -422,   115,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -193,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,   159,  -422,  -422,    -9,  -422,  -422,  -422,   205,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,
    -274,  -422,  -422,    15,  -422,  -422,  -422,  -244,  -181,  -166,
    -283,  -281,  -290,   -53,  -422,  -422,  -422,  -422,  -422,  -422,
    -422,  -277,  -422,  -422,  -422,    21,   -43,  -422,  -422,  -422,
    -422,  -422,  -422,  -422,  -422,  -422,  -422,  -422,   405,  -421,
    -422,  -422,   189,  -422,   471,    10,   -75,  -422,    -6,   418,
    -422,     3,  -182,   -70,   737
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      55,    78,    55,   251,   362,   371,   485,   487,   163,   164,
     133,   538,    91,    91,   261,    91,    91,    91,    91,    91,
      14,    91,    91,    91,    91,    91,    94,    91,    91,    93,
     112,    95,    96,    97,    98,    99,   255,   103,   104,   105,
     106,   107,   113,   109,   110,   173,   168,   170,   255,   172,
     693,   255,    91,   177,   163,   164,   181,    15,    16,    17,
     114,   694,    91,   163,   164,   163,   164,   539,   115,   163,
     164,   209,   163,   164,   163,   164,   163,   164,   125,    15,
      16,    17,   220,    15,    16,    17,   163,   164,   144,    15,
      16,    17,    15,    16,    17,   258,    27,   498,    15,    16,
      17,    15,    16,    17,   255,   695,    91,   162,   256,   397,
     651,   367,   606,   249,   144,   131,   132,   165,   398,   461,
     523,   258,   161,   531,   258,   116,   258,   318,   473,   466,
     654,   696,   249,   469,   319,    77,   204,   475,   193,   195,
     144,   478,    77,   503,   331,   624,   384,   607,    70,   289,
     350,   144,   552,   178,   554,    70,   337,   208,   664,   399,
     228,   666,   264,   746,   448,   748,   259,   323,   226,   510,
     433,   326,   511,   472,   204,   578,   560,   609,   339,   332,
     670,   481,   652,   351,   352,    27,   673,   117,   353,   709,
      36,   338,   525,   354,   579,   534,   257,   561,   260,   355,
     268,   655,   340,   580,   131,   132,   645,    79,   647,   119,
     356,   341,   342,   379,   357,    80,   343,   358,   144,   359,
     578,   344,   360,   349,   380,   363,    87,   345,   273,   290,
     581,   582,   280,   281,   361,   471,   285,   286,   346,   579,
      81,    82,   347,   480,   583,   465,   315,   120,   580,   324,
      83,   600,   327,   474,    87,   121,    84,   123,   601,   124,
     325,   603,   348,   328,    55,    55,    55,    85,   604,   509,
     126,    86,    79,   163,   164,   581,   582,   517,   518,   128,
      80,   130,   134,    87,   135,   385,   602,   136,   526,   616,
     225,   336,   229,   138,   371,   230,   605,   535,    15,    16,
      17,   366,   139,   140,    79,    81,    82,   142,   146,   435,
     151,   157,    80,   166,   171,    83,   176,   400,   394,   180,
     402,    84,   182,   625,     1,     2,     3,     4,   131,   132,
     167,   404,    85,   131,   132,   169,    86,    81,    82,   238,
     239,   240,   185,   468,   188,   367,   196,    83,    87,   203,
     210,   477,    31,    84,   211,   585,   364,   366,   212,   213,
      91,    91,    91,    91,    85,   215,   216,    78,    86,   270,
     271,   272,   217,   218,   368,   369,   429,   430,   431,   432,
      87,   370,   219,   221,   222,   223,   507,   247,   365,   437,
     440,   442,   443,   444,   445,   446,   447,   449,   224,   376,
     231,   367,   232,   454,   455,   456,   457,   533,    31,   235,
     236,   237,   242,   243,   330,   193,   244,   195,    79,   246,
      79,   252,   386,   193,   254,   195,    80,   262,    80,   263,
     368,   369,   267,   269,   314,   316,   320,   599,   329,   382,
     495,   383,   387,   497,   388,   499,   389,   390,   391,   504,
     505,    81,    82,    81,    82,   193,   195,   512,   513,   514,
     515,    83,   663,    83,   665,   392,   667,    84,   393,    84,
     395,   401,   293,   294,   403,   409,   410,   411,    85,   412,
      85,   413,    86,   414,    86,   416,   295,   296,   297,   298,
     417,   418,   299,   419,    87,   547,    87,   100,   549,   420,
     550,   458,   551,   108,   377,   300,   111,   553,   555,   556,
     421,   422,   424,   425,   426,   562,   563,   564,   565,   427,
     428,   451,   452,   293,   294,   494,   301,   453,   459,   460,
     470,   479,   492,   608,   496,   500,   122,   295,   296,   297,
     298,   501,   502,   299,   506,   202,   508,   516,   129,   519,
     584,   547,   586,   587,   588,   137,   300,   520,   522,   591,
     592,   524,   527,   571,   528,   529,   530,   595,   596,   532,
     536,   537,   610,   540,   541,    91,   558,   317,   542,   543,
     544,   545,   548,   557,   450,   559,   566,   615,   567,   617,
     618,   613,   175,   568,   620,   621,   569,   570,   245,   589,
     590,   593,   594,   631,   611,   612,     0,   619,   622,   198,
     201,   623,   627,   629,   634,   636,   632,   637,   639,   638,
     640,   641,   642,   644,   643,   646,   648,     0,   661,   662,
     682,   683,   684,   685,   649,   650,   689,   653,   691,   656,
     698,   702,   703,   659,   660,   671,   708,   711,   674,   721,
       0,   734,   668,   669,   735,   743,   672,   744,   745,   675,
     677,   679,   680,   681,   688,   750,   752,   690,   753,     0,
       0,   686,   687,     0,     0,     0,     0,     0,   692,     0,
     697,     0,   699,   700,   701,     0,     0,     0,   710,     0,
       0,   704,   705,   706,   707,     0,     0,     0,     0,     0,
     712,     0,   713,   720,   714,     0,     0,   715,   716,   717,
     718,   719,     0,     0,   722,     0,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,     0,   733,     0,     0,
     736,   737,   738,   739,   740,   741,   742,     0,     7,     9,
      11,    13,   747,   749,     0,   751,     0,     0,     0,     0,
       0,     0,     0,     0,   754,    92,    92,   755,    92,    92,
      92,    92,    92,     0,    92,    92,    92,    92,    92,     0,
      92,    92,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
     396,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,   406,   407,     0,     0,    92,     0,     0,   408,    81,
      82,     0,     0,     0,     0,     0,   415,     0,     0,    83,
       0,     0,     0,     0,     0,    84,   423,     0,     0,     0,
       0,   145,     0,     0,     0,     0,    85,     0,     0,     0,
      86,     0,     0,     0,    15,    16,    17,    18,     0,    92,
       0,     0,    87,     0,     0,     0,    19,   145,    20,     0,
     378,     0,     0,     0,     0,   184,   406,     0,     0,    21,
      22,     0,    23,     0,     0,    24,    25,   184,    26,   207,
       0,     0,     0,   145,    27,    28,     0,   198,   201,    29,
      30,     0,     0,     0,   145,   198,   201,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,   234,    32,
       0,     0,     0,     0,    33,    34,     0,   207,     0,   234,
     250,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,     0,     0,     0,     9,     9,     9,
      13,   275,   277,   279,    13,    13,   283,     0,    13,    13,
     288,   145,     0,     0,   292,     0,    15,    16,    17,    18,
       0,     0,    56,    57,     0,     0,     0,    58,    19,     0,
      20,     0,    59,     0,     0,     0,     0,    60,     0,     0,
     322,    21,    22,    61,    23,     0,     0,    24,    25,     0,
      26,     0,     0,    62,     0,     0,    27,    28,    63,     0,
       0,    29,    30,    64,     0,     0,     0,     0,     0,     0,
      65,    11,     0,     0,    66,    67,    31,     0,    68,     0,
      69,    32,     0,    70,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    71,     0,     0,
       0,     0,     0,   614,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   626,     0,     0,   628,     0,     0,   630,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    92,    92,    92,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,     0,     0,
      56,    57,     0,   438,   441,    58,    19,     0,    20,     0,
      59,     0,     0,     0,     0,    60,     0,     0,     0,    21,
      22,    61,    23,     0,     0,    24,    25,   464,    26,     0,
       0,    62,     0,     0,    27,    28,    63,     0,     0,    29,
      30,    64,     0,   483,   464,   464,     0,     0,    65,     0,
       0,     0,    66,    67,    31,     0,    68,     0,    69,    32,
       0,    70,     0,     0,    33,    34,    15,    16,    17,    18,
       0,     0,    56,    57,    35,    71,     0,    58,    19,     0,
      20,     0,    59,   334,     0,     0,     0,    60,     0,     0,
       0,    21,    22,    61,    23,     0,     0,    24,    25,     0,
      26,     0,     0,    62,     0,     0,    27,    28,    63,     0,
       0,    29,    30,    64,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,    66,    67,    31,     0,    68,     0,
      69,    32,     0,    70,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    71,     0,     0,
       0,     0,     0,     0,     0,   335,     0,     0,     0,   283,
     573,   575,   577,     0,     0,     0,     0,     0,    15,    16,
      17,    18,     0,     0,    56,    57,     0,     0,     0,    58,
      19,     0,    20,     0,    59,     0,     0,   598,     0,    60,
       0,     0,     0,    21,    22,    61,    23,     0,    92,    24,
      25,     0,    26,     0,     0,    62,     0,     0,    27,    28,
      63,     0,     0,    29,    30,    64,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,    66,    67,    31,     0,
      68,     0,    69,    32,     0,    70,     0,     0,    33,    34,
       0,     0,     0,     0,   464,     0,   464,     0,    35,    71
};

static const yytype_int16 yycheck[] =
{
       6,    10,     8,   185,   278,   282,   427,   428,     3,     4,
      80,    36,    18,    19,   196,    21,    22,    23,    24,    25,
       0,    27,    28,    29,    30,    31,    91,    33,    34,    19,
      28,    21,    22,    23,    24,    25,    20,    27,    28,    29,
      30,    31,    91,    33,    34,   120,   116,   117,    20,   119,
      11,    20,    58,   123,     3,     4,   126,     3,     4,     5,
      91,    22,    68,     3,     4,     3,     4,    92,    58,     3,
       4,   146,     3,     4,     3,     4,     3,     4,    68,     3,
       4,     5,   157,     3,     4,     5,     3,     4,    94,     3,
       4,     5,     3,     4,     5,    21,    43,    92,     3,     4,
       5,     3,     4,     5,    20,    66,   112,   113,    92,    42,
      20,    56,    57,   183,   120,     3,     4,   114,    51,   409,
      92,    21,   112,    92,    21,    91,    21,    50,   418,   412,
      21,    92,   202,   414,    57,    57,   142,   420,   135,   136,
     146,   422,    57,    92,    57,    92,    92,    92,    70,   224,
       8,   157,    92,    25,    92,    70,    57,    92,    92,    92,
     166,    92,    50,    92,    81,    92,    92,    91,   165,   452,
      92,    91,   453,   417,   180,    23,    92,    91,     8,    92,
      91,   425,    92,    41,    42,    43,    91,    91,    46,    91,
       6,    92,    92,    51,    42,    92,   193,    92,   195,    57,
     206,    92,    32,    51,     3,     4,   627,     8,   629,    91,
      68,    41,    42,    81,    72,    16,    46,    75,   224,    77,
      23,    51,    80,   276,    92,   278,    84,    57,   213,   226,
      78,    79,   217,   218,    92,   416,   221,   222,    68,    42,
      41,    42,    72,   424,    92,   411,   243,    91,    51,   255,
      51,    57,   258,   419,    84,    91,    57,    91,    64,    91,
     257,    57,    92,   260,   270,   271,   272,    68,    64,   451,
      91,    72,     8,     3,     4,    78,    79,   459,   460,    91,
      16,    91,    91,    84,    91,   291,    92,    91,   470,    92,
      92,    92,    92,    91,   571,    92,    92,   479,     3,     4,
       5,    12,    91,    91,     8,    41,    42,    91,    91,   379,
      91,    91,    16,    91,    91,    51,    91,   323,   315,    91,
     326,    57,    91,   597,    87,    88,    89,    90,     3,     4,
       5,   328,    68,     3,     4,     5,    72,    41,    42,     3,
       4,     5,    91,   413,    91,    56,    91,    51,    84,    91,
      91,   421,    63,    57,    91,   548,    92,    12,    91,    91,
     366,   367,   368,   369,    68,    91,    91,   376,    72,   210,
     211,   212,    91,    91,    85,    86,   366,   367,   368,   369,
      84,    92,    91,    91,    91,    91,    81,   182,    92,   386,
     387,   388,   389,   390,   391,   392,   393,   394,    91,   284,
      92,    56,    92,   400,   401,   402,   403,   477,    63,    92,
      92,    92,    92,    91,    91,   412,    92,   414,     8,    92,
       8,    92,    91,   420,    92,   422,    16,    92,    16,    92,
      85,    86,    92,    92,    92,    92,    92,    92,    92,    92,
     437,    92,    91,   440,    91,   442,    91,    91,    91,   446,
     447,    41,    42,    41,    42,   452,   453,   454,   455,   456,
     457,    51,   644,    51,   646,    91,   648,    57,    91,    57,
      91,    91,    38,    39,    91,    91,    91,    91,    68,    91,
      68,    91,    72,    91,    72,    91,    52,    53,    54,    55,
      91,    91,    58,    91,    84,   492,    84,    26,   495,    91,
     497,    92,   499,    32,    92,    71,    35,   504,   505,   506,
      91,    91,    91,    91,    91,   512,   513,   514,   515,    91,
      91,    91,    91,    38,    39,    92,    92,    91,    91,    91,
      91,    91,    91,   576,    92,    92,    65,    52,    53,    54,
      55,    92,    92,    58,    91,   140,    92,    92,    77,    92,
     547,   548,   549,   550,   551,    84,    71,    92,    92,   556,
     557,    92,    92,   542,    92,    92,    92,   564,   565,    92,
      92,    92,   578,    92,    92,   581,    92,    92,    91,    91,
      91,    91,    91,    91,   395,    92,    92,   584,    92,   586,
     587,   581,   121,    92,   591,   592,    92,    91,   180,    92,
      92,    92,    92,   609,    91,    91,    -1,    92,    92,   138,
     139,    92,    91,    91,   611,   612,    91,    91,   615,    91,
     617,   618,    92,    91,   621,    91,    91,    -1,    92,    92,
      92,    92,    92,    92,   631,   632,    91,   634,    91,   636,
      92,    92,    92,   640,   641,   651,    91,    91,   654,    91,
      -1,    92,   649,   650,    92,    92,   653,    92,    92,   656,
     657,   658,   659,   660,   670,    92,    92,   673,    92,    -1,
      -1,   668,   669,    -1,    -1,    -1,    -1,    -1,   675,    -1,
     677,    -1,   679,   680,   681,    -1,    -1,    -1,   694,    -1,
      -1,   688,   689,   690,   691,    -1,    -1,    -1,    -1,    -1,
     697,    -1,   699,   709,   701,    -1,    -1,   704,   705,   706,
     707,   708,    -1,    -1,   711,    -1,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,    -1,   724,    -1,    -1,
     727,   728,   729,   730,   731,   732,   733,    -1,     1,     2,
       3,     4,   739,   740,    -1,   742,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   751,    18,    19,   754,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
     319,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,   330,   331,    -1,    -1,    68,    -1,    -1,   337,    41,
      42,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,   355,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,     3,     4,     5,     6,    -1,   112,
      -1,    -1,    84,    -1,    -1,    -1,    15,   120,    17,    -1,
      92,    -1,    -1,    -1,    -1,   128,   395,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    34,    35,   140,    37,   142,
      -1,    -1,    -1,   146,    43,    44,    -1,   416,   417,    48,
      49,    -1,    -1,    -1,   157,   424,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,   171,    68,
      -1,    -1,    -1,    -1,    73,    74,    -1,   180,    -1,   182,
     183,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,    -1,   221,   222,
     223,   224,    -1,    -1,   227,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
     253,    28,    29,    30,    31,    -1,    -1,    34,    35,    -1,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,   284,    -1,    -1,    61,    62,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,   582,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   600,    -1,    -1,   603,    -1,    -1,   606,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,   386,   387,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,   410,    37,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    50,    -1,   426,   427,   428,    -1,    -1,    57,    -1,
      -1,    -1,    61,    62,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    -1,    -1,    73,    74,     3,     4,     5,     6,
      -1,    -1,     9,    10,    83,    84,    -1,    14,    15,    -1,
      17,    -1,    19,    92,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    34,    35,    -1,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    62,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,   542,
     543,   544,   545,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,   570,    -1,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,   581,    34,
      35,    -1,    37,    -1,    -1,    40,    -1,    -1,    43,    44,
      45,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,   627,    -1,   629,    -1,    83,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    87,    88,    89,    90,    94,    95,   217,   125,   217,
     101,   217,   166,   217,     0,     3,     4,     5,     6,    15,
      17,    28,    29,    31,    34,    35,    37,    43,    44,    48,
      49,    63,    68,    73,    74,    83,    96,    97,    98,    99,
     102,   105,   106,   119,   121,   123,   151,   153,   155,   157,
     159,   161,   163,   184,   198,   211,     9,    10,    14,    19,
      24,    30,    40,    45,    50,    57,    61,    62,    65,    67,
      70,    84,    96,   128,   130,   147,   149,    57,   128,     8,
      16,    41,    42,    51,    57,    68,    72,    84,   176,   208,
     210,   211,   217,   208,    91,   208,   208,   208,   208,   208,
     207,   211,   217,   208,   208,   208,   208,   208,   207,   208,
     208,   207,    28,    91,    91,   208,    91,    91,   131,    91,
      91,    91,   207,    91,    91,   208,    91,   129,    91,   207,
      91,     3,     4,   216,    91,    91,    91,   207,    91,    91,
      91,   199,    91,   209,   211,   217,    91,   120,   122,   124,
     160,    91,   164,   162,   158,   152,   185,    91,   154,   156,
     107,   208,   211,     3,     4,   214,    91,     5,   216,     5,
     216,    91,   216,   209,   206,   207,    91,   216,    25,   150,
      91,   216,    91,   201,   217,    91,   175,   216,    91,   172,
     204,   207,   173,   214,   174,   214,    91,   171,   207,   170,
     203,   207,   201,    91,   211,   212,   213,   217,    92,   209,
      91,    91,    91,    91,   103,    91,    91,    91,    91,    91,
     209,    91,    91,    91,    91,    92,   214,   126,   211,    92,
      92,    92,    92,   132,   217,    92,    92,    92,     3,     4,
       5,   215,    92,    91,    92,   212,    92,   132,   148,   216,
     217,   215,    92,   167,    92,    20,    92,   214,    21,    92,
     214,   215,    92,    92,    50,   200,   217,    92,   211,    92,
     125,   125,   125,   166,   104,   217,   169,   217,   168,   217,
     166,   166,   188,   217,   100,   166,   166,   108,   217,   209,
     214,   127,   217,    38,    39,    52,    53,    54,    55,    58,
      71,    92,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   145,    92,   214,    92,    92,    50,    57,
      92,   165,   217,    91,   211,   214,    91,   211,   214,    92,
      91,    57,    92,    92,    92,    92,    92,    57,    92,     8,
      32,    41,    42,    46,    51,    57,    68,    72,    92,   176,
       8,    41,    42,    46,    51,    57,    68,    72,    75,    77,
      80,    92,   163,   176,    92,    92,    12,    56,    85,    86,
      92,   184,   186,   189,   192,   195,   101,    92,    92,    81,
      92,   109,    92,    92,    92,   211,    91,    91,    91,    91,
      91,    91,    91,    91,   214,    91,   207,    42,    51,    92,
     211,    91,   211,    91,   214,   205,   207,   207,   207,    91,
      91,    91,    91,    91,    91,   207,    91,    91,    91,    91,
      91,    91,    91,   207,    91,    91,    91,    91,    91,   208,
     208,   208,   208,    92,   110,   216,   144,   214,   217,   146,
     214,   217,   214,   214,   214,   214,   214,   214,    81,   214,
     205,    91,    91,    91,   214,   214,   214,   214,    92,    91,
      91,   175,   183,   202,   217,   172,   173,   182,   216,   174,
      91,   171,   170,   175,   172,   173,   177,   216,   174,    91,
     171,   170,   180,   217,   178,   202,   179,   202,   187,   190,
     193,   196,    91,   111,    92,   214,    92,   214,    92,   214,
      92,    92,    92,    92,   214,   214,    91,    81,    92,   215,
     173,   174,   214,   214,   214,   214,    92,   215,   215,    92,
      92,   214,    92,    92,    92,    92,   215,    92,    92,    92,
      92,    92,    92,   216,    92,   215,    92,    92,    36,    92,
      92,    92,    91,    91,    91,    91,   112,   214,    91,   214,
     214,   214,    92,   214,    92,   214,   214,    91,    92,    92,
      92,    92,   214,   214,   214,   214,    92,    92,    92,    92,
      91,   188,   191,   217,   194,   217,   197,   217,    23,    42,
      51,    78,    79,    92,   214,   112,   214,   214,   214,    92,
      92,   214,   214,    92,    92,   214,   214,   181,   217,    92,
      57,    64,    92,    57,    64,    92,    57,    92,   189,    91,
     211,    91,    91,   208,   207,   214,    92,   214,   214,    92,
     214,   214,    92,    92,    92,   163,   207,    91,   207,    91,
     207,   211,    91,   117,   214,   118,   214,    91,    91,   214,
     214,   214,    92,   214,    91,   202,    91,   202,    91,   214,
     214,    20,    92,   214,    21,    92,   214,   113,   114,   214,
     214,    92,    92,   215,    92,   215,    92,   215,   214,   214,
      91,   211,   214,    91,   211,   214,   115,   214,   116,   214,
     214,   214,    92,    92,    92,    92,   214,   214,   211,    91,
     211,    91,   214,    11,    22,    66,    92,   214,    92,   214,
     214,   214,    92,    92,   214,   214,   214,   214,    91,    91,
     211,    91,   214,   214,   214,   214,   214,   214,   214,   214,
     211,    91,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,    92,    92,   214,   214,   214,   214,
     214,   214,   214,    92,    92,    92,    92,   214,    92,   214,
      92,   214,    92,    92,   214,   214
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
        case 7:
#line 248 "parser.yxx"
    {
  assert(!egg_stack.empty());
  DCAST(EggData, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 26:
#line 292 "parser.yxx"
    {
  string strval = (yyvsp[(3) - (4)]._string);
  EggCoordinateSystem *cs = new EggCoordinateSystem;

  CoordinateSystem f = parse_coordinate_system_string(strval);
  if (f == CS_invalid) {
    eggyywarning("Unknown coordinate system " + strval);
  } else {
    cs->set_value(f);
  }
  (yyval._egg) = cs;
}
    break;

  case 27:
#line 315 "parser.yxx"
    {
  (yyval._egg) = new EggComment((yyvsp[(2) - (5)]._string), (yyvsp[(4) - (5)]._string));
}
    break;

  case 28:
#line 329 "parser.yxx"
    {
  string tref_name = (yyvsp[(2) - (4)]._string);
  Filename filename = (yyvsp[(4) - (4)]._string);
  EggTexture *texture = new EggTexture(tref_name, filename);

  if (textures.find(tref_name) != textures.end()) {
    eggyywarning("Duplicate texture name " + tref_name);
  }
  textures[tref_name] = texture;

  egg_stack.push_back(texture);
}
    break;

  case 29:
#line 342 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 31:
#line 358 "parser.yxx"
    {
  EggTexture *texture = DCAST(EggTexture, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);

  if (cmp_nocase_uh(name, "type") == 0) {
    EggTexture::TextureType tt = EggTexture::string_texture_type(strval);
    if (tt == EggTexture::TT_unspecified) {
      eggyywarning("Unknown texture texture_type " + strval);
    } else {
      texture->set_texture_type(tt);
    }

  } else if (cmp_nocase_uh(name, "format") == 0) {
    EggTexture::Format f = EggTexture::string_format(strval);
    if (f == EggTexture::F_unspecified) {
      eggyywarning("Unknown texture format " + strval);
    } else {
      texture->set_format(f);
    }

  } else if (cmp_nocase_uh(name, "compression") == 0) {
    EggTexture::CompressionMode w = EggTexture::string_compression_mode(strval);
    if (w == EggTexture::CM_default) {
      eggyywarning("Unknown texture compression mode " + strval);
    } else {
      texture->set_compression_mode(w);
    }

  } else if (cmp_nocase_uh(name, "wrap") == 0) {
    EggTexture::WrapMode w = EggTexture::string_wrap_mode(strval);
    if (w == EggTexture::WM_unspecified) {
      eggyywarning("Unknown texture wrap mode " + strval);
    } else {
      texture->set_wrap_mode(w);
    }

  } else if (cmp_nocase_uh(name, "wrapu") == 0) {
    EggTexture::WrapMode w = EggTexture::string_wrap_mode(strval);
    if (w == EggTexture::WM_unspecified) {
      eggyywarning("Unknown texture wrap mode " + strval);
    } else {
      texture->set_wrap_u(w);
    }

  } else if (cmp_nocase_uh(name, "wrapv") == 0) {
    EggTexture::WrapMode w = EggTexture::string_wrap_mode(strval);
    if (w == EggTexture::WM_unspecified) {
      eggyywarning("Unknown texture wrap mode " + strval);
    } else {
      texture->set_wrap_v(w);
    }

  } else if (cmp_nocase_uh(name, "minfilter") == 0) {
    EggTexture::FilterType f = EggTexture::string_filter_type(strval);
    if (f == EggTexture::FT_unspecified) {
      eggyywarning("Unknown texture filter type " + strval);
    } else {
      texture->set_minfilter(f);
    }

  } else if (cmp_nocase_uh(name, "magfilter") == 0) {
    EggTexture::FilterType f = EggTexture::string_filter_type(strval);
    if (f == EggTexture::FT_unspecified) {
      eggyywarning("Unknown texture filter type " + strval);
    } else {
      texture->set_magfilter(f);
    }

  } else if (cmp_nocase_uh(name, "anisotropic_degree") == 0) {
    texture->set_anisotropic_degree((int)value);

  } else if (cmp_nocase_uh(name, "envtype") == 0) {
    EggTexture::EnvType e = EggTexture::string_env_type(strval);
    if (e == EggTexture::ET_unspecified) {
      eggyywarning("Unknown texture env type " + strval);
    } else {
      texture->set_env_type(e);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb") == 0) {
    EggTexture::CombineMode cm = EggTexture::string_combine_mode(strval);
    if (cm == EggTexture::CM_unspecified) {
      eggyywarning("Unknown combine mode " + strval);
    } else {
      texture->set_combine_mode(EggTexture::CC_rgb, cm);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-source0") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_rgb, 0, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-operand0") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_rgb, 0, co);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-source1") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_rgb, 1, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-operand1") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_rgb, 1, co);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-source2") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_rgb, 2, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-rgb-operand2") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_rgb, 2, co);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha") == 0) {
    EggTexture::CombineMode cm = EggTexture::string_combine_mode(strval);
    if (cm == EggTexture::CM_unspecified) {
      eggyywarning("Unknown combine mode " + strval);
    } else {
      texture->set_combine_mode(EggTexture::CC_alpha, cm);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-source0") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_alpha, 0, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-operand0") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_alpha, 0, co);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-source1") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_alpha, 1, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-operand1") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_alpha, 1, co);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-source2") == 0) {
    EggTexture::CombineSource cs = EggTexture::string_combine_source(strval);
    if (cs == EggTexture::CS_unspecified) {
      eggyywarning("Unknown combine source " + strval);
    } else {
      texture->set_combine_source(EggTexture::CC_alpha, 2, cs);
    }

  } else if (cmp_nocase_uh(name, "combine-alpha-operand2") == 0) {
    EggTexture::CombineOperand co = EggTexture::string_combine_operand(strval);
    if (co == EggTexture::CO_unspecified) {
      eggyywarning("Unknown combine operand " + strval);
    } else {
      texture->set_combine_operand(EggTexture::CC_alpha, 2, co);
    }

  } else if (cmp_nocase_uh(name, "saved_result") == 0) {
    texture->set_saved_result(((int)value) != 0);

  } else if (cmp_nocase_uh(name, "tex_gen") == 0) {
    EggTexture::TexGen tex_gen = EggTexture::string_tex_gen(strval);
    if (tex_gen == EggTexture::TG_unspecified) {
      eggyywarning("Unknown tex-gen " + strval);
    } else {
      texture->set_tex_gen(tex_gen);
    }

  } else if (cmp_nocase_uh(name, "quality_level") == 0) {
    EggTexture::QualityLevel quality_level = EggTexture::string_quality_level(strval);
    if (quality_level == EggTexture::QL_unspecified) {
      eggyywarning("Unknown quality-level " + strval);
    } else {
      texture->set_quality_level(quality_level);
    }

  } else if (cmp_nocase_uh(name, "stage_name") == 0) {
    texture->set_stage_name(strval);

  } else if (cmp_nocase_uh(name, "priority") == 0) {
    texture->set_priority((int)value);

  } else if (cmp_nocase_uh(name, "multiview") == 0) {
    texture->set_multiview(((int)value) != 0);

  } else if (cmp_nocase_uh(name, "num_views") == 0) {
    int int_value = (int)value;
    if (int_value < 1) {
      eggyyerror("Invalid num-views value " + strval);
    } else {
      texture->set_num_views(int_value);
    }

  } else if (cmp_nocase_uh(name, "blendr") == 0) {
    LColor color = texture->get_color();
    color[0] = value;
    texture->set_color(color);

  } else if (cmp_nocase_uh(name, "blendg") == 0) {
    LColor color = texture->get_color();
    color[1] = value;
    texture->set_color(color);

  } else if (cmp_nocase_uh(name, "blendb") == 0) {
    LColor color = texture->get_color();
    color[2] = value;
    texture->set_color(color);

  } else if (cmp_nocase_uh(name, "blenda") == 0) {
    LColor color = texture->get_color();
    color[3] = value;
    texture->set_color(color);

  } else if (cmp_nocase_uh(name, "borderr") == 0) {
    LColor border_color = texture->get_border_color();
    border_color[0] = value;
    texture->set_border_color(border_color);

  } else if (cmp_nocase_uh(name, "borderg") == 0) {
    LColor border_color = texture->get_border_color();
    border_color[1] = value;
    texture->set_border_color(border_color);

  } else if (cmp_nocase_uh(name, "borderb") == 0) {
    LColor border_color = texture->get_border_color();
    border_color[2] = value;
    texture->set_border_color(border_color);

  } else if (cmp_nocase_uh(name, "bordera") == 0) {
    LColor border_color = texture->get_border_color();
    border_color[3] = value;
    texture->set_border_color(border_color);

  } else if (cmp_nocase_uh(name, "uv_name") == 0) {
    texture->set_uv_name(strval);

  } else if (cmp_nocase_uh(name, "rgb_scale") == 0) {
    int int_value = (int)value;
    if (int_value != 1 && int_value != 2 && int_value != 4) {
      eggyyerror("Invalid rgb-scale value " + strval);
    } else {
      texture->set_rgb_scale(int_value);
    }

  } else if (cmp_nocase_uh(name, "alpha_scale") == 0) {
    int int_value = (int)value;
    if (int_value != 1 && int_value != 2 && int_value != 4) {
      eggyyerror("Invalid alpha-scale value " + strval);
    } else {
      texture->set_alpha_scale(int_value);
    }

  } else if (cmp_nocase_uh(name, "alpha") == 0) {
    EggRenderMode::AlphaMode a = EggRenderMode::string_alpha_mode(strval);
    if (a == EggRenderMode::AM_unspecified) {
      eggyywarning("Unknown alpha mode " + strval);
    } else {
      texture->set_alpha_mode(a);
    }

  } else if (cmp_nocase_uh(name, "depth_write") == 0) {
    EggRenderMode::DepthWriteMode m = 
      EggRenderMode::string_depth_write_mode(strval);
    if (m == EggRenderMode::DWM_unspecified) {
      eggyywarning("Unknown depth-write mode " + strval);
    } else {
      texture->set_depth_write_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_test") == 0) {
    EggRenderMode::DepthTestMode m = 
      EggRenderMode::string_depth_test_mode(strval);
    if (m == EggRenderMode::DTM_unspecified) {
      eggyywarning("Unknown depth-test mode " + strval);
    } else {
      texture->set_depth_test_mode(m);
    }

  } else if (cmp_nocase_uh(name, "visibility") == 0) {
    EggRenderMode::VisibilityMode m = 
      EggRenderMode::string_visibility_mode(strval);
    if (m == EggRenderMode::VM_unspecified) {
      eggyywarning("Unknown visibility mode " + strval);
    } else {
      texture->set_visibility_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_offset") == 0) {
    texture->set_depth_offset((int)value);

  } else if (cmp_nocase_uh(name, "draw_order") == 0) {
    texture->set_draw_order((int)value);

  } else if (cmp_nocase_uh(name, "bin") == 0) {
    texture->set_bin(strval);

  } else if (cmp_nocase_uh(name, "alpha_file") == 0) {
    texture->set_alpha_filename(strval);

  } else if (cmp_nocase_uh(name, "alpha_file_channel") == 0) {
    texture->set_alpha_file_channel((int)value);

  } else if (cmp_nocase_uh(name, "read_mipmaps") == 0) {
    texture->set_read_mipmaps(((int)value) != 0);

  } else {
    eggyywarning("Unsupported texture scalar: " + name);
  }
}
    break;

  case 33:
#line 715 "parser.yxx"
    {
  string mref_name = (yyvsp[(2) - (3)]._string);
  EggMaterial *material = new EggMaterial(mref_name);

  if (materials.find(mref_name) != materials.end()) {
    eggyywarning("Duplicate material name " + mref_name);
  }
  materials[mref_name] = material;

  egg_stack.push_back(material);
}
    break;

  case 34:
#line 727 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 36:
#line 743 "parser.yxx"
    {
  EggMaterial *material = DCAST(EggMaterial, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);

  if (cmp_nocase_uh(name, "diffr") == 0) {
    LColor diff = material->get_diff();
    diff[0] = value;
    material->set_diff(diff);
  } else if (cmp_nocase_uh(name, "diffg") == 0) {
    LColor diff = material->get_diff();
    diff[1] = value;
    material->set_diff(diff);
  } else if (cmp_nocase_uh(name, "diffb") == 0) {
    LColor diff = material->get_diff();
    diff[2] = value;
    material->set_diff(diff);
  } else if (cmp_nocase_uh(name, "diffa") == 0) {
    LColor diff = material->get_diff();
    diff[3] = value;
    material->set_diff(diff);

  } else if (cmp_nocase_uh(name, "ambr") == 0) {
    LColor amb = material->get_amb();
    amb[0] = value;
    material->set_amb(amb);
  } else if (cmp_nocase_uh(name, "ambg") == 0) {
    LColor amb = material->get_amb();
    amb[1] = value;
    material->set_amb(amb);
  } else if (cmp_nocase_uh(name, "ambb") == 0) {
    LColor amb = material->get_amb();
    amb[2] = value;
    material->set_amb(amb);
  } else if (cmp_nocase_uh(name, "amba") == 0) {
    LColor amb = material->get_amb();
    amb[3] = value;
    material->set_amb(amb);

  } else if (cmp_nocase_uh(name, "emitr") == 0) {
    LColor emit = material->get_emit();
    emit[0] = value;
    material->set_emit(emit);
  } else if (cmp_nocase_uh(name, "emitg") == 0) {
    LColor emit = material->get_emit();
    emit[1] = value;
    material->set_emit(emit);
  } else if (cmp_nocase_uh(name, "emitb") == 0) {
    LColor emit = material->get_emit();
    emit[2] = value;
    material->set_emit(emit);
  } else if (cmp_nocase_uh(name, "emita") == 0) {
    LColor emit = material->get_emit();
    emit[3] = value;
    material->set_emit(emit);

  } else if (cmp_nocase_uh(name, "specr") == 0) {
    LColor spec = material->get_spec();
    spec[0] = value;
    material->set_spec(spec);
  } else if (cmp_nocase_uh(name, "specg") == 0) {
    LColor spec = material->get_spec();
    spec[1] = value;
    material->set_spec(spec);
  } else if (cmp_nocase_uh(name, "specb") == 0) {
    LColor spec = material->get_spec();
    spec[2] = value;
    material->set_spec(spec);
  } else if (cmp_nocase_uh(name, "speca") == 0) {
    LColor spec = material->get_spec();
    spec[3] = value;
    material->set_spec(spec);

  } else if (cmp_nocase_uh(name, "shininess") == 0) {
    material->set_shininess(value);

  } else if (cmp_nocase_uh(name, "local") == 0) {
    material->set_local(value != 0.0);

  } else {
    eggyywarning("Unsupported material scalar: " + name);
  }
}
    break;

  case 37:
#line 838 "parser.yxx"
    {
  string node_name = (yyvsp[(2) - (5)]._string);
  Filename filename = (yyvsp[(4) - (5)]._string);
  EggExternalReference *ref = new EggExternalReference(node_name, filename);
  (yyval._egg) = ref;
}
    break;

  case 38:
#line 845 "parser.yxx"
    {
  if (cmp_nocase_uh((yyvsp[(1) - (6)]._string), "group") != 0) {
    eggyyerror("keyword 'group' expected");
  }
  string node_name = (yyvsp[(3) - (6)]._string);
  Filename filename = (yyvsp[(5) - (6)]._string);
  EggExternalReference *ref = new EggExternalReference(node_name, filename);
  (yyval._egg) = ref;
}
    break;

  case 39:
#line 865 "parser.yxx"
    {
  string name = (yyvsp[(2) - (2)]._string);
  EggVertexPool *pool = NULL;

  VertexPools::const_iterator vpi = vertex_pools.find(name);
  if (vpi != vertex_pools.end()) {
    pool = (*vpi).second;
    if (pool->has_defined_vertices()) {
      eggyywarning("Duplicate vertex pool name " + name);
      pool = new EggVertexPool(name);
      // The egg syntax starts counting at 1 by convention.
      pool->set_highest_index(0);
      vertex_pools[name] = pool;
    }
  } else {
    pool = new EggVertexPool(name);
    // The egg syntax starts counting at 1 by convention.
    pool->set_highest_index(0);
    vertex_pools[name] = pool;
  }

  egg_stack.push_back(pool);
}
    break;

  case 40:
#line 889 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 43:
#line 917 "parser.yxx"
    {
  egg_stack.push_back(new EggVertex);
}
    break;

  case 44:
#line 921 "parser.yxx"
    {
  PT(EggVertex) vtx = DCAST(EggVertex, egg_stack.back());
  egg_stack.pop_back();

  DCAST(EggVertexPool, egg_stack.back())->add_vertex(vtx);
}
    break;

  case 45:
#line 928 "parser.yxx"
    {
  vertex_index = (int)(yyvsp[(2) - (2)]._number);
  EggVertexPool *pool = DCAST(EggVertexPool, egg_stack.back());

  if (vertex_index < 0) {
    ostringstream errmsg;
    errmsg << "Ignoring invalid vertex index " << vertex_index
           << " in vertex pool " << pool->get_name() << ends;
    eggyywarning(errmsg);
    vertex_index = -1;

  } else if (pool->has_vertex(vertex_index)) {
    ostringstream errmsg;
    errmsg << "Ignoring duplicate vertex index " << vertex_index
           << " in vertex pool " << pool->get_name() << ends;
    eggyywarning(errmsg);
    vertex_index = -1;
  }

  // Even if we didn't like the vertex index number, we still need to
  // go ahead and parse the vertex.  We just won't save it.

  egg_stack.push_back(new EggVertex);
}
    break;

  case 46:
#line 953 "parser.yxx"
    {
  PT(EggVertex) vtx = DCAST(EggVertex, egg_stack.back());
  egg_stack.pop_back();

  EggVertexPool *pool = DCAST(EggVertexPool, egg_stack.back());
  if (vertex_index != -1) {
    pool->add_vertex(vtx, vertex_index);
  }
}
    break;

  case 47:
#line 974 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_pos((yyvsp[(1) - (1)]._number));
}
    break;

  case 48:
#line 978 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_pos(LPoint2d((yyvsp[(1) - (2)]._number), (yyvsp[(2) - (2)]._number)));
}
    break;

  case 49:
#line 982 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_pos(LPoint3d((yyvsp[(1) - (3)]._number), (yyvsp[(2) - (3)]._number), (yyvsp[(3) - (3)]._number)));
}
    break;

  case 50:
#line 986 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_pos(LPoint4d((yyvsp[(1) - (4)]._number), (yyvsp[(2) - (4)]._number), (yyvsp[(3) - (4)]._number), (yyvsp[(4) - (4)]._number)));
}
    break;

  case 51:
#line 990 "parser.yxx"
    {
  EggVertex *vertex = DCAST(EggVertex, egg_stack.back());
  EggVertexUV *uv = new EggVertexUV((yyvsp[(3) - (4)]._string), LTexCoordd::zero());
  egg_stack.push_back(uv);
  if (vertex->has_uv((yyvsp[(3) - (4)]._string))) {
    eggyywarning("Ignoring repeated UV name " + (yyvsp[(3) - (4)]._string));
  } else {
    vertex->set_uv_obj(uv);
  }
}
    break;

  case 52:
#line 1001 "parser.yxx"
    {
  egg_stack.pop_back();
}
    break;

  case 53:
#line 1005 "parser.yxx"
    {
  EggVertex *vertex = DCAST(EggVertex, egg_stack.back());
  EggVertexAux *aux = new EggVertexAux((yyvsp[(3) - (4)]._string), LVecBase4d::zero());
  egg_stack.push_back(aux);
  if (vertex->has_aux((yyvsp[(3) - (4)]._string))) {
    eggyywarning("Ignoring repeated Aux name " + (yyvsp[(3) - (4)]._string));
  } else {
    vertex->set_aux_obj(aux);
  }
}
    break;

  case 54:
#line 1016 "parser.yxx"
    {
  egg_stack.pop_back();
}
    break;

  case 57:
#line 1022 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_dxyzs.
    insert(EggMorphVertex((yyvsp[(3) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (8)]._string));
  }
}
    break;

  case 58:
#line 1030 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_dxyzs.
    insert(EggMorphVertex((yyvsp[(4) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (8)]._string));
  }
}
    break;

  case 59:
#line 1049 "parser.yxx"
    {
  DCAST(EggVertexUV, egg_stack.back())->set_uv(LTexCoordd((yyvsp[(1) - (2)]._number), (yyvsp[(2) - (2)]._number)));
}
    break;

  case 60:
#line 1053 "parser.yxx"
    {
  DCAST(EggVertexUV, egg_stack.back())->set_uvw(LVecBase3d((yyvsp[(1) - (3)]._number), (yyvsp[(2) - (3)]._number), (yyvsp[(3) - (3)]._number)));
}
    break;

  case 61:
#line 1057 "parser.yxx"
    {
  if (DCAST(EggVertexUV, egg_stack.back())->has_tangent()) {
    eggyywarning("Ignoring repeated tangent");
  } else {
    DCAST(EggVertexUV, egg_stack.back())->set_tangent(LNormald((yyvsp[(4) - (7)]._number), (yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number)));
  }
}
    break;

  case 62:
#line 1065 "parser.yxx"
    {
  if (DCAST(EggVertexUV, egg_stack.back())->has_binormal()) {
    eggyywarning("Ignoring repeated binormal");
  } else {
    DCAST(EggVertexUV, egg_stack.back())->set_binormal(LNormald((yyvsp[(4) - (7)]._number), (yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number)));
  }
}
    break;

  case 63:
#line 1073 "parser.yxx"
    {
  bool inserted = DCAST(EggVertexUV, egg_stack.back())->_duvs.
    insert(EggMorphTexCoord((yyvsp[(3) - (7)]._string), LVector3d((yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number), 0.0))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (7)]._string));
  }
}
    break;

  case 64:
#line 1081 "parser.yxx"
    {
  bool inserted = DCAST(EggVertexUV, egg_stack.back())->_duvs.
    insert(EggMorphTexCoord((yyvsp[(3) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (8)]._string));
  }
}
    break;

  case 65:
#line 1089 "parser.yxx"
    {
  bool inserted = DCAST(EggVertexUV, egg_stack.back())->_duvs.
    insert(EggMorphTexCoord((yyvsp[(4) - (7)]._string), LVector3d((yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number), 0.0))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (7)]._string));
  }
}
    break;

  case 66:
#line 1097 "parser.yxx"
    {
  bool inserted = DCAST(EggVertexUV, egg_stack.back())->_duvs.
    insert(EggMorphTexCoord((yyvsp[(4) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (8)]._string));
  }
}
    break;

  case 68:
#line 1115 "parser.yxx"
    {
  DCAST(EggVertexAux, egg_stack.back())->set_aux(LVecBase4d((yyvsp[(1) - (4)]._number), (yyvsp[(2) - (4)]._number), (yyvsp[(3) - (4)]._number), (yyvsp[(4) - (4)]._number)));
}
    break;

  case 69:
#line 1129 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_normal(LNormald((yyvsp[(1) - (3)]._number), (yyvsp[(2) - (3)]._number), (yyvsp[(3) - (3)]._number)));
}
    break;

  case 70:
#line 1133 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_dnormals.
    insert(EggMorphNormal((yyvsp[(3) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (8)]._string));
  }
}
    break;

  case 71:
#line 1141 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_dnormals.
    insert(EggMorphNormal((yyvsp[(4) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (8)]._string));
  }
}
    break;

  case 72:
#line 1159 "parser.yxx"
    {
  DCAST(EggVertex, egg_stack.back())->set_color(LColor((yyvsp[(1) - (4)]._number), (yyvsp[(2) - (4)]._number), (yyvsp[(3) - (4)]._number), (yyvsp[(4) - (4)]._number)));
}
    break;

  case 73:
#line 1163 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_drgbas.
    insert(EggMorphColor((yyvsp[(3) - (9)]._string), LVector4((yyvsp[(5) - (9)]._number), (yyvsp[(6) - (9)]._number), (yyvsp[(7) - (9)]._number), (yyvsp[(8) - (9)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (9)]._string));
  }
}
    break;

  case 74:
#line 1171 "parser.yxx"
    {
  bool inserted = DCAST(EggVertex, egg_stack.back())->_drgbas.
    insert(EggMorphColor((yyvsp[(4) - (9)]._string), LVector4((yyvsp[(5) - (9)]._number), (yyvsp[(6) - (9)]._number), (yyvsp[(7) - (9)]._number), (yyvsp[(8) - (9)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (9)]._string));
  }
}
    break;

  case 75:
#line 1189 "parser.yxx"
    {
  EggGroup *group = new EggGroup((yyvsp[(2) - (2)]._string));
  egg_stack.push_back(group);
}
    break;

  case 76:
#line 1194 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  (yyval._egg) = group;
  egg_stack.pop_back();
  if (group->has_name()) {
    groups[group->get_name()] = group;
  }
  Thread::consider_yield();
}
    break;

  case 77:
#line 1214 "parser.yxx"
    {
  EggGroup *group = new EggGroup((yyvsp[(2) - (2)]._string));
  group->set_group_type(EggGroup::GT_joint);
  egg_stack.push_back(group);
}
    break;

  case 78:
#line 1220 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 79:
#line 1235 "parser.yxx"
    {
  EggGroup *group = new EggGroup((yyvsp[(2) - (2)]._string));
  group->set_group_type(EggGroup::GT_instance);
  egg_stack.push_back(group);
}
    break;

  case 80:
#line 1241 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  (yyval._egg) = group;
  egg_stack.pop_back();
  if (group->has_name()) {
    groups[group->get_name()] = group;
  }
}
    break;

  case 82:
#line 1261 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  unsigned long ulong_value = (yyvsp[(5) - (6)]._ulong);
  string strval = (yyvsp[(5) - (6)]._string);

  if (cmp_nocase_uh(name, "fps") == 0) {
    group->set_switch_fps(value);

  } else if (cmp_nocase_uh(name, "no_fog") == 0) {
    group->set_nofog_flag(value != 0);

  } else if (cmp_nocase_uh(name, "decal") == 0) {
    group->set_decal_flag(value != 0);

  } else if (cmp_nocase_uh(name, "direct") == 0) {
    group->set_direct_flag(value != 0);

  } else if (cmp_nocase_uh(name, "alpha") == 0) {
    EggRenderMode::AlphaMode a = EggRenderMode::string_alpha_mode(strval);
    if (a == EggRenderMode::AM_unspecified) {
      eggyywarning("Unknown alpha mode " + strval);
    } else {
      group->set_alpha_mode(a);
    }

  } else if (cmp_nocase_uh(name, "depth_write") == 0) {
    EggRenderMode::DepthWriteMode m = 
      EggRenderMode::string_depth_write_mode(strval);
    if (m == EggRenderMode::DWM_unspecified) {
      eggyywarning("Unknown depth-write mode " + strval);
    } else {
      group->set_depth_write_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_test") == 0) {
    EggRenderMode::DepthTestMode m = 
      EggRenderMode::string_depth_test_mode(strval);
    if (m == EggRenderMode::DTM_unspecified) {
      eggyywarning("Unknown depth-test mode " + strval);
    } else {
      group->set_depth_test_mode(m);
    }

  } else if (cmp_nocase_uh(name, "visibility") == 0) {
    EggRenderMode::VisibilityMode m = 
      EggRenderMode::string_visibility_mode(strval);
    if (m == EggRenderMode::VM_unspecified) {
      eggyywarning("Unknown visibility mode " + strval);
    } else {
      group->set_visibility_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_offset") == 0) {
    group->set_depth_offset(ulong_value);

  } else if (cmp_nocase_uh(name, "draw_order") == 0) {
    group->set_draw_order(ulong_value);

  } else if (cmp_nocase_uh(name, "bin") == 0) {
    group->set_bin(strval);

  } else if (cmp_nocase_uh(name, "collide_mask") == 0) {
    group->set_collide_mask(group->get_collide_mask() | ulong_value);

  } else if (cmp_nocase_uh(name, "from_collide_mask") == 0) {
    group->set_from_collide_mask(group->get_from_collide_mask() | ulong_value);

  } else if (cmp_nocase_uh(name, "into_collide_mask") == 0) {
    group->set_into_collide_mask(group->get_into_collide_mask() | ulong_value);

  } else if (cmp_nocase_uh(name, "portal") == 0) {
    group->set_portal_flag(value != 0);

  } else if (cmp_nocase_uh(name, "occluder") == 0) {
    group->set_occluder_flag(value != 0);

  } else if (cmp_nocase_uh(name, "polylight") == 0) {
    group->set_polylight_flag(value != 0);

  } else if (cmp_nocase_uh(name, "indexed") == 0) {
    group->set_indexed_flag(value != 0);

  } else if (cmp_nocase_uh(name, "scroll_u") == 0) {
    group->set_scroll_u(value);

  } else if (cmp_nocase_uh(name, "scroll_v") == 0) {
    group->set_scroll_v(value);

  } else if (cmp_nocase_uh(name, "scroll_r") == 0) {
    group->set_scroll_r(value);

  } else if (cmp_nocase_uh(name, "blend") == 0) {
    EggGroup::BlendMode blend_mode =
      EggGroup::string_blend_mode(strval);
    if (blend_mode == EggGroup::BM_unspecified) {
      eggyywarning("Unknown blend mode " + strval);
    } else {
      group->set_blend_mode(blend_mode);
    }

  } else if (cmp_nocase_uh(name, "blendop_a") == 0) {
    EggGroup::BlendOperand blend_operand =
      EggGroup::string_blend_operand(strval);
    if (blend_operand == EggGroup::BO_unspecified) {
      eggyywarning("Unknown blend operand " + strval);
    } else {
      group->set_blend_operand_a(blend_operand);
    }

  } else if (cmp_nocase_uh(name, "blendop_b") == 0) {
    EggGroup::BlendOperand blend_operand =
      EggGroup::string_blend_operand(strval);
    if (blend_operand == EggGroup::BO_unspecified) {
      eggyywarning("Unknown blend operand " + strval);
    } else {
      group->set_blend_operand_b(blend_operand);
    }

  } else if (cmp_nocase_uh(name, "blendr") == 0) {
    LColor color = group->get_blend_color();
    color[0] = value;
    group->set_blend_color(color);

  } else if (cmp_nocase_uh(name, "blendg") == 0) {
    LColor color = group->get_blend_color();
    color[1] = value;
    group->set_blend_color(color);

  } else if (cmp_nocase_uh(name, "blendb") == 0) {
    LColor color = group->get_blend_color();
    color[2] = value;
    group->set_blend_color(color);

  } else if (cmp_nocase_uh(name, "blenda") == 0) {
    LColor color = group->get_blend_color();
    color[3] = value;
    group->set_blend_color(color);

  } else {
    eggyywarning("Unknown group scalar " + name);
  }
}
    break;

  case 83:
#line 1406 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string strval = (yyvsp[(4) - (5)]._string);

  EggGroup::BillboardType f = EggGroup::string_billboard_type(strval);
  if (f == EggGroup::BT_none) {
    eggyywarning("Unknown billboard type " + strval);
  } else {
    group->set_billboard_type(f);
  }
}
    break;

  case 84:
#line 1418 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  group->set_billboard_center(LPoint3d((yyvsp[(4) - (7)]._number), (yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number)));
}
    break;

  case 85:
#line 1423 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string name = (yyvsp[(3) - (7)]._string);

  group->set_collision_name(name);
}
    break;

  case 86:
#line 1430 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  int value = (int)(yyvsp[(4) - (5)]._number);
  group->set_dcs_type(value!=0 ? EggGroup::DC_default : EggGroup::DC_none);
}
    break;

  case 87:
#line 1436 "parser.yxx"
    {
  // The special flavor of DCS, with { sync } or { nosync }.
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string strval = (yyvsp[(4) - (5)]._string);

  EggGroup::DCSType f = EggGroup::string_dcs_type(strval);
  if (f == EggGroup::DC_unspecified) {
    eggyywarning("Unknown DCS type " + strval);
  } else {
    group->set_dcs_type(f);
  }
}
    break;

  case 88:
#line 1449 "parser.yxx"
    {
  // The traditional flavor of DART, with { 0 } or { 1 }.
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  int value = (int)(yyvsp[(4) - (5)]._number);
  group->set_dart_type(value!=0 ? EggGroup::DT_default : EggGroup::DT_none);
}
    break;

  case 89:
#line 1456 "parser.yxx"
    {
  // The special flavor of DART, with { sync } or { nosync }.
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string strval = (yyvsp[(4) - (5)]._string);

  EggGroup::DartType f = EggGroup::string_dart_type(strval);
  if (f == EggGroup::DT_none) {
    eggyywarning("Unknown dart type " + strval);
  } else {
    group->set_dart_type(f);
  }
}
    break;

  case 90:
#line 1469 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  int value = (int)(yyvsp[(4) - (5)]._number);
  group->set_switch_flag(value!=0);
}
    break;

  case 91:
#line 1475 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string type = (yyvsp[(4) - (5)]._string);
  group->add_object_type(type);
}
    break;

  case 92:
#line 1481 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  int value = (int)(yyvsp[(4) - (5)]._number);
  group->set_model_flag(value!=0);
}
    break;

  case 93:
#line 1487 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  group->set_tag((yyvsp[(3) - (6)]._string), (yyvsp[(5) - (6)]._string));
}
    break;

  case 94:
#line 1492 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  int value = (int)(yyvsp[(4) - (5)]._number);
  group->set_texlist_flag(value!=0);
}
    break;

  case 99:
#line 1502 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  if (group->get_group_type() != EggGroup::GT_instance) {
    eggyyerror("<Ref> valid only within <Instance>");
  } else if ((yyvsp[(4) - (5)]._egg) != (EggObject *)NULL) {
    group->add_group_ref(DCAST(EggGroup, (yyvsp[(4) - (5)]._egg)));
  }
}
    break;

  case 100:
#line 1511 "parser.yxx"
    {
  DCAST(EggGroup, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 101:
#line 1525 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string strval = (yyvsp[(1) - (1)]._string);

  EggGroup::CollisionSolidType f = EggGroup::string_cs_type(strval);
  if (f == EggGroup::CST_none) {
    eggyywarning("Unknown collision solid type " + strval);
  } else {
    if (f == EggGroup::CST_polyset && group->get_cs_type() != EggGroup::CST_none) {
      // By convention, a CST_polyset doesn't replace any existing
      // contradictory type, so ignore it if this happens.  This
      // allows the artist to place, for instance, <ObjectType> {
      // sphere } and <ObjectType> { trigger } together.

    } else {
      group->set_cs_type(f);
    }
  }
}
    break;

  case 103:
#line 1556 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  string strval = (yyvsp[(2) - (2)]._string);

  EggGroup::CollideFlags f = EggGroup::string_collide_flags(strval);
  if (f == EggGroup::CF_none) {
    eggyywarning("Unknown collision flag " + strval);
  } else {
    group->set_collide_flags(group->get_collide_flags() | f);
  }
}
    break;

  case 104:
#line 1578 "parser.yxx"
    {
  egg_top_transform = egg_stack.back()->as_transform();
  egg_top_transform->clear_transform();
}
    break;

  case 106:
#line 1594 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  if (group->get_group_type() != EggGroup::GT_joint) {
    eggyywarning("Unexpected <DefaultPose> outside of <Joint>");
  }
  egg_top_transform = &group->modify_default_pose();
  egg_top_transform->clear_transform();
}
    break;

  case 121:
#line 1631 "parser.yxx"
    {
  egg_top_transform->add_translate2d(LVector2d((yyvsp[(3) - (5)]._number), (yyvsp[(4) - (5)]._number)));
}
    break;

  case 122:
#line 1638 "parser.yxx"
    {
  egg_top_transform->add_translate3d(LVector3d((yyvsp[(3) - (6)]._number), (yyvsp[(4) - (6)]._number), (yyvsp[(5) - (6)]._number)));
}
    break;

  case 123:
#line 1645 "parser.yxx"
    {
  egg_top_transform->add_rotate2d((yyvsp[(3) - (4)]._number));
}
    break;

  case 124:
#line 1652 "parser.yxx"
    {
  egg_top_transform->add_rotx((yyvsp[(3) - (4)]._number));
}
    break;

  case 125:
#line 1659 "parser.yxx"
    {
  egg_top_transform->add_roty((yyvsp[(3) - (4)]._number));
}
    break;

  case 126:
#line 1666 "parser.yxx"
    {
  egg_top_transform->add_rotz((yyvsp[(3) - (4)]._number));
}
    break;

  case 127:
#line 1673 "parser.yxx"
    {
  egg_top_transform->add_rotate3d((yyvsp[(3) - (7)]._number), LVector3d((yyvsp[(4) - (7)]._number), (yyvsp[(5) - (7)]._number), (yyvsp[(6) - (7)]._number)));
}
    break;

  case 128:
#line 1680 "parser.yxx"
    {
  egg_top_transform->add_scale2d(LVecBase2d((yyvsp[(3) - (5)]._number), (yyvsp[(4) - (5)]._number)));
}
    break;

  case 129:
#line 1687 "parser.yxx"
    {
  egg_top_transform->add_scale3d(LVecBase3d((yyvsp[(3) - (6)]._number), (yyvsp[(4) - (6)]._number), (yyvsp[(5) - (6)]._number)));
}
    break;

  case 130:
#line 1694 "parser.yxx"
    {
  egg_top_transform->add_uniform_scale((yyvsp[(3) - (4)]._number));
}
    break;

  case 133:
#line 1708 "parser.yxx"
    {
  egg_top_transform->add_matrix3
    (LMatrix3d((yyvsp[(1) - (9)]._number), (yyvsp[(2) - (9)]._number), (yyvsp[(3) - (9)]._number),
               (yyvsp[(4) - (9)]._number), (yyvsp[(5) - (9)]._number), (yyvsp[(6) - (9)]._number),
               (yyvsp[(7) - (9)]._number), (yyvsp[(8) - (9)]._number), (yyvsp[(9) - (9)]._number)));
}
    break;

  case 136:
#line 1726 "parser.yxx"
    {
  egg_top_transform->add_matrix4
    (LMatrix4d((yyvsp[(1) - (16)]._number), (yyvsp[(2) - (16)]._number), (yyvsp[(3) - (16)]._number), (yyvsp[(4) - (16)]._number),
               (yyvsp[(5) - (16)]._number), (yyvsp[(6) - (16)]._number), (yyvsp[(7) - (16)]._number), (yyvsp[(8) - (16)]._number),
               (yyvsp[(9) - (16)]._number), (yyvsp[(10) - (16)]._number), (yyvsp[(11) - (16)]._number), (yyvsp[(12) - (16)]._number),
               (yyvsp[(13) - (16)]._number), (yyvsp[(14) - (16)]._number), (yyvsp[(15) - (16)]._number), (yyvsp[(16) - (16)]._number)));
}
    break;

  case 137:
#line 1745 "parser.yxx"
    {
  if ((yyvsp[(7) - (9)]._egg) != (EggVertexPool *)NULL) {
    EggVertexPool *pool = DCAST(EggVertexPool, (yyvsp[(7) - (9)]._egg));
    EggGroup *group = DCAST(EggGroup, egg_stack.back());
    PTA_double nums = (yyvsp[(3) - (9)]._number_list);
    double membership = (yyvsp[(4) - (9)]._number);

    for (int i = 0; i < (int)nums.size(); i++) {
      int index = (int)nums[i];
      EggVertex *vertex = pool->get_forward_vertex(index);
      if (vertex == NULL) {
        ostringstream errmsg;
        errmsg << "No vertex " << index << " in pool " << pool->get_name() 
               << ends;
        eggyyerror(errmsg);
      } else {
        group->ref_vertex(vertex, membership);
      }
    }
  }
}
    break;

  case 138:
#line 1778 "parser.yxx"
    {
  (yyval._number) = 1.0;
}
    break;

  case 139:
#line 1782 "parser.yxx"
    {
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  double result = (yyvsp[(1) - (6)]._number);
  
  if (cmp_nocase_uh(name, "membership") == 0) {
    result = value;
  } else {
    eggyywarning("Unknown group vertex scalar " + name);
  }

  (yyval._number) = result;
}
    break;

  case 141:
#line 1819 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  group->set_lod(EggSwitchConditionDistance((yyvsp[(3) - (11)]._number), (yyvsp[(4) - (11)]._number), LPoint3d((yyvsp[(7) - (11)]._number), (yyvsp[(8) - (11)]._number), (yyvsp[(9) - (11)]._number))));
}
    break;

  case 142:
#line 1824 "parser.yxx"
    {
  EggGroup *group = DCAST(EggGroup, egg_stack.back());
  group->set_lod(EggSwitchConditionDistance((yyvsp[(3) - (12)]._number), (yyvsp[(4) - (12)]._number), LPoint3d((yyvsp[(8) - (12)]._number), (yyvsp[(9) - (12)]._number), (yyvsp[(10) - (12)]._number)), (yyvsp[(5) - (12)]._number)));
}
    break;

  case 143:
#line 1841 "parser.yxx"
    {
  egg_stack.push_back(new EggPolygon((yyvsp[(2) - (2)]._string)));
}
    break;

  case 144:
#line 1845 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 145:
#line 1860 "parser.yxx"
    {
  egg_stack.push_back(new EggTriangleFan((yyvsp[(2) - (2)]._string)));
}
    break;

  case 146:
#line 1864 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 147:
#line 1879 "parser.yxx"
    {
  egg_stack.push_back(new EggTriangleStrip((yyvsp[(2) - (2)]._string)));
}
    break;

  case 148:
#line 1883 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 149:
#line 1898 "parser.yxx"
    {
  egg_stack.push_back(new EggPoint((yyvsp[(2) - (2)]._string)));
}
    break;

  case 150:
#line 1902 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 151:
#line 1917 "parser.yxx"
    {
  egg_stack.push_back(new EggLine((yyvsp[(2) - (2)]._string)));
}
    break;

  case 152:
#line 1921 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 153:
#line 1936 "parser.yxx"
    {
  egg_stack.push_back(new EggNurbsSurface((yyvsp[(2) - (2)]._string)));
}
    break;

  case 154:
#line 1940 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 155:
#line 1955 "parser.yxx"
    {
  egg_stack.push_back(new EggNurbsCurve((yyvsp[(2) - (2)]._string)));
}
    break;

  case 156:
#line 1959 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 161:
#line 1989 "parser.yxx"
    {
  if (!egg_stack.back()->is_of_type(EggCompositePrimitive::get_class_type())) {
    eggyyerror("Not a composite primitive; components are not allowed here.");
  } else {
    PT(EggCompositePrimitive) comp = DCAST(EggCompositePrimitive, egg_stack.back());
    if ((yyvsp[(3) - (4)]._number) < 0 || (yyvsp[(3) - (4)]._number) >= comp->get_num_components()) {
      eggyyerror("Invalid component number");
    }
  }
  // We temporarily add an EggPolygon to the stack, just to receive
  // the component attributes.
  egg_stack.push_back(new EggPolygon);
}
    break;

  case 162:
#line 2003 "parser.yxx"
    {
  PT(EggPrimitive) prim = DCAST(EggPrimitive, egg_stack.back());
  egg_stack.pop_back();
  PT(EggCompositePrimitive) comp = DCAST(EggCompositePrimitive, egg_stack.back());
  comp->set_component((int)(yyvsp[(3) - (7)]._number), prim);
}
    break;

  case 170:
#line 2017 "parser.yxx"
    {
  EggPrimitive *primitive = DCAST(EggPrimitive, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);
  
  if (cmp_nocase_uh(name, "alpha") == 0) {
    EggRenderMode::AlphaMode a = EggRenderMode::string_alpha_mode(strval);
    if (a == EggRenderMode::AM_unspecified) {
      eggyywarning("Unknown alpha mode " + strval);
    } else {
      primitive->set_alpha_mode(a);
    }
  } else if (cmp_nocase_uh(name, "depth_write") == 0) {
    EggRenderMode::DepthWriteMode m = 
      EggRenderMode::string_depth_write_mode(strval);
    if (m == EggRenderMode::DWM_unspecified) {
      eggyywarning("Unknown depth-write mode " + strval);
    } else {
      primitive->set_depth_write_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_test") == 0) {
    EggRenderMode::DepthTestMode m = 
      EggRenderMode::string_depth_test_mode(strval);
    if (m == EggRenderMode::DTM_unspecified) {
      eggyywarning("Unknown depth-test mode " + strval);
    } else {
      primitive->set_depth_test_mode(m);
    }

  } else if (cmp_nocase_uh(name, "visibility") == 0) {
    EggRenderMode::VisibilityMode m = 
      EggRenderMode::string_visibility_mode(strval);
    if (m == EggRenderMode::VM_unspecified) {
      eggyywarning("Unknown visibility mode " + strval);
    } else {
      primitive->set_visibility_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_offset") == 0) {
    primitive->set_depth_offset((int)value);
  } else if (cmp_nocase_uh(name, "draw_order") == 0) {
    primitive->set_draw_order((int)value);
  } else if (cmp_nocase_uh(name, "bin") == 0) {
    primitive->set_bin(strval);
  } else if (cmp_nocase_uh(name, "thick") == 0) {
    if (primitive->is_of_type(EggLine::get_class_type())) {
      DCAST(EggLine, primitive)->set_thick(value);
    } else if (primitive->is_of_type(EggPoint::get_class_type())) {
      DCAST(EggPoint, primitive)->set_thick(value);
    } else {
      eggyywarning("scalar thick is only meaningful for points and lines.");
    }
  } else if (cmp_nocase_uh(name, "perspective") == 0) {
    if (primitive->is_of_type(EggPoint::get_class_type())) {
      DCAST(EggPoint, primitive)->set_perspective(value != 0);
    } else {
      eggyywarning("scalar perspective is only meaningful for points.");
    }
  } else {
    eggyywarning("Unknown scalar " + name);
  }
}
    break;

  case 182:
#line 2103 "parser.yxx"
    {
  EggNurbsCurve *curve = DCAST(EggNurbsCurve, (yyvsp[(2) - (2)]._egg));
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  nurbs->_curves_on_surface.push_back(curve);
}
    break;

  case 184:
#line 2110 "parser.yxx"
    {
  EggNurbsSurface *primitive = DCAST(EggNurbsSurface, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);
  
  if (cmp_nocase_uh(name, "alpha") == 0) {
    EggRenderMode::AlphaMode a = EggRenderMode::string_alpha_mode(strval);
    if (a == EggRenderMode::AM_unspecified) {
      eggyywarning("Unknown alpha mode " + strval);
    } else {
      primitive->set_alpha_mode(a);
    }
  } else if (cmp_nocase_uh(name, "depth_write") == 0) {
    EggRenderMode::DepthWriteMode m = 
      EggRenderMode::string_depth_write_mode(strval);
    if (m == EggRenderMode::DWM_unspecified) {
      eggyywarning("Unknown depth-write mode " + strval);
    } else {
      primitive->set_depth_write_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_test") == 0) {
    EggRenderMode::DepthTestMode m = 
      EggRenderMode::string_depth_test_mode(strval);
    if (m == EggRenderMode::DTM_unspecified) {
      eggyywarning("Unknown depth-test mode " + strval);
    } else {
      primitive->set_depth_test_mode(m);
    }

  } else if (cmp_nocase_uh(name, "visibility") == 0) {
    EggRenderMode::VisibilityMode m = 
      EggRenderMode::string_visibility_mode(strval);
    if (m == EggRenderMode::VM_unspecified) {
      eggyywarning("Unknown visibility mode " + strval);
    } else {
      primitive->set_visibility_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_offset") == 0) {
    primitive->set_depth_offset((int)value);
  } else if (cmp_nocase_uh(name, "draw_order") == 0) {
    primitive->set_draw_order((int)value);
  } else if (cmp_nocase_uh(name, "bin") == 0) {
    primitive->set_bin(strval);
  } else if (cmp_nocase_uh(name, "u_subdiv") == 0) {
    primitive->set_u_subdiv((int)value);
  } else if (cmp_nocase_uh(name, "v_subdiv") == 0) {
    primitive->set_v_subdiv((int)value);
  } else {
    eggyywarning("Unknown scalar " + name);
  }
}
    break;

  case 195:
#line 2186 "parser.yxx"
    {
  EggNurbsCurve *primitive = DCAST(EggNurbsCurve, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);
  
  if (cmp_nocase_uh(name, "alpha") == 0) {
    EggRenderMode::AlphaMode a = EggRenderMode::string_alpha_mode(strval);
    if (a == EggRenderMode::AM_unspecified) {
      eggyywarning("Unknown alpha mode " + strval);
    } else {
      primitive->set_alpha_mode(a);
    }
  } else if (cmp_nocase_uh(name, "depth_write") == 0) {
    EggRenderMode::DepthWriteMode m = 
      EggRenderMode::string_depth_write_mode(strval);
    if (m == EggRenderMode::DWM_unspecified) {
      eggyywarning("Unknown depth-write mode " + strval);
    } else {
      primitive->set_depth_write_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_test") == 0) {
    EggRenderMode::DepthTestMode m = 
      EggRenderMode::string_depth_test_mode(strval);
    if (m == EggRenderMode::DTM_unspecified) {
      eggyywarning("Unknown depth-test mode " + strval);
    } else {
      primitive->set_depth_test_mode(m);
    }

  } else if (cmp_nocase_uh(name, "visibility") == 0) {
    EggRenderMode::VisibilityMode m = 
      EggRenderMode::string_visibility_mode(strval);
    if (m == EggRenderMode::VM_unspecified) {
      eggyywarning("Unknown visibility mode " + strval);
    } else {
      primitive->set_visibility_mode(m);
    }

  } else if (cmp_nocase_uh(name, "depth_offset") == 0) {
    primitive->set_depth_offset((int)value);
  } else if (cmp_nocase_uh(name, "draw_order") == 0) {
    primitive->set_draw_order((int)value);
  } else if (cmp_nocase_uh(name, "bin") == 0) {
    primitive->set_bin(strval);
  } else if (cmp_nocase_uh(name, "subdiv") == 0) {
    primitive->set_subdiv((int)value);
  } else if (cmp_nocase_uh(name, "type") == 0) {
    EggCurve::CurveType a = EggCurve::string_curve_type(strval);
    if (a == EggCurve::CT_none) {
      eggyywarning("Unknown curve type " + strval);
    } else {
      primitive->set_curve_type(a);
    }
    
  } else {
    eggyywarning("Unknown scalar " + name);
  }
}
    break;

  case 196:
#line 2257 "parser.yxx"
    {
  if ((yyvsp[(1) - (1)]._egg) != (EggTexture *)NULL) {
    EggTexture *texture = DCAST(EggTexture, (yyvsp[(1) - (1)]._egg));
    DCAST(EggPrimitive, egg_stack.back())->add_texture(texture);
  }
}
    break;

  case 197:
#line 2274 "parser.yxx"
    {
  EggTexture *texture = NULL;

  // Defining a texture on-the-fly.
  Filename filename = (yyvsp[(1) - (1)]._string);
  string tref_name = filename.get_basename();

  Textures::iterator vpi = textures.find(tref_name);
  if (vpi == textures.end()) {
    // The texture was not yet defined.  Define it.
    texture = new EggTexture(tref_name, filename);
    textures[tref_name] = texture;

    if (egg_top_node != NULL) {
      egg_top_node->add_child(texture);
    }

  } else {
    // The texture already existed.  Use it.
    texture = (*vpi).second;
    if (filename != texture->get_filename()) {
      eggyywarning(string("Using previous path: ") + 
                   texture->get_filename().get_fullpath());
    }
  }

  nassertr(texture != NULL, 0);
  DCAST(EggPrimitive, egg_stack.back())->add_texture(texture);
}
    break;

  case 198:
#line 2314 "parser.yxx"
    {
  if ((yyvsp[(1) - (1)]._egg) != (EggMaterial *)NULL) {
    EggMaterial *material = DCAST(EggMaterial, (yyvsp[(1) - (1)]._egg));
    DCAST(EggPrimitive, egg_stack.back())->set_material(material);
  }
}
    break;

  case 199:
#line 2331 "parser.yxx"
    {
  DCAST(EggPrimitive, egg_stack.back())->set_normal(LNormald((yyvsp[(1) - (3)]._number), (yyvsp[(2) - (3)]._number), (yyvsp[(3) - (3)]._number)));
}
    break;

  case 200:
#line 2335 "parser.yxx"
    {
  bool inserted = DCAST(EggPrimitive, egg_stack.back())->_dnormals.
    insert(EggMorphNormal((yyvsp[(3) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (8)]._string));
  }
}
    break;

  case 201:
#line 2343 "parser.yxx"
    {
  bool inserted = DCAST(EggPrimitive, egg_stack.back())->_dnormals.
    insert(EggMorphNormal((yyvsp[(4) - (8)]._string), LVector3d((yyvsp[(5) - (8)]._number), (yyvsp[(6) - (8)]._number), (yyvsp[(7) - (8)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (8)]._string));
  }
}
    break;

  case 202:
#line 2361 "parser.yxx"
    {
  DCAST(EggPrimitive, egg_stack.back())->set_color(LColor((yyvsp[(1) - (4)]._number), (yyvsp[(2) - (4)]._number), (yyvsp[(3) - (4)]._number), (yyvsp[(4) - (4)]._number)));
}
    break;

  case 203:
#line 2365 "parser.yxx"
    {
  bool inserted = DCAST(EggPrimitive, egg_stack.back())->_drgbas.
    insert(EggMorphColor((yyvsp[(3) - (9)]._string), LVector4((yyvsp[(5) - (9)]._number), (yyvsp[(6) - (9)]._number), (yyvsp[(7) - (9)]._number), (yyvsp[(8) - (9)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(3) - (9)]._string));
  }
}
    break;

  case 204:
#line 2373 "parser.yxx"
    {
  bool inserted = DCAST(EggPrimitive, egg_stack.back())->_drgbas.
    insert(EggMorphColor((yyvsp[(4) - (9)]._string), LVector4((yyvsp[(5) - (9)]._number), (yyvsp[(6) - (9)]._number), (yyvsp[(7) - (9)]._number), (yyvsp[(8) - (9)]._number)))).second;
  if (!inserted) {
    eggyywarning("Ignoring repeated morph name " + (yyvsp[(4) - (9)]._string));
  }
}
    break;

  case 205:
#line 2391 "parser.yxx"
    {
  EggPrimitive *primitive = DCAST(EggPrimitive, egg_stack.back());
  int value = (int)(yyvsp[(1) - (1)]._number);
  primitive->set_bface_flag(value!=0);
}
    break;

  case 206:
#line 2407 "parser.yxx"
    {
  if ((yyvsp[(6) - (8)]._egg) != (EggVertexPool *)NULL) {
    EggVertexPool *pool = DCAST(EggVertexPool, (yyvsp[(6) - (8)]._egg));
    EggPrimitive *prim = DCAST(EggPrimitive, egg_stack.back());
    PTA_double nums = (yyvsp[(3) - (8)]._number_list);

    for (int i = 0; i < (int)nums.size(); i++) {
      int index = (int)nums[i];
      EggVertex *vertex = pool->get_forward_vertex(index);
      if (vertex == NULL) {
        ostringstream errmsg;
        errmsg << "No vertex " << index << " in pool " << pool->get_name() 
               << ends;
        eggyyerror(errmsg);
      } else {
        prim->add_vertex(vertex);
      }
    }
  }
}
    break;

  case 207:
#line 2438 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  int u_order = (int)(yyvsp[(1) - (2)]._number);
  int v_order = (int)(yyvsp[(2) - (2)]._number);
  nurbs->set_u_order(u_order);
  nurbs->set_v_order(v_order);
}
    break;

  case 208:
#line 2456 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  PTA_double nums = (yyvsp[(1) - (1)]._number_list);

  nurbs->set_num_u_knots(nums.size());
  for (int i = 0; i < (int)nums.size(); i++) {
    nurbs->set_u_knot(i, nums[i]);
  }
}
    break;

  case 209:
#line 2476 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  PTA_double nums = (yyvsp[(1) - (1)]._number_list);

  nurbs->set_num_v_knots(nums.size());
  for (int i = 0; i < (int)nums.size(); i++) {
    nurbs->set_v_knot(i, nums[i]);
  }
}
    break;

  case 210:
#line 2496 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  nurbs->_trims.push_back(EggNurbsSurface::Trim());
}
    break;

  case 212:
#line 2512 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  nassertr(!nurbs->_trims.empty(), 0);
  nurbs->_trims.back().push_back(EggNurbsSurface::Loop());
}
    break;

  case 213:
#line 2518 "parser.yxx"
    {
  EggNurbsSurface *nurbs = DCAST(EggNurbsSurface, egg_stack.back());
  nassertr(!nurbs->_trims.empty(), 0);
  nassertr(!nurbs->_trims.back().empty(), 0);
  EggNurbsCurve *curve = DCAST(EggNurbsCurve, (yyvsp[(2) - (2)]._egg)); 
  nurbs->_trims.back().back().push_back(curve);
}
    break;

  case 214:
#line 2537 "parser.yxx"
    {
  EggNurbsCurve *nurbs = DCAST(EggNurbsCurve, egg_stack.back());
  int order = (int)(yyvsp[(1) - (1)]._number);
  nurbs->set_order(order);
}
    break;

  case 215:
#line 2553 "parser.yxx"
    {
  EggNurbsCurve *nurbs = DCAST(EggNurbsCurve, egg_stack.back());
  PTA_double nums = (yyvsp[(1) - (1)]._number_list);

  nurbs->set_num_knots(nums.size());
  for (int i = 0; i < (int)nums.size(); i++) {
    nurbs->set_knot(i, nums[i]);
  }
}
    break;

  case 216:
#line 2574 "parser.yxx"
    {
  EggTable *table = new EggTable((yyvsp[(2) - (2)]._string));
  table->set_table_type(EggTable::TT_table);
  egg_stack.push_back(table);
}
    break;

  case 217:
#line 2580 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
  Thread::consider_yield();
}
    break;

  case 218:
#line 2597 "parser.yxx"
    {
  EggTable *table = new EggTable((yyvsp[(2) - (2)]._string));
  table->set_table_type(EggTable::TT_bundle);
  egg_stack.push_back(table);
}
    break;

  case 219:
#line 2603 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 221:
#line 2619 "parser.yxx"
    {
  DCAST(EggTable, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 222:
#line 2623 "parser.yxx"
    {
  DCAST(EggTable, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 223:
#line 2627 "parser.yxx"
    {
  DCAST(EggTable, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 224:
#line 2631 "parser.yxx"
    {
  DCAST(EggTable, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 225:
#line 2635 "parser.yxx"
    {
  DCAST(EggTable, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 226:
#line 2650 "parser.yxx"
    {
  EggSAnimData *anim_data = new EggSAnimData((yyvsp[(2) - (2)]._string));
  egg_stack.push_back(anim_data);
}
    break;

  case 227:
#line 2655 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 229:
#line 2672 "parser.yxx"
    {
  EggSAnimData *anim_data = DCAST(EggSAnimData, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);

  if (cmp_nocase_uh(name, "fps") == 0) {
    anim_data->set_fps(value);
  } else {
    eggyywarning("Unsupported S$Anim scalar: " + name);
  }
}
    break;

  case 230:
#line 2684 "parser.yxx"
    {
  DCAST(EggSAnimData, egg_stack.back())->set_data((yyvsp[(4) - (5)]._number_list));
}
    break;

  case 231:
#line 2698 "parser.yxx"
    {
  EggXfmAnimData *anim_data = new EggXfmAnimData((yyvsp[(2) - (2)]._string));
  egg_stack.push_back(anim_data);
}
    break;

  case 232:
#line 2703 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 234:
#line 2720 "parser.yxx"
    {
  EggXfmAnimData *anim_data = DCAST(EggXfmAnimData, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);

  if (cmp_nocase_uh(name, "fps") == 0) {
    anim_data->set_fps(value);
  } else if (cmp_nocase_uh(name, "order") == 0) {
    anim_data->set_order(strval);
  } else if (cmp_nocase_uh(name, "contents") == 0) {
    anim_data->set_contents(strval);
  } else {
    eggyywarning("Unsupported Xfm$Anim scalar: " + name);
  }
}
    break;

  case 235:
#line 2737 "parser.yxx"
    {
  DCAST(EggXfmAnimData, egg_stack.back())->set_data((yyvsp[(4) - (5)]._number_list));
}
    break;

  case 236:
#line 2751 "parser.yxx"
    {
  EggXfmSAnim *anim_group = new EggXfmSAnim((yyvsp[(2) - (2)]._string));
  egg_stack.push_back(anim_group);
}
    break;

  case 237:
#line 2756 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 239:
#line 2773 "parser.yxx"
    {
  EggXfmSAnim *anim_group = DCAST(EggXfmSAnim, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);
  string strval = (yyvsp[(5) - (6)]._string);

  if (cmp_nocase_uh(name, "fps") == 0) {
    anim_group->set_fps(value);
  } else if (cmp_nocase_uh(name, "order") == 0) {
    anim_group->set_order(strval);
  } else {
    eggyywarning("Unsupported Xfm$Anim_S$ scalar: " + name);
  }
}
    break;

  case 240:
#line 2788 "parser.yxx"
    {
  DCAST(EggXfmSAnim, egg_stack.back())->add_child(DCAST(EggNode, (yyvsp[(2) - (2)]._egg)));
}
    break;

  case 241:
#line 2803 "parser.yxx"
    {
  EggAnimPreload *anim_preload = new EggAnimPreload((yyvsp[(2) - (2)]._string));
  egg_stack.push_back(anim_preload);
}
    break;

  case 242:
#line 2808 "parser.yxx"
    {
  (yyval._egg) = egg_stack.back();
  egg_stack.pop_back();
}
    break;

  case 244:
#line 2825 "parser.yxx"
    {
  EggAnimPreload *anim_preload = DCAST(EggAnimPreload, egg_stack.back());
  string name = (yyvsp[(3) - (6)]._string);
  double value = (yyvsp[(5) - (6)]._number);

  if (cmp_nocase_uh(name, "fps") == 0) {
    anim_preload->set_fps(value);
  } else if (cmp_nocase_uh(name, "frames") == 0) {
    anim_preload->set_num_frames((int)value);
  } else {
    eggyywarning("Unsupported AnimPreload scalar: " + name);
  }
}
    break;

  case 245:
#line 2849 "parser.yxx"
    {
  (yyval._number_list) = PTA_double::empty_array(0);
}
    break;

  case 246:
#line 2853 "parser.yxx"
    {
  (yyval._number_list).push_back((double)(yyvsp[(2) - (2)]._number));
}
    break;

  case 247:
#line 2867 "parser.yxx"
    {
  (yyval._number_list) = PTA_double::empty_array(0);
}
    break;

  case 248:
#line 2871 "parser.yxx"
    {
  (yyval._number_list).push_back((yyvsp[(2) - (2)]._number));
}
    break;

  case 249:
#line 2885 "parser.yxx"
    {
  string name = (yyvsp[(1) - (1)]._string);
  Textures::iterator vpi = textures.find(name);
  if (vpi == textures.end()) {
    eggyyerror("Unknown texture " + name);
    (yyval._egg) = PT(EggObject)();
  } else {
    (yyval._egg) = (*vpi).second;
  }
}
    break;

  case 250:
#line 2906 "parser.yxx"
    {
  string name = (yyvsp[(1) - (1)]._string);
  Materials::iterator vpi = materials.find(name);
  if (vpi == materials.end()) {
    eggyyerror("Unknown material " + name);
    (yyval._egg) = PT(EggObject)();
  } else {
    (yyval._egg) = (*vpi).second;
  }
}
    break;

  case 251:
#line 2927 "parser.yxx"
    {
  string name = (yyvsp[(1) - (1)]._string);
  VertexPools::iterator vpi = vertex_pools.find(name);
  if (vpi == vertex_pools.end()) {
    // This will become a forward reference.
    EggVertexPool *pool = new EggVertexPool(name);
    // The egg syntax starts counting at 1 by convention.
    pool->set_highest_index(0);
    vertex_pools[name] = pool;
    (yyval._egg) = pool;
  } else {
    (yyval._egg) = (*vpi).second;
  }
}
    break;

  case 252:
#line 2952 "parser.yxx"
    {
  string name = (yyvsp[(1) - (1)]._string);
  Groups::iterator vpi = groups.find(name);
  if (vpi == groups.end()) {
    eggyyerror("Unknown group " + name);
    (yyval._egg) = PT(EggObject)();
  } else {
    (yyval._egg) = (*vpi).second;
  }
}
    break;

  case 253:
#line 2973 "parser.yxx"
    {
  eggyyerror("Name required.");
  (yyval._string) = "";
}
    break;

  case 256:
#line 3002 "parser.yxx"
    {
  eggyyerror("String required.");
  (yyval._string) = "";
}
    break;

  case 258:
#line 3018 "parser.yxx"
    {
  (yyval._string) = "";
}
    break;

  case 260:
#line 3036 "parser.yxx"
    {
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 261:
#line 3040 "parser.yxx"
    {
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 263:
#line 3057 "parser.yxx"
    {
  (yyval._string) = "";
}
    break;

  case 264:
#line 3061 "parser.yxx"
    {
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 265:
#line 3077 "parser.yxx"
    {
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 266:
#line 3081 "parser.yxx"
    {
  (yyval._string) = (yyvsp[(1) - (2)]._string) + "\n" + (yyvsp[(2) - (2)]._string);
}
    break;

  case 268:
#line 3096 "parser.yxx"
    {
  (yyval._number) = (yyvsp[(1) - (1)]._ulong);
}
    break;

  case 269:
#line 3111 "parser.yxx"
    {
  (yyval._number) = (yyvsp[(1) - (1)]._number);
  (yyval._ulong) = (unsigned long)(yyvsp[(1) - (1)]._number);
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 270:
#line 3117 "parser.yxx"
    {
  (yyval._number) = (yyvsp[(1) - (1)]._ulong);
  (yyval._ulong) = (yyvsp[(1) - (1)]._ulong);
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 271:
#line 3123 "parser.yxx"
    {
  (yyval._number) = 0.0;
  (yyval._ulong) = 0;
  (yyval._string) = (yyvsp[(1) - (1)]._string);
}
    break;

  case 272:
#line 3140 "parser.yxx"
    {
  int i = (int)(yyvsp[(1) - (1)]._number);
  if ((double)i != (yyvsp[(1) - (1)]._number)) {
    eggyywarning("Integer expected.");
    (yyval._number) = (double)i;
  }
}
    break;

  case 273:
#line 3148 "parser.yxx"
    {
  (yyval._number) = (yyvsp[(1) - (1)]._ulong);
}
    break;


/* Line 1267 of yacc.c.  */
#line 4859 "y.tab.c"
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



