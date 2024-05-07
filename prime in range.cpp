//Printing all the prime numbers in given range

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x)
{
    int rem, flag = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            return false;
        }
    }
    return true;
}

void printPrime(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        if (isPrime(i))
        {
            cout << i << "\n";
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter numbers: ";
    cin >> a >> b;
    printPrime(a, b);
    return 0;
}
