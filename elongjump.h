#ifndef _ELONGJUMPH
#define _ELONGJUMPH

struct jmp_buf {
	long int pc;
	long int sp;
};

// return
int esetjmp(struct jmp_buf * buf);
void elongjmp(struct jmp_buf * buf);

#endif
