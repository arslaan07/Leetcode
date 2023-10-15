class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int li;
        li=1;
        int ri[n];
        ri[n-1]=1;
        for(int i=n-2;i>=0;i--){
            ri[i]=ri[i+1]*nums[i+1];
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=li*ri[i];
            li=li*nums[i];
        }
        return ans;
    }
};