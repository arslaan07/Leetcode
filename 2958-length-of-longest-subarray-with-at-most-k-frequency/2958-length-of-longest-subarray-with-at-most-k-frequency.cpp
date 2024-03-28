class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int len = 0;
        int maxLen = 0;
        int j = 0;
        int i = 0;
        while(j < n) {
            while(i < n) {
                if(mpp.find(nums[i]) == mpp.end()) {
                    mpp[nums[i]]++;
                }
                else if(mpp[nums[i]] < k) {
                    mpp[nums[i]]++;
                }
                else {
                    break;
                }
                len = i-j+1;
                maxLen = max(maxLen, len);
                i++;
            }
            if(i == n) break;
            mpp[nums[j]]--;
            j++;
        }
        return maxLen;
    }
};