#include <stdio.h>

// Functions
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    float num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+': printf("Result: %.2f\n", add(num1, num2)); break;
        case '-': printf("Result: %.2f\n", subtract(num1, num2)); break;
        case '*': printf("Result: %.2f\n", multiply(num1, num2)); break;
        case '/': 
            if (num2 != 0) printf("Result: %.2f\n", divide(num1, num2));
            else printf("Error: Division by zero!\n"); 
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
