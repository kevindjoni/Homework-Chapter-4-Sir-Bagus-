#include<iostream>
#include<string>
using namespace std;

int main()
{
	int time1,
		time2,
		time3;
	string name1,
		   name2,
		   name3,  
		   runner1,
		   runner2,	   
		   runner3;
	
	cout << "Enter the name of the first runner: " << endl;
	cin >> name1;
	cout << "Enter the time taken by the first runner(in seconds): ";
	cin >> time1;
	cout << "Enter the name of the second runner: " << endl;
	cin >> name2;
	cout << "Enter the time taken by the second runner(in seconds): ";
	cin >> time2;
	cout << "Enter the name of the third runner: " << endl;
	cin >> name3;
	cout << "Enter the time taken by the third runner(in seconds): ";
	cin >> time3;
	
	if(time1 < time2)
	{ 
		if(time1 < time3)
		{
			cout << "First winner is " << name1 << endl;
			cout << "second winner is " << name2 << endl;
			cout << "Third winner is " << name3 << endl;
		}
	}
	else if(time2 < time1)
	{
		if(time2 < time3)
		{
			cout << "First winner is " << name2 << endl;
			cout << "second winner is " << name1 << endl;
			cout << "Third winner is " << name3 << endl;
		}
	}
	else
	{
		cout << "First winner is " << name3 << endl;
		cout << "second winner is " << name2 << endl;
		cout << "Third winner is " << name1 << endl;
	}
	
	return 0;
}
