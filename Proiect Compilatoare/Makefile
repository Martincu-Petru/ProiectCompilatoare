all:
	yacc -v file.y -d
	lex file.l
	gcc lex.yy.c y.tab.c -ll -ly -o exe
	./exe INPUT
