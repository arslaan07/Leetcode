class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n-1;
        int jump = 1;
        for(int i=n-2; i>=0; i--) {
            if(nums[i] >= jump) {
                goal -= jump;
                jump = 1;
            }
            else{
                jump++;
            }
        }
        if(goal == 0) return true;
        return false;
    }
};