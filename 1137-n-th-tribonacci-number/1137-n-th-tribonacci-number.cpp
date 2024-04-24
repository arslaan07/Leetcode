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
    int tribonacci(int n) {
//         // base case
//         if(n <= 1) return n;
//         if(n==2) return 1;
        
//         // recursive case
//         return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        
        vector<int> dp(n+1, -1);
        return topDownTrribonacci(n, dp);
    }
};