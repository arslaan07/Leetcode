class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> oneRows(m, 0);
        vector<int> oneCols(n, 0);
        vector<int> zeroRows(m, 0);
        vector<int> zeroCols(n, 0);
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    oneRows[i]++;
                    oneCols[j]++;
                }
                else if(grid[i][j] == 0) {
                    zeroRows[i]++;
                    zeroCols[j]++;
                }
            }
        }
        // for(auto i : oneRows) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(auto i : oneCols) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(auto i : zeroRows) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(auto i : zeroCols) {
        //     cout << i << " ";
        // }
        // cout << endl;
        vector<vector<int>> ans;
        for(int i=0; i<m; i++) {
            vector<int> temp;
            for(int j=0; j<n; j++) {
                int diff = oneRows[i] + oneCols[j] - zeroRows[i] - zeroCols[j];
                temp.push_back(diff);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};