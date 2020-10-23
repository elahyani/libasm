
	global  _ft_strlen
	section .text

_ft_strlen: 
	    xor		rcx, rcx
		cmp		rdi, byte 0
		jz		_null
		jmp		_loop

_null:
		mov		rcx, 0
		jmp		_end
		
_loop:
	    cmp     [rdi], byte 0
		jz		_end
	    inc     rdi
	    inc     rcx
		jmp		_loop

_end:
		mov		rax, rcx
		ret
