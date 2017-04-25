// program thta accepts strings in any case and print it by
// another case.


#include <stdio.h>
main()
{
	int c, ch;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			ch = c + 32;
			putchar(ch);
		}
		else if (c >= 97 && c <= 122) {
			ch = c - 32;
			putchar(ch);
		}
	}
}
