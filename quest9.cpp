#include<iostream>
using namespace std;
class Bill
{
    private :
    string CustomerName;
    int UnitConsumed;

    public :
    void get() 
    {
        cout << "Enter customer name: ";
        cin >>CustomerName;

        cout << "Enter units consumed: ";
        cin >> UnitConsumed;
    }
    float calculateBill() 
    {
        float totalBill = 0.0;

        if (UnitConsumed <= 100) 
        {
            totalBill = UnitConsumed * 1.20;
        } 
        else if (UnitConsumed > 100 && UnitConsumed <= 200) 
        {
            totalBill = 100 * 1.20 + (UnitConsumed - 100) * 2.0;
        } 
        else 
        {
            // Handle additional tariff rules if needed
            cout << "Additional tariff rules not implemented for units over 200." << endl;
        }

        return totalBill;
    }
};
int main() 
{

    Bill electricityBill;

    
    electricityBill.get();


    float billAmount = electricityBill.calculateBill();
    cout << "Electricity Bill: Rs. " << billAmount << endl;

    return 0;
}