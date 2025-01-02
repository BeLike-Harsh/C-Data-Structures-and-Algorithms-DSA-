#include <stdio.h>

int main() {
    // Example using `break`
    printf("Using 'break':\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Exit loop when i equals 3
        }
        printf("i = %d\n", i);
    }

    // Example using `continue`
    printf("\nUsing 'continue':\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip iteration when i equals 3
        }
        printf("i = %d\n", i);
    }

    return 0;
}
