/*23.a program to count consonants digit special characterand vowels */
#include <stdio.h>

int main() {
   unsigned short vowels = 0,consonants=0,digits=0,special=0;
   char c, file[50];
   FILE *fp;

   printf("FILENAME: ");
   scanf("%[^\n]", file);

   fp = fopen(file, "r"); // 'r' opens the file in read mode

   printf("READING THE CONTENTS OF THE FILE [ %s ]\n", file);

   while((c = fgetc(fp)) != EOF) {
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
   	  	vowels++;
   	  }else if((str[i]>=’a’&& str[i]<=’z’) || (str[i]>=’A’&& str[i]<=’Z’)){
        consonants++;
        }else if(str[i]>=’0′ && str[i]<=’9′){
            digits++;
        }else{
            special++
        }

     }

   printf("\n");

    printf("NUMBER OF VOWELS: %d \n", vowels);
    printf("NUMBER OF DIGITS: %d \n", digits);
    printf("NUMBER OF CONSONANTS: %d \n", consonants);
    printf("NUMBER OF SPECIAL CHARACTER : %d",special);

   fclose(fp);
   return 0;
}