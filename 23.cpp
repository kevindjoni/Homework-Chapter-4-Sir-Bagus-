#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int option,
		radius,
		area,
		length,
		width,
		base,
		height;
	const int PI = 3.14159;
	
	
	cout << "Geometry Calculator" << endl;
	cout << "-------------------" << endl;
	cout << "1. Calculate the Area of a Circle" << endl;      
	cout << "2. Calculate the Area of a Rectangle" << endl;      
	cout << "3. Calculate the Area of a Triangle" << endl;     
	cout << "4. Quit" << endl;     
	cout << "Enter your choice (1-4): "; 
	cin >> option;
	
	if(option == 1)
	{
		cout << "Enter the radius of the circle:" << endl;
		cin >> radius;
		if(radius < 1)
		{
			cout << "Invalid input.";
		}
		area = PI * (radius * radius);
		cout << "The area of the circle is " << area;
	}
	else if(option == 2)
	{
		cout << "Enter the length of the rectangle: " << endl;
		cin >> length;
		cout << "Enter the width of the rectangle: " << endl;
		cin >> width;
		area = length * width;
		cout << "The area of the rectangle is " << area;
	}
	else if(option == 3)
	{
		cout << "Enter the base of the triangle: " << endl;
		cin >> base;
		cout << "Enter the height of the triangle: " << endl;
		cin >> height;
		area = base * height * 0.5;
		cout << "The area of the triangle is " << area;
	}	
	else
	{
		exit(0);
	}
	
	return 0;
}
