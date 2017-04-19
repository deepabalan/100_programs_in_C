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

	if (sum > 10) {
		rem = num % 10;
		quo = num / 10;
		add = rem + num;
		printf("ADD = %d\n", add);
	}
	else
		printf("SUM = %d\n", sum);
}
