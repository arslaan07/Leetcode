class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mid=n/2;
        int steps=0;
        for(int i=0;i<n;i++){
            steps=steps+abs(nums[i]-nums[mid]);
        }
        return steps;
    }
};