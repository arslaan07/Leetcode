class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        map<char,int> mpp1;   
        map<char,int> mpp2;
        for(int i=0; i<n; i++) {
            mpp1[s[i]]++;
            mpp2[s[i]] = i;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(mpp1[s[i]] > 1) {
                set<char> st;
                for(int j=i+1; j<=mpp2[s[i]]-1; j++) {
                    st.insert(s[j]);
                }
                ans += st.size();
                mpp1[s[i]] = 0;
            }
        }
        return ans;
    }
};