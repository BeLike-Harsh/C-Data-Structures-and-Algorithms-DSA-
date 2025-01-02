#include <stdio.h>
#include <math.h>

// User-defined function
int square(int num) { return num * num; }

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Using user-defined function
    printf("Square (User-Defined): %d\n", square(num));
    
    // Using in-built function
    printf("Square (In-Built): %.0f\n", pow(num, 2));
    return 0;
}
