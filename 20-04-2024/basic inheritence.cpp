//Inheriting properties of university to Schools. 
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
};
class SISSP : public university
{
};

class SISDSS : public university
{
};
int main()
{
    SITAICS s1;
    SISSP s2;
    SISDSS s3;
    s1.Name();
    s1.enroll_no();
    s1.mobile_no();
    s1.Grade();
    s2.Name();
    s2.enroll_no();
    s2.mobile_no();
    s2.Grade();
    s3.Name();
    s3.enroll_no();
    s3.mobile_no();
    s3.Grade();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
