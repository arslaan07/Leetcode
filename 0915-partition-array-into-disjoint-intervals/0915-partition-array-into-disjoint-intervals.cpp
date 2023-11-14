class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,-1);
        prefix[0] = nums[0];
        vector<int> suffix(n,-1);
        suffix[n-1] = nums[n-1];
        for(int i=1; i<n; i++){
            prefix[i] = max(prefix[i-1], nums[i]);
            suffix[n-i-1] = min(suffix[n-i], nums[n-i-1]);
        }
        int ans;
        for(int i=0; i<=n-2; i++) {
           if(prefix[i] <= suffix[i+1]) {
               ans = i+1;
               break;
           }
        }
        return ans;
    }
};