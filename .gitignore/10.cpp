#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int replacementCost;
	int insuranceCost;
	
	cout << "Please enter replacement cost ($)\n";
	cin >> replacementCost;
	
	insuranceCost = replacementCost * 80 / 100;
	
	cout << fixed << setprecision(2) << showpoint
		 << "The minimum amount of insurance you should buy is $"
		 << insuranceCost << endl;
	
	return 0;
}
