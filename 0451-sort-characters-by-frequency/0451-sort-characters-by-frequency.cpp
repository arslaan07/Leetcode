class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;
        for(char ch : s) {
            mpp[ch]++;
        }
        vector<pair<char, int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), [](pair<char, int> a, pair<char, int> b) {
            if(a.second > b.second) {
                return true;
            }
            return false;
        });
        string ans = "";
        for(auto p : vec) {
            ans += string(p.second, p.first);
        }
        return ans;
    }
};