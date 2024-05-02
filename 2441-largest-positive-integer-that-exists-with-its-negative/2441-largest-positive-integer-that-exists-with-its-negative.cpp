class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0; 
        int j=nums.size() - 1;
        int ans = -1;
        while(i < j) {
           if(nums[j] == -nums[i]) {
               ans = nums[j];
               break;
           }
            else if(-nums[i] > nums[j]) {
                i++;
            }
            else if(-nums[i] < nums[j]){
                j--;
            }
        }
        return ans;
    }
};