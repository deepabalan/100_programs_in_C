// program to accept a year and check the given year is leap or not by
// using ternary.


#include <stdio.h>
main()
{
	int year, leap;

	printf("enter a year : ");
	scanf("%d", &year);

	leap = (year % 400 == 0)?:(year % 100 != 0)?(year % 4 == 0)?1:0:0;

	if (leap == 1) {
		printf("given year is leap year.\n");
	} else {
		printf("not a leap year.\n");
	}
}
