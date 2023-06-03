#include <iostream>
using namespace std;

int main() {
  //setting variables 
	int a,b,t;
	
  //Use t as a # of output count
  cin >> t;

	while(t--){
	    cin >> a >> b;
    
    //Find min #
	    cout << min(a,b) << endl;
	}
	return 0;
}

/*Sample
Input     Output
t = 4        |       
a   b        |
2   5   =    2    
3   2   =    2
12  2   =    2
7   9   =    7
*/
