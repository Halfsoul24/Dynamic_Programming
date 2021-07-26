// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int t[1001][1001];
    int i=0;
    int count[2001]={0};
    int lcs_str(string &s1, string&s2, int n, int m){
        if(n==0 || m==0) return 0;
        if(t[m][n]!=-1) return t[m][n];
        
        if(s1[n-1]==s2[m-1]) {
            
            return t[m][n] = 1+lcs_str(s1,s2,n-1,m-1);
        }
        else{ 
            
            lcs_str(s1,s2,n-1,m);
            lcs_str(s1,s2,n,m-1);
            t[m][n]=0;
            return 0;
            
        }
    }
    
    int longestCommonSubstr(string S1, string S2, int n, int m)
    {
        memset(t,-1,sizeof(t));
        int maxi=-1;
        lcs_str(S1,S2,n,m);
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++){
                maxi = max(maxi,t[i][j]);
                // cout<<t[i][j]<<" ";
            }
            // cout<<endl;
        }
        return maxi;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
