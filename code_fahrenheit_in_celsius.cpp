


#include <iostream>
using namespace std;

int main()-
{
	double fahrenheit;
	double celsius;
	
	cout << " Please enter the Temperature in Fahrenheit: ";
	cin >> fahrenheit;
	
	celsius = (fahrenheit - 32) * 5.0 / 9.0;
	
	cout << " " << fahrenheit;
	cout << " Degrees Fahrenheit corresponds ";
	cout << celsius << " Degrees Celsius" << endl;
		
	return 0;
	
}