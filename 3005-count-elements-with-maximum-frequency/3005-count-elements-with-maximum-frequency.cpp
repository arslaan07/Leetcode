class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(auto num : nums) {
            mpp[num]++;
        }
        vector<int> temp(mpp.size());
        for(auto it : mpp) {
            temp.push_back(it.second);
        }        
        int ans = 0;
        int maxEle = INT_MIN;
        for(auto x : temp) {
            if(x > maxEle) {
                maxEle = x;
                ans = x;
            }
            else if(x == maxEle) {
                ans += x;
            }
        }
        return ans;     
    }
};