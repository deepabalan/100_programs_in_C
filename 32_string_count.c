// program to accept a string and count no: of capital letters, no: of
// small letters and no: of special characters.


#include <stdio.h>
main()
{
	int c, ns, nc, s;
	ns = 0;
	nc = 0;
	s = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90) {
			++nc;
		}
		else if (c >= 97 && c <= 122) {
			++ns;
		}
		else
			++s;
	}
	printf("caps = %d\nsmall = %d\nothers = %d\n", nc, ns, s);
}
