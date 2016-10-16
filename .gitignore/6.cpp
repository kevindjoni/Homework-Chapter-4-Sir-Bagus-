#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float sugar = 1.5,
		  butter = 1,
		  flour = 2.75,
		  nSugar,
		  nButter,
		  nFlour;
	int cookie;
	float totalSugar;
	float totalButter;
	float totalFlour;	  
		  
	nSugar = sugar / 48;
	nButter = butter / 48;
	nFlour = flour / 48;
	
	cout << "How many cookies do you want to make ? " << endl;
	cin >> cookie;
	
	totalSugar = cookie * nSugar;
	totalButter = cookie * nButter;
	totalFlour = cookie * nFlour;
	
	cout << fixed << setprecision(2) << showpoint 
		 << "You will need: \n";
	cout << totalSugar << " cups of sugar\n";	  
	cout << totalButter << " cups of butter\n";
	cout << totalFlour << " cups of flour\n";
		
	return 0;
}
