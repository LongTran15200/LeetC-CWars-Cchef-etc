#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	
	while(t--){
	    
	    cin >> n;
	    int count = 0;
	    int arr[n];
	    
      	    for(int i = 0; i < n; i++){
            	cin >> arr[i];
	           	
           	if(arr[i] >= 1000){
           	    count++;
           	}
            }
	       
	   cout << count << endl;
	}
	return 0;
}

//Another simpler way to write this code 


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prod = 1;

        for (int i = 1; i <= n; i++) {
            prod *= i;
        }

        cout << prod << endl;
    }

    return 0;
}
