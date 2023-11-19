class Solution {
public:
bool canBeDivisor(vector<int>& nums, int threshold, int divisor) {
    int n = nums.size();
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += ceil((double)nums[i]/divisor);
    }
    if(sum <= threshold) return true;
    return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int start = 1;
        int end = INT_MIN;
        for(int i=0; i<n; i++) {
            end = max(end, nums[i]);
        }
        int ans;
        while(start <= end) {
            int m = start + (end - start >> 1);
            if(canBeDivisor(nums, threshold, m)) {
                ans = m;
                end = m - 1;
            }
            else {
                start = m + 1;
            }
        }
        return ans;
    }
};