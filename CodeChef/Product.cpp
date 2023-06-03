#include <iostream>
using namespace std;

int main() {
	int t,x,n;
	
	cin >> t;
	
	while(t--){
	    cin >> x >> n;
	    
	    int prod = x/10;
	    
	    int total = prod * n;
	    
	    cout << total << endl;
	}
	return 0;
}


/*Sample

Input       Output
t = 4         |
x   n         |
10  3    =    3
100 10   =    100
130 4    =    52
70  0    =    0
*/
