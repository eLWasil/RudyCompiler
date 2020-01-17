CC=gcc
CPP=g++
LEX=flex
YACC=bison
LD=gcc
 
all:	helpers	leks run

leks:	def.tab.o lex.yy.o
	$(CPP) lex.yy.o Variable.o VariableManager.o maine.def.tab.o -o leks

lex.yy.o:	lex.yy.c
	$(CC) -c lex.yy.c

lex.yy.c: maine.l
	$(LEX) maine.l

def.tab.o:	def.tab.cc
	$(CPP) -c maine.def.tab.cc

def.tab.cc:	maine.def.yy
	$(YACC) -d maine.def.yy

run: leks.exe input.txt
	./leks.exe < input.txt
	
helpers:
	$(CPP) -c Variable.cpp VariableManager.cpp