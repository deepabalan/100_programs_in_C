// program that prints biggest of 3 numbers.


#include <stdio.h>
main()
{
	int num_1, num_2, num_3, big;
	big = 0;

	printf("ENTER NUM1 : ");
	scanf("%d", &num_1);
	printf("ENTER NUM2 : ");
	scanf("%d", &num_2);
	printf("ENTER NUM3 : ");
	scanf("%d", &num_3);

	if (num_1 > num_2 && num_1 > num_3) {
		big = num_1;
	}
	else if (num_2 > num_1 && num_2 > num_3) {
		big = num_2;
	}
	else
		big = num_3;
	printf("BIGGEST NUMBER IS %d\n", big);
}
