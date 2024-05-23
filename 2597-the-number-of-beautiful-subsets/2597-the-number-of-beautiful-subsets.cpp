class Solution {
public:
    int ans = 0;
    void generateSubsets(int i, vector<int>& nums, int n, int k, unordered_map<int, int>& mpp) {
        // base case
        if(i >= n) {
            ans++;
            return;
        }
        
        // recursive case
        if(!mpp[nums[i]-k] && !mpp[nums[i]+k]) {
            mpp[nums[i]]++;
            generateSubsets(i+1, nums, n, k, mpp);
            mpp[nums[i]]--;
        }
        
        generateSubsets(i+1, nums, n, k, mpp);
        
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        generateSubsets(0, nums, n, k, mpp);
        return ans-1;
    }
};