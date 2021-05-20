.DEFAULT_TARGET:main
.PHONY: all clean
CC= gcc

$? #Special command

all: clean main

main: main.o
	@echo "Final Compile"
	${CC} main.o -o $@
main.o: 
	@echo "Compiling main"
	${CC} -O1 -Wall -Wextra -c main.c -o $@
clean:
	rm -f main.o main
