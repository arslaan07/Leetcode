class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        vector<int> candidates = {arr[n/4], arr[n/2], arr[n*3/4]};
        for(auto cand : candidates) {
            auto lb = lower_bound(arr.begin(), arr.end(), cand);
            auto ub = upper_bound(arr.begin(), arr.end(), cand);
            if(4 * (distance(lb, ub)) > n) return cand;
            
        }
        return -1;
    }
};