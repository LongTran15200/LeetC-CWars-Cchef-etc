#include <iostream>
using namespace std;

int main() {
	int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_problems = 0, X_marks = 0, Y_marks = 0;
        cin >> N_problems >> X_marks >> Y_marks;
        
        int rem = Y_marks % X_marks, quo = Y_marks / X_marks;
        if(rem == 0 && (quo >= 0 && quo <= N_problems))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}
