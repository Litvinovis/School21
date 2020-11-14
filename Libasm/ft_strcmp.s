global		_ft_strcmp
section		.text

_ft_strcmp:
		xor rax, rax				

.start:
		mov al, byte[rdi]			;копируем в младший байт rax
		mov dl, byte[rsi]			;копируем в младший байт rdx
		sub rax, rdx				;вычитаем
		jnz .exit
		cmp dl, 0
		je	.exit
		inc rdi
		inc rsi
		jmp .start

.exit:
		ret