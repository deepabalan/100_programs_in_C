// program to print 1 to 10 mathematical tables.


#include <stdio.h>
main()
{
	int i, j, pdt;
	printf("MATHEMATICAL TABLE\n");

	for (i = 1; i <= 10; ++i) {
		for (j = 1; j <= 10; ++j) {
			pdt = i * j;
			printf("%d*%d=%d\t", i, j, pdt);
		}
		printf("\n");
	}
}
