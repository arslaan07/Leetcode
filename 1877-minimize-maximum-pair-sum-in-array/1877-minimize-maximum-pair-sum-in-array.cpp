class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }
        auto it1 = mpp.begin();
        auto it2 = --mpp.end();
        int maxSum = INT_MIN;
        while(it1 -> second !=0 && it2 -> second != 0) {
            int sum = it1 -> first + it2 -> first;
            maxSum = max(maxSum, sum);
            if(it1 -> second > it2 -> second) {
            it1 -> second = it1 -> second - it2 -> second;
            it2 -> second = 0;
            }
            else if(it2 -> second > it1 -> second) {
            it2 -> second = max(it1 -> second, it2 -> second) - min(it1 -> second, it2 -> second);
            it1 -> second = 0;
            }
            else{
            it1 -> second = 0;
            it2 -> second = 0;
            }
            if(it1 -> second == 0) it1++;
            if(it2 -> second == 0) it2--;
        }
        return maxSum;
    }
};