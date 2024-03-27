class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0; i<n; i++) {
            int prod = 1;
            for(int j=i; j<n; j++) {
                prod = prod * nums[j];
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