#include<stdio.h>
int main() {
    int num, i, j, k, l, m;
    unsigned long long factorial = 1;

    // First loop: Input the number
    for (i = 0; i < 1; i++) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }

    // Second loop: Validate the input
    for (j = 0; j < 1; j++) {
        if (num < 0) {
            printf("Factorial of a negative number doesn't exist.\n");
            return 0;
        }
    }

    // Third loop: Initialize factorial to 1
    for (k = 0; k < 1; k++) {
        factorial = 1;
    }

    // Fourth loop: Calculate factorial
    for (l = 1; l <= num; l++) {
        factorial *= l;
    }

    // Fifth loop: Display the result
    for (m = 0; m < 1; m++) {
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
