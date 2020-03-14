;INC COUNT        ; Increment the memory variable COUNT
;
;MOV TOTAL, 48    ; Transfer the value 48 in the 
;                 ; memory variable TOTAL
;					  
;ADD AH, BH       ; Add the content of the 
;                 ; BH register into the AH register
;					  
;AND MASK1, 128   ; Perform AND operation on the 
;                 ; variable MASK1 and 128
;					  
;ADD MARKS, 10    ; Add 10 to the variable MARKS
;MOV AL, 10       ; Transfer the value 10 to the AL register
;db				  ; define bytes
;10				  ; \n
;0				  ; \0
;rax, syscall ID
	;4: sys_write
	;3: sys_read
	;1: sys_exit 
; debugging: lldb ./a.out -> b start -> run -> register read -> next

		global		start

		section		.bss
		name		resb 16

		section		.text
start:	
		call		print_qst
		call		get_name
		call		print_asr
		call		print_name

		mov			rax, 0x02000001		; system call for exit
		xor			rdi, rdi			; exit code 0
		syscall							; invoke OS to exit

get_name:
		mov			rax, 0x02000003
		mov			rdi, 0
		mov			rsi, name
		mov			rdx, 16
		syscall
		ret

print_qst:
		mov			rax, 0x02000004
		mov			rdi, 1
		mov			rsi, qst
		mov			rdx, qst_len
		syscall
		ret

print_asr:
		mov			rax, 0x02000004
		mov			rdi, 1
		mov			rsi, asr
		mov			rdx, asr_len
		syscall
		ret

print_name:
		mov			rax, 0x02000004
		mov			rdi, 1
		mov			rsi, name
		mov			rdx, 16
		syscall
		ret 

		section		.data
qst:	db			"What is your name? ", 0 ; note the new line at the end
qst_len		equ $ - qst
asr:	db			"Hello, ", 0 ; note the new line at the end
asr_len		equ $ - asr

