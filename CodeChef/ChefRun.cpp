#include<iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Input complete
    int data[n],flag=0,c=0,finalc=0,num=0;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;flag==0;j++){
            j+=a[j];
            data[c]=j;
            for(int k=0;k<c;k++){
                if(j==data[k]){
                    flag=1;
                    num=j;
                    break;
                }
            }
            c++;
        }
        if(num==i) finalc++;
    }
}
}
