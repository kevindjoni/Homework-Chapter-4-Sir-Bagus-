#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string month1;
	string month2;
	string month3;
	float rain1;
	float rain2;
	float rain3;
	float avg;
	float total;

	cout << "Enter the first month." << endl;
	cin >> month1;
	cout << "Enter the second month." << endl;
	cin >> month2;
	cout << "Enter the third month." << endl;
	cin >> month3;
	
	cout << "\nEnter the amount of rain that fell in the first month." 
		 << endl;
	cin >> rain1;
	cout << "Enter the amount of rain that fell in the second month."
		 << endl;
	cin >> rain2;	 
	cout << "Enter the amount of rain that fell in the third month."	 
		 << endl;
	cin >> rain3;
	
	total = rain1 + rain2 + rain3;
	avg = total / 3;
	 
	cout << fixed << setprecision(2) << showpoint << "The average rainfall for " << month1 << ", " << month2
		 << ", and " << month3 << " is " << avg << " inches."
		 << endl; 	 
	
	
	return 0;
}
