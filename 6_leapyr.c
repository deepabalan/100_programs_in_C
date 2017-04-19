// program that checks whether a year is leap year or not.


#include <stdio.h>
main()
{
	int year;

	printf("ENTER A YEAR : ");
	scanf("%d", &year);

	if (year % 4 == 0)
		printf("LEAP YEAR...!!!\n");
	else
		printf("SORRY... NOT A LEAP YEAR\n");
}
