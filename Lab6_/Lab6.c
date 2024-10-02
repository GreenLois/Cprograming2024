/*
Заповнити матрицю випадковими числами. Відобразити
верхню половину матриці на нижню дзеркально симетрично
відносно горизонтальної осi.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyFunc.h"

int main(void) {
    srand(time(NULL));
    int min=0, max=0, rows = 0, lines = 0, matrix[100][100];
    printf("enter number of rows beetwen 1 and 100: ");
    scanf_s("%d", &rows);
    printf("enter number of lines beetwen 1 and 100: ");
    scanf_s("%d", &lines);
    printf("enter a range of possible integer values\n Min=");
    scanf_s("%d", &min);
    printf("Max=");
    scanf_s("%d", &max);


    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < lines; ++j) {
            matrix[i][j] = rbtn(min, max);
        }
	Print_2D_array(rows, lines,matrix);
    Swap_2D_array(rows, lines, matrix);

	return 0;
}
