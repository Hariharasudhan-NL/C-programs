#include <stdio.h>
void ED(char *input, char *output, char key) {
    int i;
    for (i = 0; input[i] != '\0'; i++) {
        output[i] = input[i] ^ key;
    }
    output[i] = '\0';
}
int main() {
    char password[100], encrypted[100], decrypted[100];
    char key = 'K';
    printf("Enter the password: ");
    scanf("%s", password);
    ED(password, encrypted, key);
    printf("Encrypted password: %s\n", encrypted);
    ED(encrypted, decrypted, key);
    printf("Decrypted password: %s\n", decrypted);

    return 0;
}
