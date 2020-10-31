/*19.a selection sort using pointers*/

#include<stdio.h>

int selectionsort(int *,int);


int main()
{
	int *arr,n,i;
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",(arr+i));
	selectionsort(arr,n);
	printf("Sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\n",*(arr+i));
return 0;
}

int selectionsort(int *arr,int n)
{
	int i,j,temp;
for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+i);
				*(arr+i)=temp;
			}
		}
	return 0;
}