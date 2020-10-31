
// 18.a Write a c program to 
//find the transpose of a matrix

#include <stdio.h>

int main(){
    int arr[10][10];
    int transpose[10][10];

    //reading the elements from the user
    for (int  i = 0; i <10; i++)  //row
    {
        for (int j = 0; i <10; j++) //column
        {
            printf(" enter the %d,%d element");
            scanf("%d",&arr[i][j]);
        }
        
    }

    // matrix transpose

    for (int i = 10; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            transpose[j][i]=arr[i][j];
        }
        
    }

    //printing the matrix
    
    for (int i = 10; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d",transpose[i][j]);

        }
        
    }
    
}