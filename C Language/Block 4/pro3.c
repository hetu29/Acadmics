#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of Rows :\n");
    scanf("%d", &rows);
    printf("Enter the number of Columns :\n");
    scanf("%d",&cols);

    // Check for valid dimensions
    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions. Please enter positive integers.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the matrices
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}