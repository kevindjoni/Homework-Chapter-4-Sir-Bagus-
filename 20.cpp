#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int distance,
		medium;
		
	cout << "Choose the medium where the sound travels:" << endl;
	cout << "1. Air" << endl;
	cout << "2. Water" << endl;
	cout << "3. Steel" << endl;
	cin >> medium;
	
	if(medium < 1 || medium > 3)
	{
		cout << "Invalid input." << endl;
		return 0;
	}
	
	cout << "How far(in feet) will the sound travel in the medium: " << endl;
	cin >> distance;
	
	if(distance < 0)
	{
		cout << "Invalid input.";
		return 0;
	}
	
	if(medium == 1)
	{
		cout << "It will take " << fixed << setprecision(4) << showpoint << distance / 1100 
			 << " seconds to pass through the medium." << endl;
	}
	else if(medium == 2)
	{
		cout << "It will take " << fixed << setprecision(4) << showpoint << distance / 4900 
			 << " seconds to pass through the medium." << endl;
	}
	else if(medium == 3)
	{
		cout << "It will take " << fixed << setprecision(4) << showpoint << distance / 16400 
			 << " seconds to pass through the medium." << endl;
	}
	else
	{
		cout << "Invalid Input.";
	}
	
	return 0;
}
