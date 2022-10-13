CFLAGS = -Wimplicit-function-declaration -Wall -g

ALL:
	
# Notetaker
notetaker: notetaker.c ../lib/hacking.o
	@echo "[+] Compiling notetaker"
	@gcc $(CFLAGS) notetaker.c ../lib/hacking.o -o notetaker
	@sleep 1s
	@sudo sid notetaker

# Notesearch
notesearch: notesearch.c ../lib/hacking.o
	@echo "[+] Compiling notesearch"
	@gcc $(CFLAGS) notesearch.c ../lib/hacking.o -o notesearch
	@sleep 1s
	@echo "[+] Changing File Permission"
	@sleep 1s
	@sudo sid notesearch

# Clean
clean:
	@echo "Removing builds"
	rm -f *.o*
