#include <stdio.h>

int main(){
    int st_range, end_range, no;
    printf("Enter st_range: ");
    scanf("%d", &st_range);
    printf("Enter end_range: ");
    scanf("%d", &end_range);
    printf("Enter no: ");
    scanf("%d", &no);
    if (no>=st_range){
        if ( no<=end_range){
            printf("In range");
        }
    }
    else{
        printf("Out of range");
    }

}
