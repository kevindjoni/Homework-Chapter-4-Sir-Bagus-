#include<iostream>
using namespace std;

int main()
{
	float balance,
		  nChecks,
		  fees;
	
	cout << "Enter you balance in the beginning: $";
	cin >> balance;
	
	if(balance <= 0)
	{
		cout << "You account is overdrawn.";
	}
	
	cout << "Enter the number of checks:";
	cin >> nChecks;
	
	while(nChecks < 0)
	{
		cout << "Enter the number of checks: ";
		cin >> nChecks;
	}
	if(nChecks < 20)
	{
		balance - 0.1 * nChecks;
	}
	else if(nChecks >= 20 && nChecks <= 39)
	{
		balance - 0.08 * nChecks;
	}
	else if(nChecks >= 40 && nChecks <= 59)
	{
		balance - 0.06 * nChecks;
	}
	else if(nChecks >= 60)
	{
		balance - 0.04 * nChecks;
	}
	
	if(balance < 400)
	{
		fees = balance + 15;
	}
	
	cout << "The bank's service fees for the month will be: $"
		 << fees;
	
	return 0;
}
