CC=gcc
LEX=flex
YACC=bison
LD=gcc

all: lex.yy.c tokens exe run clean

lex.yy.c: maine.l
	$(LEX) maine.l

exe: lex.yy.c maine.def.tab.c
	$(CC) lex.yy.c -o rudy

run: rudy.exe test.txt
	./rudy.exe < test.txt
	
clean: lex.yy.c maine.def.tab.c
	rm lex.yy.c maine.def.tab.c
	
tokens: maine.def.y
	$(YACC) maine.def.y