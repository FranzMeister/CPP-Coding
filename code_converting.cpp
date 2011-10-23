

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	stringstream converter;
	string s = "5";
		int n;
	
	// Convert Strings into Numbers
	converter << s;
	converter >> n;
	converter.clear();
	cout << "n = " << n << endl;
	
	n = 125;
	
	//Convert Numbers into Strings
	converter << n;
	converter >> s;
	converter.clear();
	cout << "s = " << s << endl;
	
	return 0;
}