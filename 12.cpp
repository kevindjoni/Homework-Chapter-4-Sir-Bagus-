#include<iostream>
using namespace std;

int main()
{
	const int packagePrice = 99;
	int quantity,
		total;
		
	cout << "Enter the number of units sold: " << endl;
	cin >> quantity;	
		
	while(quantity == 0)
	{
		cout << "Number of unit(s) sold: ";
		cin >> quantity;
	}	
	if(quantity >= 10 && quantity <= 19)	
	{
		total = quantity * packagePrice * 0.2;
		cout << "The total cost will be $"
			 << total << endl;
	}
	if(quantity >= 20 && quantity <= 49)	
	{
		total = quantity * packagePrice * 0.3;
		cout << "The total cost will be $"
			 << total << endl;
	}
	if(quantity >= 50 && quantity <= 99)	
	{
		total = quantity * packagePrice * 0.4;
		cout << "The total cost will be $"
			 << total << endl;
	}
	if(quantity >= 100)
	{
		total = quantity * packagePrice * 0.5;
		cout << "The total cost will be $"
			 << total << endl;
	}	
	
	return 0;
}
