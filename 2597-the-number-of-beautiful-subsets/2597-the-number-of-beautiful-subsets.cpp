#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    int ans;
    int K;
    
    void generateSubsets(int i, vector<int>& nums, int n, unordered_map<int, int>& mpp) {
        // base case
        if (i >= n) {
            ans++;
            return;
        }

        // recursive case - consider including nums[i]
        if (!mpp[nums[i] - K] && !mpp[nums[i] + K]) {
            mpp[nums[i]]++;
            generateSubsets(i + 1, nums, n, mpp);
            mpp[nums[i]]--;  // backtrack
        }

        // recursive case - skip nums[i]
        generateSubsets(i + 1, nums, n, mpp);
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        K = k;
        ans = 0;  // Initialize ans to 0
        int n = nums.size();
        unordered_map<int, int> mpp;
        generateSubsets(0, nums, n, mpp);
        return ans - 1;  // Subtract 1 to exclude the empty subset if it's not considered valid
    }
};


