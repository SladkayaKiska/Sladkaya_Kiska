#include <stdio.h>
extern double x;
extern double result;
void main()
{
	f();
	printf("����� f(x) = %.4lf\n", result);
	scanf_s("%lf", &x);
	f();
	printf("����� f(x) = %.4lf\n", result);
	system("pause");
}