class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int money = 0;
        int i = weeks + 1;
        money = max(0, 28 * weeks + 7 * (weeks)*(weeks-1) / 2);
        int remainingDays = n - weeks * 7;
        int sum = i+remainingDays-1;
        money += sum*(sum+1)/2 - weeks*(weeks+1)/2;
        return money;
    }
};