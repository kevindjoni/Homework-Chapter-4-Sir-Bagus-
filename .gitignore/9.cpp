
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int nEaten;
	int totalCookies = 30;
	int servings = 10;
	int cookiePerServing;
	const int CALORIE_PER_SERVING = 300;
	int caloriesConsumed;
	int caloriePerCookie;
	
	cookiePerServing = totalCookies / servings;
	caloriePerCookie = CALORIE_PER_SERVING / cookiePerServing;
	
	cout << "How many cookies did you eat?\n";
	cin >> nEaten;
	
	caloriesConsumed = nEaten * caloriesConsumed;
	
	cout << "Total calories consumed were " << caloriesConsumed << " calories.\n";
	
	return 0;
}
