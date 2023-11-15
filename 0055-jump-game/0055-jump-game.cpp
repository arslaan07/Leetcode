class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) {
            return true;
        }
        else if(nums[0] == 0) {
            return false;
        }
        int li = n-1;
        // int i = 0;
        // while(i < n) {
        //     if(nums[i] == 0) break;
        vector<int> prev (n,0);
            int j=0;
            while(j<n-1) {
            if(nums[0] == 0) break;
                if(nums[j] == 0) {
                    j = prev.back();;
                    prev.pop_back();
                    nums[j]--;
                    continue;
                }
                if(nums[j] >= li-j) {
                    return true;
                }
                else{
                    prev.push_back(j);
                    j += nums[j];
                }
            }
            // i++;
        // }
        return false;
    }
};