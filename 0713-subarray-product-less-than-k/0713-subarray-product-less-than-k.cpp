class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n = nums.size();
        int cnt = 0;
        int j=0;
        int i=0;
        int prod = nums[j];
        while(j < n) {
    
            while(i < n && prod < k) {
             
                i++;
                if(i >= n) break;
                prod *= nums[i];
            }
            cnt += i-j;
            prod /= nums[j];
            j++;
        }
        return cnt;
    }
};