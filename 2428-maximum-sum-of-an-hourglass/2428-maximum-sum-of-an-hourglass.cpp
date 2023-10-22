class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int maxSum=INT_MIN;
        for(int i=0;i<m-2;i++){
            int n=grid[i].size();
            for(int j=0;j<n-2;j++){
                int sum=0;
                for(int c=j;c<=j+2;c++){
                    sum+=grid[i][c];
                    sum+=grid[i+2][c];
                }
                sum+=grid[i+1][j+1];
                maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
    }
};