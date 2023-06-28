void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    
    long long mini = 0;
    long long maxi = 0;
    
    for(int i = 0; i < 4;i++){
        mini+= arr[i];
        maxi+= arr[arr.size() - 1 - i];
    }
    cout << mini <<" "<<maxi;


}
int main(){
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

  return 0;
}

/*Sample Input
1 2 3 4 5

Sample Output
10 14
*/
