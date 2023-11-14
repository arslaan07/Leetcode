class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        unordered_map<char, pair<int,int>> mpp;
        for(int i=0; i<n; i++) {
            mpp[s[i]].first++; 
            mpp[s[i]].second = i;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(mpp[s[i]].first > 1) {
                unordered_set<char> st;
                for(int j=i+1; j<=mpp[s[i]].second-1; j++) {
                    st.insert(s[j]);
                }
                ans += st.size();
                mpp[s[i]].first = 0;
            }
        }
        return ans;
    }
};