/*19.a write a program to find the largest and smallest 
number in a array using function*/
#include<stdio.h>

int fun(int arr[],int size){
    int big=arr[0];
    int small=arr[0];
    for (int  i = 1; i < size; i++)
    {
        if (big<arr[i])
        {
            big=arr[i];
        }
        if (small>arr[i])
        {
            small=arr[i];
        }
        
        
    }
    printf("biggest element is %d\n",big);
    printf("smallet element is %d  ",small);
}

int main(){
    int arr[100];
    int size;

    printf("enter the size of the array");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element",i);
        scanf("%d",&arr[i]);
    }

    fun(arr,size);

   
    

}