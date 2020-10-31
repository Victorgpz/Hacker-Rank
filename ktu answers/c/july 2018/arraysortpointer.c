//21.a 
#include <stdio.h>

void sort(int,int*);

int main(){
    int arr[100],size=0;
    printf("enter the no of elements");
    scanf("%d",&size);

    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    sort(size,arr);
    
}
void sort(int n, int* ptr) 
{ 
    int i, j, t; 
  
    // Sort the numbers using pointers 
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
  
    // print the numbers 
    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
} 