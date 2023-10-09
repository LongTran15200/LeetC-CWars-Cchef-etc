#include<iostream>
using namespace std;
int main(){
string s,inp;
int n,flag=0;
cin>>s;
cin>>n;
for(int i=0;i<n;i++){
    cin>>inp;
    int superflag=0;
    for(int j=0;j<inp.length();j++){
        flag=0;
        for(int k=0;k<s.length();k++){
            if(inp[j]==s[k]){
                flag=1; //This means that the character was found and he can read ONLY that letter
                break;
            }
        }
        if(flag==0){
            superflag=1; //If this is 1 then he cannot read the word
            break;
        }
    }
    if(superflag==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
}
