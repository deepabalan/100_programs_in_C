// find out biggest among four numbers using ternary operators.



#include <stdio.h>
main()
{
	int a, b, c, d, big_1, big_2, big;

	printf("enter a: ");
	scanf("%d", &a);
	printf("enter b: ");
	scanf("%d", &b);
	printf("enter c: ");
	scanf("%d", &c);
	printf("enter d: ");
	scanf("%d", &d);

	big_1 = (a > b)?a:b;
	big_2 = (c > d)?c:d;
	
	big = (big_1 > big_2)?big_1:big_2;

	printf("biggest = %d\n", big);
}
