class Solution {
public:
    int minOperations(int k) {
        int operations = 0;
        int ans = INT_MAX;
        for(int i=1; i<=sqrt(k); i++) {
            int num = 1;
            num = num*i;
            int mul = k % num == 0 ? k/num : k/num + 1;
            num *= mul;
            if(num >= k) {
                operations = i + mul - 2;
                ans = min(ans, operations);
            }
        }
        return ans;
    }
};