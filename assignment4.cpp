#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
int empId;
string name;
float salary;
float bonus;
float totalsalary;

public:
Employee(): empId(0) , name("Unknown") , salary(0) , bonus(0) , totalsalary(0)

{
cout << "The Default Constructer is called" << endl;
}

Employee (int id, string n ,float s, float b)
{
empId=id;
name=n;
salary=s;
bonus=b;
calculatetotalsalary();
cout << "The Parameterized Constructor is called" << endl;
}

void calculatetotalsalary()
{
totalsalary = salary+bonus;
}

void display()
{
cout << "----EMPLOYEE DETAILS----" << endl;
cout << "Employee Id:" << empId << endl;
cout << "Employee Name:" << name << endl;
cout << "Employee salary:" << salary << endl;
cout << "Employee bonus:" << bonus << endl;
cout << "Employee Total Salary:" << totalsalary << endl;
}
};

int main()
{

Employee e1;
e1.display();

Employee e2(123 , "John Doe" , 50000 , 5000);
e2.display();
return 0;
}

