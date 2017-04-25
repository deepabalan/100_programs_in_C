// program to accept two numbers and print sum of two numbers by using
// functions.


#include <stdio.h>
int sum(int a, int b);

main()
{
	int i, j;

	printf("ENTER THE VALUE OF i: ");
	scanf("%d", &i);
	printf("ENTER THE VALUE OF j: ");
	scanf("%d", &j);
	printf("SUM IS %d\n", sum(i, j));
	return 0;
}

sum(i, j)
{
	int result;
	result = i + j;
	return result;
}
