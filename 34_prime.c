// program to print prime numbers between 1 & 100.


#include <stdio.h>
main()
{
	int i;

	for (i = 1; i <= 100; ++i) {
		if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0)) {
			printf("%d\n", i);
		}
	}
}
