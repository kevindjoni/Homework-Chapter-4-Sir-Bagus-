#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float age1;
	float age2;
	float age3;
	float age4;
	float age5;
	float total;
	float avg;
	
	total = age1 + age2 + age3
		  + age4 + age5;
		  
	avg = total / 5;		 
	
	cout << fixed << setprecision(1) << showpoint << "Enter the first age: " << endl;
	cin >> age1;
	cout << fixed << setprecision(1) << showpoint << "Enter the second age: " << endl;
	cin >> age2;
	cout << fixed << setprecision(1) << showpoint << "Enter the third age: " << endl;
	cin >> age3;
	cout << fixed << setprecision(1) << showpoint << "Enter the fourth age: " << endl;
	cin >> age4;
	cout << fixed << setprecision(1) << showpoint << "Enter the fifth age: " << endl;
	cin >> age5;
	
	total = age1 + age2 + age3
		  + age4 + age5; 
	avg = total / 5;
	cout << fixed << setprecision(1) << showpoint << "The average of the 5 ages is: "
		 << avg << endl;
	
	return 0;
}
