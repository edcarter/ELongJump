all:
	gcc -o longjumptest elongjump.S elongjumptest.c -Wall -g
clean:
	rm *.o longjumptest -f
