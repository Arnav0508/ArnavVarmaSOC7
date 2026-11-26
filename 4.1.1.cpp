#include <iostream>
#include <string>
using namespace std;
class Calculator{
public:
int add(int x, int y)
{
return x + y;
}
float add(float a, float b)
{
return a + b;
}
};
int main()
{
Calculator cal;
cout<<"The addition is: "<<cal.add(2,3)<<endl;
cout<<"The addition is: "<<cal.add(3,6)<<endl;
return 0;
}
