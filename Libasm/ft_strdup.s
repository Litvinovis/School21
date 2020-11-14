global		_ft_strdup
extern		_ft_strlen, _malloc, _ft_strcpy
section		.text

_ft_strdup:
	mov	r12, rdi
	call _ft_strlen
	mov	rdi, rax
	inc	rdi

	call _malloc
	cmp rax, 0
	je .exit

	mov rdi, rax
	mov rsi, r12
	call _ft_strcpy

.exit:
	ret
