#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
        {
            throw x;
        }
        else if (x == 0)
        {
            throw 'x';
        }
        else if (x == -1)
        {
            throw 5.14;
        }
    }
    catch (int i)
    {
        cout << "\nCaugth an integer";
    }
    catch (char ch)
    {
        cout << "\nCaugth an character";
    }
    catch (double i)
    {
        cout << "\nCaugth an double";
    }
}

int main()
{
    test(1);
    test(0);
    test(-1);
    return 0;
}
