/*23.a c program to merge the content of 
two files into a new file */

#include <stdio.h> 

int main(){
   FILE *fp1 = fopen("first.txt", "r"); 
   FILE *fp2 = fopen("second.txt", "r"); 
  
   // Open file to store the result 
   FILE *fp3 = fopen("third.txt", "w"); 
   char c; 
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { 
         puts("Could not open files"); 
         exit(0); 
   } 
  
   // Copy contents of first file to third.txt 
   while ((c = fgetc(fp1)) != EOF){
      fputc(c, fp3); 
   }
  
   // Copy contents of second file to third.txt 
   while ((c = fgetc(fp2)) != EOF){
      fputc(c, fp3); 
   }
  
   printf("Merged first.txt and second.txt into third.txt"); 
  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
}