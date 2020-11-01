//21.a sum of digits using recursion
#include<stdio.h>

int Sum(int n)  
{  
    if (n == 0)  
    return 0;  
    return (n % 10 + Sum(n / 10));  
}  
  

int main()  
{  
    int num;
    printf("enter a number");
    scanf("%d",&num);

    printf("sum of digits is %d",Sum(num));
}  