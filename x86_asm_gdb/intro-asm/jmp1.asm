;; Jump Instructions: unconditional jump (jmp)
;; Author:	Taufiq Gh
;; Date:	26 Feb, 2022
;; Arch:	intel x86_64
;; Assembler:	nasm

global _start:
_start:
	mov ebx, 42	;; Move/Store Value to ebx register
	mov eax, 1	;; exit_syscall
	jmp skip	;; jump to skip label
	mov ebx, 13
skip:
	int 0x80	;; interrupt
