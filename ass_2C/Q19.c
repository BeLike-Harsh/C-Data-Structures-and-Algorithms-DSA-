#include <stdio.h>

int main() {
    int n;

    // Input the number of terms in the Fibonacci series
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms: \n", n);

    // Handle edge case for n = 1
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
