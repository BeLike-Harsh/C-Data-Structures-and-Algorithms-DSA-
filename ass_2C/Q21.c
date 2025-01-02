#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Loop through numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;  // Assume the number is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        // If prime, print the number
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
