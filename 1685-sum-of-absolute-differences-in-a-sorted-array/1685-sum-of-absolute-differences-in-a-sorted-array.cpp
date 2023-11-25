class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<int> prefix(n+1, 0);
        prefix[0] = 0;
        vector<int> suffix(n+1, 0);
        suffix[n] = 0;
        for(int i=1; i<=n; i++) {
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        for(int i=n-1; i>=0; i--) {
            suffix[i] = suffix[i+1] + nums[i];
        }
        for(int i=0; i<n; i++) {
            int left = nums[i] * i - prefix[i];
            int right = suffix[i+1] - nums[i] * (n-1-i);
            cout<<left<<" "<<right;
            int absDiff = left + right;
            result.push_back(absDiff);
        }
        return result;
    }
};