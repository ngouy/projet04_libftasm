section .text
	global _ft_isprint

_ft_isprint:
	mov rsi, 32
	cmp rsi, rdi
	jle label5
	mov rax, 0
	ret

label5:
	mov rsi, 127
	cmp rsi, rdi
	jle label0
	mov rax, 1
	ret

label0:
	mov rax, 0
	ret
