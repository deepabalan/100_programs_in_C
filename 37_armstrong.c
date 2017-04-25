// program to accept a number and check armstrong or not.


#include <stdio.h>
int my_armstrong(int n);

main()
{
	int n, arms;

	printf("ENTER A NUMBER : ");
	scanf("%d", &n);
	
	arms = my_armstrong(n);
	if (n == arms) {
		printf("ARMSTRONG NUMBER.\n");
	}
	else
		printf("NOT ARMSTRONG NUMBER.\n");
	return 0;
}

my_armstrong(int n)
{
	int rem, quo, new_rem, new_quo, arms;

	 rem = n % 100;
	 new_rem = rem % 10;
	 quo = n / 100;
	 new_quo = rem / 10;
	 arms = new_rem*new_rem*new_rem + new_quo*new_quo*new_quo + quo*quo*quo;
	 return arms;

}
