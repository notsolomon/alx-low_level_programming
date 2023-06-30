section .data
	greeting_msg db "Hello, Holberton", 0
	format db "%s", 0

section .text
	global _start

_start:
	; Set up printf args
	mov rdi, format
	mov rsi, greeting_msg

	; Call printf
	mov eax, 0
	call printf

	; Exit the program
	mov eax, 60
	xor edi, edi
	syscall
