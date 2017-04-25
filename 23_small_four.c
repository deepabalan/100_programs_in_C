// program to print smallest four


#include <stdio.h>
main()
{
	int a, b, c, d, small_1, small_2, small;

	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b : ");
	scanf("%d", &b);
	printf("enter c : ");
	scanf("%d", &c);
	printf("enter d : ");
	scanf("%d", &d);

	small_1 = (a < b)?a:b;
	small_2 = (c < d)?c:d;

	small = (small_1 < small_2)?small_1:small_2;

	printf("smallest = %d\n", small);
}
