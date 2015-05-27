section .text
	global _ft_isascii

_ft_isascii:
	mov rsi, 0
	cmp rsi, rdi
	jle label1
	mov rax, 0
	ret

label1:
	mov rsi, 128
	cmp rsi, rdi
	jle label2
	mov rax, 1
	ret

label2:
	mov rax, 0
	ret
