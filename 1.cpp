#include<iostream>
using namespace std;

int main()
{
	int a,
		b;
		
	cout << "Please enter an integer: " << endl;
	cin >> a;
	cout << "Please enter another integer: " << endl;
	cin >> b;
	
	if(a > b)
	{
		cout << a << " is greater than "
			 << b << endl;
	}	
	else if(b > a)
	{
		cout << b << " is greater than "
			 << a << endl;
	}
	else if(a == b)
	{
		cout << "The number you just input has the same amount";
	}
	else
	{
		cout << "Your input is invalid.";
	}	
	
	return 0;
}
