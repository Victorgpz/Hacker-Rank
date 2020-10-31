//24.a 
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollNo;
};


int main(){
    struct student students[100],temp[100];
    int size;
    printf("enter the no of students");
    scanf("%d",&size)

    for (int i = 0; i < size; i++)
    {
        printf(" enter the name and rollNo of %d student",size+1);
        scanf("%s,%d",&students[i].name,&students[i].rollNo);
    }

    //sorting
    
    for (int i = 0; i < size-1; i++)
    {
        if (strcmp(students[i].name>students[i+1])>0)
        {
          temp[i]=students[i];
          students[i]=students[i+1];
          students[i+1]=temp[i];
        }
        
    }

    //printing
    printf("roll no\t name")
    for (int  i = 0; i < size; i++)
    {
        printf("%d\t%d",students[i].rollNo,students[i].name);
    }
       
}