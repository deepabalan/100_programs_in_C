// program to accept a character in any case and print in another case.


#include <stdio.h>
main()
{
	char c, small, caps;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			small = c + 32;
			printf("%c", small);
		}
		else if (c >= 97 && c <= 122) {
			caps = c - 32;
			printf("%c", caps);
		}
	}
}
