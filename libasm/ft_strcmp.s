	global	_ft_strcmp
	section	.text

_ft_strcmp:
			cmp rdi, byte 0 ;if s1 is NULL
			jz	_nulls1
			cmp rsi, byte 0 ;if s2 is NULL
			jz	_nulls2
		
			cmp [rdi], byte 0
			jz	_get_diff
			cmp [rsi], byte 0
			jz	_get_diff

			xor	rcx, rcx
			mov	cl, byte [rdi]
			cmp	cl, byte [rsi]
			jne	_get_diff
	
			inc rdi
			inc	rsi
			jmp	_ft_strcmp

_nulls1:
			mov	dl, byte [rsi]
			neg rdx
			mov rax, rdx
			ret

_nulls2:
			xor	rdx, rdx
			mov	dl, byte [rdi]
			mov rax, rdx
			ret

_get_diff:	
			xor	rdx, rdx
			xor	rcx, rcx
			mov	cl, byte [rdi]
			mov	dl, byte [rsi]
			cmp cl, dl
			jg	_get_pos
			sub cl, dl
			neg cl
			neg rcx
			jmp	_end

_get_pos:
			sub	cl, dl
			jmp _end

_end:
			xor	rax, rax
			mov rax, rcx
			ret

