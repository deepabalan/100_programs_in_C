// program to accept a number and print the sum of given and reverse number.


#include <stdio.h>
int my_reverse(int n);
int my_sum(int a, int b);

main()
{
	int i, m, n;

	printf("ENTER A TWO DIGIT NUMBER : ");
	scanf("%d", &i);

	m = my_reverse(i);
	n = my_sum(i, m);

	printf("THE REVERSED NUMBER = %d\n", m);
	printf("SUM OF %d AND %d = %d\n", i, m, n);
	return 0;
}

my_reverse(int i)
{
	int rem, quo, reversed_num, temp;

	rem = i % 10;
	quo = i / 10;

	temp = rem;
	rem = quo;
	quo = temp;

	reversed_num = quo*10 + rem;
	return reversed_num;
}

my_sum(int m, int n)
{
	int sum;

	sum = m + n;
	return sum;
}
