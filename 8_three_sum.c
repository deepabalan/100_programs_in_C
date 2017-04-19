// program to accept a three digit number and print the sum of
// individual digits.


#include <stdio.h>
main()
{
	int digit, rem, quo, sum, new_rem, new_quo;

	printf("ENTER YOUR NUMBER : ");
	scanf("%d", &digit);

	rem = digit % 100;
	quo = digit / 100;
	new_rem = rem % 10;
	new_quo = rem / 10;
	sum = quo + new_rem + new_quo;

	printf("SUM = %d\n", sum);
}
