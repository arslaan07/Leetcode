class Solution {
public:
    int minOperations(vector<int>& nums) {
    int n = nums.size();
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[nums[i]]++;
    }
        int cnt = 0;
    for(auto it : mpp) {
        if(it.second == 1) return -1;
        cnt += it.second/3;
        if(it.second%3 != 0) cnt++;
    }
    return cnt;
    }
};