class Solution {
public:
    void endOfFarm(vector<vector<int>>& land, int i, int j, int m, int n, int sum, pair<int, int>& p) {
    // base case
        if(i == -1 || i == m || j == -1 || j == n || land[i][j] == 0 || land[i][j] == -1) {
           return;
        }
        
    // recursive case
        if(i+j > sum) {
            sum = i+j;
            p = {i,j};
        }
        land[i][j] = -1;
        endOfFarm(land, i-1, j, m, n, sum, p);
        endOfFarm(land, i+1, j, m, n, sum, p);
        endOfFarm(land, i, j-1, m, n, sum, p);
        endOfFarm(land, i, j+1, m, n, sum, p);
        
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
                    pair<int, int> p = {i,j};
                    endOfFarm(land, i, j, m, n, i+j, p);
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(p.first);
                    ans.push_back(p.second);
                    ds.push_back(ans);
                }
            }
        }
        return ds;
    }
};