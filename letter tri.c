#include <stdio.h>

int main() {
    char letter = 'A';
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}
