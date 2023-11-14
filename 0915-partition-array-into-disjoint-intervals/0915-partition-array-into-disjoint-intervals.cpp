class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int prefix = INT_MIN;
        vector<int> suffix(n,-1);
        suffix[n-1] = nums[n-1];
        for(int i=1; i<n; i++){
            suffix[n-i-1] = min(suffix[n-i], nums[n-i-1]);
        }
        int ans;
        for(int i=0; i<=n-2; i++) {
            prefix = max(prefix, nums[i]);
           if(prefix <= suffix[i+1]) {
               ans = i+1;
               break;
           }
        }
        return ans;
    }
};