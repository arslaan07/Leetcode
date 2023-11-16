class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        int i = 0;
        for(string num : nums) {
            char ch = num[i++];
            ans += ch == '0' ? '1' : '0';    
        }
        return ans;
    }
};