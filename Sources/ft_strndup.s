section .text
	global _ft_strndup
	extern _ft_strlen
	extern _malloc

_ft_strndup:
	mov r12, rdi
	call _ft_strlen
	cmp rax, rsi
	jge lbl1

lbl1:
	mov rax, rsi

rest:
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
