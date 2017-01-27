#ifndef _ELONGJUMPH
#define _ELONGJUMPH

struct __attribute__ ((__packed__))  jmp_buf {
	long int pc; // program counter
	long int sp; // stack pointer
	long int bp; // base pointer
}; // pack struct to ensure safe access in assembly

// return 0 from initial call, and non-zero after longjump
int esetjmp(struct jmp_buf * buf);

// doesn't return
void elongjmp(struct jmp_buf * buf);

#endif
