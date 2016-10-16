#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int sharePurchased = 1000;
	float stockPurchased = 45.50;
	float totalPurchased = sharePurchased * stockPurchased;
	float firstCommission = totalPurchased * 2 / 100;
	int shareSold = 1000;
	float stockSell = 56.90;
	float totalSold = shareSold * stockSell;
	float secondCommission = totalSold * 2 / 100;
	float profit = (totalSold - firstCommission) 
				 - secondCommission; 
	
	cout << "Joe paid $" << totalPurchased << " for the stock." << endl;
	cout << "Joe paid $" << firstCommission << " to the broker when he purchased the stock." << endl;
	cout << "Joe sold $" << totalSold << " for the stock." << endl;
	cout << "Joe paid $" << secondCommission << " to the broker when he sold the stock." << endl;
	cout << "Joe made $" << profit << " profit from selling his stock." << endl;
	
	return 0;
}
