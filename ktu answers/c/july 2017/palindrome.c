/* 17.a Write a program to test whether a given number 
is palindrome or not. */

#include<stdio.h>

int main(){
    int num,rev,copy,remainder;
    printf("enter the number");
    scanf("%d",&num);
    copy=num;

    while (num!=0)
    {
        remainder=num%10;
        rev=rev*10+10;
        num=num/10;
        
    }

    if (rev==copy)
    {
        printf("%d is a palindrome",num);
    }else{
        printf("%d is not a palindrome",num);
    }
    
    

}