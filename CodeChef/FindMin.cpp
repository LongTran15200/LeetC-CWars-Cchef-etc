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
