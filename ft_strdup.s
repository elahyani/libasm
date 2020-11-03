	global	_ft_strdup
	section	.text
	extern	_ft_strlen
	extern	_ft_strcpy
	extern	_malloc

_ft_strdup:
			xor		r8, r8
			xor		r9, r9
			cmp		rdi, byte 0
			je		_err
			push	rdi
			call	_ft_strlen
			pop		rdi 	
			mov		r9, rax			;len
			inc		r9				;len + 1
			mov		r8, rdi			;r8 = str
			xor		rdi, rdi
			mov		rdi, r9			;rdi = len + 1
			push	r8
			sub     rsp, 32
			call	_malloc			;malloc(rdi)
			add     rsp, 32
			pop		r8
			cmp		rax, byte 0
			je		_err
			mov		rsi, r8			;src 
			mov		rdi, rax		;dest
			call	_ft_strcpy		;rdi, rsi
			jmp		_end

_err:
			xor		rax, rax
			jmp 	_end

_end:
			ret

