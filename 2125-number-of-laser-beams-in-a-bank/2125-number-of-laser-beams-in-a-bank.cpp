class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prevSum = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int currSum = 0;
            for(char &ch : bank[i]) {
                if(ch == '1')
                currSum++;
            }
            ans += currSum * prevSum;   
            if(currSum != 0)
            prevSum = currSum;
        }
        return ans;
    }
};