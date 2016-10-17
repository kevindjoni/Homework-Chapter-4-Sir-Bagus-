#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float length,
		  length1,
		  width,
		  width1,
	  	  area,
		  area1;
		  
	cout << "Enter the length of the first rectangle." << endl;
	cin >> length;
	cout << "Enter the width of the first rectangle." << endl;
	cin >> width;	  
		 
	cout << "\n\n" << "Enter the length of the second rectangle." << endl;
	cin >> length1;
	cout << "Enter the width of the second rectangle." << endl;
	cin >> width1;
	
	area = length * width;
	cout << fixed << setprecision(1) << showpoint 
		 << "\n\n" << "The area of the first rectangle is " << area;
	area1 = length1 * width1;
	cout << fixed << setprecision(1) << showpoint 
		 << "\n" << "The area of the second rectangle is " << area1
		 << endl << endl;
		
	if(area > area1)
	{
		cout << "The area of the first rectangle is greater than"
			 << " the second rectangle.";
	}
	else if(area1 > area)
	{
		cout << "The area of the second rectangle is greater than"
			 << " the first rectangle.";
	}
	else(area == area1);
	{
		cout << "The area of the second rectangle is equal to"
			 << " the first rectangle.";
	}	  	 	
		  
	return 0;
}
