//���� ��������� �����. ��������� �� ���� � ����� �����.
#include <stdio.h>

int main(void) {
	int number1, first1, second1;
	printf("two-digit number: ");
	scanf_s("%d", &number1);
	first1 = number1 / 10;
	second1 = (number1 - (first1 * 10)) ;
	if(first1==second1)
	{
		printf("digits are same \n");
	}
	else
	{
		printf("digits are different \n");

	}
	
	// void getline() 
	// {
	// 	char c;
	// 	while ((c = getchar()) != EOF) { // -1 -> ctrl+ z
	// 		putchar(c);
	// 		if(c = '97')
	// 		{
	// 			break;
	// 		}
	// 	}
	// }

	return 0;
}
