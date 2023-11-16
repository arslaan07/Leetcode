class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        int i = 0;
        for(string num : nums) {
            char ch = num[i++];
            if(ch == '0'){
                ans += '1';
            }
            else{
                ans += '0';
            }
            
        }
        return ans;
    }
};