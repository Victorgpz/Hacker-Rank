#include<stdio.h>
 
int main()
{
    int a[50];
    int n,i,large,secondLarge;
    clrscr();
     
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
     
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    large=secondLarge=a[0];
     
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            secondLarge=large;
            large=a[i];
        }
        else if(secondLarge<a[i] && a[i]!=large)
        {
            secondLarge=a[i];
        }
    }
     
    printf("\n The Second Largest Element in the Array: %d", secondLarge);
   
}