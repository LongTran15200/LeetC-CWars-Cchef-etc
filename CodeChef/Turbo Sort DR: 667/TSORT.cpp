#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    can >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
        
    }
    //Create a sort() function from the beginning of the array to the end. Preferably, its easier if you do it in vector in my opinion. 
        sort(arr,arr + n );
        
    for(int i = 0; i < n; i++){
        cout << arr[i]<< endl;
    }
    return 0;
}
