# -*- Makefile -*-
#
CFLAGS = -g -Wall
MAIN = main.out

all: $(MAIN)

$(MAIN): main.o header.o 
	@echo "Compiling $(MAIN)"
	gcc $(CFLAGS) -o debug/main.out main.o header.o 

main.o: main.c
	gcc $(CFLAGS) -c main.c

header.o: src/header.h src/header.c
	gcc $(CFLAGS) -c src/header.h src/header.c

clean:
	@echo "Removing object and debug files"
	rm -f *.o debug/main.out
