class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int last = n-1;
        while(s[last] == ' ') {
            last--;
        }
        int len = 0;
        while(last != -1 && s[last] != ' ') {
            len++;
            last--;
        }
        return len;
    }
};