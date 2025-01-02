#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input values for Principal, Rate of Interest, and Time
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
