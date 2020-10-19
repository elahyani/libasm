
	global  _ft_strlen
	section .text

_ft_strlen: 
	    xor		rcx, rcx
		cmp		rdi, byte 0
		; jz		_null

; _null:
; 		xor		rax, rax
; 		xor		rcx, rcx
; 		mov		rcx, 1
; 		neg		rcx
; 		jmp		_end
		

_loop:
	    cmp     [rdi], byte 0
		jz		_end
	    inc     rdi
	    inc     rcx
		jmp		_loop

_end:
		mov		rax, rcx
		ret
