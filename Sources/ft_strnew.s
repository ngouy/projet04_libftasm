section .text
	global _ft_strnew
	extern _ft_strlen
	extern _malloc

_ft_strnew:
	mov rdi, rax
	mov r13, rax
	push rdi 
	call _malloc
	pop rdi
	mov al, 0
	mov rdi, rax
	mov rcx, r13
	rep stosb
	mov rdi, rax
	ret
