#include<stdio.h>
int main()
{
    char s[33];
    int j=0;
    char ss[33];
    printf("enter the string : ");
    scanf("%s",&s);
    int a =strlen(s);
    for(int i=a-1;i>=0;i--){

            ss[j]=s[i];
            j++;
        }

    printf("%s",ss);

    return 0;
}
