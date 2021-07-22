// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
  
  int t[1001][1001];
  int lcs(string s,string a,int x,int y){
      if(x==0 || y==0){
          return 0;
      }
      
      if(t[y][x]!=-1) return t[y][x];
      
      if(s[x-1]==a[y-1]){
          return t[y][x] = 1+lcs(s,a,x-1, y-1);
          
      }
      else{
          return t[y][x] = max(lcs(s,a, x-1, y), lcs(s,a,x,y-1));
      }
  }
    int minimumNumberOfDeletions(string s) { 
        memset(t,-1,sizeof(t));
        
        string a=s;
        reverse(a.begin(), a.end());
        int common = lcs(s,a,s.size(),s.size());
        
        return s.size() - common;
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
return 0;
}  // } Driver Code Ends
