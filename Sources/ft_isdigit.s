section .text
	global _ft_isdigit

_ft_isdigit:
	mov rsi, 48
	cmp rsi, rdi
	jle label1
	mov rax, 0
	ret

label1:
	mov rsi, 58
	cmp rsi, rdi
	jle label2
	mov rax, 1
	ret

label2:
	mov rax, 0
	ret
