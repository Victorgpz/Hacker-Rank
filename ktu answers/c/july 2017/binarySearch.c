/* 22.a */
#include <stdio.h>

int bubbleSort(int[],int);

int main(){
    int arr[100];
    int size=0,x=0;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the sorted elements");

    printf("enter the value to be searched");
    scanf("%d",&x);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=bubbleSort(arr,0,size,x);
    if (result==-1)
    {
        printf("elements not present");
    }else{
        printf("element found at %d",result);
    }
    
    
}

int bubbleSort(int arr[],int r,int l,int x){
     if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x){ 
            return mid; 
        }

        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x); 
        }

        return binarySearch(arr, mid + 1, r, x); 
    } 
  
   
    return -1; 

}