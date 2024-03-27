class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
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
            if(i == j) {
                i++;
                prod = nums[i];
            }
            j++;
        }
        return cnt;
    }
};