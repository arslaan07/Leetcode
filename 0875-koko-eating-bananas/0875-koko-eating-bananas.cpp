class Solution {
public:
    bool canEatBananas(vector<int>& piles, int h, int speed) {
        long long hoursRequired = 0;
        for(int i=0; i<piles.size(); i++) {
            hoursRequired += ceil((double) piles[i]/speed);  
        }
        if(hoursRequired <= h) return true;
        return false;   
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 1;
        int end = INT_MAX;
        // for(int i=0; i<n; i++) {
        //     end = max(end, piles[i]);
        // }
        int ans = -1;
        while(start <= end) {
            long long m = start + (end - start >> 1);
            if(canEatBananas(piles, h, m)) {
                ans = m;
                end = m - 1;
            }
            else {
                start = m + 1;
            }
        }
        
        return ans;
    }
};