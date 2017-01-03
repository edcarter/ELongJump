all:
	gcc -o longjumptest elongjump.S elongjumptest.c -Wall
clean:
	rm *.o
