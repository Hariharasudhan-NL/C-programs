#include<stdio.h>;
int main(){
    char name[20];
    long int ph_no;
    char email[20];
    int hsc;
    int sslc;
    char skills[50];
    char hobby[20];
    char certi[20];
    char project[20];

    printf("Enter your name:");
    scanf("%s",name);
    printf("enter your phn no:");
    scanf("%ld",&ph_no);
    printf("enter email address:");
    scanf("%s",&email);
    printf("enter your hsc mark:");
    scanf("%d",&hsc);
    printf("enter your sslc mark:");
    scanf("%d",&sslc);
    printf("enter your day to day hobby:");
    scanf("%s",hobby);
    printf("enter your certificates (if any):");
    scanf("%s",certi);
    printf("enter your project name:");
    scanf("%s",project);


    printf("\t\t\t\t\t\t\t\t*************BIO DATA**************\n\n\n\n");
    printf("______________________________\n\n\n");
    printf("Name      :%s\n\n",name);
    printf("Address   :47,Amman nagar,Tiruppur-641687\n");
    printf("Phone Num :%ld\n\n",ph_no);
    printf("Email     :%s\n\n\n\n",email);
    printf("EDUCATIONAL QUALIFICATION....\n\n");
    printf("______________________________\n\n");
    printf("College   :Rathinam technical campus...\n");
    printf("HSC       :%d\n\n",hsc);
    printf("SSLC      :%d\n\n\n\n",sslc);
    printf("______________________________\n\n");
    printf("Skills     :good at programming...\n");
    printf("           :gain new things joyfully....\n");
    printf("______________________________\n\n");
    printf("Certification :%s\n\n",skills);
    printf("Project       :%s\n\n",project);
    printf("Hobby          :%s\n\n",hobby);
    printf("*************************************/\n\n");


}
