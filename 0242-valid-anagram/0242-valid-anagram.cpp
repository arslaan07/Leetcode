class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        vector<int> hashmap(26, 0);
        for(int i=0; i<s.size(); i++) {
            hashmap[s[i]-'a']++;
            hashmap[t[i]-'a']--;
        }
        for(int i=0; i<26; i++) {
            if(hashmap[i] != 0) {
                return false;
            }
        }
        return true;
    }
};