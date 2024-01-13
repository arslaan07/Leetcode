class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int, int> mpp;
        int n = s.size();
        for(int i=0; i<n; i++) {
            mpp[s[i]]++;
        }
        int m = t.size();
        int cnt = 0;
        for(int i=0; i<m; i++) {
            if(mpp.find(t[i]) != mpp.end() && mpp[t[i]] != 0) {
                mpp[t[i]]--;
            }
            else {
                cnt++;
            }
        }
        return cnt;
    }
};
 
 