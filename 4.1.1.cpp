#include <iostream>
using namespace std;

class Calculater
{
	public:
	float add(float x, float y)
	{
	return x+y;
	}
	
	int add(int a , int b)
	{
	return a+b;
	}
	};

	int main()
	{
	Calculater cal;
	cout<<"The addition is:"<<cal.add(2,3)<<endl;
	cout<<"The addition is:"<<cal.add(3,6);
	return 0;
	}

