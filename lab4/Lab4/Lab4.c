/*
Задані дійсні числа s, t. Необхідно отримати значення виразу:
g(1.2, s) + g(t, s) - g(2s - 1, s * t)
де функція g(a, b) визначається як:
g(a, b) = (a^2 + b^2) / (a^2 + 2*a*b + 3*b^2 + 4)
*/
#include <stdio.h>
#include <math.h>
float g(float a, float b)
{
	float numerator = a * a + b * b;
	float denominator = a * a + 2 * a * b + 3 * b * b + 4;
	if (denominator == 0)
	{
		printf("Error: denominator is zero, which causes division by zero!\n");
		return NAN; 
	}
	float c = numerator / denominator;
 return c;
}
int main(void)
{
	float s, t, res;
	printf("enter real numbers s and t:");
	scanf_s("%f %f", &s, &t);
	res = g(1.2f, s) + g(t, s) - g(2*s - 1, s * t);
	printf("the result is equal to %f", res);
	}