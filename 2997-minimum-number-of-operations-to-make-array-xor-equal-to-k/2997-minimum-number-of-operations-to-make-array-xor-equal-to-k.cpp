class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int XOR = 0;
        for(int i=0; i<n; i++) {
            XOR ^= nums[i];
        }
        int cnt = 0;
        for(int i=0; i<32; i++) {
            if( ((XOR>>i)&1) != ((k>>i)&1) ) {
                cnt++;
            }
        }
        return cnt;
    }
};