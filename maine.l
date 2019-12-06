%{
#include <stdlib.h>
#include <string.h>
#include "maine.def.tab.c"
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

int yylineno;
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

[1-9][0-9]*		{
				yylval.ival = atoi(yytext);
				return INT;
				}	
[A-Za-z][A-Za-z0-9_]*	{
					yylval.text = strdup(yytext);
					return STR;
					}
"\n"    { return NEWLINE; }
";"    	{ return ';'; }
"\n"+   { return PARAGRAPH; }
<<EOF>> { return LEX_EOF; }
" " 	{ return ' '; }
.		{ return UNKNOWN; }
%%
void say(char *msg) {
	fprintf(yyout, msg);
}