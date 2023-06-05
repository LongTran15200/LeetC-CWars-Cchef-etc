#include <iostream>
using namespace std;

int main() {
    int t,n,m;
    
    cin >> t;
    
    while(t--){
        cin >> n >> m;
        if(m < n){
            cout << n-m <<endl;
        }
        else{
            cout << 0 <<endl;
        }
    }
    
    return 0;
}

/* Sample
Input      Output
t = 4        |
n   m        |
5   3    =   2
5   7    =   0
4   1    =   3
8   8    =   0
*/
