#include<iostream>
#include<string>
using namespace std;

int main()
{
	string red,
		   blue,
		   yellow,
		   purple,
		   orange,
		   green,
		   choice,
		   choice1;	   
		   
	cout << "There are 3 primary colours."
		 << endl;
	cout << "Red" << endl;
	cout << "Blue" << endl;
	cout << "Yellow" << endl;	 
	cout << "Enter the first primary colour: "
		 << endl;	 
	cin >> choice;
	cout << "Enter the second primary colour: "
		 << endl;
	cin >> choice1;	
	
	if(choice == "red" && choice1 == "blue")
	{
		cout << "You will get a purple colour.";
	}
	else if(choice == "blue" && choice1 == "red")
	{
		cout << "You will get a purple colour.";
	}
	else if(choice == "red" && choice1 == "yellow")
	{
		cout << "You will get an orange colour.";
	}
	else if(choice == "yellow" && choice1 == "red")
	{
		cout << "You will get an orange colour.";
	}
	else if(choice == "blue" && choice1 == "yellow")
	{
		cout << "You will get a green colour.";
	}
	else if(choice == "yellow" && choice1 == "blue")
	{
		cout << "You will get a green colour.";
	}
	else
	{
		cout << "Error";
	}
	
	return 0;
}
