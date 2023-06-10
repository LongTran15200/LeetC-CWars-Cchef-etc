#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }

        int prod = 1;

        for (int i = n; i > 0; i--) {
            prod *= arr[i - 1];
        }

        cout << prod << endl;
    }

    return 0;
}

//Another simpler way to write this code 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prod = 1;

        for (int i = 1; i <= n; i++) {
            prod *= i;
        }

        cout << prod << endl;
    }

    return 0;
}
