%{
#include <stdlib.h>
#include <string.h>
#include "maine.def.tab.c"
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2
int yylineno;
%}
%%
\+			{fprintf(yyout, "+\n");return '+';} 
\*			{fprintf(yyout, "*\n");return '*';}
\(			{fprintf(yyout, "(\n");return '(';}
\)			{fprintf(yyout, ")\n");return ')';}
\/			{fprintf(yyout, "/\n");return '/';}
\-			{fprintf(yyout, "-\n");return '-';}
\^			{fprintf(yyout, "^\n");return '^';}
\=			{
				fprintf(yyout, "^\n");
				return '=';
			}
[1-9][0-9]*		{
				fprintf(yyout, "liczba\n");
				yylval.ival = atoi(yytext);
				return LC;
			}	
[A-Za-z_][A-Za-z0-9_]*	{
				fprintf(yyout, "nazwa\n");
				yylval.text = strdup(yytext);
				return ID;
			}
[1-9]+[.]{2}		{fprintf(yyout, "dziwne\n");}
\ |\t			{;}
\n			{yylineno++;}
.			{}
%%