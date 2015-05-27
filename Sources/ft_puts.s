section .data
null: db "(null)"

bksn : db 0x0a


section .text
	default rel
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	mov r13, 0
	cmp r13, rdi
	je label0
	push rdi
	call _ft_strlen
	pop rdi
	mov rdx, rax
	mov rsi, rdi
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	jmp label1


label0:
	mov rdi, 1
	lea rsi, [null]
	mov rdx, 6
	mov rax, 0x2000004
	syscall
	mov rax, 1
	jmp label1

label1:
	mov rdi, 1
	lea rsi, [bksn]
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	ret
