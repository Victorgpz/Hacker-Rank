/* 3 matrix symmetric*/
#include<stdio.h>
int main(){
    int arr[10][10];
    int transpose[10][10];
    int r,c;
    bool flag=false;
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

    // matrix transpose

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i]=arr[i][j];
        }
        
    }

    if(r==c){
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(transpose[j][i]!=arr[i][j]){
                    flag=true;
                    break;
                }
                if (flag)
                {
                    break;
                }
                
            }
        
        }
        if (flag)
        {
            printf("the matrix is symmetric")
        }else{
        printf("the matrix isnt symmetric")
        }
    }
              
    }else{
        printf("the matrix isnt symmetric")
    }

  
}