section .text
	global _ft_memset

_ft_memset:
	mov rax, rsi
	lea r11, [rdi]
	mov rcx, rdx
	rep stosb
	mov rax, [r11]
	ret
