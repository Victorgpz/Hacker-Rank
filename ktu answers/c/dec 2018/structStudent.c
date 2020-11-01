//18.a 

#include<stdio.h>

struct student
{
    char name[20];
    int rollNo;
    char grade;
    float marks;
};


int main(){
    struct student students[100],temp[100];
    int size;
    char name[20];
    printf("enter the no of students");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf(" enter the name of %d student",size+1);
        scanf("%s",&students[i].name);
        printf(" enter the roll no of %d student",size+1);
        scanf("%d",&students[i].rollNo);
        printf(" enter the grade of %d student",size+1);
        scanf("%s",&students[i].grade);
        printf(" enter the marks of %d student",size+1);
        scanf("%f",&students[i].marks);        

    }

    printf("enter the name of the student to search");
    scanf("%s",name);

    for (int i = 0; i < size; i++)
    {
        if (students[i].name==name)
        {
           printf("name : %s\n roll no : %d\n grade : %s\nmark :%f\n",
           students[i].name,students[i].rollNo,students[i].grade,students[i].marks);
           break;
        }else
        {
            printf("student %s not found",name);
        }
        
        
    }
    

}
