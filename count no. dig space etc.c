#include <stdio.h>
#include<string.h>


int main() {
    char string[50];
    int dig = 0, spaces=0, alpha=0, spc=0;
    printf("Enter an string: ");
    scanf("%[^\n]", string);
    for (int i = 0; string[i] != '\0'; i++) {
        if (isdigit(string[i])) {
            dig++;
        } else if (isalpha(string[i])) {
            alpha++;
        } else if (isspace(string[i])) {
            spaces++;
        } else {
            spc++;
        }
    }
    printf("Number of digits: %d\n", dig);
    printf("Number of alphabets: %d\n", alpha);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of special characters: %d\n", spc);

    return 0;
}
