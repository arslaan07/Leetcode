class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(auto num : arr) {
            mpp[num]++;         
        }
        vector<int> temp(n+1, 0);
        for(auto it : mpp) {
            temp[it.second] += 1;
        }
        int uniqueElements = mpp.size();
        for(int i=1; i<=n; i++) {
            if(k <= 0) break;
            int typesOfElements = min(k/i, temp[i]);
            k -= typesOfElements*i;
            uniqueElements -= typesOfElements;
        }
        return uniqueElements;
    }
};