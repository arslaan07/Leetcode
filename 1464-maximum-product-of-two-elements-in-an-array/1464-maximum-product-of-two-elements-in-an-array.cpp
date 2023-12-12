class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] > firstMax) {
                secondMax = firstMax;
                firstMax = nums[i];
            }
            else if(nums[i] > secondMax){
                secondMax = nums[i];
            }
        }
        return --firstMax * --secondMax;
    }
};