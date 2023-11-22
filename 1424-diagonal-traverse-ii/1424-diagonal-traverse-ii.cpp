class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> mpp;
        for(int i=nums.size()-1; i>=0; i--) {
            for(int j=0; j<nums[i].size(); j++) {
                int sum = i + j;
                mpp[sum].push_back(nums[i][j]);
            }
        }
        int sum = 0;
        vector<int> result;
        while(mpp.find(sum) != mpp.end()) {
            for(const auto& num : mpp[sum]) {
                result.push_back(num);
            }
            sum++;
        }
        return result;
    }
};