#include <stdio.h>
#include "elongjump.h"

struct jmp_buf buf;

void dojump()
{
	elongjmp(&buf);
}

int main() 
{
	int a = 111;
	register int b = 222;
	volatile int c = 333;
	if (esetjmp(&buf) == 0) {
		printf("We just returned from esetjump! a=%d, b=%d, c=%d\n", a, b, c);
		dojump();
	} else {
		printf("We just jumped! a=%d, b=%d, c=%d\n", a, b, c);
	}
}


