	global	_ft_read
	section	.text

_ft_read:
		mov	rax, 0x02000003
		syscall
		jc	_err
		jmp	_end
		
_err:
		mov	rax, -1
		ret

_end:
		ret