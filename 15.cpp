#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int weight,
		distance;
	float cost;	
	
	cout << "Enter the weight of the item: " << endl;
	cin >> weight;
	cout << "Enter the distance(in miles) of the item you want to send to: " << endl;
	cin >> distance;
	
	if(weight < 0 && weight > 20)
	{
		cout << "Invalid weight." << endl;
	}
	if(distance < 10 && distance > 3000)
	{
		cout << "Invalid distance." << endl;
	}
		
	if(weight <= 2)
	{
		cost = distance * 1.1;
	}
	else if(weight > 2 && weight < 6)
	{
		cost = distance * 2.2;
	}
	else if(weight > 6 && weight <10)
	{
		cost = distance + 3.7;
	}
	else
	{
		cost = distance * 4.8;
	}
	
	
	return 0;
}
