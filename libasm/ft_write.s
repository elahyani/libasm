	global	_ft_write
	section	.text
	;rdi, rsi, rdx
_ft_write:
		mov r9, rdx
		mov	rax, 0x02000004
		syscall
		jc	_err
		jmp _end

_err:
		mov	rax, -1
		ret

_end:
		mov rax, r9
		ret