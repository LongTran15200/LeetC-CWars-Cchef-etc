//This problem is almost exactly like "Problems in your to-do list" only the difference is you need to input another variable.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, a;
	    
	    cin >> n >> a;
	    
	    int count = 0;
	    int arr[n];
	    
      	    for(int i = 0; i < n; i++){
            	cin >> arr[i];
	           	
           	if(arr[i] >= a){
           	    count++;
           	}
            }
	       
	   cout << count << endl;
	}
	return 0;
}
