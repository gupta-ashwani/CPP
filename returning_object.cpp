// Passing object as argument in function and returning object.

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

    Time addTime(Time t1, Time t2)
    {
        Time t4;
        t4.hour = t1.hour + t2.hour;
        t4.minute = t1.minute + t2.minute;
        t4.second = t1.second + t2.second;
        return t4;
    }
};

int main()
{
    Time t1, t2, t3, ans;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    ans = t3.addTime(t1, t2);
    cout << "\nafter adding two objects\n";
    ans.printTime();
    return 0;
}
