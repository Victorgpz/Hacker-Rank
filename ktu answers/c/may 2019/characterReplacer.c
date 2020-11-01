//18.b
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str[100];  
    char ch,re;  
    printf("enter the string");
    scanf("%s",str);
    printf("enter the character that need to be replaced");
    scanf("%c",ch);
    printf("enter the character to replac");
    scanf("%c",re); 
    
    for(int i = 0; i < strlen(str); i++){  
        if(str[i] == ch)  
            str[i] = re;  
    }  
      
    printf("String after replacing %c with given %c: \n",ch,re);  
    printf("%s", str);  
          
  
}  