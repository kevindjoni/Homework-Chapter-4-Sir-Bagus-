#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter a number within a range of 1 to 10." << endl;
	cin >> number;
	
	if(number < 1 && number > 10)
	{
		cout << "Error";
	}
	
	switch(number)
	{
		case 1 :
			cout << "I";
			break;
		case 2 :
			cout << "II";
			break;
		case 3 :
			cout << "III";
			break;	
		case 4 :
			cout << "IV";
			break;
		case 5 :
			cout << "V";
			break;
		case 6 :
			cout << "VI";
			break;				
		case 7 :
			cout << "VII";
			break;
		case 8 :
			cout << "VIII";
			break;
		case 9 :
			cout << "IX";
			break;
		case 10 :
			cout << "X";
			break;
		default :
			cout << "Number you entered is not in range.";
			break;
	}

	return 0;
}
