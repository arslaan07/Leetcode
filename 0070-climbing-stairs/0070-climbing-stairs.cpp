class Solution {
public:
    int climbStairs(int n) {
        // an array to store the number of steps.
    vector<int> dp(n+1);
    // base cases 
    dp[0]=1;
    dp[1]=1;
    // loop for continuing dynamic programming
    for (int i=2;i<n+1;i++)
     {
          dp[i]=dp[i-1] +dp[i-2];
     }

// return the value 
     return dp[n];
        
    }
};