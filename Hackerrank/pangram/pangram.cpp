#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    int count =0;
    string alp ={"abcdefghijklmnopqrstuvwxyz"};
    
    for(int i = 0; i < 26;i++){
        for(int j = 0; j < s.size();j++){
            
            //you can do alp[i] == s[j] || alp[i] - 32 ==s[j]
            //this basically subtracting letter in ascii to make either a letter A or a;
            if(alp[i] == tolower(s[j])){
                count++;
                break;
            }
        }
    }
    if(count == 26){
        return "pangram";
    }else{
        return "not pangram";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
