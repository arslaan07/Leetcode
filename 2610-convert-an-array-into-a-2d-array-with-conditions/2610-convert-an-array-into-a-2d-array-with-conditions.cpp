class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int > mpp;
        int rowSize = 0;
        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
            rowSize = max(rowSize, mpp[nums[i]]);
        }
        
        vector<vector<int>> ans(rowSize);
        for(int i=0; i<rowSize; i++) {
            for(auto it : mpp) {
                if(it.second != 0) {
                    ans[i].push_back(it.first);
                    mpp[it.first]--;
                }
            }
        }     
        return ans;
    }
};