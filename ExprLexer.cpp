
// Generated from Expr.g4 by ANTLR 4.12.0


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
  assert(exprlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", 
      "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "COLON", 
      "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", "WS", "AND", "ARRAY", "ASM", 
      "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", "CONTINUE", "DESTRUCTOR", 
      "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", "FILE", "FOR", "FUNCTION", 
      "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", "INTERFACE", "LABEL", 
      "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", "OR", "PACKED", 
      "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "SHL", "SHR", "QUOTE", 
      "CHARACTER", "STRING", "THEN", "TO", "TRUE", "TYPE", "UNIT", "UNTIL", 
      "USES", "VAR", "WHILE", "WRITELN", "WITH", "XOR", "INTEGER", "RANGE", 
      "REAL", "IDENTIFIER", "PLUSOP", "MINUSOP", "DIVOP", "MULTOP", "ASSIGN", 
      "EQUAL", "NE", "LTEQ", "GTEQ", "LT", "GT", "PLUSEQUAL", "MINUSEQUAL", 
      "MULTEQUAL", "DIVEQUAL", "CARAT", "SEMICOLON", "COMMA", "LPAREN", 
      "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "LCOMMENT", 
      "RCOMMENT", "CHARACTER_CHAR", "STRING_DQUOTE_CHAR", "STRING_SQUOTE_CHAR", 
      "DQUOTE", "SQUOTE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "':'", "'\"'", "'\\u003F'", "'!'", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "'''", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "'..'", "", "", "'+'", "'-'", "'/'", "'*'", "':='", "'='", 
      "'<>'", "'<='", "'>='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", 
      "'^'", "';'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", "'(*'", 
      "'*)'"
    },
    std::vector<std::string>{
      "", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", "WS", "AND", 
      "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "QUOTE", "CHARACTER", "STRING", "THEN", "TO", "TRUE", 
      "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WRITELN", "WITH", 
      "XOR", "INTEGER", "RANGE", "REAL", "IDENTIFIER", "PLUSOP", "MINUSOP", 
      "DIVOP", "MULTOP", "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", "LT", 
      "GT", "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", 
      "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", 
      "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,93,777,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,2,120,7,120,2,121,7,121,2,122,
  	7,122,2,123,7,123,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,
  	1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,
  	14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,
  	21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,
  	28,1,28,1,29,1,29,1,30,3,30,311,8,30,1,30,1,30,1,30,1,30,1,31,4,31,318,
  	8,31,11,31,12,31,319,1,31,1,31,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,
  	1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,44,
  	1,44,1,44,1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,45,1,45,1,46,1,46,1,46,
  	1,46,1,47,1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,49,1,49,
  	1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,
  	1,51,1,51,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,
  	1,53,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,55,1,55,1,55,1,55,1,55,
  	1,55,1,55,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,57,1,57,
  	1,57,1,57,1,57,1,57,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,60,1,60,
  	1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,62,1,62,1,62,1,63,1,63,
  	1,63,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,65,1,65,1,65,1,66,
  	1,66,1,66,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,67,1,67,1,67,1,67,1,67,
  	1,67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,69,1,69,1,69,1,69,
  	1,69,1,69,1,69,1,70,1,70,1,70,1,70,1,70,1,70,1,70,1,71,1,71,1,71,1,71,
  	1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,73,1,74,1,74,1,75,1,75,1,75,1,75,
  	1,76,1,76,5,76,586,8,76,10,76,12,76,589,9,76,1,76,1,76,1,76,1,76,5,76,
  	595,8,76,10,76,12,76,598,9,76,1,76,1,76,3,76,602,8,76,1,77,1,77,1,77,
  	1,77,1,77,1,78,1,78,1,78,1,79,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,80,
  	1,80,1,81,1,81,1,81,1,81,1,81,1,82,1,82,1,82,1,82,1,82,1,82,1,83,1,83,
  	1,83,1,83,1,83,1,84,1,84,1,84,1,84,1,85,1,85,1,85,1,85,1,85,1,85,1,86,
  	1,86,1,86,1,86,1,86,1,86,1,86,1,86,1,87,1,87,1,87,1,87,1,87,1,88,1,88,
  	1,88,1,88,1,89,4,89,666,8,89,11,89,12,89,667,1,90,1,90,1,90,1,91,1,91,
  	1,91,1,91,1,91,1,91,1,91,3,91,680,8,91,1,91,1,91,1,91,1,91,1,91,1,91,
  	1,91,3,91,689,8,91,1,91,1,91,3,91,693,8,91,1,92,1,92,5,92,697,8,92,10,
  	92,12,92,700,9,92,1,93,1,93,1,94,1,94,1,95,1,95,1,96,1,96,1,97,1,97,1,
  	97,1,98,1,98,1,99,1,99,1,99,1,100,1,100,1,100,1,101,1,101,1,101,1,102,
  	1,102,1,103,1,103,1,104,1,104,1,104,1,105,1,105,1,105,1,106,1,106,1,106,
  	1,107,1,107,1,107,1,108,1,108,1,109,1,109,1,110,1,110,1,111,1,111,1,112,
  	1,112,1,113,1,113,1,114,1,114,1,115,1,115,1,116,1,116,1,117,1,117,1,117,
  	1,118,1,118,1,118,1,119,1,119,1,120,1,120,3,120,768,8,120,1,121,1,121,
  	3,121,772,8,121,1,122,1,122,1,123,1,123,0,0,124,1,0,3,0,5,0,7,0,9,0,11,
  	0,13,0,15,0,17,0,19,0,21,0,23,0,25,0,27,0,29,0,31,0,33,0,35,0,37,0,39,
  	0,41,0,43,0,45,0,47,0,49,0,51,0,53,1,55,2,57,3,59,4,61,5,63,6,65,7,67,
  	8,69,9,71,10,73,11,75,12,77,13,79,14,81,15,83,16,85,17,87,18,89,19,91,
  	20,93,21,95,22,97,23,99,24,101,25,103,26,105,27,107,28,109,29,111,30,
  	113,31,115,32,117,33,119,34,121,35,123,36,125,37,127,38,129,39,131,40,
  	133,41,135,42,137,43,139,44,141,45,143,46,145,47,147,48,149,49,151,50,
  	153,51,155,52,157,53,159,54,161,55,163,56,165,57,167,58,169,59,171,60,
  	173,61,175,62,177,63,179,64,181,65,183,66,185,67,187,68,189,69,191,70,
  	193,71,195,72,197,73,199,74,201,75,203,76,205,77,207,78,209,79,211,80,
  	213,81,215,82,217,83,219,84,221,85,223,86,225,87,227,88,229,89,231,90,
  	233,91,235,92,237,93,239,0,241,0,243,0,245,0,247,0,1,0,33,2,0,65,65,97,
  	97,2,0,66,66,98,98,2,0,67,67,99,99,2,0,68,68,100,100,2,0,69,69,101,101,
  	2,0,70,70,102,102,2,0,71,71,103,103,2,0,72,72,104,104,2,0,73,73,105,105,
  	2,0,74,74,106,106,2,0,75,75,107,107,2,0,76,76,108,108,2,0,77,77,109,109,
  	2,0,78,78,110,110,2,0,79,79,111,111,2,0,80,80,112,112,2,0,81,81,113,113,
  	2,0,82,82,114,114,2,0,83,83,115,115,2,0,84,84,116,116,2,0,85,85,117,117,
  	2,0,86,86,118,118,2,0,87,87,119,119,2,0,88,88,120,120,2,0,89,89,121,121,
  	2,0,90,90,122,122,2,0,9,9,32,32,1,0,48,57,2,0,43,43,45,45,3,0,65,90,95,
  	95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,39,39,1,0,34,34,758,0,53,1,
  	0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,
  	0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,
  	75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,
  	0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,
  	0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,
  	0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,
  	0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,
  	0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,
  	0,137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,
  	0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,
  	0,157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,
  	0,167,1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,
  	0,177,1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,
  	0,187,1,0,0,0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,
  	0,197,1,0,0,0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,
  	0,207,1,0,0,0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,
  	0,217,1,0,0,0,0,219,1,0,0,0,0,221,1,0,0,0,0,223,1,0,0,0,0,225,1,0,0,0,
  	0,227,1,0,0,0,0,229,1,0,0,0,0,231,1,0,0,0,0,233,1,0,0,0,0,235,1,0,0,0,
  	0,237,1,0,0,0,1,249,1,0,0,0,3,251,1,0,0,0,5,253,1,0,0,0,7,255,1,0,0,0,
  	9,257,1,0,0,0,11,259,1,0,0,0,13,261,1,0,0,0,15,263,1,0,0,0,17,265,1,0,
  	0,0,19,267,1,0,0,0,21,269,1,0,0,0,23,271,1,0,0,0,25,273,1,0,0,0,27,275,
  	1,0,0,0,29,277,1,0,0,0,31,279,1,0,0,0,33,281,1,0,0,0,35,283,1,0,0,0,37,
  	285,1,0,0,0,39,287,1,0,0,0,41,289,1,0,0,0,43,291,1,0,0,0,45,293,1,0,0,
  	0,47,295,1,0,0,0,49,297,1,0,0,0,51,299,1,0,0,0,53,301,1,0,0,0,55,303,
  	1,0,0,0,57,305,1,0,0,0,59,307,1,0,0,0,61,310,1,0,0,0,63,317,1,0,0,0,65,
  	323,1,0,0,0,67,327,1,0,0,0,69,333,1,0,0,0,71,337,1,0,0,0,73,343,1,0,0,
  	0,75,349,1,0,0,0,77,354,1,0,0,0,79,360,1,0,0,0,81,373,1,0,0,0,83,382,
  	1,0,0,0,85,393,1,0,0,0,87,397,1,0,0,0,89,400,1,0,0,0,91,407,1,0,0,0,93,
  	412,1,0,0,0,95,416,1,0,0,0,97,422,1,0,0,0,99,427,1,0,0,0,101,431,1,0,
  	0,0,103,440,1,0,0,0,105,445,1,0,0,0,107,448,1,0,0,0,109,463,1,0,0,0,111,
  	466,1,0,0,0,113,473,1,0,0,0,115,483,1,0,0,0,117,489,1,0,0,0,119,493,1,
  	0,0,0,121,497,1,0,0,0,123,501,1,0,0,0,125,508,1,0,0,0,127,511,1,0,0,0,
  	129,514,1,0,0,0,131,523,1,0,0,0,133,526,1,0,0,0,135,533,1,0,0,0,137,543,
  	1,0,0,0,139,551,1,0,0,0,141,558,1,0,0,0,143,565,1,0,0,0,145,569,1,0,0,
  	0,147,573,1,0,0,0,149,577,1,0,0,0,151,579,1,0,0,0,153,601,1,0,0,0,155,
  	603,1,0,0,0,157,608,1,0,0,0,159,611,1,0,0,0,161,616,1,0,0,0,163,621,1,
  	0,0,0,165,626,1,0,0,0,167,632,1,0,0,0,169,637,1,0,0,0,171,641,1,0,0,0,
  	173,647,1,0,0,0,175,655,1,0,0,0,177,660,1,0,0,0,179,665,1,0,0,0,181,669,
  	1,0,0,0,183,692,1,0,0,0,185,694,1,0,0,0,187,701,1,0,0,0,189,703,1,0,0,
  	0,191,705,1,0,0,0,193,707,1,0,0,0,195,709,1,0,0,0,197,712,1,0,0,0,199,
  	714,1,0,0,0,201,717,1,0,0,0,203,720,1,0,0,0,205,723,1,0,0,0,207,725,1,
  	0,0,0,209,727,1,0,0,0,211,730,1,0,0,0,213,733,1,0,0,0,215,736,1,0,0,0,
  	217,739,1,0,0,0,219,741,1,0,0,0,221,743,1,0,0,0,223,745,1,0,0,0,225,747,
  	1,0,0,0,227,749,1,0,0,0,229,751,1,0,0,0,231,753,1,0,0,0,233,755,1,0,0,
  	0,235,757,1,0,0,0,237,760,1,0,0,0,239,763,1,0,0,0,241,767,1,0,0,0,243,
  	771,1,0,0,0,245,773,1,0,0,0,247,775,1,0,0,0,249,250,7,0,0,0,250,2,1,0,
  	0,0,251,252,7,1,0,0,252,4,1,0,0,0,253,254,7,2,0,0,254,6,1,0,0,0,255,256,
  	7,3,0,0,256,8,1,0,0,0,257,258,7,4,0,0,258,10,1,0,0,0,259,260,7,5,0,0,
  	260,12,1,0,0,0,261,262,7,6,0,0,262,14,1,0,0,0,263,264,7,7,0,0,264,16,
  	1,0,0,0,265,266,7,8,0,0,266,18,1,0,0,0,267,268,7,9,0,0,268,20,1,0,0,0,
  	269,270,7,10,0,0,270,22,1,0,0,0,271,272,7,11,0,0,272,24,1,0,0,0,273,274,
  	7,12,0,0,274,26,1,0,0,0,275,276,7,13,0,0,276,28,1,0,0,0,277,278,7,14,
  	0,0,278,30,1,0,0,0,279,280,7,15,0,0,280,32,1,0,0,0,281,282,7,16,0,0,282,
  	34,1,0,0,0,283,284,7,17,0,0,284,36,1,0,0,0,285,286,7,18,0,0,286,38,1,
  	0,0,0,287,288,7,19,0,0,288,40,1,0,0,0,289,290,7,20,0,0,290,42,1,0,0,0,
  	291,292,7,21,0,0,292,44,1,0,0,0,293,294,7,22,0,0,294,46,1,0,0,0,295,296,
  	7,23,0,0,296,48,1,0,0,0,297,298,7,24,0,0,298,50,1,0,0,0,299,300,7,25,
  	0,0,300,52,1,0,0,0,301,302,5,58,0,0,302,54,1,0,0,0,303,304,5,34,0,0,304,
  	56,1,0,0,0,305,306,5,63,0,0,306,58,1,0,0,0,307,308,5,33,0,0,308,60,1,
  	0,0,0,309,311,5,13,0,0,310,309,1,0,0,0,310,311,1,0,0,0,311,312,1,0,0,
  	0,312,313,5,10,0,0,313,314,1,0,0,0,314,315,6,30,0,0,315,62,1,0,0,0,316,
  	318,7,26,0,0,317,316,1,0,0,0,318,319,1,0,0,0,319,317,1,0,0,0,319,320,
  	1,0,0,0,320,321,1,0,0,0,321,322,6,31,0,0,322,64,1,0,0,0,323,324,3,1,0,
  	0,324,325,3,27,13,0,325,326,3,7,3,0,326,66,1,0,0,0,327,328,3,1,0,0,328,
  	329,3,35,17,0,329,330,3,35,17,0,330,331,3,1,0,0,331,332,3,49,24,0,332,
  	68,1,0,0,0,333,334,3,1,0,0,334,335,3,37,18,0,335,336,3,25,12,0,336,70,
  	1,0,0,0,337,338,3,3,1,0,338,339,3,9,4,0,339,340,3,13,6,0,340,341,3,17,
  	8,0,341,342,3,27,13,0,342,72,1,0,0,0,343,344,3,3,1,0,344,345,3,35,17,
  	0,345,346,3,9,4,0,346,347,3,1,0,0,347,348,3,21,10,0,348,74,1,0,0,0,349,
  	350,3,5,2,0,350,351,3,1,0,0,351,352,3,37,18,0,352,353,3,9,4,0,353,76,
  	1,0,0,0,354,355,3,5,2,0,355,356,3,29,14,0,356,357,3,27,13,0,357,358,3,
  	37,18,0,358,359,3,39,19,0,359,78,1,0,0,0,360,361,3,5,2,0,361,362,3,29,
  	14,0,362,363,3,27,13,0,363,364,3,37,18,0,364,365,3,37,18,0,365,366,3,
  	39,19,0,366,367,3,35,17,0,367,368,3,41,20,0,368,369,3,5,2,0,369,370,3,
  	39,19,0,370,371,3,29,14,0,371,372,3,35,17,0,372,80,1,0,0,0,373,374,3,
  	5,2,0,374,375,3,29,14,0,375,376,3,27,13,0,376,377,3,39,19,0,377,378,3,
  	17,8,0,378,379,3,27,13,0,379,380,3,41,20,0,380,381,3,9,4,0,381,82,1,0,
  	0,0,382,383,3,7,3,0,383,384,3,9,4,0,384,385,3,37,18,0,385,386,3,39,19,
  	0,386,387,3,35,17,0,387,388,3,41,20,0,388,389,3,5,2,0,389,390,3,39,19,
  	0,390,391,3,29,14,0,391,392,3,35,17,0,392,84,1,0,0,0,393,394,3,7,3,0,
  	394,395,3,17,8,0,395,396,3,43,21,0,396,86,1,0,0,0,397,398,3,7,3,0,398,
  	399,3,29,14,0,399,88,1,0,0,0,400,401,3,7,3,0,401,402,3,29,14,0,402,403,
  	3,45,22,0,403,404,3,27,13,0,404,405,3,39,19,0,405,406,3,29,14,0,406,90,
  	1,0,0,0,407,408,3,9,4,0,408,409,3,23,11,0,409,410,3,37,18,0,410,411,3,
  	9,4,0,411,92,1,0,0,0,412,413,3,9,4,0,413,414,3,27,13,0,414,415,3,7,3,
  	0,415,94,1,0,0,0,416,417,3,11,5,0,417,418,3,1,0,0,418,419,3,23,11,0,419,
  	420,3,37,18,0,420,421,3,9,4,0,421,96,1,0,0,0,422,423,3,11,5,0,423,424,
  	3,17,8,0,424,425,3,23,11,0,425,426,3,9,4,0,426,98,1,0,0,0,427,428,3,11,
  	5,0,428,429,3,29,14,0,429,430,3,35,17,0,430,100,1,0,0,0,431,432,3,11,
  	5,0,432,433,3,41,20,0,433,434,3,27,13,0,434,435,3,5,2,0,435,436,3,39,
  	19,0,436,437,3,17,8,0,437,438,3,29,14,0,438,439,3,27,13,0,439,102,1,0,
  	0,0,440,441,3,13,6,0,441,442,3,29,14,0,442,443,3,39,19,0,443,444,3,29,
  	14,0,444,104,1,0,0,0,445,446,3,17,8,0,446,447,3,11,5,0,447,106,1,0,0,
  	0,448,449,3,17,8,0,449,450,3,25,12,0,450,451,3,31,15,0,451,452,3,23,11,
  	0,452,453,3,9,4,0,453,454,3,25,12,0,454,455,3,9,4,0,455,456,3,27,13,0,
  	456,457,3,39,19,0,457,458,3,1,0,0,458,459,3,39,19,0,459,460,3,17,8,0,
  	460,461,3,29,14,0,461,462,3,27,13,0,462,108,1,0,0,0,463,464,3,17,8,0,
  	464,465,3,27,13,0,465,110,1,0,0,0,466,467,3,17,8,0,467,468,3,27,13,0,
  	468,469,3,23,11,0,469,470,3,17,8,0,470,471,3,27,13,0,471,472,3,9,4,0,
  	472,112,1,0,0,0,473,474,3,17,8,0,474,475,3,27,13,0,475,476,3,39,19,0,
  	476,477,3,9,4,0,477,478,3,35,17,0,478,479,3,11,5,0,479,480,3,1,0,0,480,
  	481,3,5,2,0,481,482,3,9,4,0,482,114,1,0,0,0,483,484,3,23,11,0,484,485,
  	3,1,0,0,485,486,3,3,1,0,486,487,3,9,4,0,487,488,3,23,11,0,488,116,1,0,
  	0,0,489,490,3,25,12,0,490,491,3,29,14,0,491,492,3,7,3,0,492,118,1,0,0,
  	0,493,494,3,27,13,0,494,495,3,17,8,0,495,496,3,23,11,0,496,120,1,0,0,
  	0,497,498,3,27,13,0,498,499,3,29,14,0,499,500,3,39,19,0,500,122,1,0,0,
  	0,501,502,3,29,14,0,502,503,3,3,1,0,503,504,3,19,9,0,504,505,3,9,4,0,
  	505,506,3,5,2,0,506,507,3,39,19,0,507,124,1,0,0,0,508,509,3,29,14,0,509,
  	510,3,11,5,0,510,126,1,0,0,0,511,512,3,29,14,0,512,513,3,27,13,0,513,
  	128,1,0,0,0,514,515,3,29,14,0,515,516,3,31,15,0,516,517,3,9,4,0,517,518,
  	3,35,17,0,518,519,3,1,0,0,519,520,3,39,19,0,520,521,3,29,14,0,521,522,
  	3,35,17,0,522,130,1,0,0,0,523,524,3,29,14,0,524,525,3,35,17,0,525,132,
  	1,0,0,0,526,527,3,31,15,0,527,528,3,1,0,0,528,529,3,5,2,0,529,530,3,21,
  	10,0,530,531,3,9,4,0,531,532,3,7,3,0,532,134,1,0,0,0,533,534,3,31,15,
  	0,534,535,3,35,17,0,535,536,3,29,14,0,536,537,3,5,2,0,537,538,3,9,4,0,
  	538,539,3,7,3,0,539,540,3,41,20,0,540,541,3,35,17,0,541,542,3,9,4,0,542,
  	136,1,0,0,0,543,544,3,31,15,0,544,545,3,35,17,0,545,546,3,29,14,0,546,
  	547,3,13,6,0,547,548,3,35,17,0,548,549,3,1,0,0,549,550,3,25,12,0,550,
  	138,1,0,0,0,551,552,3,35,17,0,552,553,3,9,4,0,553,554,3,5,2,0,554,555,
  	3,29,14,0,555,556,3,35,17,0,556,557,3,7,3,0,557,140,1,0,0,0,558,559,3,
  	35,17,0,559,560,3,9,4,0,560,561,3,31,15,0,561,562,3,9,4,0,562,563,3,1,
  	0,0,563,564,3,39,19,0,564,142,1,0,0,0,565,566,3,37,18,0,566,567,3,9,4,
  	0,567,568,3,39,19,0,568,144,1,0,0,0,569,570,3,37,18,0,570,571,3,15,7,
  	0,571,572,3,23,11,0,572,146,1,0,0,0,573,574,3,37,18,0,574,575,3,15,7,
  	0,575,576,3,35,17,0,576,148,1,0,0,0,577,578,5,39,0,0,578,150,1,0,0,0,
  	579,580,3,149,74,0,580,581,3,239,119,0,581,582,3,149,74,0,582,152,1,0,
  	0,0,583,587,3,245,122,0,584,586,3,241,120,0,585,584,1,0,0,0,586,589,1,
  	0,0,0,587,585,1,0,0,0,587,588,1,0,0,0,588,590,1,0,0,0,589,587,1,0,0,0,
  	590,591,3,245,122,0,591,602,1,0,0,0,592,596,3,247,123,0,593,595,3,243,
  	121,0,594,593,1,0,0,0,595,598,1,0,0,0,596,594,1,0,0,0,596,597,1,0,0,0,
  	597,599,1,0,0,0,598,596,1,0,0,0,599,600,3,247,123,0,600,602,1,0,0,0,601,
  	583,1,0,0,0,601,592,1,0,0,0,602,154,1,0,0,0,603,604,3,39,19,0,604,605,
  	3,15,7,0,605,606,3,9,4,0,606,607,3,27,13,0,607,156,1,0,0,0,608,609,3,
  	39,19,0,609,610,3,29,14,0,610,158,1,0,0,0,611,612,3,39,19,0,612,613,3,
  	35,17,0,613,614,3,41,20,0,614,615,3,9,4,0,615,160,1,0,0,0,616,617,3,39,
  	19,0,617,618,3,49,24,0,618,619,3,31,15,0,619,620,3,9,4,0,620,162,1,0,
  	0,0,621,622,3,41,20,0,622,623,3,27,13,0,623,624,3,17,8,0,624,625,3,39,
  	19,0,625,164,1,0,0,0,626,627,3,41,20,0,627,628,3,27,13,0,628,629,3,39,
  	19,0,629,630,3,17,8,0,630,631,3,23,11,0,631,166,1,0,0,0,632,633,3,41,
  	20,0,633,634,3,37,18,0,634,635,3,9,4,0,635,636,3,37,18,0,636,168,1,0,
  	0,0,637,638,3,43,21,0,638,639,3,1,0,0,639,640,3,35,17,0,640,170,1,0,0,
  	0,641,642,3,45,22,0,642,643,3,15,7,0,643,644,3,17,8,0,644,645,3,23,11,
  	0,645,646,3,9,4,0,646,172,1,0,0,0,647,648,3,45,22,0,648,649,3,35,17,0,
  	649,650,3,17,8,0,650,651,3,39,19,0,651,652,3,9,4,0,652,653,3,23,11,0,
  	653,654,3,27,13,0,654,174,1,0,0,0,655,656,3,45,22,0,656,657,3,17,8,0,
  	657,658,3,39,19,0,658,659,3,15,7,0,659,176,1,0,0,0,660,661,3,47,23,0,
  	661,662,3,29,14,0,662,663,3,35,17,0,663,178,1,0,0,0,664,666,7,27,0,0,
  	665,664,1,0,0,0,666,667,1,0,0,0,667,665,1,0,0,0,667,668,1,0,0,0,668,180,
  	1,0,0,0,669,670,5,46,0,0,670,671,5,46,0,0,671,182,1,0,0,0,672,673,3,179,
  	89,0,673,674,5,46,0,0,674,675,3,179,89,0,675,693,1,0,0,0,676,677,3,179,
  	89,0,677,679,7,4,0,0,678,680,7,28,0,0,679,678,1,0,0,0,679,680,1,0,0,0,
  	680,681,1,0,0,0,681,682,3,179,89,0,682,693,1,0,0,0,683,684,3,179,89,0,
  	684,685,5,46,0,0,685,686,3,179,89,0,686,688,7,4,0,0,687,689,7,28,0,0,
  	688,687,1,0,0,0,688,689,1,0,0,0,689,690,1,0,0,0,690,691,3,179,89,0,691,
  	693,1,0,0,0,692,672,1,0,0,0,692,676,1,0,0,0,692,683,1,0,0,0,693,184,1,
  	0,0,0,694,698,7,29,0,0,695,697,7,30,0,0,696,695,1,0,0,0,697,700,1,0,0,
  	0,698,696,1,0,0,0,698,699,1,0,0,0,699,186,1,0,0,0,700,698,1,0,0,0,701,
  	702,5,43,0,0,702,188,1,0,0,0,703,704,5,45,0,0,704,190,1,0,0,0,705,706,
  	5,47,0,0,706,192,1,0,0,0,707,708,5,42,0,0,708,194,1,0,0,0,709,710,5,58,
  	0,0,710,711,5,61,0,0,711,196,1,0,0,0,712,713,5,61,0,0,713,198,1,0,0,0,
  	714,715,5,60,0,0,715,716,5,62,0,0,716,200,1,0,0,0,717,718,5,60,0,0,718,
  	719,5,61,0,0,719,202,1,0,0,0,720,721,5,62,0,0,721,722,5,61,0,0,722,204,
  	1,0,0,0,723,724,5,60,0,0,724,206,1,0,0,0,725,726,5,62,0,0,726,208,1,0,
  	0,0,727,728,5,43,0,0,728,729,5,61,0,0,729,210,1,0,0,0,730,731,5,45,0,
  	0,731,732,5,61,0,0,732,212,1,0,0,0,733,734,5,42,0,0,734,735,5,61,0,0,
  	735,214,1,0,0,0,736,737,5,47,0,0,737,738,5,61,0,0,738,216,1,0,0,0,739,
  	740,5,94,0,0,740,218,1,0,0,0,741,742,5,59,0,0,742,220,1,0,0,0,743,744,
  	5,44,0,0,744,222,1,0,0,0,745,746,5,40,0,0,746,224,1,0,0,0,747,748,5,41,
  	0,0,748,226,1,0,0,0,749,750,5,91,0,0,750,228,1,0,0,0,751,752,5,93,0,0,
  	752,230,1,0,0,0,753,754,5,123,0,0,754,232,1,0,0,0,755,756,5,125,0,0,756,
  	234,1,0,0,0,757,758,5,40,0,0,758,759,5,42,0,0,759,236,1,0,0,0,760,761,
  	5,42,0,0,761,762,5,41,0,0,762,238,1,0,0,0,763,764,8,31,0,0,764,240,1,
  	0,0,0,765,768,3,247,123,0,766,768,8,32,0,0,767,765,1,0,0,0,767,766,1,
  	0,0,0,768,242,1,0,0,0,769,772,3,245,122,0,770,772,8,31,0,0,771,769,1,
  	0,0,0,771,770,1,0,0,0,772,244,1,0,0,0,773,774,5,34,0,0,774,246,1,0,0,
  	0,775,776,5,39,0,0,776,248,1,0,0,0,13,0,310,319,587,596,601,667,679,688,
  	692,698,767,771,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
}
