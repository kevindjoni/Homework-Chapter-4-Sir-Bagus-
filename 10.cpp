#include<iostream>
using namespace std;

int main()
{
	int month,
		year;
	
	cout << "Enter a month (1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;
	
	if(year % 100 == 0 && year % 400 == 0)
	{
		cout << "It is a leap year.";  
	}
	else if(year % 100 != 0 && year % 400 == 0)
	{
		cout << "It is a leap year.";
	}
	else
	{
		cout << "It is not a leap year.";
	}
	
	if(month == 2)
	{
		cout << "28 days";
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 
		    || month == 8 || month == 10 || month == 12)
	{
		cout << "31 days";
	}	    
	else
	{
		cout << "30 days";
	}
	
	return 0;
}

