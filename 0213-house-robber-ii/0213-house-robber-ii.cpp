class Solution {
public:
    int robBottomUpSpaceEfficient(vector<int> nums) {
		int n = nums.size();
        int nPlus1 = 0;
        int nPlus0 = 0;
        for(int i=n-1; i>=0; i--) {
        // lets rob the ith house
           int X = nums[i] + nPlus1;
        // lets not rob the ith house
           int Y = nPlus0; 
            
            nPlus1 = nPlus0;
            nPlus0 = max(X, Y);
        }
        return nPlus0;
}
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> a(nums.begin(), nums.end()-1);
        vector<int> b(nums.begin()+1, nums.end());
      return max ( robBottomUpSpaceEfficient(a),
        robBottomUpSpaceEfficient(b) );
    }
};