// Passing object as argument in function

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void getTime()
    {
        cout << "\nEnter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    void printTime()
    {
        cout << hour << " hours ";
        cout << minute << " minutes ";
        cout << second << " seconds ";
    }

    int addTime(Time x, Time y)
    {
        hour = x.hour + y.hour;
        minute = x.minute + y.minute;
        second = x.second + y.second;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    t3.addTime(t1, t2);
    cout << "\nafter adding two objects\n";
    t3.printTime();
    return 0;
}
