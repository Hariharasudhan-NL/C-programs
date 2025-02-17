#include<stdio.h>;

int main(){

    char name[20];

    char address[50];

    long int ph_no;

    char email[20];

    char college[30];

    int  hsc;

    int sslc;

    char skills[30];

    char hobby[20];

    char certi[20];

    char project[20];



    printf("Enter your name:");

    scanf("%s",name);

    printf("enter your address:");

    scanf("%s",address);

    printf("enter your phn no:");

    scanf("%ld",&ph_no);

    printf("enter email address:");

    scanf("%s",&email);

    printf("enter your college name:");

    scanf("%s",college);

    printf("enter your hsc mark:");

    scanf("%d",hsc);

    printf("enter your sslc mark:");

    scanf("%d",sslc);

    printf("enter your skills:");

    scanf("%s",skills);

    printf("enter your day to day hobby:");

    scanf("%s",hobby);

    printf("enter your certificates (if any):");

    scanf("%s",certi);

    printf("enter your project name:");

    scanf("%s",project);





    printf("\t\t\t\t\t\t\t\t*************BIO DATA**************\n\n\n\n");

    printf("______________________________\n\n\n");

    printf("Name      :%s\n\n",name);

    printf("Address   :%s\n\n",address);

    printf("Phone Num :%ld\n\n",ph_no);

    printf("Email     :%s\n\n\n\n",email);

    printf("EDUCATIONAL QUALIFICATION....\n\n");

    printf("______________________________\n\n");

    printf("College   :%s\n\n",college);

    printf("HSC       :%d\n\n",hsc);

    printf("SSLC      :%d\n\n\n\n",sslc);

    printf("______________________________\n\n");

    printf("Skills     :%s\n\n",skills);

    printf("______________________________\n\n");

    printf("Certification :%s\n\n",skills);

    printf("Project       :%s\n\n",project);

    printf("Hobby          :%s\n\n",hobby);

    printf("*************************************/\n\n");





}




