global 		_ft_list_size
section		.text

_ft_list_size:
	xor rax, rax				;обнуление счетчика

.start:
	cmp rdi, 0
	je .exit
	inc rax
	mov rdi, qword[rdi + 8]		;Переход на следующий лист
	jmp .start

.exit:
	ret