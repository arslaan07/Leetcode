class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hashmap(26, 0);
        for(int i=0; i<s.size(); i++) {
            hashmap[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++) {
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