class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int one = 0;
        int zero = 0;
        for(auto x : s) {
            if(x == '1') one++;
            else zero++;
        }
        string ans = "";
        while(--one) {
            ans += '1';
        }
        while(zero--) {
            ans += '0';
        }
        ans += '1';
        return ans;
    }
};