class Solution {
public:
    // int t[1000][1000];
    
    int lcs(string s, string b, int x, int y){
        
        int t[x+1][y+1];
        for(int i=0; i<=x; i++){
            for(int j=0; j<=y; j++){
                if(i==0 ||	j==0) t[i][j]=0;
             }
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(s[i-1]==b[j-1]) t[i][j] = 1+t[i-1][j-1];
                else t[i][j] = max(t[i-1][j], t[i][j-1]);                    
            }
        }
                                    
        return t[y][x];
    }
    int longestPalindromeSubseq(string s) {
        
        // memset(t,-1,sizeof(t));
        string b;
        int m = s.size();
        int n = m;
        b=s;
        reverse(b.begin(), b.end());
        return lcs(s,b, m,m);
    }
};
