#include <stdio.h>

int main() {
    int n, i, smallest, greatest;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and greatest with the first element
    smallest = greatest = arr[0];

    // Traverse the array
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > greatest)
            greatest = arr[i];
    }

    // Output
    printf("Smallest number: %d\n", smallest);
    printf("Greatest number: %d\n", greatest);

    return 0;
}
