class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> oneRows(m, 0);
        vector<int> oneCols(n, 0);
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    oneRows[i]++;
                    oneCols[j]++;
                }
            }
        }
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int diff = oneRows[i] + oneCols[j] - (n-oneRows[i]) - (m-oneCols[j]);
                ans[i][j] = diff;
            }
        }
        return ans;
    }
};