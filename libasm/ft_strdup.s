	global	_ft_strdup
	section	.text
	extern	_ft_strlen
	extern	_ft_strcpy
	extern	_malloc

_ft_strdup:
			call	_ft_strlen
			mov		rcx, rax
			inc		rcx
			mov		rsi, rdi
			mov		rdi, rcx
			call	_malloc
			cmp		rax, 0
			je		_end
			mov		rdi, rax
			call	_ft_strcpy
			jmp		_end

_end:
				ret

