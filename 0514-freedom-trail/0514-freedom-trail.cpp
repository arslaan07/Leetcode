#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countSteps(int ringIndex, int i, int n) {
       return  min(abs(i-ringIndex), n-abs(i-ringIndex));
    }
    // int minSteps(string ring, string key, int ringIndex, int keyIndex) {
    //     // base case
    //     if(keyIndex == key.size()) return 0;
    //     // recursive case
    //     int result = INT_MAX;
    //     for(int i=0; i<ring.size(); i++) {
    //         if(key[keyIndex] == ring[i]) {
    //             int steps = 1 + countSteps(ringIndex, i, ring.size());
    //             result = min(result, steps + minSteps(ring, key, i, keyIndex+1));
    //         }
    //     }
    //     return result;
    // }
    int minSteps(string ring, string key, int ringIndex, int keyIndex, vector<vector<int>>& dp) {
        if(dp[ringIndex][keyIndex] != -1) return dp[ringIndex][keyIndex];
        // base case
        if(keyIndex == key.size()) return dp[ringIndex][keyIndex] = 0;
        // recursive case
        int result = INT_MAX;
        for(int i=0; i<ring.size(); i++) {
            if(key[keyIndex] == ring[i]) {
                int steps = 1 + countSteps(ringIndex, i, ring.size());
                result = min(result, steps + minSteps(ring, key, i, keyIndex+1, dp));
            }
        }
        return dp[ringIndex][keyIndex] = result;
    }

    int findRotateSteps(string ring, string key) {
        int m = ring.size();
        int n = key.size();
        // Start aligning characters from the beginning of the key
        // return minSteps(ring, key, 0, 0);
        vector<vector<int>> dp(101, vector<int>(101, -1));
        return minSteps(ring, key, 0, 0, dp);
    }
};
