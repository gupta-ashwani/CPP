#include <iostream>
#include <algorithm>
using namespace std;

class Time
{
private:
    int hrs, min;

public:
    Time(int h, int m)
    {
        hrs = h;
        min = m;
    }
    int getMinutes()
    {
        int total_min = (hrs * 60) + min;
        return total_min;
    }
    void display()
    {
        cout << "Hours: " << hrs << endl;
        cout << "Minutes: " << min << endl;
    }
};

class Minute
{
    int min;

public:
    Minute()
    {
        min = 0;
    }
    void operator=(Time T)
    {
        min = T.getMinutes();
    }
    void display()
    {
        cout << "\nTotal Minutes: " << min << endl;
    }
};
int main()
{
    Time t(2, 30);
    t.display();
    Minute m1;
    m1.display();
    m1 = t;
    t.display();
    m1.display();
    return 0;
}
