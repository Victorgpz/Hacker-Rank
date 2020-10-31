//10. c program to check if a character is present
#include <stdio.h>
int main()
{
   char str1[50], str2;
   printf("\nEnter a string: ");
   scanf("%s",str1);
   printf("enter the character to be searched");
   scanf("%s",str2);

   for (int i = 0; str1[i]!='\0'; i++)
   {
       if (str[i]==str2)
       {
           printf("element found at position %d",i);
           break;
       }
       
   }
   