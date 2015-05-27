section .text
	global _ft_toupper

_ft_toupper:
	mov rsi, 97
	cmp rsi, rdi
	jle label1
	mov rax, rdi
	ret

label1:
	mov rsi, 123
	cmp rsi, rdi
	jle label2
	sub rdi, 32
	mov rax, rdi
	ret

label2:
	mov rax, rdi
	ret
