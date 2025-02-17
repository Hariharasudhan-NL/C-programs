#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            printf("Reached number 7. Stopping.\n");
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
