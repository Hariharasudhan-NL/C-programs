#include<stdio.h>
int main()
{
char a1[30];
int a2;
printf("Your fav movie:");
scanf("%[^\n]",&a1);
printf("The year released:");
scanf("%d",&a2);
printf("Your fav movie is %s and it is released in year %d",a1,a2);
return 0;
}
