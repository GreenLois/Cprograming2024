#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rbtn(int min, int max)  //random beetwen two numbers
{
	int res = rand() % (max + 1 - min) + min;
	return res;
}
int main(void) {
	 srand(time(NULL));
	int x[25], i = 0;
	float avr=0;
	while (i != 25)
	{
		x[i] = rbtn(0,30);
		avr += x[i];
		++i;
	}
	avr /= i;
	i = 0;
	printf("average value: %.2f\n", avr);
	while (i != 25)
	{
		printf("Before x%d was:%d", i + 1, x[i]);
		if (x[i] < avr)
		{
			x[i] = 0;
		}

		printf("\nNow x%d is:%d\n", i + 1, x[i]);
		++i;
	}

	

	return 0;
}
