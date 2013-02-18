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
