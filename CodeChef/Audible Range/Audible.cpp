#include <iostream>
using namespace std;

int main() {
	int t,x;
	
	cin >> t;

	//while condition certain t amount
	while(t--){
	    
	    cin >> x;
	    
	    if( x < 67 || x > 45000){
	        cout << "NO";
	        
	    }
	    else{
	        cout << "YES";
	       
	    }
	    cout << endl;
	}
	return 0;
}
