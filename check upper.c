#include <stdio.h>

int main() {
    char ch = 'a';

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    return 0;
}
