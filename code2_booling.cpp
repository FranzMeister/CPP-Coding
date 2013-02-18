#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	
	if( (num % 2) == 1) // This code says that it will take the number that was inputted and check if it's dividable by 2
	{
		cout << endl << "The number is odd." << endl;
	}
	else
	{
		cout << endl << " The number is even" << endl;
	}
}
