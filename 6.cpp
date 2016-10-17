#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float Weight,
		  mass;
		  
	cout << "Enter the mass of the object: " << endl;
	cin >> mass;	  
	
	Weight = mass * 9.8;
	cout << "The weight of the object is: " << Weight 
		 << "N" << "\n";
	  
	if(Weight > 1000)
	{
		cout << "The object is too heavy."
			 << endl;
    }  
	
	else if(Weight < 10)
	{
		cout << "The object is too light."
			 << endl;
	}
	
	return 0;
}
