//This Code is under the GNU Public License 3
//Have Fun!

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	wchar_t c1 = L'a';
	wchar_t c2 = L'\x00F8';
	wchar_t c3 = L'ø';
	wchar_t c4 = c1 + 1;
	
	wcout << c1 << endl;
	wcout << c2 << endl;
	wcout << c3 << endl;
	wcout << c4 << endl;
	
	wstring title = L"Welcome to Småland";
		wcout  << title << endl;
		
	return 0;
}
