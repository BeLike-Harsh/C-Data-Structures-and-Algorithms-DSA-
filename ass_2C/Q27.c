#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Functions
float areaCircle(float r) { return M_PI * r * r; }
float areaRectangle(float l, float w) { return l * w; }
float areaSquare(float s) { return s * s; }

int main() {
    int choice;
    float radius, length, width, side;

    printf("1. Circle\n2. Rectangle\n3. Square\nChoose a shape (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Area of Circle: %.2f\n", areaCircle(radius));
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            printf("Area of Rectangle: %.2f\n", areaRectangle(length, width));
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            printf("Area of Square: %.2f\n", areaSquare(side));
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
 