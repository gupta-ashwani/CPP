#include <iostream>
using namespace std;

class sample
{
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a + b;
        this->b = a - b;
    }
    void output()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    sample s1;
    int a = 5, b = 8;
    s1.input(a, b);
    s1.output();
    return 0;
}
