class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            int m = start + (end - start >> 1);
            if(target == nums[m]) {
                return true;
            }
            if(nums[start] == nums[m] && nums[m] == nums[end]) {
                for(int i=start; i<=end; i++) {
                    if(target == nums[i]){
                        return true;
                    }
                }
                return false;
                
            }
            else if(nums[start] <= nums[m]) {
                if(target >= nums[start] && target <= nums[m]) {
                    end = m - 1;
                }
                else {
                    start = m + 1;
                }
            }
            else{
                if(target >= nums[m] && target <= nums[end]) {
                    start = m + 1;
                }
                else {
                    end = m - 1;
                }
            }
         }
        return false;
    }
};