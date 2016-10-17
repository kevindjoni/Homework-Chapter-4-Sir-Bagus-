#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	unsigned num = time(0);
	srand (num);
	int qn1, 	//question 1
		qn2, 	//question 2
		sum,
		answer;
		
	qn1 = rand() % 998 + 1;
	qn2 = rand() % 998 + 1;
	
	sum = qn1 + qn2;
	
	cout << qn1 << endl;
	cout << qn2 << endl;
	cout << "___+" << endl;
	cin >> answer;
	
	if(answer == sum)
	{
		cout << "You answered correctly!";
	}
	else 
	{
		cout << "Wrong answer, please try again.";
	}
	
	return 0;
}
