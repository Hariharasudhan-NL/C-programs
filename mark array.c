#include<stdio.h>
int main(){
int marks[10];
int i, j, k=1;
for(i=0;i<10;i++){
    printf("enter the mark for %d student:",k);
    scanf("%d",&marks[i]);
    k++;
}
for(j=0;j<10;j++){
     printf("%d\n",marks[j]);
}

return 0;
}
