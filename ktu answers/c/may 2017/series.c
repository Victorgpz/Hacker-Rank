/*17.a sum of series*/
#include<stdio.h>

int fact(int);

int main(){
    int n;
    float sum=1;
    printf("enter the limit");
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        sum+=i/fact(i+1);
    }

    printf("sum is %d",&sum);
    
}

int fact(int a){
    int fact=1;
    for (int i = 1; i <=a; i++)
    {
        fact*=i;
    }
    return fact;
    
}