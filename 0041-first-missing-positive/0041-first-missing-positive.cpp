class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        bool contains1 = false;
        
        for(int i=0; i<n; i++) {
            if(nums[i] == 1) {
                contains1 = true;
            }
        }
        // kya 1 ans h
        if(contains1 == false) {
            return 1;
        }
        // kya 2 se n-1 me koi ans h
        for(int i=0; i<n; i++) {
            if(nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }
        for(int i=0; i<n; i++) {
            int val = abs(nums[i]);
            if(val == n) {
                nums[0] = -abs(nums[0]);
            }
            else {
                nums[val] = -abs(nums[val]);
            }
        }
        for(int i=1; i<n; i++) {
            if(nums[i] > 0) {
                return i;
            }
        }
        // kya n hamara ans h
        if(nums[0] > 0) {
            return n;
        }
        
        // pakka ans n+1 h
        return n+1;
    }
};