class Solution {
public:
    void reverseWords(string s, string& ans, int start, int end) {
        ans += s.substr(end+1, start - end) + ' ';
        return;
    }
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = n - 1;
       while(i >= 0) {
           if(s[i] == ' ') i--;
            else {
                int start = i;
                int end = i;
                while(end >= 0 && s[end] != ' ') {
                    end--;
                }
                reverseWords(s, ans, start, end);
                i = end - 1;
            }
        }
        if(ans[(ans.size() - 1)] == ' ') ans.pop_back();
    return ans;
    }
};