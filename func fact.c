#include<stdio.h>
int fact(int a){
    int fa=1;
for(int b=1;b<=a;b++){
        fa*=b;

}
return fa;
}
int main(){
    int a;
printf("enter the factorial num   :");
scanf("%d",&a);
fact(a);
printf("%d",fact(a) );
}
