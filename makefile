main: lex.yy.o parser.tab.o  main.o 
	gcc -w -o parser main.o lex.yy.o parser.tab.o
