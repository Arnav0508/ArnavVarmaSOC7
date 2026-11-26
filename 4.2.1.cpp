#include <iostream>
#include <string>
using namespace std;
class Person{
private:
string name;
public:
void read()
{
cout<<"The person is reading a book"<<endl;
}
};
class Student:public Person
{
private:
int roll_no;
public:
void read()
{
cout<<"The student is reading";
}
};
int main()
{
Person p;
p.read();
return 0;
}
