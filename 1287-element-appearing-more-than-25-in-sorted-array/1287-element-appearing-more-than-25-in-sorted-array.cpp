class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        vector<int> candidates = {arr[n/4], arr[n/2], arr[n*3/4]};
        for(auto cand : candidates) {
            int lb = lower_bound(arr.begin(), arr.end(), cand) -arr.begin();
            int ub = upper_bound(arr.begin(), arr.end(), cand) - arr.begin();
            if(ub-lb > n/4) return cand;
            
        }
        return -1;
    }
};