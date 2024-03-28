class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int length = 0;
        int maxLength = 0;
        int j = 0;
        int i = 0;
        
        while(j < n) {
            while(i < n) {
                if(mpp.find(nums[i]) == mpp.end()) {
                    mpp[nums[i]] = 1;
                }
                else if(mpp[nums[i]] < k) {
                    mpp[nums[i]]++;
                }
                else {
                    break;
                }
                length = i-j+1;
                maxLength = max(maxLength, length);
                i++;
            }
            if(i == n) break;
            mpp[nums[j]]--;
            j++;
        }
        return maxLength;
    }
};