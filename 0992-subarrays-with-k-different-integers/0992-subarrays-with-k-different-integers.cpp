class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int noOfSubarrays = 0;
        int j = 0;
        int i = 0;
    
            while(i<n) {
                mpp[nums[i]]++;
                while(mpp.size() > k) {
                    mpp[nums[j]]--;
                    if(mpp[nums[j]] == 0) {
                        mpp.erase(nums[j]);
                    }
                    j++;
                }
                noOfSubarrays += i-j+1;
                i++;
            }
        return noOfSubarrays;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
};