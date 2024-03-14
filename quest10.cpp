#include<iostream>
using namespace std;

class StaticCount 
{
private:
    static int count;

public:
    static void incrementCount() 
    {
        count++;
    }

    static int getCount() 
    {
        return count;
    }
};


int StaticCount::count = 0;

int main() 
{
   
    StaticCount::incrementCount();
    StaticCount::incrementCount();
    StaticCount::incrementCount();

    
    cout << "Static variable count: " << StaticCount::getCount() << endl;

    return 0;
}
