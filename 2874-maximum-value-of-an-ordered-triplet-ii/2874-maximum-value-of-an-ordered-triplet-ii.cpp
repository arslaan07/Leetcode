class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n=nums.size();
        int l;
        l=nums[0];
        int r[n];
        r[n-1]=0;
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],nums[i+1]);
        }
        long long val=0;
        long long maxVal=0;
        for(int j=1;j<=n-2;j++){
            l=max(l,nums[j]);
            val=(long long)(l-nums[j])*(long long)r[j];
            maxVal=max((long long)maxVal,(long long)val);
        }
        return maxVal;
    }
};