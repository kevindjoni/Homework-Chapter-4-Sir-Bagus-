#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float WIDGET_WEIGHT = 12.5;
	float palletWidgetWeight;
	float palletWeight;
	int nWidget;
	
	cout << "How heavy does the pallet weigh by itself?" << endl;
	cin >> palletWeight;
	
	cout << "What is the total weight of the pallet with the widgets?" << endl;
	cin >> palletWidgetWeight;
	
	nWidget = (palletWidgetWeight - palletWeight) / WIDGET_WEIGHT;
	
	cout << "There are " << nWidget << " widgets on the pallet.";
	
	return 0;
}
