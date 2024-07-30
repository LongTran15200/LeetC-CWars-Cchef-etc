#include <iostream>
using namespace std;

int main() {
    string name1,name2;
    cin>> name1 >> name2;
    int percent1, percent2;
    cin >> percent1 >> percent2;
    if(percent1 > percent2){
        cout << name1 << "\n";
    }
    else if(percent2 > percent1){
        cout << name2 << "\n";
    }
    else{
        cout << "equal" << "\n";
    }

}
