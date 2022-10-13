CFLAGS = -Wall -g

main.out: main.o
	@echo "Compiling main.out"
	gcc $(CFLAGS) main.o -o main.out

main.o: main.c
	gcc $(CFLAGS) -c main.c

clean:
	echo "Removing builds"
	rm *.o*
