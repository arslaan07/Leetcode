class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int li[n];
        int ri[n];
        li[0]=nums[0];
        ri[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            li[i]=li[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            ri[i]=ri[i+1]*nums[i];
        }
        vector<int> ans(n);
        ans[0]=ri[1];
        ans[n-1]=li[n-2];
        for(int i=1;i<=n-2;i++){
            ans[i]=li[i-1]*ri[i+1];
        }
        return ans;
    }
};