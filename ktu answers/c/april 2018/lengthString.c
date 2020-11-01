/* 18.b length of a string using a resursive fn*/

#include<stdio.h>
int len(char* str);

int main(){
   char str1[50]
   printf("\nEnter first string: ");
   scanf("%s",str1);

   int length=len(str1);

}

int len(char* str)     
{ 

    if (*str == '\0'){ //check if we reach at the end of the string 
        return 0; 
    }
    else{
        return 1 + len(str + 1);  
    }
} 
