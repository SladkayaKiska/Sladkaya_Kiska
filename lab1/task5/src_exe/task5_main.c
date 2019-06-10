#include <stdio.h>
double f(double x);
void main()
{
	double x = 5.0;
	printf("Вывод f(x) = %.4lf\n", f(x));
	scanf_s("%lf", &x);
	printf("Вывод f(x) = %.4lf\n", f(x));
	system("pause");
}