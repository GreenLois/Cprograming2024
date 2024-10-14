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
    int min = 0, max = 0, rows = 0, lines = 0;
    printf("Enter number of rows between 1 and 100: ");
    scanf_s("%d", &rows);
    printf("Enter number of lines between 1 and 100: ");
    scanf_s("%d", &lines);
    printf("Enter a range of possible integer values\n Min = ");
    scanf_s("%d", &min);
    printf("Max = ");
    scanf_s("%d", &max);

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int*)malloc(lines * sizeof(int));
    }

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < lines; ++j) {
            matrix[i][j] = rbtn(min, max);
        }
    Print_2D_array(rows, lines, matrix);
    Swap_2D_array(rows, lines, matrix);
    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
