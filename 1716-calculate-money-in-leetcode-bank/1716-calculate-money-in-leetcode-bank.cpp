class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int money = 0;
        int i = weeks + 1;
        money = max(0, 28 * weeks + 7 * (weeks)*(weeks-1) / 2);
        int remainingTimes = n - weeks * 7;
        for(int j=1; j<=remainingTimes; j++) {
            money += i;
            i++;
        }
        return money;
    }
};