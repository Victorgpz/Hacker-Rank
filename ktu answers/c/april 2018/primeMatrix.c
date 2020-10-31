/*displaying prime numbers in amatrix*/
#include<stdio.h>

int prime(int);

int main(){
    int arr[10][10];
    int r,c;
    printf("enter row and column");
    scanf("%d,%d",r,c);


    //reading the elements from the user
    for (int  i = 0; i <r; i++)  //row
    {
        for (int j = 0; i <c; j++) //column
        {
            printf(" enter the %d,%d element");
            scanf("%d",&arr[i][j]);
        }
        
 
    }

     for (int  i = 0; i <r; i++)  //row
    {
        for (int j = 0; i <c; j++) //column
        {
            if (prime(arr[i][j]==0))
            {
                printf("%d\n",arr[i][j]);
            }
            
        }
        
 
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