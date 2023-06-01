global    main
extern    printf
main:
	  mov   edi, format
          call  printf
	  xor   eax, eax
	  mov 	eax, 0
	  ret
format: db 'Hello, Holberton',0xa, 0
