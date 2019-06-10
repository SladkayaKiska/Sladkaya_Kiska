#include <stdio.h>
#include <math.h>
void main()
{
	double x = 5;
	printf("Вывод f(x) = %.4lf\n", (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	scanf_s("%lf", &x);
	printf("Вывод f(x) = %.4lf\n", (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	system("pause");
}