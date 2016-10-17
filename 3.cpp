#include<iostream>
using namespace std;

int main()
{
	int month,
		day,
		year;
	
	cout << "Enter a month." << endl;
	cin >> month;
	cout << "Enter a day." << endl;
	cin >> day;
	cout << "Enter a year(in 2 digits)." << endl;
	cin >> year;
	
	if(year == month * day)
	{
		cout << "The date is magic.";
	}
	else
	{
		cout << "The date is not magic.";
	}
	
	return 0;
}
