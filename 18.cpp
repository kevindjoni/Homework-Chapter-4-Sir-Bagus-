#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int calories,
		fats,
		fatCalories,
		percentage;
	
	cout << "Enter the amount of calories in the food:" << endl;
	cin >> calories;
	cout << "Enter the amount of fats in the food:" << endl;
	cin >> fats;
	
	fatCalories = fats * 9;
	
	if(calories < 0 || fats < 0)
	{
		cout << "Invalid input.";
		return 0;
	}
	
	if(fatCalories > calories)
	{
		cout << "Invalid.";
		return 0;
	}
	
	percentage = (fatCalories / calories) * 100;
	
	if(percentage < 30)
	{
		cout << "It has low calories." << endl;
	}
	else
	{
		cout << "It has high calories." << endl;
	}
	
	return 0;
}
