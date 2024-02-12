class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mE = nums[0];
        int count = 1;
        for(int i=1; i<n; i++) {
            if(nums[i] == mE) {
                count++;
            }
            else if(count == 0){
                mE = nums[i];
                count = 1;
            }
            else {
                count--;
            }
        }
        return mE;
    }
};