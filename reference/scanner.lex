%{
#include "hw3_output.hpp"
#include <stdio.h>

#include "Node.h"

#include "parser.tab.hpp"
void errorHandler(int);

%}

%option yylineno
%option noyywrap


digit   		([0-9])
digitnozero     ([1-9])
letter  		([a-zA-Z])
whitespace		([\t\n\r ])
relop_eq 		(==|!=)
relop_rel       (<|>|<=|>=)
binop_mul       (\*|\/)
binop_sum       (\+|\-)
comment			(\/\/[^\r\n]*[\r|\n|\r\n]?)
string       	(\"([^\n\r\"\\]|\\[rnt"\\])+\")
%%

{whitespace}				;
void 				return VOID;
int					return INT;
byte 				return BYTE;
b 					return B;
bool 				return BOOL;
and 				return AND;
or 					return OR;
not 				return NOT;
true				return TRUE;
false				return FALSE;
return 				return RETURN;
if 					return IF;
else 				return ELSE;
while 				return WHILE;
break				return BREAK;
continue			return CONTINUE;
";"					return SC;
","					return COMMA;
"("				return LPAREN;
")"				return RPAREN;
"{"					return LBRACE;
"}"					return RBRACE;
"="					return ASSIGN;
{binop_mul}			return BINOP_MUL;
{binop_sum}         return BINOP_SUM;
{relop_eq}          return RELOP_EQ;
{relop_rel}          return RELOP_REL;
{letter}({letter}|{digit})* 	{ yylval = new Id(yytext);  return ID; }
{digitnozero}{digit}*|0	    { yylval = new Num(yytext); return NUM; }
{comment}			 ;
{string}			return STRING;
.                   {output::errorLex(yylineno); exit(0);};
	
%%

void errorHandler(int line)
{
	output::errorLex(yylineno);
	exit(0);
}