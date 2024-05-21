class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;
    void helper(vector<int>& nums, int i) {
        // base case
        if(i == nums.size()) {
            ans.push_back(ds);
            return;
        }
        
        // recursive case
        ds.push_back(nums[i]);
        helper(nums, i+1);
        ds.pop_back();
        
        helper(nums, i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> ans;
        // for(int i=0; i<(1<<n); i++) {
        //     vector<int> ds;
        //     for(int j=0; j<32; j++) {
        //         if(((i>>j)&1) == 1) {
        //             ds.push_back(nums[j]);
        //         }
        //     }
        //     ans.push_back(ds);
        // }
        // return ans;
        helper(nums, 0);
        return ans;
    }
};