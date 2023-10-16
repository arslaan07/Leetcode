class Solution {
public:
    void factorial(int n,int r,vector<int>& ds){
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans=ans*(n-i+1);
        ans=ans/i;
    }
        ds.push_back(ans);
    }
    vector<int> getRow(int rowIndex) {
        vector<int> ds;
        for(int j=0;j<=rowIndex;j++){
            factorial(rowIndex,j,ds);
        }
        return ds;
    }
};