// prints character diamond


#include <stdio.h>
main()
{
	char i, j;
	int l, k = 40;

	for (i = 65; i <= 90; i+=2) {
		for (l = 1; l <= k; ++l) {
			printf(" ");
		}
		for (j = 65; j <= i; ++j) {
			printf("%2c", j);
		}
		k -= 2;
		printf("\n");
	}
//	printf("\n");
	for (i = 90; i >= 65; i-=2) {
		for (l = k; l >=1; --l) {
			printf(" ");
		}
		for (j = 65; j <= i; ++j) {
			printf("%2c", j);
		}
		k += 2;
		printf("\n");
	}
	
}
