class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int maxArea = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i>0 && matrix[i][j] == 1) {
                    matrix[i][j] += matrix[i-1][j];
                }
            }
            vector<int> heights = matrix[i];
            sort(heights.begin(), heights.end(), greater<int>());
            for(int j=0; j<n; j++) {
            int b = j+1;
            int h = heights[j];
            maxArea = max(maxArea, b*h);
            }
        } 
        return maxArea;
    }
};