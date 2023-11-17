class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        else if(nums[n - 1] > nums[n - 2]) return n - 1;
        int start = 1;
        int end = n - 2;
        while(start <= end) {
            int m = start + (end - start >> 1);
            if(nums[m] > nums[m-1] && nums[m] > nums[m+1]) {
                return m;
            }
            else if(nums[m+1] > nums[m]) {
                start = m + 1;
            }
            else {
                end = m - 1;
            }
        }
        return -1;
    }
};