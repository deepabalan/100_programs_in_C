// program to accept a string and print it by using the while loop.


#include <stdio.h>
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
