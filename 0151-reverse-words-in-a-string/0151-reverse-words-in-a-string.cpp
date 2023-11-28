class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        string ans = "";
        int n = s.size();
        int count = 0;
        int spaces = 0;
        for(int i=n-1; i>=0; i--) {
            if(s[i] != ' ') count++;
            if(s[i] == ' ' && str.empty()) continue;
            if(s[i] == ' ') spaces++;
            if(spaces == 1 && !str.empty()) {
                reverse(str.begin(), str.end());
                ans += str + " ";
                str = "";
                spaces = 0;
                continue;
            }
            str += s[i];
        }
        if(count == s.size()) return s;
        str = "";
        if(s[0] != ' ')
        for(int i=0; i<n; i++) {
            if(s[i] != ' ')
                str += s[i];
            else{
                ans += str;
                break;
            }
        }
        else {
            ans.pop_back();
        }
        return ans;
    }
};