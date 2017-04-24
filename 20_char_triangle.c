// program to print character triangle


#include <stdio.h>
main()
{
	int l, k = 40;
	char j, i;

	for (i = 65; i < 90; i+=2) {
		for (l = 1; l <= k; ++l) {
			printf(" ");
		}
		for (j = 65; j <= i; ++j) {
			printf("%2c", j);
		}
		k -= 2;
		printf("\n");
	}
	printf("\n");
}
