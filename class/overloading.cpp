/*W.A.P. for function overloading for add(), volume() with different
types of arguments and return types.*/
#include <iostream>
#include <algorithm>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
double add(double x, double y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}

int volume(int x, int y, int z)
{
    return x * y * z;
}

double volume(double x, double y, double z)
{
    return x * y * z;
}
int main()
{
    cout << add(2, 3) << endl;
    cout << add(2.6, 3.5) << endl;
    cout << add(2, 3, 8) << endl;
    cout << volume(2, 5, 9) << endl;
    cout << volume(2.5, 5.6, 9.9) << endl;
    return 0;
}
