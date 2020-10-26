	global	_ft_strcmp
	section	.text

_ft_strcmp:
		xor		rcx, rcx
		xor		rax, rax
		xor		rdx, rdx

_loop:
		mov		dl, byte[rdi + rcx]
		cmp		byte[rsi + rcx], dl
		jne		_get_diff
		inc		rcx
		cmp		[rdi + rcx], byte 0
		jz		_get_diff
		cmp		[rsi + rcx], byte 0
		jz		_get_diff
		jmp		_loop

_get_diff:	
		mov		al, byte [rdi + rcx]
		mov		dl, byte [rsi + rcx]
		sub		rax, rdx
		ret

_err:
		mov		rax, -1
		ret
