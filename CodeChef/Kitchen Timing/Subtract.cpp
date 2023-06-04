#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	
	cin >> t;
	while(t--){
	    cin >> x >> y;
	    cout << y-x <<endl;
	}
	return 0;
}

/*Sample
Input       Output
t = 4         |
x   y         |
1   2    =    1
3   7    =    4
9   11   =    2
2   10   =    8
*/
