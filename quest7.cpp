#include<iostream>
using namespace std;
class Box
{
    private :
    int length, breadth, height;

    public :
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
        cout<<"The Box has been created........\n";
    }
    int calculateVolume()
    {
        return length*breadth*height;
    }
    void display()
    {
        cout<<"\n Dimension of the Box";
        cout<<"Length "<<length <<"Breadth "<<breadth <<"Height "<<height <<endl; 
    }
};
int main()
{
    Box myBox(12,15,22);
    myBox.calculateVolume();
    cout<<"Volume of the Box "<<myBox.calculateVolume();
    return 0;
}