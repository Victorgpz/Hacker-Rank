/* 3. largest amoung 3 no using conditional 
operator */

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d,%d,%d",&a,&b,&c);

    int big=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("biggest no is %d",big);
}