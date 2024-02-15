class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long p = 0;
        bool flag = false;
        long long ans;
        for(int i=0; i<n; i++) {
            if(p > nums[i]) {
                flag = true;
                ans = p+nums[i];
            }
            p += nums[i];   
        }
        return flag ? ans : -1;
    }
};