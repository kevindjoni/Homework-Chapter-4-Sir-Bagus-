#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float loanPayment,
		  insurance,
		  gas,
		  oil,
		  tyres,
		  maintenance,
		  totalMonthly,
		  totalAnnual;
		  
	cout << "Please insert your: \n";
	cout << "Loan Payment: $";
	cin >> loanPayment;
	cout << "Insurance: $";
	cin >> insurance;
	cout << "Gas: $";
	cin >> gas;
	cout << "Oil: $";
	cin >> oil;
	cout << "Tyres: $";
	cin >> tyres;
	cout << "Maintenance: $";
	cin >> maintenance;	  
	
	totalMonthly = loanPayment + insurance + gas + oil 
				 + tyres + maintenance;
	cout << "The total monthly cost is $" << totalMonthly << endl;
	
	totalAnnual = totalMonthly * 12;
	cout << "The total annual cost is $" << totalAnnual << endl;			 
	
	return 0;
}
