class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int prod = 1;
            for(int j=i; j<n; j++) {
                prod *= nums[j];
                if(prod < k) {
                    cnt++;
                }
                else {
                    break;
                }
            }
        }
        return cnt;
    }
};