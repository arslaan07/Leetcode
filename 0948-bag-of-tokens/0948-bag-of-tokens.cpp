class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int i = 0; 
        int j = n-1;
        int sc = 0;
        int maxSc = 0;
        sort(tokens.begin(), tokens.end());
        while(i <= j) {
            if(power >= tokens[i]) {
                power -= tokens[i];
                sc++;
                maxSc = max(sc, maxSc);
                i++;
            }
            else {
                if(sc >= 1) {
                    power += tokens[j];
                    sc--;
                }
                else {
                    break;
                }
                j--;
            }
        }
        return maxSc;
    }
};