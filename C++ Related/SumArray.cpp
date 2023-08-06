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
  
  //Purpose of sizeof function is to determine the length of the array without having to hardcode every time the length of the array is different
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}


/*Let's say you printed n 
cout << n; 
Output
4
This way the function will determine the size of the array without having to do for loop for the length
*/

//More robust way/shorter 
#include <bits/stdc++.h>
using namespace std;
 
// Driver code
int main()
{
    int arr[] = { 12, 3, 4, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // calling accumulate function, passing first, last
    // element and initial sum, which is 0 in this case.
    cout << "Sum of given array is "
         << accumulate(arr, arr + n, 0);
    return 0;
}
