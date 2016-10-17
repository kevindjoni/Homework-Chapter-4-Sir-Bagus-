#include<iostream>
using namespace std;

int main()
{
	float wavelength;
	
	cout << "Enter the object's wavelength: " << endl;
	cin >> wavelength;
	
	if(wavelength >= 0.01)
	{
		cout << "It would be Radio Waves.";
	}
	else if(wavelength >= 0.001 || wavelength < 0.01)
	{
		cout << "It would be Microwaves.";
	}
	else if(wavelength < 0.001 || wavelength >= 0.0000007)
	{
		cout << "It would be Infrared.";
	}
	else if(wavelength < 0.0000007 || wavelength >= 0.0000004)
	{
		cout << "It would be Visible Lights.";
	}
	else if(wavelength < 0.0000004 || wavelength >= 0.00000008)
	{
		cout << "It would be Ultraviolet.";
	}
	else if(wavelength < 0.00000008 || wavelength >= 0.0000000001)
	{
		cout << "It would be X-Rays.";
	}
	else if(wavelength < 0.0000000001)
	{
		cout << "It would be Gamma Rays.";
	}
	
	return 0;
}
