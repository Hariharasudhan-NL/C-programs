#include <stdio.h>

int main() {
    char matrix[4][4];
    char letter = 'A';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = letter;
            letter++;
        }
    }

    printf("The matrix of letters is:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
