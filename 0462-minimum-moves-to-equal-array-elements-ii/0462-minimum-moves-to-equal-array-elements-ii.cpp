class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        nth_element(nums.begin(),nums.begin()+n/2,nums.end());
        int mid=n/2;
        int steps=0;
        for(int i=0;i<n;i++){
            steps=steps+abs(nums[i]-nums[mid]);
        }
        return steps;
    }
};