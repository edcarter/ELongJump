#ifndef _ELONGJUMPH
#define _ELONGJUMPH

struct jmp_buf {
	long int pc;
	long int sp;
	long int bp; // base pointer
};

// return 0 on intitial call and non-zero after jump
int esetjmp(struct jmp_buf * buf);

// doesn't return
void elongjmp(struct jmp_buf * buf);

#endif
