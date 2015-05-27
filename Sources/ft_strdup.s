section .text
	global _ft_strdup
	extern _ft_strlen
	extern _malloc

_ft_strdup:
	mov r12, rdi
	call _ft_strlen
	mov rdi, rax
	mov r13, rax
	push rdi 
	call _malloc
	pop rdi
	mov rdi, rax
	mov rsi, r12
	mov rcx, r13
	rep movsb
	mov rdi, rax
	ret
