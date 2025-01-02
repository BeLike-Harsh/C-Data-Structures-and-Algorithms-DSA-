#include <stdio.h>

int main() {
    int i = 1;

    // Entry-controlled loop
    printf("Entry-Controlled (while):\n");
    while (i <= 3) {
        printf("%d ", i++);
    }

    // Exit-controlled loop
    printf("\n\nExit-Controlled (do-while):\n");
    i = 1;
    do {
        printf("%d ", i++);
    } while (i <= 3);

    return 0;
}
