
#include <iostream>
using namespace std;

int main()
{
	int  n, m = 0;
	
	cin >> n;
	
	//These will be the tasks which will be allocated to the int "n" and "m"
	
	if (n <= 120)
	{
			//do sth.
	}
	
	if (n)
	{
			//do sth.
	}
	
	if (n > 100 || n < 0)
	{
			//do sth...
	}
	
	if (n > 100 && m++ > 100)
	{
			//do sth......
	}
	
	if ( (n > 100 || n < 0)			// n = 100 or n < 0 the "||" stands for "or"
		&& (m <= 100 && m >= 0) )	// 0 <= m <= 100
	{
			//do sth... for the sake of the world peace!
	}
	
	cout << m;
	
	return 0;
}