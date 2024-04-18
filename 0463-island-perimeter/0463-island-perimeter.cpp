class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int cell = grid[i][j];
                if(cell == 1) {
                    if(j-1 >= 0 && grid[i][j-1] == 0) ans +=1;
                    if(j+1 <= n-1 && grid[i][j+1] == 0) ans +=1;
                    if(i-1 >= 0 && grid[i-1][j] == 0) ans +=1;
                    if(i+1 <= m-1 && grid[i+1][j] == 0) ans +=1;
                    if(i+1 == m) ans += 1;
                    if(j-1 == -1) ans += 1;
                    if(i-1 == -1) ans += 1;
                    if(j+1 == n) ans += 1;
                }
            }
        }
        return ans;
    }
};