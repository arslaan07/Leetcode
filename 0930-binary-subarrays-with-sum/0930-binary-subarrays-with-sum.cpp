class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int sum = 0;
        int cnt = 0;
        for(auto num : nums) {
            sum += num;
            if(sum == goal) {
                cnt++;
                if(mpp.find(sum-goal) != mpp.end()) {
                    cnt += mpp[sum-goal];
                }
            }
            else if(sum > goal) {
                if(mpp.find(sum-goal) != mpp.end()) {
                    cnt += mpp[sum-goal];
                }
            }
            mpp[sum]++;
        }
        return cnt;
    }
};