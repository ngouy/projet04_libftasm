segment .bss
	buff: resb 1;on cree un buff de 1

segment .text
	global _ft_cat
	extern _ft_bzero

_ft_cat:
	mov r13, rdi
	jmp r_n_w_1

r_n_w_1:
	mov rdi, r13
	lea rsi, [rel buff]
	mov rdx, 1
	mov rax, 0x2000003
	syscall
	cmp rax, 1
	jne ret
	mov rdi, 1
	lea rsi, [rel buff]
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	jmp r_n_w_1

ret:
	ret
