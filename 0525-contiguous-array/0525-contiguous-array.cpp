class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int sum = 0;
        mpp[0] = -1;
        int length = 0;
        int maxLen = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i] ? 1 : -1;
            
            if(mpp.find(sum) != mpp.end()) {
                length = i - mpp[sum];
                maxLen = max(length, maxLen);
            }
            else {
                mpp[sum] = i;
            }
        }
        return maxLen;
    }
};