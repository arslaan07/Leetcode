class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-1;){
            sum=sum+min(nums[i],nums[i+1]);
            i=i+2;
        }
        return sum;
    }
};