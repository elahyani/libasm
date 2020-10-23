	global	_ft_strcpy
	section	.text

_ft_strcpy:
		xor		rax, rax
		mov		rcx, rdi
_loop:
		cmp		[rsi], byte 0
		jz		_end
		mov		dl, [rsi]
		mov		[rdi], dl
		inc		rdi
		inc		rsi
		jmp		_loop

_end:
		mov		[rdi], byte 0
		mov		rax, rcx
		ret