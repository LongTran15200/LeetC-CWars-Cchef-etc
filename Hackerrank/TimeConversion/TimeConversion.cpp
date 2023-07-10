#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    //Calculating number with string using ascii
    //example: s[0]= '4'---------> in ascii value will be 52 - '0'(which is 48 in ascii). Therefore, return 4.
    int h0 = (int)s[0] - '0';
    int h1 = (int)s[1] - '0';
    
    //This calculation returns the exact number from h0 and h1.
    //example: h0= 1*10 = 10; h1= 4%10 will return 4. Therefore 10 + 4 = 14.
    int hr = (h0 * 10 + h1 % 10);

    if (s[8] == 'A' || s[8] == 'a') {
        if (hr == 12) {
            s[0] = '0';
            s[1] = '0';
        }
    } else if (s[8] == 'P' || s[8] == 'p') {
        if (hr != 12) {
            hr += 12;
            s[0] = (hr / 10) + '0';
            s[1] = (hr % 10) + '0';
        }
    }
    //substr(beginning of the str[0], length of the str)
    //this will only show any string[0-8] any value after that will not be displayed.
    return s.substr(0, 8);
}



/*
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
*/
