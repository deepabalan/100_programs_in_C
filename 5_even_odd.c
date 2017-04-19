// Programs that checks whether a number is odd or even.


#include <stdio.h>
main()
{
	int num;

	printf("ENTER A NUMBER : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("ITS AN EVEN NUMBER.\n");
	}
	else
		printf("ODD NUMBER.\n");
}
