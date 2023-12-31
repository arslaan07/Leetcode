class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        map<char, int> mpp;
        int maxLen = -1;
        for(int i=0; i<n; i++) {
            if(mpp.find(s[i]) == mpp.end()) {
                mpp[s[i]] = i;
            }
            else {
                maxLen = max(maxLen, i-mpp[s[i]]-1);
            }
        }
        // int maxLen = -1;
        // for(int i=n-1; i>=0; i--) {
        //     maxLen = max(maxLen, i-mpp[s[i]]-1);
        // }
        return maxLen;
    }
};