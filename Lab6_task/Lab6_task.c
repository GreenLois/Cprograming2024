#include <stdio.h>
#include <string.h>

char* month_name(int n) {
    static char* name[] = {
        "Illegal month",  // 0 ΰαξ νεδ³ιρνθι μ³ρÿφό
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

void bubble_sort(char* months[], int n) {
    int i, j;
    char* temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(months[j], months[j + 1]) > 0) {
                temp = months[j];
                months[j] = months[j + 1];
                months[j + 1] = temp;
            }
        }
    }
}
int main() {
    char* months[12];
    for (int i = 0; i < 12; i++) {
        months[i] = month_name(i + 1);  
    }
    for (int i = 0; i < 12; i++) {
        printf("%s\n", months[i]);
    }
    bubble_sort(months, 12);
    printf("\n\nSorted months:\n\n");
    for (int i = 0; i < 12; i++) {
        printf("%s\n", months[i]);
    }
    return 0;
}
