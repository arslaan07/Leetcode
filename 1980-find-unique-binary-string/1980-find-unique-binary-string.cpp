class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int maxLimit = pow(2,n);
        vector<int> hash(maxLimit, 0);
        for(int i=0; i<n; i++) {
            string a = nums[i];
            bitset<32> bits(a);
            int result = bits.to_ulong();
            hash[result]++;
        }
        string ans = "";
        for(int i=0; i<maxLimit; i++) {
            if(hash[i] == 0) {
                ans = bitset<32>(i).to_string();
                break;
            }
        }
        return ans.substr(32-n, n);
    }
};