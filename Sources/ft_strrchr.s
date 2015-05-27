section .text
	global _ft_strrchr
	extern _ft_strlen

_ft_strrchr:
	mov r13, 0
	jmp start

start:
	push rdi
	call _ft_strlen
	pop rdi
	add rax, 1
	mov rcx, rax
	mov al, sil
	repne scasb
	cmp rcx, 0
	je end
	sub rdi, 1
	lea r13, [rel rdi]
	mov rdi, r13
	add rdi, 1
	jmp start

end:
	mov rax, r13
	ret

