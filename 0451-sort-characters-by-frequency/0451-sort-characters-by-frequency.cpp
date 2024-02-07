class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<pair<int, char>> vec(123,{0, 0});
        for(int i=0; i<n; i++) {
            vec[s[i]].second = s[i];
            vec[s[i]].first++;
        }
        sort(vec.begin(), vec.end(), [](pair<int, char> a, pair<int, char> b) {
           return a.first > b.first; 
        });
        string ans = "";
        for(const auto& p : vec) {
            ans += string(p.first, p.second);
        }
        return ans;
    }
};