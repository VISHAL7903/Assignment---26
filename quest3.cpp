#include<iostream>
using namespace std;
class Cube
{
    private :
    int side;

    public :
    Cube(int s)
    {
        side = s;
    }
    int calculatevolume()
    {
        return side * side * side;
    }
};
int main()
{
    Cube myCube(4);
    cout<<"Volume of the cube is "<<myCube.calculatevolume()<<endl;
    return 0;
}