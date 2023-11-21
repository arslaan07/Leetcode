class Solution {
public:
    int findMax(vector<vector<int>>& mat, int m, int n, int mid) {
        int maxElement = INT_MIN;
        int idx = -1;
        for(int i=0; i<m; i++) {
            if(mat[i][mid] > maxElement) {
                maxElement = mat[i][mid];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            int mid = start + (end - start >> 1);
            int maxIdx = findMax(mat, m, n, mid);
            int curr = mat[maxIdx][mid];
            int prev = mid-1 == -1  ? -1 : mat[maxIdx][mid-1];
            int next = mid+1 == n ? -1 : mat[maxIdx][mid+1];
            if(curr > prev && curr > next) {
                return {maxIdx, mid};
            }
            else if(prev > curr) {
                end = mid - 1;
            }
            else if(next > curr){
                start = mid + 1;
            }
        }
        return {-1, -1};
    }
};