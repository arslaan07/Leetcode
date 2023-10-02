class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        // vector<long long> li(n,0);
        vector<long long> ri(n,0);
        // li[1]=nums[0];
        ri[n-2]=nums[n-1];
        // for(int i=2;i<n;i++){
        //     li[i]=max(li[i-1],(long long)nums[i-1]);
        // }
         for(int i=n-3;i>=0;i--){
            ri[i]=max(ri[i+1],(long long)nums[i+1]);
        }
        long long li;
        li=nums[0];
        long long maxVal=LLONG_MIN;
        for(int j=1;j<=n-2;j++){
            li=max(li,(long long)nums[j]);
            if((li-nums[j])*ri[j] > maxVal){
            maxVal=(li-nums[j])*ri[j];
            }
        }
        return maxVal>0 ? maxVal:0;
    }
};