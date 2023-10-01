class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> finalDs;
    for(int i=1;i<=numRows;i++){
        int ans=1;
        vector<int> ds;
        ds.push_back(ans);
        for(int j=1;j<i;j++){
            ans=ans*(i-j);
            ans=ans/j;
            ds.push_back(ans);
        }
        finalDs.push_back(ds);
    }
    return finalDs;
    }
};