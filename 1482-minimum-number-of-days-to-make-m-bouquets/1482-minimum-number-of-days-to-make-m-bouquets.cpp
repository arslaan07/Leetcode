class Solution {
public:
    bool canMakeBouquet(vector<int>& bloomDay, int m, int k, int day) {
        int n = bloomDay.size();
        int flowers = 0;
        int bouquet = 0;
        for(int i=0; i<bloomDay.size(); i++) {
            if(bloomDay[i] <= day) {
                flowers++;
                if(flowers == k) {
                    bouquet++;
                    flowers = 0;
                }
                if(bouquet == m) return true;
            }
            else{
                flowers = 0;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m * k > n) return -1;
        int start = INT_MAX;
        int end = INT_MIN;
        for(int i=0; i<n; i++) {
            start = min(start, bloomDay[i]);
            end = max(end, bloomDay[i]);
        }
        long long ans = -1;
        while(start <= end) {
            long long mid = start + (end - start >> 1);
            if(canMakeBouquet(bloomDay, m, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};