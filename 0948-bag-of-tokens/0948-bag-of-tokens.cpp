class Solution {
public:
    int k = 0;
    int sc = 0;
    int getPower(vector<int>& tokens, int power) {
        int n = tokens.size();
        power += tokens[n-k-1];
        k++;
        sc--;
        return power;
    }
    // 55 71  82    power=54    score=0
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int maxSc = 0;
        for(int i=0; i<n; i++) {
            if(n-k-1 < i) break;
            if(power >= tokens[i]) {
                sc++;
                maxSc = max(sc, maxSc);
                power -= tokens[i];
            }
            else {
                if(i == n-k-1 || sc <= 0) break;
                power = getPower(tokens, power);
                if(power >= tokens[i]) {
                sc++;
                    maxSc = max(sc, maxSc);
                power -= tokens[i];
            }
            }
        }
    return maxSc;
    }
};