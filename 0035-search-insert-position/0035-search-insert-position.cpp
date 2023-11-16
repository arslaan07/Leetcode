class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int start = 0;
	int end = nums.size() - 1;
	int ans = -1;
	while(start <= end) {
		int m = start + (end - start >> 1);
		if(nums[m] >= target) {
			ans = m;
			end = m - 1;
		}
		else {
			start = m + 1;
		}
	}
	if(ans != -1) return ans;
	return nums.size();
    }
};