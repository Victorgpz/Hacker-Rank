#include<iostream>

using namespace std;

class Student
{
    public:
        int rollno;
        int age;
        char name[20];

    void getStudentDetails(){
        cout<<"enter roll number :";
        cin>>rollno;

        cout<<"Enter age";
        cin>>age;

        cout<<"Enter your name";
        cin>>name;
    }
};

class StudentDetails : public Student {
public:

   void printInfo() {
       cout << "Your Roll is :" << rollno;
       cout << "\nYour Name is :" << age;
       cout << "\nCollege Name is :" << name;
   }
};

int main(){
    StudentDetails  student;
    student.getStudentDetails();
    student.printInfo();
    return 0;
}

