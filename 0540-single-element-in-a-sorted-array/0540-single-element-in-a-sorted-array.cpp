class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while(start < end) {
            int m = start + (end - start >> 1);
            if(nums[m] == nums[m ^ 1]) {
                start = m + 1;
            }
            else {
                end = m;
            }
        }
        return nums[start];
    }
};