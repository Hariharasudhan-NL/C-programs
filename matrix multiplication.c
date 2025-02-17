#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &r1);
    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &c1);
    printf("Enter number of rows for Matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &c2);
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Columns of A must equal rows of B.\n");
        return 1; // Exit the program
    }
    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix C (%dx%d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
