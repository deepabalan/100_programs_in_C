// program to print numerical pyramid.


#include <stdio.h>
main()
{
	int i, j, l, k = 40;

	for (i = 1; i <= 10; i+=2) {
		for (l = 1; l <= k; l++) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%2d", j);
		}
		printf("\n");
		k-=2;
	}
}
