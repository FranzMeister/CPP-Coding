//This Code is under the GNU Public License 3, made by Siripong Thomas Franzen "FranzMeister" 
//contact me at siripongfranzen@me.com or http://theteenatheist.tumblr.com or http://twitter.com/siripongfranzen
//Have Fun!

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
		cout << endl << "The number is even." << endl;
	}
	else
	{
		cout << endl << " The number is odd" << endl;
	}
}