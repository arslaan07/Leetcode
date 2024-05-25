class Solution {
public:
    vector<string> ans;
    void helper(int start, string s, vector<string>& wordDict, unordered_set<string>& st, string temp) {
        // base case
        if(start == s.size()) {
            temp.pop_back();
            ans.push_back(temp);
            return;
        }
        // recursive case
        
        for(int end=start+1; end<=s.size(); end++) {
            string word = s.substr(start, end-start);
            if(st.find(word) != st.end()) {
                helper(end, s, wordDict, st, temp + word + " ");
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st (wordDict.begin(), wordDict.end());
        helper(0, s, wordDict, st, "");
        return ans;
    }
};