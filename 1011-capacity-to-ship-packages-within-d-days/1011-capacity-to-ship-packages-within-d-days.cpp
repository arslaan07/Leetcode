class Solution {
public:
    bool canBeShipped(vector<int>& weights, int days, int weight) {
        int n = weights.size();
        int day = 0;
        int sumOfWeights = 0;
        for(int i=0; i<n; i++) {
            sumOfWeights += weights[i];
            if(sumOfWeights > weight) {
                day++;
                sumOfWeights = weights[i];
            }
        }
        day++;
        if(day <= days) return true;
        return false;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int start = INT_MIN;
        int end = 0;
        for(int i=0; i<n; i++) {
            start = max(start, weights[i]);
            end += weights[i];
        }
        int ans;
        while(start <= end) {
            int m = start + (end - start >> 1);
            if(canBeShipped(weights, days, m)) {
                ans = m;
                end = m - 1;
            }
            else{
                start = m + 1;
            }
        }
        return ans;
    }
};