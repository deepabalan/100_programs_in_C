// program to print numeric triangle


#include <stdio.h>
main()
{
	int i, j;

	for (i = 1; i < 11; ++i) {
		for (j = 1; j < i; ++j)
			printf("%d", j);
		printf("\n");
	}
}
