#include <iostream>
using namespace std;

class abc
{
public:
    int x = 50;
};

int main()
{
    abc a1;
    abc *ptr;
    ptr = &a1;
    cout << a1.x << endl;
    cout << ptr->x;
    return 0;
}
