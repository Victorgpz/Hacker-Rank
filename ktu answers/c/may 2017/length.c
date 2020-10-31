/*6 length of a string using pointers*/
#include <stdio.h>
int main()
{
   char str1[50],*p;
   printf("\nEnter a string: ");
   scanf("%s",str1);
   p=str1;

   int count=0;

   while (*p !='\0')
   {
       count++;
       p++;
   }

   printf("the length of the string is %d",count);

}
   
