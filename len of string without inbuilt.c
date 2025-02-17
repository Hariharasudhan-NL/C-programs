#include <stdio.h>
int main() {
    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]", string);
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    printf("the len of str is %d",length);
return 0;
}
