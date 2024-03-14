class Solution {
public:
    int atMostSum(vector<int> nums, int goal) {
        if(goal < 0) return 0;
        int n = nums.size();
        int i=0; 
        int j=0;
        int sum = 0;
        int cnt = 0;
        while(j < n) {
            sum += nums[j];
            while(sum > goal) {
                sum -= nums[i];
                i++;
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMostSum(nums, goal) - atMostSum(nums, goal-1);
        
    }
};