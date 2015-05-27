section .text
	global _ft_tolower

_ft_tolower:
	mov rsi, 65
	cmp rsi, rdi
	jle label1
	mov rax, rdi
	ret

label1:
	mov rsi, 91
	cmp rsi, rdi
	jle label2
	add rdi, 32
	mov rax, rdi
	ret

label2:
	mov rax, rdi
	ret
