class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int num : nums) {
            mpp[num]++;
        }
        int twice;
        int once;
        for(int i=1; i<=n; i++) {
            if(mpp[i] == 2) {
                twice = i;
            }
            else if(mpp[i] == 0) {
                once = i;
            }
        }
        return {twice, once};
    }
};