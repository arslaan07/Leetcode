class Solution {
public:
    int topDownTrribonacci(int n, vector<int>& dp) {
        if(dp[n] != -1) return dp[n];
        // base case
        if(n <= 1) return dp[n] = n;
        if(n==2) return dp[n] = 1;
        
        // recursive case
        return dp[n] = topDownTrribonacci(n-1, dp) + topDownTrribonacci(n-2, dp) + topDownTrribonacci(n-3, dp);
        
    }
    int bottomUpTrribonacci(int n) {
        vector<int> dp(n+1); 
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        
        for(int i=3; i<=n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
    int tribonacci(int n) {
//         // base case
        if(n <= 1) return n;
        if(n==2) return 1;
        
//         // recursive case
//         return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        
        // vector<int> dp(n+1, -1);
        // return topDownTrribonacci(n, dp);
        
        return bottomUpTrribonacci(n);
    }
};