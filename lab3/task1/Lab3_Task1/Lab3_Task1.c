//Задане дійсне число х. Обчислити:
//11x^10 + 10x^9 + 9x^8 +...+ 2x + 1
#include <math.h>
#include <stdio.h>
int mypow(int base, int exp) {
	int result = 1, i = exp;
	while (i > 0)
	{
		result *= base;
		--i;
	}
	return result;
}
int main(void)
{
	printf("task 1 \n\n\n");
	float x, res = 0;
	int  i = 11, power = 10;
	printf("enter the number x ");
	scanf_s("%f", &x);
	while (i != 0)
	{
		res = i * mypow(x, power) + res;
		--power;
		--i;
	}
	printf("the result is equal to  %.2f", res);


	return 0;
}
//написати свій пов