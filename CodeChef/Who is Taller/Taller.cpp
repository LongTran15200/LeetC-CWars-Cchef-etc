#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    
    cin >> t;
    
    while(t--){
        cin >> x >> y;
        
        if( x < y){
            cout << "B";
        }
        else{
            cout << "A";
        }
        cout << endl;
        
    }
    
    
    return 0;
}
