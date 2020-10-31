//20.a 
#include<stdio.h>

int prime(int);

int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (prime(num)==0)
    {
        printf("%d is a prime no");
    }else{
        printf("%d is not a prime no");
    }
    

}

int prime(int num){
 int flag=0; 
 for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag;   
}