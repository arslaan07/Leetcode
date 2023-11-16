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
                int i = start;
                int j = end;
                while(i != m && j != m) {
                    if(nums[i] == target || nums[j] ==target){
                        return true;
                    }
                    i++;
                    j--;
                }
                if(j != m && nums[j] ==target) { //j aur m ki distance mei sirf 1 ka frq hoga
                    return true;                 //at maximum, no need to check i because i
                }                            //is always close to m wo pehle hi pohnchega
                    
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