class Solution {
public:
    
    int helper(vector<vector<int>>& grid, int m, int n, int i, int j) {
        // base case
        if(i==m || i==-1 || j==n || j==-1 || grid[i][j] == 0 || grid[i][j] == -1) {
            return 0;
        }
        
        // recursive case
        int temp = grid[i][j];
        grid[i][j] = -1;
        int ans = temp + max({helper(grid, m, n, i-1, j), 
                             helper(grid, m, n, i+1, j),
                             helper(grid, m, n, i, j-1),
                             helper(grid, m, n, i, j+1)});
        grid[i][j] = temp;
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] > 0) {
                    ans = max(ans, helper(grid, m, n, i, j));
                }
            }
        }
        return ans;
    }
};