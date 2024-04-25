class Solution {
public:
//     int solve(string& s,int index,int prev,int k, int n, vector<vector<int>>& dp){
//         if(index == n) return dp[index][prev] = 0;
        
//         if(dp[index][prev]!=-1) return dp[index][prev];
        
//         int inc=0,notinc=0;
//         if(prev==0 || abs(s[index]-prev)<=k){
//             inc=1+solve(s,index+1,s[index],k, n, dp);
//         }
//         notinc=solve(s,index+1,prev,k, n, dp);
        
//         return dp[index][prev]=max(inc,notinc);
//     }
    int solve(string s, int k, int n) {
        vector<vector<int>>dp (n+1,vector<int>(123));
        
        for(int j=0; j<123; j++) {
            dp[n][j] = 0;
        }
        for(int i=n-1; i>=0; i--) {
            for(int prev=0; prev<123; prev++) {
                if(prev==0 || abs(s[i]-prev)<=k){
                    dp[i][prev] = 1+dp[i+1][s[i]];
                   
                }
                    dp[i][prev] = max(dp[i][prev], dp[i+1][prev]);
            }
        }
        return dp[0][0];
    }
    int longestIdealString(string s, int k) {
        int n = s.size();
        // vector<vector<int>>dp (n+1,vector<int>(123,-1));
        // return solve(s,0,0,k,n,dp);
        
        return solve(s, k, n);
    }
};