//Підрахувати k – суму цифр, що стоять на парних позиціях(молодша цифра – перша
//позиція) у десятковому записі натурального числа n


#include <stdio.h>
int main(void) {	
	long int knumber, size_counter = 10, sum = 0, current_diget;
	printf("task 2\n\n\n");
	scanf_s("%ld", &knumber);
	while (knumber >= size_counter)
	{
		size_counter *= 10;
	}
	size_counter /= 10;
	while (size_counter > 0.1)
	{
		current_diget = (knumber / size_counter) % 10;
		sum += current_diget;
		knumber = knumber - (current_diget * size_counter);
		size_counter /= 100;
	}


	printf(" the sum of the digits in even positions is equal to %ld", sum);



}