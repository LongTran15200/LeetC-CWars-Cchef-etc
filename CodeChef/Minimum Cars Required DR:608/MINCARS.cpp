#include <iostream>
using namespace std;

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    
	    cin >> n;
	    
	    //+3 is the remainder. for example, if there is just 1 person then (1+3)/4 =1. This is just to make sure the remainder is accounted for any additional car.
	    int car_seat= (n+3)/4;
	    
	    cout << car_seat <<endl;
	}
	return 0;
}
