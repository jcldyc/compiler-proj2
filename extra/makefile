ada: lex.yy.c y.tab.c tree.h 
	gcc -g lex.yy.c y.tab.c -o ada

lex.yy.c: y.tab.c proj2l.l
	flex proj2l.l

y.tab.c: proj2y.y
	yacc -d proj2y.y
	
clean: 
	rm -f lex.yy.c y.tab.c y.tab.h myscanner
