#include <stdio.h>
double f(double x);
void main()
{
	double x = 5.0;
	printf("����� f(x) = %.4lf\n", f(x));
	scanf_s("%lf", &x);
	printf("����� f(x) = %.4lf\n", f(x));
	system("pause");
}