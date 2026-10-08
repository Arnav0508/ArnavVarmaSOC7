#include <iostream>
using namespace std;

class Rectangle
{
	private:
	float length , breadth;
	public:
	void getData()
	{
		cout << "Enter the length of the Rectangle: " ;
		cin >> length;

		cout << "Enter the breadth of the Rectangle: ";
		cin >> breadth;
	}
	float area();
	float perimeter();

	void display()
	{
		cout << "Area of the Rectangle is: " << area() << endl;
		cout <<" Perimeter of the Rectangle is: " << perimeter() << endl;

	}

};

float Rectangle::area()
{
	return length*breadth;
}

float Rectangle::perimeter()
{
	return 2*(length+breadth);
}

int main ()
{
	Rectangle r;
 	r.getData();
	r.display();
	return 0;
}