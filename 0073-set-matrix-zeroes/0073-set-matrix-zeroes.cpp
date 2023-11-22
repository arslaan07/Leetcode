class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        for(int i=0; i<matrix.size(); i++) {
            bool flag = false;
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    row.push_back(0);
                    flag = true;
                    break;
                }
            }
            if(flag == false) {
                row.push_back(1);
            }
        }
        for(int i=0; i<matrix[0].size(); i++) {
            bool flag = false;
            for(int j=0; j<matrix.size(); j++) {
                if(matrix[j][i] == 0) {
                    col.push_back(0);
                    flag = true;
                    break;
                }
            }
            if(flag == false) {
                col.push_back(1);
            }
        }
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(row[i] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i=0; i<matrix[0].size(); i++) {
            for(int j=0; j<matrix.size(); j++) {
                if(col[i] == 0) {
                    matrix[j][i] = 0;
                }
            }
        }
        return;
    }
};