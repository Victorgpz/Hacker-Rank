/* 5 concatenation without function*/
#include <stdio.h>
int main()
{
   char str1[50], str2[50],str3[50];
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);
   int i = 0, j = 0; 
   while (str1[i] != '\0') { 
        str3[j] = str1[i]; 
        i++; 
        j++; 
    } 
  
    // Insert the second string in the new string 
    i = 0; 
    while (str2[i] != '\0') { 
        str3[j] = str2[i]; 
        i++; 
        j++; 
    } 
    str3[j] = '\0'; 
   // Print the concatenated string 
  printf("\nConcatenated string: %s", str3);
  
}