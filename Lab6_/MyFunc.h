#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int rbtn(int min, int max)  //random beetwen two numbers
{
    int res = rand() % (max + 1 - min) + min;
    return res;
}
void Print_2D_array(int i, int j, int array[100][100])
{
    int counter1 = 0, counter2 = 0;
    for (counter1 = 0; counter1 < i; ++counter1)
    {
        if ((i % 2 == 0 && (counter1 == i / 2 || counter1 == i / 2 - 1)) || (i % 2 != 0 && counter1 == i / 2))
        {
            printf(ANSI_COLOR_RED);
        }
        for (counter2 = 0; counter2 < j; ++counter2)
        {

            printf("%d \t", array[counter1][counter2]);

        }
        printf(ANSI_COLOR_RESET);  
        printf("\n");
    }
}
void Swap_2D_array(int i, int j, int array[100][100])
{
    printf("\n\n\n============================================swaped============================================\n\n\n");

    int counter1 = 0, counter2 = 0;
    for (counter1 = i-1; counter1 >= 0; --counter1)
    {
        if ((i % 2 == 0 && (counter1 == i / 2 || counter1 == i / 2 - 1)) || (i % 2 != 0 && counter1 == i / 2))
        {
            printf(ANSI_COLOR_RED);
        }
        for (counter2 = 0; counter2 < j; ++counter2)
        {

            printf("%d \t", array[counter1][counter2]);

        }
        printf(ANSI_COLOR_RESET);
        printf("\n");
    }
}
