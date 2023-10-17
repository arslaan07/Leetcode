class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        int left[n];
        left[0]=0;
        int right[n];
        right[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=min(right[i+1],nums[i+1]);
        }
        int sum=0;
        for(int i=1;i<=n-2;i++){
            if(left[i]<nums[i] && right[i]>nums[i]){
                sum+=2;
            }
            else if(nums[i-1]<nums[i] && nums[i+1]>nums[i]){
                sum+=1;
            }
        }
        return sum;
    }
};