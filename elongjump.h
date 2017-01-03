#ifndef _ELONGJUMPH
#define _ELONGJUMPH

struct jmp_buf {
	long int pc;
	long int sp;
};

// return 0 from initial call, and non-zero after longjump
int esetjmp(struct jmp_buf * buf);

void elongjmp(struct jmp_buf * buf);

#endif
