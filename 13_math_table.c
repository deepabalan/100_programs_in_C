// program to accept a number and print mathematical table of the given
// number.


#include <stdio.h>
main()
{
	int n, i, pdt;
	printf("ENTER A NUMBER : ");
	scanf("%d", &n);
	for (i = 1; i <= 10; ++i) {
		pdt = n * i;
		printf("%d * %d = %d\n", i, n, pdt);
	}
}
