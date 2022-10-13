;; Intel syntax: x86_64 Assembly Instructions

global _start		; Start of Assembly Instruction 
_start:			; Label:
	mov eax, 0x1	; Syscall: exit
	mov ebx, 42	; Exit Status
	sub ebx, 29	; Substract 29 from the value of ebx
	int 0x80	; Interrupt
