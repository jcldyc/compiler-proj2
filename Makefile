CC = gcc -g
LEX = flex
YACC = bison -y
LLIBS =
OBJS = main.o y.tab.o lex.yy.o \
                tree.o

Turing : $(OBJS)
                $(CC) -o turing $(OBJS) $(LLIBS)

lex.yy.c : scanner.l
                $(LEX) scanner.l
lex.yy.o : lex.yy.c

y.tab.o : y.tab.c tree.h
y.tab.c : parser.y
                $(YACC) parser.y
y.tab.h : parser.y
                $(YACC) -d parser.y

scan : scan.o lex.yy.o
                $(CC) -o scan scan.o lex.yy.o $(LLIBS)
scan.o : scan.c

tree.o : tree.c tree.h

main.o : main.c tree.h

clean :
                rm lex.yy.c y.tab.c *.o
                rm turing

