	global	_ft_write
	section	.text
	extern	___error
	;rdi, rsi, rdx
_ft_write:
		mov	rax, 0x02000004
		syscall
		jc	_err
		ret

_err:
		push	rax
		call	___error	;return errno adress to rax
		pop		rdx			;get prev rax in rdx, get the error value to rdx
		mov		[rax], rdx	;mov error to error adress
		mov		rax, -1		;return -1 from function
		ret