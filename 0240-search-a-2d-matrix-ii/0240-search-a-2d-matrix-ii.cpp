class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int i=0;
        int j=n-1;
       
            while(j >= 0 && i < matrix.size()) {
                if(target == matrix[i][j]) return true;
                else if(target < matrix[i][j]) {
                    j--;
                }
                else {
                    i++;
                }
            }
        return false;
    }
};