class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        sort(nums.begin(), nums.end(), greater<int>());
        int count = 0;
        for(int i=0; i<=n-2; i++) {
            if(nums[i] != nums[i+1]) {
                count += i+1;
            }
        }
        return count;
    }
};