#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.size();
        // Create a DP table
        vector<vector<int>> dp(n + 1, vector<int>(150, -1));

        // Base case: if the index is greater than or equal to the string size, return 0
        for (int index = n; index >= 0; index--) {
            for (int prev = 0; prev < 150; prev++) {
                if (index == n) {
                    dp[index][prev] = 0;
                } else {
                    int inc = 0, notinc = 0;
                    if (prev == 0 || abs(s[index] - prev) <= k) {
                        inc = 1 + dp[index + 1][s[index]];
                    }
                    notinc = dp[index + 1][prev];
                    dp[index][prev] = max(inc, notinc);
                }
            }
        }

        // Return the result
        return dp[0][0];
    }
};
