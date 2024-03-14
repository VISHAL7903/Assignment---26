#include<iostream>
using namespace std;
class Counter
{
    private :
    int count;
    public :
    Counter()
    {
        count = 0;
    }
    void inc_count()
    {
        count ++;
    }
    int get_Count()
    {
        return count;
    }
};
int main()
{
    Counter c1;
    cout<<"\nBefore calling Counter function, Count = ";
    cout<<c1.get_Count();

    c1.inc_count();
    cout<<"\n\nAter calling Counter function, Count = ";
    cout<<c1.get_Count();
    cout<<"\n";
    return 0;
}