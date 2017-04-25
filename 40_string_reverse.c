// program to accept a string and print the reverse of the given string
// by using for loop.


#include <stdio.h>
main()
{
	int c, i;
	int arr[15];

	for (i = 0; i < 15; ++i)
		arr[i] = 0;

	while ((c = getchar()) != EOF) {
		putchar(arr[c]);
	}
}
