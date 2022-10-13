;; Hello World Assembly Instructions
;; Author:	Taufiq Gh
;; Date:	26 Feb, 2022
;; Assembler:	nasm

global _start

section .data:				;; Data Section
	msg: db "Hello, world!", 0xA	;; Characters (Bytes), Newline in hex
	len: equ $ - msg		;; Length of characters

section .text:				;; Code Section
_start:					;; Start Label
	mov eax, 0x4			;; sys_call: write
	mov ebx, 1			;; file descriptor: stdout
	mov ecx, msg			;; bytes to write
	mov edx, len			;; number of bytes to write
	int 0x80			;; interrupt
	
	mov eax, 0x1			;; sys_call: exit
	mov ebx, 0x0			;; exit status
	int 0x80
