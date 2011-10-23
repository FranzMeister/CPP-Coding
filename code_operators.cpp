//
//
//
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	text = " Hello, how are you? ";
	int pos = text.find(",", 0);
	cout << " " << pos << endl;
	
	
	text = " Hello, how are you? ";
	string partstring = text.substr(1,5);
	cout << " " << partstring << endl;
	
	text = " Hello, how are you? ";
	cout << " " << text.length() << endl;
	
	string text1 = "Knuddelmuddel";
	string text2 = "Knuddelmuddel";
	int result = text.compare(text2);
	cout << " " << result << endl;
	
	return 0;
}