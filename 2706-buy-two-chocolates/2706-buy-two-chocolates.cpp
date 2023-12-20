class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int fS = INT_MAX;
        int sS = INT_MAX;
        for(int i=0; i<prices.size(); i++) {
            if(prices[i] < fS) {
                sS = fS;
                fS = prices[i];
            }
            else if(prices[i] < sS) {
                sS = prices[i];
            }
        }
        int sum = fS + sS;
        if(money >= sum) {
            return money - sum;
        }
        return money;
    }
};