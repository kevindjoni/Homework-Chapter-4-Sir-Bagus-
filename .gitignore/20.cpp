#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	float diameter,
		  radius, 
		  area;
	const int pi = 3.14159;
	int slices;
	const float sliceArea = 14.125;
	
	cout << "Enter the pizza diameter in inches: "; 
	cin >> diameter;
	
	radius = diameter / 2;
	area = pi * pow(radius, 2);
	slices = area / sliceArea;
	
	cout << slices << " slices of pizza may be taken." << endl;
	
	return 0;
}
