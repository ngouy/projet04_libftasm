section .text
	global _ft_memchr

_ft_memchr:
	mov al, sil
	add rdx, 1
	mov rcx, rdx
	repne scasb
	cmp rcx, 0
	je end
	sub rdi, 1
	lea rax, [rel rdi]
	ret

end:
	mov rax, 0
	ret

