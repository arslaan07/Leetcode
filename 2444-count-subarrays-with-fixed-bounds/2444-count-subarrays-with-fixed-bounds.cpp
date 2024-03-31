class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long ans = 0;
        int j = 0;
        int i = 0;
        int minIdx = -1;
        int maxIdx = -1;
        bool minFound = false;
        bool maxFound = false;
        
            while(i < n) {
                if(nums[i] < minK || nums[i] > maxK) {
                    minFound = false;
                    maxFound = false;
                    j = i+1;
                }
                if(nums[i] == minK) {
                    minFound = true;
                    minIdx = i;
                }
                if(nums[i] == maxK) {
                    maxFound = true;
                    maxIdx = i;
                }
                if(minFound && maxFound) {
                    ans += min(minIdx, maxIdx) - j + 1;
                }
                i++;
            }
        return ans;
    }
};