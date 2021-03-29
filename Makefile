#Makefile of Linux OS

FILE=result.out
SRC=main.o notfun.o unity.o

all: $(FILE)

$(FILE):$(SRC)
	gcc -o $@ $^

main.o:main.c
	gcc -c $^

notfun.o:./src/notfun.c ./inc/notfun.h ./unity/unity.c
	gcc -c $^

doc:./inc/notfun.h   
	doxygen ./inc/notfun.h
	
clean:
	rm -fr $(wildcard *.o *.out ) html latex
