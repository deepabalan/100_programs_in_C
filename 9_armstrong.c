// program to check a given number is armstrong or not.
// Armstrong numbers are the sum of their own digits to the power of the number of digits.

#include <stdio.h>
main()
{
	int n, rem, new_rem, quo, new_quo, sum;

	printf("ENTER A THREE DIGIT NUMBER : ");
	scanf("%d", &n);

	rem = n % 100;
	quo = n / 100;
	new_rem = rem % 10;
	new_quo = rem / 10;
	sum = quo*quo*quo + new_rem*new_rem*new_rem + new_quo*new_quo*new_quo;
	if (n == sum) {
		printf("THE GIVEN NUMBER IS ARMSTRONG NUMBER.\n");
	}
	else
		printf("ITS NOT ARMSTRONG NUMBER.\n");
}
