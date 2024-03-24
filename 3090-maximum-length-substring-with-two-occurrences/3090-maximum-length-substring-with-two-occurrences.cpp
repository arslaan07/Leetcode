class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<int, int> mpp;
        int length = 0;
        int maxLen = 0;
        int i = 0;
        int j = 0;
        while(j < n) {
            if(mpp[s[j]] < 2) {
                mpp[s[j]]++;
                length = j-i+1;
                maxLen = max(maxLen, length);
                j++;
            }
            else {
                mpp[s[i]]--;
                i++;
            }
        }
        return maxLen;
    }
};