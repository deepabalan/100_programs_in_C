// program to accept student roll number, marks in 3 subjects and
// calculate total, average and print it.


#include <stdio.h>
main()
{
	int roll, sub_1, sub_2, sub_3, total;
        float average;

	printf("ENTER YOUR ROLL NUMBER : ");
	scanf("%d", &roll);
	printf("ENTER YOUR MARKS IN MATHS : ");
	scanf("%d", &sub_1);
	printf("ENTER YOUR MARKS IN PHY : ");
	scanf("%d", &sub_2);
	printf("ENETR YOUR MARKS IN CHEM : ");
	scanf("%d", &sub_3);

	total = sub_1 + sub_2 + sub_3;
	average = total / 3.0;
	if (average > 95) {
		printf("\nWELL DONE...!!!\n");
	}
	else if (average < 50) {
		printf("\nVERY HORRIBLE :-(\n");
	}

	printf("\nHEY, ROLL NO: %d YOU HAVE SECURED TOTAL MARKS = %d AVERAGE = %.2f\n\n", roll, total, average);
}
