#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    srand(time(NULL));
    void Print_2D_array(int i, int j, int array[100][100])
    {
        int counter1 = 0, counter2 = 0;
        for (int counter1 = 0; counter1 < i; ++counter1)
        {
            for (int counter2 = 0; counter2 < j; ++counter2)
            {
                printf("%d \t", array[counter1][counter2]);
            }
            printf("\n");
        }
    }
    int rbtn(int min, int max)  //random beetwen two numbers
    {
        int res = rand() % (max + 1 - min) + min;
        return res;
    }
