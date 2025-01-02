#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average;
    char grade[3];

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Determine grade based on average marks
    if (average >= 91 && average <= 100) {
        sprintf(grade, "A1");
    } else if (average >= 81 && average <= 90) {
        sprintf(grade, "A2");
    } else if (average >= 71 && average <= 80) {
        sprintf(grade, "B1");
    } else if (average >= 61 && average <= 70) {
        sprintf(grade, "B2");
    } else if (average >= 51 && average <= 60) {
        sprintf(grade, "C1");
    } else if (average >= 41 && average <= 50) {
        sprintf(grade, "C2");
    } else if (average >= 33 && average <= 40) {
        sprintf(grade, "D");
    } else if (average >= 21 && average <= 32) {
        sprintf(grade, "E1");
    } else if (average >= 0 && average <= 20) {
        sprintf(grade, "E2");
    } else {
        printf("Error in calculating grade.\n");
        return 1;
    }

    // Display the grade
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %s\n", grade);

    return 0;
}
