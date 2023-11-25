class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int prefix = 0;
        vector<int> result(n+1, 0);
        result[n] = 0;
        for(int i=n-1; i>=0; i--) {
            result[i] = result[i+1] + nums[i];
        }
        for(int i=0; i<n; i++) {
            int left = nums[i] * i - prefix;
            prefix = prefix + nums[i];
            int right = - nums[i] * (n-1-i);
            int absDiff = left + right;
            result[i] += absDiff - nums[i];
        }
        result.pop_back();
        return result;
    }
};