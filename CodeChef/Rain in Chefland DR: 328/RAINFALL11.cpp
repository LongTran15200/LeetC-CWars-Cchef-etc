#include <iostream>
using namespace std;

int main() {
    
    int t,x;
    
    cin >> t;
    
    while(t--){
        cin >> x;
        
        if( x < 3){
            cout << "LIGHT";
        }
        else if( x >= 7){
            cout << "HEAVY";
            
        }
        else{
            cout << "MODERATE";
        }
        cout << endl;
        
    }
    
    return 0;
}
