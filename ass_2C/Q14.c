#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 5, result;

    result = a + b * c - 4 / 2;

    // Step-by-step:
    // 1. b * c = 20 * 5 = 100
    // 2. 4 / 2 = 2
    // 3. a + 100 - 2 = 10 + 100 - 2 = 108

    printf("Result: %d\n", result);
    return 0;
}
