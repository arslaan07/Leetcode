class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        const int n = grid.size();
        if(n == 1)
            return grid[0][0];
 
        vector<vector<int>>dp(n, vector<int>(n));
       
        for(int j = 0; j < n; j++)
            dp[0][j] = grid[0][j];
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int ans = INT_MAX;
                for(int k = 0; k < n; k++){
                    if(j == k)
                        continue;
                     ans = min(ans, dp[i - 1][k] + grid[i][j]);
                }
                dp[i][j] = ans;
            }
        }
        return *min_element(dp[n - 1].begin(), dp[n - 1].end());
    }
};