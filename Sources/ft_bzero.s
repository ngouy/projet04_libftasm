section .text
	global _ft_bzero

_ft_bzero:
	mov al, 0
	mov rcx, rsi
	rep stosb
	ret
