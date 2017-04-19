// program to print fibonacci series.


#include <stdio.h>
main()
{
	int n, i, sum, f_num = 0, s_num = 1;

	printf("ENTER THE NUMBER : ");
	scanf("%d", &n);
	printf("%d ", f_num);
	printf("%d ", s_num);
	for (i = 1; i < n-1; ++i) {
		sum = f_num + s_num;
		printf("%d ", sum);
		f_num = s_num;
		s_num = sum;
	}
	printf("\n");
}
