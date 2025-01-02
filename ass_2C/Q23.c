#include <stdio.h>

int main() {
    int x, sum = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &x);

    int arr[x];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of squares
    for (int i = 0; i < x; i++) {
        sum += arr[i] * arr[i];
    }

    // Output the result
    printf("The sum of the squares of the elements is: %d\n", sum);

    return 0;
}
