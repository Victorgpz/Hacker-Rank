//17.a
#include<stdio.h>
#include<math.h>

int fact(int);

int main(){
    double num,x,sum;
    printf("enter the limit");
    scanf("%d",num);
    printf("enter the value of x");
    scanf("%d",&x);

    for (int i = 3; i < num; i+=2)
    {
        sum+=pow(x,i)/fact(i);
    }

    printf("the series sum is %d",x-sum);
    
}
int fact(int a){
    int fact=1;
    for (int i = 1; i <=a; i++)
    {
        fact*=i;
    }
    return fact;
    
}