#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float assessmentValue,
		  propertyValue,
		  propertyTax,
		  currentRate,
		  seniorPropertyTax,
		  quarterlyTax,
		  seniorAssessmentValue;
		  
	cout << "Enter the value of your property: $";
	cin >> propertyValue;
	cout << "Enter the current tax rate: $";
	cin >> currentRate;	  
	
	assessmentValue = propertyValue * 60 / 100;
	seniorAssessmentValue = assessmentValue - 5000;
	seniorPropertyTax = currentRate * (seniorAssessmentValue / 100);
	quarterlyTax = seniorPropertyTax / 4;
	
	cout << "The property tax is: $" << propertyTax << endl;
	cout << "Thr senior property tax is: $" << seniorPropertyTax << endl;
	cout << "The quarterly tax bill will be as much as $" << quarterlyTax << endl;
	
	return 0;
}
