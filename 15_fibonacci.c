// program to print fibonacci series.


#include <stdio.h>
main()
{
	int i, n, series;
	printf("ENTER A NUMBER : ");
	scanf("%d", &n);

	for (i = 0; i <= n; ++i) {
		if (n == 1)
			return 0;
		else if (n == 2)
		       return 1;
		else {
			series = (n-2) + (n-1);
			printf("%d", series);
		}
	}
}
