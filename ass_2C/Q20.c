#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative number
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}
