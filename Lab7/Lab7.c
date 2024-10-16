#include <stdio.h>
#include <ctype.h>

int sum_of_digits(const char* str) {
    int sum = 0;
    for (int i = 0; str[i] != '.'; i++) {
        if (isdigit(str[i])) {
            sum += str[i] - '0'; 
        }
    }

    return sum;
}

int main() {
    char number[100];
    printf("Enter a number (ending with a dot): ");
    scanf_s("%s", &number);
    int result = sum_of_digits(number);
    printf("Sum of digits: %d\n", result);

    return 0;
}
