// program to print numerical diamond


#include <stdio.h>
main()
{
	int i, l, j, k = 40;

	for (i = 1; i < 10; i+=2) {
		for(l = 1; l <= k; ++l) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%2d", j);
		}
		printf("\n");
		k -= 2;
	}
	for ( i = 9; i >= 0; i-=2) {
		for (l = k+1; l >= 0; --l) {
			printf(" ");
		}
		for (j = 1; j <= i; ++j) {
			printf("%2d", j);
		}
		printf("\n");
		k += 2;
	}
}
