class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        // s = "bcxgsfsdfxklj"
        int n = s.size();
        map<char, int> mpp;
        for(int i=0; i<n; i++) {
            if(mpp.find(s[i]) == mpp.end()) {
                mpp[s[i]] = i;
            }
        }
        int maxLen = -1;
        for(int i=n-1; i>=0; i--) {
            maxLen = max(maxLen, i-mpp[s[i]]-1);
        }
        return maxLen;
    }
};