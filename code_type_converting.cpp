

#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	double r = 2.5;
	
	n = static_cast<int>(r);
	cout << "n = " << n << endl;  //Output would be "n = 2"
	
	return 0;
}