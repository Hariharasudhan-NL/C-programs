#include <stdio.h>
void printNumbers(int num) {
    if (num > 10)
        return;

    printf("%d ", num);
    printNumbers(num + 1);
}

int main() {
    printf("Numbers from 1 to 10: ");
    printNumbers(1);
    printf("\n");
    return 0;
}
