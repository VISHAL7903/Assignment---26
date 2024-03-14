#include<iostream>
using namespace std;
class Date
{
    private :
    int dd, mm, yy;

    public :
    Date()
    {
        dd = 31;
        mm = 12;
        yy = 2024;
        cout<<"\n Date Object has been created..........\n";
    }
    void display()
    {
        cout <<"\n The Entered Date is::";
        cout << dd << "-" << mm << "-" << yy <<"\n";
    }
};
int main()
{
    Date date1;
    date1.display();
    return 0;
}