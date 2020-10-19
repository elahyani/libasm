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
	
			mov	al, byte [rdi]
			cmp	al, byte [rsi]
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
			mov	dl, byte [rdi]
			mov	cl, byte [rsi]
			cmp dl, cl
			jg	_get_pos
			sub dl, cl
			neg dl
			neg rdx
			jmp	_end

_get_pos:
			sub	dl, cl
			jmp _end

_end:
			xor	rax, rax
			mov rax, rdx
			ret

