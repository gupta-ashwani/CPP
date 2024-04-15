//operator overloading
#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void disp()
    {
        cout << "\nreal value = " << real
             << endl;
        cout << "\nimaginary value = " << img
             << endl;
    }
    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex tmp;
    tmp.real = c1.real + c2.real;
    tmp.img = c1.img + c2.img;
    return tmp;
}

int main()
{
    complex c1(4, 6), c2(7, 9);
    complex c3;
    c3 = c1 + c2;
    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}
