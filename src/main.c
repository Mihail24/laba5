#include <stdio.h>
#include <math.h>
#include "func.h"

int main()
{
	double a, b, c, x1, x2;
	int st;
	printf("Enter a, b, c: \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	st = qwrt(a, b, c, &x1, &x2);
	printf("koli4estvo korney = % d\n", st);
	if (st == 2)
		printf("\nRoot: x1 =%lf\n x2 =%lf\n", x1, x2);
	if (st == 1)
		printf ("x1 =%.2lf\nx2 =%.2lf\n", x1, x2);
	if (st == 0)
		printf("x1 = x2 = %.2lf\n", x1);
	if (st == -1)
		printf("net kvadratnogo uravneniya");
	
	return 0;
}
