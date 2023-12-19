class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int sum = img[i][j];
                int cnt = 1;
                if(i-1 != -1) {
                    sum += img[i-1][j];
                    cnt++;
                }
                if(i+1 != m) {
                    sum += img[i+1][j];
                    cnt++;
                }
                if(j-1 != -1) {
                    sum += img[i][j-1];
                    cnt++;
                }
                if(j+1 != n) {
                    sum += img[i][j+1];
                    cnt++;
                }
                if(i-1 != -1 && j-1 != -1) {
                    sum += img[i-1][j-1];
                    cnt++;
                }
                if(i-1 != -1 && j+1 != n) {
                    sum += img[i-1][j+1];
                    cnt++;
                }
                if(i+1 != m && j-1 != -1) {
                    sum += img[i+1][j-1];
                    cnt++;
                }
                if(i+1 != m && j+1 != n) {
                    sum += img[i+1][j+1];
                    cnt++;
                }
                ans[i][j] = sum/cnt;
            }
            
        }
        return ans;
    }
};