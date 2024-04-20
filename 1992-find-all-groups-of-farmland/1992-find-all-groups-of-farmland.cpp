class Solution {
public:
    int maximum = INT_MIN;
    int lI = 0;
    int lJ = 0;
    void endOfFarm(vector<vector<int>>& land, int i, int j, int m, int n) {
    // base case
        if(i == -1 || i == m || j == -1 || j == n || land[i][j] == 0 || land[i][j] == -1) {
           return;
        }
        if(i+j > maximum) {
            maximum = i+j;
            lI = i;
            lJ = j;
        }
        
    // recursive case
        land[i][j] = -1;
        endOfFarm(land, i-1, j, m, n);
        endOfFarm(land, i+1, j, m, n);
        endOfFarm(land, i, j-1, m, n);
        endOfFarm(land, i, j+1, m, n);
        
        return;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ds;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                vector<int> ans;
                if(land[i][j] == 1) {
                    endOfFarm(land, i, j, m, n);
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(lI);
                    ans.push_back(lJ);
                    ds.push_back(ans);
                    maximum = INT_MIN;
                    lI = 0;
                    lJ = 0;
                }
            }
        }
        return ds;
    }
};