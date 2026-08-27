#include <iostream>
#include <string>
using namespace std;

class student
{
public:
int roll_no;
string s_name;
float marks;

void getdata()
{
cout<<"Enter your name: ";
cin.ignore();
getline(cin,s_name);

cout<<"Enter your roll no: ";
cin>>roll_no;

cout<<"Enter your marks: ";
cin>>marks;
}

void calculateresult()
{
if(marks>=33)
{
cout<<"Pass"<<endl;
}
else
{
cout<<"Fail"<<endl;
}
}

void display()
{
cout<<"Name: "<<s_name<<endl;
cout<<"Roll no: "<<roll_no<<endl;
cout<<"Marks: "<<marks<<endl;

calculateresult();
}
};

int main()
{
student s;
s.getdata();
s.display();

return 0;
}
