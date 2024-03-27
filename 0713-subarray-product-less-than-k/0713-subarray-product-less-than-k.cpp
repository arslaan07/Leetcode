class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n = nums.size();
        int cnt = 0;
        
        int i=0;
        int j=0;
        
        int prod = nums[0];
        
        while(j < n) {
            
            while(i < n && prod < k) {
                i++;
                if(i == n) break;
                prod = prod * nums[i];
            }
            cnt += i-j;
            prod = prod/nums[j];
            j++;
        }
        
        return cnt;
    }
};