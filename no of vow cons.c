#include <stdio.h>

int main() {
    char str[50];
    int vow = 0, cons = 0;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vow++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cons++;
        }
    }

    printf("The number of vowels is %d\n", vow);
    printf("The number of consonants is %d\n", cons);

    return 0;
}
