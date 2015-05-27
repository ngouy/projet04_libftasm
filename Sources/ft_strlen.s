section .text
	global _ft_strlen

_ft_strlen:
	lea r10, [rel rdi]
	mov al, 0
	mov rcx, -1
	repne scasb
	lea r11, [rel rdi]
	sub r11, r10
	sub r11, 1
	mov rax, r11
	ret
