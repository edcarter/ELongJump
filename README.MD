While poking around some systems programming books and manual pages I came across setjmp and longjmp. After reading through the man pages, I thought it would be an interesting exercise to implement these two calls using x86 assembly. The idea is quite simple: allocate a struct to hold the program counter and top of the stack for the line calling esetjmp() and then restore the stack pointer using the saved value and then jump to the saved program counter in elongjmp().