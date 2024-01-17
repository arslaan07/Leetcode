class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for(int it : arr) {
            mpp[it]++;
        }
        unordered_map<int, int> freq;
        for(auto it : mpp) {
            freq[it.second]++;
            if(freq[it.second] > 1) return false;
        }
        return true;
    }
};
