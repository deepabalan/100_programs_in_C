// print sum of natural numbers from 1 to 10.


#include <stdio.h>
main()
{
	int i, sum = 0;

	for (i = 1; i <= 10; ++i) {
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
}
