#include <stdio.h>

int main() {
    int N, M;

    // Input number of students and subjects
    printf("Enter the number of students (N) and subjects (M): ");
    scanf("%d %d", &N, &M);

    int marks[N][M], total[N];

    // Input marks for each student
    for (int i = 0; i < N; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        total[i] = 0; // Initialize total to 0
        for (int j = 0; j < M; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j]; // Calculate total marks
        }
    }

    // Display total marks for each student
    printf("\nTotal Marks of Each Student:\n");
    for (int i = 0; i < N; i++) {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    return 0;
}
