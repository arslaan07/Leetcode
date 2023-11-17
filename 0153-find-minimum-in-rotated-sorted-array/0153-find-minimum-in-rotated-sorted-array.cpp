class Solution {
public:
    int findMin(vector<int>& nums) {
    int n = nums.size();
	int start = 0;
	int end = n - 1;
	int minElement = INT_MAX;
	int minIdx = -1; 
	while(start <= end) {
		int m = start + (end - start >> 1);
		if(nums[m] < minElement) {
			minElement = nums[m];
			minIdx = m;
		}
		if(nums[m] < nums[end]) {
			end = m - 1;
		}
		else{
			start = m + 1;
		}
	}
	return nums[minIdx];
    }
};