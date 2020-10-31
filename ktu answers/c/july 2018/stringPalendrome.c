//19.a 
#include <stdio.h>
#include <string.h>

int main()
{
   char str[50];
   printf("\nEnter a string: ");
   scanf("%s",str);

   int l=0,flag=0;
   int h=strlen(str)-1;

   while (h>l)
   { 
       if (str[l++] != str[h--]) 
        { 
            flag=1; 
            break; 
        }     
   }
   if (flag==0)
   {
        printf("%s is a Palindrome", str);
   }else{
        printf("%s is Not Palindrome", str);
   }
   
}