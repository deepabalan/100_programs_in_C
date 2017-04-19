// program to read two numbers and print the sum of given two numbers.


#include <stdio.h>
main()
{
	int num_1, num_2, sum_total;
	printf("ENTER THE VALUE OF a: ");
	scanf("%d", &num_1);
	printf("ENTER THE VALUE OF b: ");
	scanf("%d", &num_2);
	
	sum_total = num_1 + num_2;
	printf("SUM OF a AND b IS: %d\n", sum_total);
}
