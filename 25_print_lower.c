// program to accept a character in the uppercase and print in lower
// case.


#include <stdio.h>
main()
{
	char small, caps;

	printf("enter the uppercase letter\n");
	caps = getchar();
	small = caps + 32;

	printf("lower case is %c\n", small);
}
