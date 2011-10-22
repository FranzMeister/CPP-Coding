//This Code is under the GNU Public License 3, made by Siripong Thomas Franzen "FranzMeister" 
//contact me at siripongfranzen@me.com or http://theteenatheist.tumblr.com or http://twitter.com/siripongfranzen
//Have Fun!

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	bool ans1;
	bool ans2;
	bool ans3 = false;
	
	ans1 = 10 < 5; //ans1 will become "false"
	ans2 = 10 > 5; //ans2 will become "true"
	
	ans3 = !ans1; //ans3 will become "true"
	ans3 = ans1 && ans2; //logical "and", ans3 will become "false"
	ans3 = ans1 || ans2; //logical "or", ans3 will become  "true"
	
	cout << ans1 << " false : 10 is not lower than 5" << endl;
	cout << ans2 << " true : 10 is above 5" << endl;
	cout << ans3 << " true : is's not the SAME as ans1" << endl;
}
