#include <iostream>
using namespace std;

int main()
{
	double males;
	double females;
	double total;
	
	cout << "Enter the number of males in the class." << endl;
	cin >> males;
	cout << "Enter the number of females in the class." << endl;
	cin >> females;
	
	total = males + females;
	
	cout << "The percentage of males inside the class is " << (males/total) * 100
		 << "%" << endl;
	cout << "The percentage of females inside the class is " << (females/total) * 100
		 << "%" << endl;
	
	return 0;
}
