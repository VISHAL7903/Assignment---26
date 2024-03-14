#include<iostream>
using namespace std;
class Time
{
    private :
    int h;
    int m; 
    int s;

    public :
    void setTime(int hour, int minute, int second)
    {
        h =  hour;
        m = minute;
        s = second;
    }
    void showTime()
    {
        cout<<"Time "<< h <<" h "<< m <<" m " << s <<" s "<<endl;
    }
    void normalize()
    {
        m = m + s / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
    }
    Time add(Time other)
    {
        Time result;
        result.s = s+other.s;
        result.m = m+other.m;
        result.h = h+other.h;

        result.normalize();
        return result;
    }
};
int main()
{
    Time time1, time2, result;
    time1.setTime(10,70,45);
    cout<<" Time 1";
    time1.showTime();

    time2.setTime(4,20,50);
    cout<<" Time 2";
    time2.showTime();
    result = time1.add(time2);
    cout<<"Sum of Time 1 and Time 2 ";
    result.showTime();

    return 0;
}