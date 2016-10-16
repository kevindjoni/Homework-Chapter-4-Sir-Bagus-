#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int classA = 15;
	int	classB = 12;
	int	classC = 9;
	int	inputA;
	int	inputB;
	int	inputC;
	float incomeA;
	float incomeB;
	float incomeC;
	float total;
	
	cout << "How many tickets of Class A are sold?" << endl;
	cin >> inputA;
	cout << "How many tickets of Class B are sold?" << endl;
	cin >> inputB;
	cout << "How many tickets of Class C are sold?" << endl;
	cin >> inputC;
	
	incomeA = classA * inputA;
	incomeB = classB * inputB;
	incomeC = classC * inputC;
	cout << fixed << setprecision(2) << showpoint << "From the sale of Class A tickets, you get a total of: $" 
		 << incomeA << endl;
	cout << fixed << setprecision(2) << showpoint << "From the sale of Class B tickets, you get a total of: $" 
		 << incomeB << endl;
	cout << fixed << setprecision(2) << showpoint << "From the sale of Class C tickets, you get a total of: $" 
		 << incomeC << endl;	 	
		 
	total = incomeA + incomeB + incomeC;	 
	cout << fixed << setprecision(2) << showpoint << "The total income from the ticket sales is $" << total 
		 << endl;	  
	
	return 0;
}
