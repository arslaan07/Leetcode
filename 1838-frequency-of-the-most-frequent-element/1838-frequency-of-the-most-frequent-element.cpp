class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxCount = 0;
        
            long long sum = 0;
            int count = 0;
            int l = 0;
            int r = 0;
            while(r < n) {
                sum += nums[r];
                int windowSize = r - l + 1;
                long long windowSum = (long long)windowSize * (long long)nums[r];
                if(k >= windowSum - sum) {
                    count++;
                    maxCount = max(maxCount, count);
                }
                else{
                    sum -= nums[l];
                    l++;
                    count--;
                    sum -= nums[r];
                    continue;
                } 
                r++;
            }
        
        return maxCount;
    }
};