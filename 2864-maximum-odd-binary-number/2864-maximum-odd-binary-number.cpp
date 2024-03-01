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
        string ans = string(--one, '1') + string(zero, '0') + '1';
        return ans;
    }
};