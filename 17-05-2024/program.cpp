/*Create a class student having private members marks, name and 
public members rollno, getdata(), printdata(). Demonstrate concept
 of pointer to class members for array of 3 objects*/

#include <iostream>
using namespace std;

class student
{
    float marks;
    string name;

public:
    double roll_no;
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter roll-no: ";
        cin >> roll_no;
    }
    void printdata()
    {
        cout << name << "\t"
             << roll_no << "\t"
             << marks << endl;
    }
};

int main()
{
    student s1[3];
    student *ptr = s1;
    for (int i = 0; i < 3; i++)
    {
        ptr->getdata();
        ptr++;
    }
    ptr = s1;
    for (int i = 0; i < 3; i++)
    {
        ptr->printdata();
        ptr++;
    }
    return 0;
}
