#include<iostream>
using namespace std;
class Student
{
    private :
    int marks;
    char grade;

    public :
    Student(int m, char g)
    {
        marks = m;
        grade = g;
    }
    void show()
    {
        cout<<"\n Marks = "<< marks <<endl;
        cout<<"\n Grade = "<< grade <<endl;
    }
};
int main()
{
    Student s1(730,'A'),s2(650,'B');
    cout<<"Record of student 1 ::......"<<endl;

    s1.show();
    cout<<"Record of student 2 ::......"<<endl;
    s2.show();
    return 0;
}