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
        vector<vector<int>> ans;
        for(int i=0; i<m; i++) {
            vector<int> temp;
            for(int j=0; j<n; j++) {
                int diff = oneRows[i] + oneCols[j] - (n-oneRows[i]) - (m-oneCols[j]);
                temp.push_back(diff);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};