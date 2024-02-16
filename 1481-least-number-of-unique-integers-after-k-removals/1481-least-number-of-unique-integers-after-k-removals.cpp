class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(auto num : arr) {
            mpp[num]++;         
        }
        vector<int> temp;
        for(auto it : mpp) {
            temp.push_back(it.second);
        }
        sort(temp.begin(), temp.end());
        int cnt = 0;
        for(auto p : temp) {
            if(k >= p) {
                k -= p;
            }
            else {
                cnt++;
            }
        }
        return cnt;
    }
};