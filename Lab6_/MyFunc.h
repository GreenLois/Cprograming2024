#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int rbtn(int min, int max) {
    int res = rand() % (max + 1 - min) + min;
    return res;
}

void Print_2D_array(int i, int j, int** array) {
    for (int counter1 = 0; counter1 < i; ++counter1) {
        if ((i % 2 == 0 && (counter1 == i / 2 || counter1 == i / 2 - 1)) || (i % 2 != 0 && counter1 == i / 2)) {
            printf(ANSI_COLOR_RED);
        }
        for (int counter2 = 0; counter2 < j; ++counter2) {
            printf("%d \t", array[counter1][counter2]);
        }
        printf(ANSI_COLOR_RESET);
        printf("\n");       
    }
}

void Swap_2D_array(int i, int j, int** array) {
    printf("\n\n\n============================================swapped============================================\n\n\n");

    for (int counter1 = i - 1; counter1 >= 0; --counter1) {
        if ((i % 2 == 0 && (counter1 == i / 2 || counter1 == i / 2 - 1)) || (i % 2 != 0 && counter1 == i / 2)) {
            printf(ANSI_COLOR_RED);
        }
        for (int counter2 = 0; counter2 < j; ++counter2) {
            printf("%d \t", array[counter1][counter2]);
        }
        printf(ANSI_COLOR_RESET);
        printf("\n");
    }
}
