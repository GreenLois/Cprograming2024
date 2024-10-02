/*Дано натуральне тризначне число, у якому всі цифри різні.Написати програму, яка
виводить всі числа, утворені при перестановці цифр заданого числа.*/
#include <stdio.h>

int main() {


	int number, first, second, third;
	printf("enter number: ");
	scanf_s("%d", &number);
	first = number / 100;
	second = (number - (first * 100))/10;
	third = ((number - first * 100) - second * 10);

/*	printf("%d%d%-9d %d%d%-9d %d%d%d\n", first, second, third, second, third, first, third, first, second);
	printf("%d%d%-9d %d%d%-9d %d%d%d\n", first, third, second, second, first, third,third, second, first );
	printf("\n\n\n");*/
	int digits[3] = { first, second, third };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == i) continue; 
			for (int k = 0; k < 3; k++) {
				if (k == i || k == j) continue;
				printf("%d%d%d\n", digits[i], digits[j], digits[k]);
			}
		}
	}
/*воно встановлює всі 3 букви на 0, потім починає додавати, якщо у нас дві букви співпадають то воно скіпає це,*/

	return 0;
}
