#include <iostream>
using namespace std;

int main() {
    int t,x;
    
    cin >> t;
    
    while(t--){
        
        cin >> x;
    
        if(x < 30){
            
            cout << "NO";
        }
        else{
            cout << "YES";
        
        }
        cout << endl;
    }

	return 0;
}
