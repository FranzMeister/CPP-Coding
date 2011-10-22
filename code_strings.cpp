//This Code is under the GNU Public License 3, made by Siripong Thomas Franzen "FranzMeister" 
//contact me at siripongfranzen@me.com or http://theteenatheist.tumblr.com or http://twitter.com/siripongfranzen
//Have Fun!

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string welcome = "Hello";
	string name = "";
	string welcoming = "";
	
	cout << "What is your name? ";
		cin >> name;
	
	welcoming = welcome + " " + name;
	
	cout << endl << welcoming << endl;
	
	return 0;
}