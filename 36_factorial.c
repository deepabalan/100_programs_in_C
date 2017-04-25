// program to accept a number and find factorial of given number.


#include <stdio.h>
int fact(int n);

main()
{
	int i;

	printf("ENTER THE VALUE OF i: ");
	scanf("%d", &i);
	printf("%d\n", fact(i));
}

fact(int n)
{
	int result = 1;

	if (n == 0 || n == 1) {
		return 1;
	} else if (n > 1){
		result = n * fact(n-1);
	}
	else {
		return result;
	}
}
