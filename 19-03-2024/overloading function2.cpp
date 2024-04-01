// User input name and enrollment number and
// print length using overloading function
#include <iostream>
using namespace std;
void length(string name)
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length of name is " << count << endl;
}
void length(long long e_no)
{
    int count = 0;
    while (e_no != 0)
    {
        count++;
        e_no /= 10;
    }
    cout << "Length of enrollment number is " << count << endl;
}
int main()
{
    long long e_no;
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter enrollment number: ";
    cin >> e_no;
    length(name);
    length(e_no);
    return 0;
}
