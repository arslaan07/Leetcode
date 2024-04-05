class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        int i = n-2;

        while(i != -1) {
            if(s[i] == s[i+1] + 32 || s[i] == s[i+1] - 32) {
                s.erase(i, 2); 
            }
            i--;
        }
        return s;
    }
};