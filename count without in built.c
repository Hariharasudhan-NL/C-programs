#include <stdio.h>

int main() {
    char string[50];
    int dig = 0, spaces = 0, alpha = 0, spc = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", string);

    for (int i = 0; string[i] != '\0'; i++) {
        char ch = string[i];

        if (ch >= '0' && ch <= '9') {
            dig++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alpha++;
        }
        else if (ch == ' ') {
            spaces++;
        }
        else {
            spc++;
        }
    }
    printf("Number of digits: %d\n", dig);
    printf("Number of alphabets: %d\n", alpha);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of special characters: %d\n", spc);

    return 0;
}
