// program to accept  10 numbers and print first five numbers in
// original order and print last five numbers in reverse order.


#include <stdio.h>
main()
{
	int i, arr[10];

	for (i = 1; i <= 10; ++i)
		arr[i] = 0;

	printf("ENTER 10 NUMBERS : ");

	for (i = 1; i <= 10; ++i) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= 5; ++i)
		printf("%d\n", arr[i]);
	for (i = 10; i > 5; --i)
		printf("%d\n", arr[i]);

}
