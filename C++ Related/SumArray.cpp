#include <bits/stdc++.h>
using namespace std;
 
// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}
 
// Driver code
int main()
{
    int arr[] = { 12, 3, 4, 15 };
  
  //Purpose of sizeof function is to determine the length of the array without having to hardcode everytime the length of the array is different
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}
