// program to accept a string in upper case and print it in lower case.


#include <stdio.h>
main()
{
	char c, lower, upper;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			lower = c + 32;
			printf("%c", lower);
		}
		else if (c >= 97 && c <= 122) {
			upper = c - 32;
			printf("%c", upper);
		}
	}
	printf("\n");
}
