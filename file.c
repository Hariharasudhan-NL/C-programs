#include<stdio.h>
int main(){

    FILE *fptr, *fptr1;
    fptr = fopen( "newfile.txt","w");
    fputs("welcome to c programming....\n", fptr);
    fputs("created on night by utube...\n", fptr);
    fclose(fptr);

    fptr1 = fopen( "newfile1.txt","w");
    fputs("vanakooo...\n", fptr1);
    fclose(fptr1);

    fptr = fopen( "newfile.txt", "r");
    char content[1000];
    while (fgets(content, sizeof(content), fptr)) {
        printf("%s", content);
    }
    fclose(fptr);

    fptr1 = fopen( "newfile1.txt", "r");
    char content1[1000];
    while (fgets(content1, 1000, fptr1)) {
        printf("%s", content1);
    }
    fclose(fptr1);

    return 0;
}
