#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string month,
		   year;
	float totalAmount,
		  productSales,
		  totalTax,
		  stateTax,
		  countyTax;
		  
	cout << "Enter the month: " << endl;
	cin >> month;
	cout << "Enter the year: " << endl;
	cin >> year;
	cout << "Enter total amount of cash at the register: \n" << "$";
	cin >> totalAmount;	  	   
	
	productSales = totalAmount / 1.06;
	totalTax = totalAmount - productSales;
	stateTax = productSales * 4 / 100;
	countyTax = productSales * 2 / 100;
	
	cout << "Month: " << month << endl;
	cout << "Year: " << year << endl;
	cout << fixed << setprecision(2) << showpoint;
	cout << "Total money collected: $" << totalAmount << endl;
	cout << "Sales: $" << productSales << endl;
	cout << "County Sales Tax: $" << countyTax << endl;
	cout << "State Sales Tax: $" << stateTax << endl;
	cout << "Total Sales Tax: $" << totalTax << endl;
	
	return 0;
}
