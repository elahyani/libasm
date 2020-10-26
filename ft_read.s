	global	_ft_read
	section	.text
	extern ___error

_ft_read:
		mov		rax, 0x02000003
		syscall
		jc		_err
		ret
		
_err:
		push	rax
		call	___error
		pop		rdx	
		mov		[rax], rdx
		mov		rax, -1
		ret