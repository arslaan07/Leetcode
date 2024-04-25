class Solution {
public:
    int solve(string& s,int index,int prev,int k, int n, vector<vector<int>>& dp){
        if(index == n) return dp[index][prev] = 0;
        
        if(dp[index][prev]!=-1) return dp[index][prev];
        
        int inc=0,notinc=0;
        if(prev==0 || abs(s[index]-prev)<=k){
            inc=1+solve(s,index+1,s[index],k, n, dp);
        }
        notinc=solve(s,index+1,prev,k, n, dp);
        
        return dp[index][prev]=max(inc,notinc);
    }
    
    int longestIdealString(string s, int k) {
        int n = s.size();
        vector<vector<int>>dp (n+1,vector<int>(123,-1));
        return solve(s,0,0,k,n,dp);
    }
};