//Passing pointer to an object
#include <iostream>
using namespace std;

class university
{
protected:
    string name;
    int e_no;
    long long phone_no;
    string grade;

public:
    void Name()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
    void enroll_no()
    {
        cout << "Enter Enrollment Number: ";
        cin >> e_no;
    }
    void mobile_no()
    {
        cout << "Enter Phone Number: ";
        cin >> phone_no;
    }
    void Grade()
    {
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void display()
    {
        cout << name << "\t" << e_no << "\t" << phone_no << "\t" << grade << endl;
    }
};

class SITAICS : public university
{
public:
    void Display()
    {
        cout << "SITAICS";
    }
};
class SISSP : public university
{
    void Display()
    {
        cout << "SISSP";
    }
};

class SISDSS : public university
{
    void Display()
    {
        cout << "SISDSS";
    }
};
int main()
{
    university *uni;
    SITAICS s1;
    uni = &s1;
    uni->Name();
    return 0;
}
