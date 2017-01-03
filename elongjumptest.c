#include <stdio.h>
#include "elongjump.h"

struct jmp_buf buf;

void dojump()
{
	elongjmp(&buf);
}

int main() 
{
	if (esetjmp(&buf) == 0) {
		puts("We just returned from esetjump");
		dojump();
	} else {
		puts("We just jumped!");
	}
}


