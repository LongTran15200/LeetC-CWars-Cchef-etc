#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    if(x == y && x == z && y == z){
        cout << "Equilateral" <<endl;
    }
    else if (x == y || x == z || z == y){
        cout << "Isosceles" << endl;
        
    }
    else{
        cout << "Scalene" <<endl;
    }
    return 0;
}
