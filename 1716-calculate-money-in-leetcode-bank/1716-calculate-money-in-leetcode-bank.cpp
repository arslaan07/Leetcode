class Solution {
public:
    int totalMoney(int n) {
        int times = n/7;
        int sum = 0;
        int i;
        for(i=1; i<=times; i++) {
            int k = i+6;
            sum += k*(k+1)/2 - i*(i-1)/2;
        }
        int remainingTimes = n - times * 7;
        for(int j=1; j<=remainingTimes; j++) {
            sum += i;
            i++;
        }
        return sum;
    }
};