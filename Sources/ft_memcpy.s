section .text
	global _ft_memcpy

_ft_memcpy:
	mov r13, rdx; remplir rcx avec ca
	mov r12, rsi;remplir rax ac ca
	lea r11, [rel, rdi]
	mov rcx, r13
	mov rax, r12
	rep movsb
	mov rax, [r11]
	ret
