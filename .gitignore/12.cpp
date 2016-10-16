#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float celcius,
		  fahrenheit;
		  
	cout << "Please enter the temperature in celcius: \n";
	cin >> celcius;
	
	fahrenheit = ((9 * celcius) / 5) + 32;	  
	
	cout << "The temperature in fahrenheit is " << fahrenheit << " degree celcius.\n";
	
	return 0;
}
