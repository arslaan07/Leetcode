class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = n - 1;
        while(i < j) {
            int sum = nums[i] + nums[j];
            maxSum = max(maxSum, sum);
            i++;
            j--;
        }
        return maxSum;
    }
};