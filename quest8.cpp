#include<iostream>
using namespace std;
class Bank
{   
    private :
    float principal;
    float rate_of_interest;
    int year;

    public :
    Bank(float p, float r, int y)
    {
        principal = p;
        rate_of_interest = r;
        year = y;
        cout<<"All Details has been Created.... ";
    }
    int calculatesimple_interest()
    {
        return (principal * rate_of_interest * year) / 100.0;
    }
    void display()
    {
        cout<<"\n";
        cout<<"Principal "<<principal <<"\nRate of interest "<<rate_of_interest <<"\nYear "<<year <<endl;
    }
};
int main()
{

    Bank bank_instance(1000.0, 5.0, 5);

    // Display the details
    bank_instance.display();


    int simple_interest = bank_instance.calculatesimple_interest();
    cout << "Simple Interest: " << simple_interest << endl;

    return 0;
}