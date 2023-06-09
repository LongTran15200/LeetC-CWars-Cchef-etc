#include <iostream>
using namespace std;

int main() {
    
	int p1,p2,p3,p4;
	int count = 0 ;
	
	cin >> p1 >> p2 >> p3 >> p4;
	
	int arr[] = {p1,p2,p3,p4};
    
    for(int i = 0 ; i < 4; i++){
        if(arr[i] >= 10){
            count++;
        }
    }
    cout << count;    
    
	return 0;
}
