/* 22.a replacing every lower case letter with upper case and copying
it to a new file*/
#include<stdio.h>
int main()
{
     FILE *fp1 = fopen("first.txt", "r"); 
     FILE *fp2 = fopen("second.txt", "r"); 
     char ch;

     if (fp1 == NULL || fp2 == NULL ) 
    { 
         puts("Could not open files"); 
         exit(0); 
    } 
     
      while((ch=fgetc(fp1))!=EOF)
      {
            ch = toupper(ch);
            fputc(ch,fp2);
      }
      printf("\nFile successfully copied..");
      return 0;
}

