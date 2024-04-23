class Solution {
public:
    bool bottomUpWildcardMatchCleanCode(string s, string p, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1));

        for(int j=0; j<=n; j++) {
            bool flag = true;
            for(int k=j; k<n; k++) {
                if(p[k] != '*') {
                    flag = false;
                    break;
                }
            }
            dp[m][j] = flag;
        }

        for(int i=0; i<m; i++) {
            dp[i][n] = 0;
        }

        for(int i=m-1; i>=0; i--) {
            for(int j=n-1; j>=0; j--) {
                if(s[i] == p[j] || p[j] == '?') {
                    dp[i][j] = dp[i+1][j+1];
                }
                else if(p[j] == '*') {
                    dp[i][j] = dp[i][j+1] || dp[i+1][j];
                }
                else {
                    dp[i][j] = 0;
                }
            }
        }
        return dp[0][0];
    }

    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        return bottomUpWildcardMatchCleanCode(s, p, m, n);
    }
};
