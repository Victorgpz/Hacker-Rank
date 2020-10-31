/*18.a write a program to find the largest and smallest 
number in a array and their location*/
#include<stdio.h>

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

    int big=arr[0],pos=0;
    int small=arr[0],pos1=0;
    for (int  i = 1; i < size; i++)
    {
        if (big<arr[i])
        {
            big=arr[i];
            pos=i;
        }
        if (small>arr[i])
        {
            small=arr[i];
            pos1=i;
        }
        
        
    }
    
    printf("biggest element is %d at position %d\n",big,pos);
    printf("smallet element is %d at position %d ",small,pos1);
    

}