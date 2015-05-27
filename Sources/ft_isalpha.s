section .text
	global _ft_isalpha

_ft_isalpha:
	mov rsi, 65
	cmp rsi, rdi
	jle label1
	mov rax, 0
	ret

label1:
	mov rsi, 91
	cmp rsi, rdi
	jle label2
	mov rax, 1
	ret

label2:
	mov rsi, 97
	cmp rsi, rdi
	jle label3
	mov rax, 0
	ret

label3:
	mov rsi, 123
	cmp rsi, rdi
	jle label4
	mov rax, 1
	ret

label4:
	mov rax, 0
	ret
