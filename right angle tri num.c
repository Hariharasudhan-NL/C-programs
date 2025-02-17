#include <stdio.h>

int main() {
    int i, j ,value=1;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t",value);
            value++;
        }
        printf("\n");
    }

    return 0;
}
