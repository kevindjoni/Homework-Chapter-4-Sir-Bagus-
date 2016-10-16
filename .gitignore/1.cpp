#include <iostream>
using namespace std;

int main()
{
	double gallon;
	double distance;
	double MPG; //Miles Per Gallon
	
	MPG = distance / gallon;
	
	cout << "Enter the number of gallon your car can hold: ";
	cin >> gallon;
	cout << "What is the number of miles it can be driven on a full tank: ";
	cin >> distance;
	
	MPG = distance / gallon;
	cout << "Therefore, your car can drive " << MPG << " miles per gallon of gas";
	
	return 0;
}
