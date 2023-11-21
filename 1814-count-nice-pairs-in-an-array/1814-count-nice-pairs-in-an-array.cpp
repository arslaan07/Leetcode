class Solution {
public:
    int reverse(int n) {
        int k = 0;
        while(n) { 
            int l = n % 10;
            k = k * 10 + l;
            n = n / 10;
        }
        return k;   
    }
    int countNicePairs(vector<int>& nums) {
        int MOD = 1000000007;
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++) {
            int rev = reverse(nums[i]);
            int element = nums[i] - rev;
            mpp[element]++;
        }
        long long count = 0;
        for(const auto& it : mpp){
            int n = (it.second)  - 1;
            count += ((long long)n * (long long)(n + 1)) >> 1;
        }
        return count % MOD;
    }
};