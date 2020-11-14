global		_ft_strlen
section		.text

_ft_strlen:
		xor rax, rax

.start:
		cmp	byte[rdi + rax], 0
		je	.exit
		inc	rax
		jmp	.start

.exit:
		ret