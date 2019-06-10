#include <stdio.h>
#include <math.h>
double x = 5;
double result;
void f(void)
{
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
void main()
{
	f();
	printf("Вывод f(x) = %.4lf\n", result);
	scanf_s("%lf", &x);
	f();
	printf("Вывод f(x) = %.4lf\n", result);
	system("pause");
}