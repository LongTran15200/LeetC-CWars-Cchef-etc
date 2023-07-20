#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {
    
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        //original if(s[i] = t[i])
        if(s[i] == t[i])
          //original res = '0';
            res += '0';
        else
          //original res = '1';
            res += '1';
    }
    
    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}


