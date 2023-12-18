class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int fL = INT_MIN;
        int sL = INT_MIN;
        int fS = INT_MAX;
        int sS = INT_MAX;
        for(int i=0; i<n; i++) {
            if(nums[i] > fL) {
                sL = fL;
                fL = nums[i];
            }
            else if(nums[i] > sL) {
                sL = nums[i];
            }
            if(nums[i] < fS) {
                sS = fS;
                fS = nums[i];
            }
            else if(nums[i] < sS) {
                sS = nums[i];
            }
        }
        return fL*sL - fS*sS;
    }
};