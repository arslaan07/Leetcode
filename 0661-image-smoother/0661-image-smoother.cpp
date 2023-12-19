class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int sum = 0;
                int cnt = 0;
                for(int x=i-1; x<=i+1; x++) {
                    for(int y=j-1; y<=j+1; y++) {
                        if(x >=0 && x <= m-1 && y >= 0 && y <= n-1) {
                            sum += img[x][y];
                            cnt++;
                        }
                    }
                }
                ans[i][j] = sum/cnt;
            }
        }
        return ans;
    }
};