#include<stdio.h>
#include<string.h>
int main(){
   char ch[20];
   char ch1[20];
   puts("enter the word to check:");
   gets(ch);
   strcpy(ch1,ch);
   strrev(ch1);
   puts(ch);
   puts(ch1);
   if(strcmp(ch,ch1)==0){
    printf("The given word is a palindrome...");
   }
   else{
       printf("The given word is not a palindrome...");
   }
   return 0;
}
