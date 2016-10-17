#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float weight,
		  height,
		  BMI;
		  
	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;
	cout << "Enter your height in inches: " << endl;
	cin >> height;
	
	BMI = weight * 703 / (height * height);
	cout << fixed << setprecision(2) << showpoint 
		 << "Your BMI is " << BMI << endl;
	
	if(BMI < 18.5)
	{
		cout << "You are underweight.";
	}
	else if(BMI > 25)
	{
		cout << "You are overweight.";
	}
	else
	{
		cout << "You have an optimal weight.";
	}
	
	return 0;
}
