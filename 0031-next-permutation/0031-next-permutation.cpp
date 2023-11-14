class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakpoint = -1;
        for(int i=n-2; i>=0; i--) {
            if(nums[i] < nums [i+1]) {
                breakpoint = i;
                break;
            }
        }
        if(breakpoint == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1; i>=0; i--) {
            if(nums[i] > nums[breakpoint]) {
                swap(nums[i], nums[breakpoint]);
                break;
            }
        }
        int i = breakpoint+1;
        int j = n-1;
        while(i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        return;
    }
};