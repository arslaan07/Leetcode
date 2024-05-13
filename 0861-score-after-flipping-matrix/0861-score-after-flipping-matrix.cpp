class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int colMid = ceil(n/2.0); // Use floating-point division to get the correct value
        int rowMid = ceil(m/2.0);

        // Flip rows if necessary
        for(int i = 0; i < m; i++) {
            if(grid[i][0] == 0) {
                for(int j = 0; j < n; j++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        // Flip columns if necessary
        for(int j = 1; j < n; j++) {
            int cnt = 0;
            for(int i = 0; i < m; i++) {
                cnt += grid[i][j];
            }
            if(cnt < rowMid) {
                for(int i = 0; i < m; i++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        // Calculate the matrix score
        int score = 0;
        for(int i = 0; i < m; i++) {
            int rowValue = 0;
            for(int j = 0; j < n; j++) {
                rowValue = rowValue * 2 + grid[i][j];
            }
            score += rowValue;
        }

        return score;
    }
};
