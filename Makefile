CC=gcc
CPP=g++
LEX=flex
YACC=bison
LD=gcc

all: maine.l 

maine.l: maine.l
	$(LEX) maine.l

exe: lex.yy.c
	$(CPP) lex.yy.c -o rudyCompiler

run: rudyCompiler.exe input.txt
	./rudyCompiler.exe < input.txt
	
clean: lex.yy.c maine.def.tab.cc
	rm lex.yy.c maine.def.tab.cc
	
def.tab.yy: maine.def.yy
	$(YACC) maine.def.yy
	
def.tab.cc:
	$(CPP) maine.def.tab.cc -o
	