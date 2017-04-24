// find biggest of two numbers using ternary numbers.


#include <stdio.h>
main()
{
	int a, b, big;

	printf("Enter value of a : ");
	scanf("%d", &a);
	printf("Enetr value of b : ");
	scanf("%d", &b);

	big = (a > b)?a:b;

	printf("biggest of among %d and %d is %d\n", a, b, big);
}
