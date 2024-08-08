class Solution {
public:
    string convert(string s, int n) {
       if (n==1) return s; 
        int si=s.size();
        vector<vector<char>>struc(n,vector<char>(si,' '));
        int i=0,k=0,j=0;
        while(i<si){
            
                
                while(k<=n-1 && i<si){
                    struc[k][j]=s[i];
                    k++;
                    i++;
                }
            j+=1;
            k-=2;
           
            while(k>0 && i<si){
                struc[k][j]=s[i];
                k--;
                j++;
                i++;
                

            }

        }
        string ans="";
        for(int a=0;a<n;a++){
            for(int b=0;b<si;b++){
                if(struc[a][b]!=' ')
                ans+=struc[a][b];
            }

        }

    return ans;
    }
};
