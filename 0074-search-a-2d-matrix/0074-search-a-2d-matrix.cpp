class Solution {
public:
    bool targetPresent(vector<int>& matrix, int target) {
        int s = 0;
        int e = matrix.size() - 1;
        while(s <= e) {
            int m = s + (e - s >> 1);
            if(matrix[m] == target) {
                return true;
            }
            else if(matrix[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int e = matrix.size() - 1;
        while(s <= e) {
            int m = s + (e - s >> 1);
            if(targetPresent(matrix[m], target)) {
                return true;
            }
            else if(target > matrix[m][matrix[0].size() - 1]) {
                s = m + 1;
            }
            else if(target < matrix[m][0]) {
                e = m - 1;
            }
            else {
                return false;
            }
        }
        return false;
    }
};