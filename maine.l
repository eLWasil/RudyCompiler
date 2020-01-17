%option noinput nounput
%{
#include <stdlib.h>
#include <string.h>
#include "maine.def.tab.hh"
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

extern int yylineno;
void say(char *msg);
%}
%%
"//"+.* { return COMMENTLINE; }
\= {
	return '=';
}

"set" {
	return SET;
}

"print" {
	return PRINT;
}

[1-9][0-9]*\.+[0-9]* {
	yylval.text = strdup(yytext);
	return DBL;
}

[1-9][0-9]*		{
				yylval.ival = atoi(yytext);
				return INT;
				}

[A-Za-z][A-Za-z0-9_]*	{
					yylval.text = strdup(yytext);
					return STR;
					}

\"		{ return '"'; }
"\n"    { return NEWLINE; }
";"    	{ return ';'; }
" " 	{ return ' '; }
.		{ return UNKNOWN; }
%%
void say(char *msg) {
	fprintf(yyout, msg);
}