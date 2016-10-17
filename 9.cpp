#include<iostream>
using namespace std;

int main()
{
	const int penny = 1,
		  	  nickel = 5,
		  	  dime = 10,
		  	  quarter = 25;
	int nPenny,
		nNickel,
		nDime,
		nQuarter,
		dollar;
		
	cout << "Enter any amount of penny, nickel, dime ,and quarter "
		 << "to get an exact amount of 1 dollar." << endl;
	cin >> nPenny >> nNickel >> nDime >> nQuarter;
	
	dollar = (penny * nPenny) + (nickel * nNickel) + (dime * nDime)
		   + (quarter * nQuarter);
		   
	if(dollar == 100)
	{
		cout << "Well done, you answered it correctly.";
	}	   	 	
	else
	{
		cout << "Please try again.";
	}
		
			  
	return 0;
}

