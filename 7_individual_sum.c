// program that prints sum of individual digits.


#include <stdio.h>
main()
{
	int num, sum, rem, quo, add;

	printf("ENTER A NUMBER : ");
	scanf("%d", &num);
	rem = num % 10;
	quo = num / 10;
	sum = rem + quo;
	printf("SUM = %d\n", sum);
}
