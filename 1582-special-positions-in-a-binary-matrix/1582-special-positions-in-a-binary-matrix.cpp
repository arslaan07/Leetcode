class Solution {
public:
    bool checkSpecial(vector<vector<int>>& mat, int i, int j) {
        int k=0;
        int cnt=0;
        while(k < mat[0].size()) {
            if(mat[i][k] == 1) cnt++;
            if(cnt > 1) return false;
            k++;
        }
        k = 0;
        cnt = 0;
        while(k < mat.size()) {
            if(mat[k][j] == 1) cnt++;
            if(cnt > 1) return false;
            k++;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int sp = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(mat[i][j] == 1) {
                    int val = checkSpecial(mat, i, j);
                    if(val == true) {
                        sp++;
                    }
                }
            }
        }
        return sp;
    }
};