// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[1001][1001];

int MCM(int arr[], int i, int j){
    int mn = INT_MAX;
    int temp_ans;
    
    if(i>=j) return 0;
    
    if(t[i][j]!=-1) return t[i][j];
    
    for(int k=i; k<j; k++){
        temp_ans = MCM(arr,i,k) + MCM(arr,k+1, j) + arr[i-1]*arr[k]*arr[j];
        
        if(temp_ans<mn){
            mn = temp_ans;
        }
    }
    return t[i][j] = mn;
}
    int matrixMultiplication(int N, int arr[])
    {
        memset(t,-1,sizeof(t));
        int i=1;
        int ans = MCM(arr, i, N-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
