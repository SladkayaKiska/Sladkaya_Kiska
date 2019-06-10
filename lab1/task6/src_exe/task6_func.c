#include <math.h>
double x = 5.0;
double result;
void f(void)
{
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}