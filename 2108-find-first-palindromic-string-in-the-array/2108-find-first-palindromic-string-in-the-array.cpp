class Solution {
public:
    bool checkPalindrome(string s1, string s2) {
        return s1 == s2;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(string word : words) {
            string reversed = word;
            reverse(reversed.begin(), reversed.end());
            if(checkPalindrome(word, reversed)) {
                return word;
            }
        }
        return "";
    }
};