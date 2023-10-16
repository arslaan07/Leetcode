class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ds;
        long long ans=1;
        ds.push_back(ans);
        for(int j=1;j<=rowIndex;j++){
            ans=ans*(rowIndex-j+1);
            ans=ans/j;
            ds.push_back(ans);
        }
        
        return ds;
    }
};