#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int t[1001][1001];
    int Lcs(string &s1, string &s2, int n, int m){
        if(n==0 || m==0) return 0;
        
        if(t[m][n]!=-1) return t[m][n];
        
        if(s1[n-1]==s2[m-1]){
            return t[m][n] = 1+ Lcs(s1,s2,n-1,m-1);
        }
        else{
            return t[m][n] = max(Lcs(s1,s2,n-1,m), Lcs(s1,s2,n,m-1));
        }
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        memset(t,-1,sizeof(t));
        return Lcs(s1,s2,x,y);
    }
};
