/*7. Define classes for following data members and member functions.
   a. Student
   i. Data members Roll Number, Name, Branch, Total marks
   ii. Member functions To get the data, To display the data

   b. Bank account
   i. Data members Name of the depositor, Account number, Type of account,
    Balance amount in the account
   ii. Member functions To assign initial values, To deposit an amount,
   To withdraw an amount after checking the balance, To display name and balance*/

#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    int roll_no;
    string name, branch;
    float total_marks;

public:
    void setdata(int r, string n, string b, float t)
    {
        roll_no = r;
        name = n;
        branch = b;
        total_marks = t;
    }
    void display()
    {
        cout << roll_no << "\t" << name << "\t" << branch << "\t" << total_marks << endl;
    }
};

class Bank_account
{
    string depositer, type;
    double account_no;
    float balance;

public:
    void setdata(string d, double a, string t)
    {
        depositer = d;
        account_no = a;
        type = t;
        // balance = b;
    }
    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << balance << endl;
    }
    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
            cout << "Insufficient balance!\n";
    }
    void display()
    {
        cout << depositer << "\t" << balance << endl;
    }
} b1;
int main()
{
    student s1;
    s1.setdata(49, "Ash G", "CSE", 99);
    s1.display();
    b1.setdata("ASH", 566281000011, "Saving");
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}
