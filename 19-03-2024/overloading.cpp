#include <iostream>
using namespace std;
// Multiplying two integer numbers
void multiply(int x, int y)
{
    cout << x * y << endl;
}
// Changing the  datatypes of arguments
void multiply(float x, double y)
{
    cout << x * y << endl;
}
// Adding one more argument
void multiply(float x, double y, int z)
{
    cout << x * y * z << endl;
}
int main()
{
    multiply(3, 5);
    multiply(2.5, 666.225);
    multiply(3.78, 79.3256, 17);
}
