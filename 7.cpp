#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int seconds;
	float minutes,
		  hours,
		  days;
	
	cout << "Enter any number of seconds: " << endl;
	cin >> seconds;
	
	minutes = seconds / 60;
	hours = seconds / 3600;
	days = seconds / 86400;
	
	if(seconds >= 60 && seconds < 3600)
	{
		cout << fixed << setprecision(1) << showpoint 
			 << minutes << " Minutes.";
	}
	else if(seconds >= 3600 && seconds < 86400)
	{
		cout << fixed << setprecision(1) << showpoint 
			 << hours << " Hours.";
	}
	else if(seconds >= 86400)
	{
		cout << fixed << setprecision(1) << showpoint 
			 << days << " Day(s).";
	}
	
	return 0;
}
