bool myComparator(pair<int, int> p1, pair<int, int> p2) {
        if(p2.second > p1.second)
            return true;
        return false;
    }
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(auto num : arr) {
            mpp[num]++;         
        }
        vector<pair<int, int>> temp(mpp.begin(), mpp.end());
        sort(temp.begin(), temp.end(), myComparator);
        int cnt = 0;
        for(auto p : temp) {
            if(k >= p.second) {
                k -= p.second;
            }
            else {
                cnt++;
            }
        }
        return cnt;
    }
};