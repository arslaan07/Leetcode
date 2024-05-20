class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<(1<<n); i++) {
            int XOR = 0;
            for(int j=0; j<log2(i+1); j++) {
                if((i>>j)&1 == 1) {
                    XOR ^= nums[j];
                }
            }
            ans += XOR;
        }
        return ans;
    }
};