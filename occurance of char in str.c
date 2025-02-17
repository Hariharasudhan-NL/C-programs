#include <stdio.h>

int main() {
    char str[100], ch;
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Modified string: %s\n", str);
    return 0;
}
