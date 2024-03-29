class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maximum = INT_MIN;
        for(auto num : nums) {
            maximum = max(maximum, num);
        }
        long long cnt = 0;
        int j = 0;
        int i = 0;
        long long ans = 0;
            while(i < n) {
                if(nums[i] == maximum) cnt++;
                while(cnt >= k) {
                    ans += 1+n-(i+1);
                    if(nums[j] == maximum) cnt--;
                    j++;
                }
                i++;
            }
           return ans;
    }
};