class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prevSum = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int currSum = 0;
            for(int j = 0; j < bank[i].size(); j++) {
                currSum += bank[i][j] - '0';
            }
            if(prevSum * currSum) {
                int mul = currSum * prevSum;
                ans += mul;
            }
            if(currSum != 0)
            prevSum = currSum;
        }
        return ans;
    }
};