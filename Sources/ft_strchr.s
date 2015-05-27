section .text
	global _ft_strchr
	extern _ft_strlen

_ft_strchr:
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
	lea rax, [rel rdi]
	ret

end:
	mov rax, 0
	ret

