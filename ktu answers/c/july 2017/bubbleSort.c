
/*19.a Write a c program to sort a set of numbers using 
bubble sort */

#include <stdio.h>

int main(){
    int arr[100];
    int size;

    printf("enter the size of the array");
    scanf("%d",&size);

    //read the numbers from the user

    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element",i);
        scanf("%d",&arr[i]);
    }
    
    //bubble sort 

    for (int i = 0; i < size-1; i++)
    {
       for (int j = 0; j < size-1-i; j++)
       {
         if (arr[j]>arr[j+1])
         {
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
         
       }
       
    }

    //print the array
    printf("sorted array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    

}