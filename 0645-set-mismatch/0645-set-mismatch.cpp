class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate;
        int missing;
        for(int i=0; i<n; i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) 
                duplicate = abs(nums[i]);
            else {
                nums[index] *= -1;
            }
        }
        for(int i=0; i<n; i++) {
            if(nums[i] > 0)
                missing = i+1;
        }
        return {duplicate, missing};
    }
};