# -*- Makefile -*-

CFLAGS = -Wall -g -c

all:

hacking.o: hacking.h hacking.c
	@echo "[+] Compiling object file"
	@gcc $(CFLAGS) hacking.h hacking.c
	@sleep 1s

clean:
	@echo "Removing object files"
	@rm -f *.o
