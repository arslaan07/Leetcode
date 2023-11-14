class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        int y = nums[0];
        int maxP = x;
        int minP = y;
        for(int i=1; i<n; i++) {
            int temp = x;
            x = max(nums[i] * x, max(nums[i] * y, nums[i]));
            maxP = max(maxP, x);
            if(x == 0) x = 1;
            y = min(nums[i] * y, min(nums[i] * temp, nums[i]));
            minP= min(minP, y);
            if(y == 0) y = 1; 
        }
        return maxP;
    }
};