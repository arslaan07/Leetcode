class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int XOR = 0;
        for(int i=0; i<n; i++) {
            XOR ^= i^nums[i];
        }
        XOR ^= n;
        return XOR;
    }
};