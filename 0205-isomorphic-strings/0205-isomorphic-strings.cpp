class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char,char> rep;
        unordered_map<char,bool> used;
        for(int i=0; i<n; i++) {
            if(rep.count(s[i])) {
                if(rep[s[i]] != t[i]) {
                    return false;
                }
            }
            else {
                if(used[t[i]] == true) {
                    return false;
                }
            }
            rep[s[i]] = t[i];
            used[t[i]] = true;
        }
        return true;
    }
};