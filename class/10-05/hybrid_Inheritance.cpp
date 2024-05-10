#include <iostream>
using namespace std;
class car
{
public:
    void display1()
    {
        cout << "\nCar Class";
    }
};

class fuelCar : public car
{
public:
    void display2()
    {
        cout << "\nFuel Car Class";
    }
};
class electricCar : public car
{
public:
    void display3()
    {
        cout << "\nElectric Car Class";
    }
};

class hybridCar : public fuelCar, public electricCar
{
public:
    void display4()
    {
        cout << "\nHybrid Car Class";
    }
};

int main()
{
    car c;
    fuelCar f;
    electricCar e;
    hybridCar h;
    h.display4();
    h.display3();
    h.display2();
    return 0;
}
