#include <stdio.h>
#include <math.h>
#include "func.h"

int qwrt(double a, double b, double c, double *x1, double *x2)
{
	double d;
	int st;
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		st = -1;
	}
	if ((d < 0)||(a == 0 && b == 0))
	{
		st = 0;
	}
	if (d == 0)
	{
		*x1 = -b / (2 * a);
		st = 1;
	}
	if ((d > 0) && (a != 0))
	{
		*x1 = (-b + sqrt(d)) / (2 * a);
		*x2 = (-b - sqrt(d)) / (2 * a);
		st = 2;
	}
	return st;
}
