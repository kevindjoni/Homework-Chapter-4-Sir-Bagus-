#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float assessmentValue,
		  propertyTax,
		  propertyValue;
		  
	cout << "Enter your property value: $";
	cin >> propertyValue;
	
	assessmentValue = propertyValue * 60 / 100;
	propertyTax = 0.75 * (assessmentValue / 100);
	
	cout << "The assessment value is: $" << assessmentValue << endl;
	cout << "The property tax is: $" << propertyTax << endl;
	
	return 0;	  
}
