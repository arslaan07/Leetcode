class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
       int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i=0;
        while(i < n) {
            if(nums[i+2]-nums[i] <= k) {
               ans.push_back({nums[i], nums[i+1], nums[i+2]}); 
            }
            else {
                break;
            }
            i=i+3;
        }
        if(ans.size() != n/3) return {};
        return ans;
    }
};
// 1   1   3   3   4   5   7   8   9  
// 1   2   3   3   3   7