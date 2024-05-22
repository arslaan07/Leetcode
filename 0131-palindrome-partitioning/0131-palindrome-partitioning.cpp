class Solution {
public:
    vector<vector<string>> ds;
    vector<string> path;
    bool isPalindrome(string& s, int start, int end) {
        while(start < end) {
            if(s[start++]!=s[end--])
            return false;
        }
        return true;
    }
    void printPalindrome(int idx, string& s) {
        // base case
        if(idx == s.size()) {
            ds.push_back(path);
            return;
        }
        // recursive case
        for(int i=idx; i<s.size(); i++) {
            if(isPalindrome(s, idx, i)) {
                path.push_back(s.substr(idx, i-idx+1));
                printPalindrome(i+1, s);
                path.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        printPalindrome(0, s);
        return ds;
    }
};