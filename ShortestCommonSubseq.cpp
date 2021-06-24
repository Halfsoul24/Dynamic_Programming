// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int t[101][101];
    int LCS(string X, string Y, int m , int n){
        
        if(n==0 ||	m==0){
            t[m][n]=0;
            return t[m][n];
        }
        
        if(t[m][n]!=-1) return t[m][n];
        
        if(X[m-1]==Y[n-1])
            return t[m][n] = 1+ LCS(X,Y,m-1, n-1);
            
        else 
            return t[m][n] = max(LCS(X,Y,m,n-1), LCS(X,Y,m-1,n));
            
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        memset(t,-1,sizeof(t));
        int common = LCS(X,Y,m,n);
        return m+n-common;
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends
