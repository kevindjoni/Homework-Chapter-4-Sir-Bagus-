#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const float YEN_PER_DOLLAR = 98.93;
	const float EUROS_PER_DOLLAR = 0.74;
	float dollar;
	float dollarToYen;
	float dollarToEuros;  
	
	cout << fixed << setprecision(2) << showpoint 
		 <<"Insert amount of US Dollar: $" << dollar << endl;
	cin >> dollar;
	
	dollarToYen = dollar * YEN_PER_DOLLAR;
	dollarToEuros = dollar * EUROS_PER_DOLLAR;
	
	cout << "In Yen: " << dollarToYen << endl;
	cout << "In Euros: " << dollarToEuros << endl;
	
	return 0;
}
