#include <stdio.h>
float SI(float principal,float rate,float time){
     return (principal*rate*time)/100;

  }

int main() {
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time (in years): ");
    scanf("%f",&time);
    printf("Simple Interest = %f\n",SI(principal,rate,time));
    return 0;
}
