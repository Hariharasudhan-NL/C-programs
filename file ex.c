#include<stdio.h>
int main(){
    FILE *dest, *source;
    char app[1000];
    source = fopen( "newfile.txt", "r");
    dest = fopen("newfile1.txt", "a");
    while (fgets(app, sizeof(app), source)) {
        fputs(app, dest);
    }
    printf("Data has been successfully appended to the target file.\n");
    fclose(dest);
    fclose(source);

    dest = fopen( "newfile1.txt", "r");
    char disp[1000];
    while (fgets(disp, sizeof(disp), dest)) {
        printf("%s", disp);
    }
    fclose(dest);



return 0;
}
