		global    main

	        section   .text
main:	    	mov       rax, 1	 ; system call for write
	        mov       rdi, 1    ; the file handle 1 is stdout
	        mov       rsi, holberton ;the address of string to output
	        mov       rdx, 17	 ;the number of bytes in the string
	        syscall		 ; invoke operating system to do the write
	        mov       rax, 60 ; system call for exit
	        xor       rdi, rdi	    ; the exit code 0
	        syscall		    ; invoke operating system to exit

	        section   .data
holberton:	db        "Hello, Holberton", 10 ; notice the newline at the end
