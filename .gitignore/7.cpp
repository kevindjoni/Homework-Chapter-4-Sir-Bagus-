#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const float ADULT_PRICE = 10.00;
	const float CHILD_PRICE = 6.00;
	int adultNumber;
	int childNumber;
	float totalAdult;
	float totalChild;
	float grossProfit;
	float netProfit;
	float distributor;
	string movieName;
	
	cout << "Enter the name of the movie: \n";
	getline (cin, movieName);
	cout << "How many adult tickets were sold?\n";
	cin >> adultNumber;
	cout << "How many child tickets were sold?\n";
	cin >> childNumber;
	
	totalAdult = ADULT_PRICE * adultNumber;
	totalChild = CHILD_PRICE * childNumber;
	grossProfit = totalAdult + totalChild;
	netProfit = grossProfit * 20 / 100;
	distributor = grossProfit - netProfit;
	
	cout << fixed << setprecision(2) << showpoint;
	cout << "Movie name: " << setw(30) << adultNumber << endl;
	cout << "Adult tickets sold: " << setw(30) << adultNumber << endl;
	cout << "Child tickets sold: " << setw(30) << childNumber << endl;
	cout << "Gross box office profit: " << setw(30) << "$" << grossProfit << endl;
	cout << "Net box office profit: " << setw(10) << "$" << netProfit << endl;
	cout << "Amount paid to distributor: " << setw(5) << "$" << distributor << endl;
	
	return 0;
}
