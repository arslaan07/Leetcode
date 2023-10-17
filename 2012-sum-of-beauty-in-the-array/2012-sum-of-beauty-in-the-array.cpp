class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        int left;
        left=0;
        int right[n];
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=min(right[i+1],nums[i+1]);
        }
        int sum=0;
        for(int i=1;i<=n-2;i++){
            left=max(left,nums[i-1]);
            if(left<nums[i] && right[i]>nums[i]){
                sum+=2;
            }
            else if(nums[i-1]<nums[i] && nums[i+1]>nums[i]){
                sum+=1;
            }
        }
        return sum;
    }
};