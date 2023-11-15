class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int minDist = INT_MAX;
        int ans = 0;
        for(int i=0; i<n-2; i++) {
            // if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int dist = abs(target - sum);
                if(dist < minDist) {
                    minDist = dist;
                    ans = sum;
                }
//                 if(sum == 0) {
             
//                     j++;
//                     k--;
//                     // while(j < k && nums[j] == nums[j-1]) j++;
//                     // while(j < k && nums[k] == nums[k+1]) k--;
//                 }
                if(sum > target) {
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};