class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {

        int  n = nums.size();
        vector<int> pre(n,-1);
        vector<int> post(n,-1);
        int currMax = nums[0] , currMin = nums[n-1];
        for(int i=0;i<n;i++){
            currMax = max(currMax,nums[i]);
            currMin = min(currMin,nums[n-1-i]);
            post[n-1-i] = currMin;
            pre[i] = currMax;
        }
        cout<<n;
        int ans ;
        for(int i=0;i<n-1;i++){
            if(pre[i] <= post[i+1]){
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};