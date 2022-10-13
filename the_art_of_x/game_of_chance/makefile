CC = gcc
CFLAGS = -Wimplicit-function-declaration -Wall -g
GOC_H = game_of_chance.h game_of_chance.c
GOC_O = game_of_chance.o
HACKING_O = ../lib/hacking.o
DEPENDENCY = $(GOC_O) $(HACKING_O)
MAIN = main.c
OUTPUT = main

ALL:
	
# main (game_of_chance) 
$(OUTPUT): $(MAIN) $(DEPENDENCY)
	@echo "[+] Compiling $(OUTPUT)"
	@$(CC) $(CFLAGS) $(MAIN) $(DEPENDENCY) -o $(OUTPUT) 
	@sleep 1s

	@echo "[+] Setting Permission $(OUTPUT)"
	@sudo sid $(OUTPUT) 

# Test-Case
test: test.c $(GOC_O)
	@echo "[+] Running Test case"
	@echo "[+} Compiling"
	@gcc -o test test.c $(GOC_O)
	@sleep 1s

# Game of Chance Header & Source
$(GOC_O): $(GOC_H)
	@echo "[+] Compiling Object File: $(GOC_H)"
	@gcc -c $(GOC_H)

# Clean
clean:
	@echo "Removing Object file"
	rm -f *.o*
