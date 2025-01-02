#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Switch case for calculation
    switch(operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) result = num1 / num2;
            else { printf("Error! Division by zero.\n"); return 0; }
            break;
        default: printf("Invalid operator!\n"); return 0;
    }

    // Output
    printf("Result: %.2f\n", result);
    return 0;
}
