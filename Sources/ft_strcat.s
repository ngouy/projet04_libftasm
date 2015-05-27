section .text
	global _ft_strcat

_ft_strcat:
	lea r10, [rel rdi]
	mov al, 0
	mov rcx, -1
	repne scasb
	sub rdi, 1
	lea r11, [rel rdi]
	mov rdi, rsi
	mov rcx, -1
	repne scasb
	not rcx
	lea rdi, [rel r11]
	rep movsb
	lea rax, [rel r10]
	ret
