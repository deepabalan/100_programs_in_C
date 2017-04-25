// program to accept a string print each word in new line.


#include <stdio.h>
#define IN  1             // inside a word
#define OUT 0             // outside a word

main()
{
	int c, state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
				state == OUT;
			}
		}
		else if (state == OUT) {
			state = IN;
			putchar(c);
		}
		else
			putchar(c);
	}
}
