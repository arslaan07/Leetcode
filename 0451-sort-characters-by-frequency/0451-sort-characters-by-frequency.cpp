class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;
        for(char ch : s) {
            mpp[ch]++;
        }
         vector<pair<char, int>> vec(mpp.begin(), mpp.end());

        // Define a custom comparator to sort based on the second parameter (frequency)
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // Sort in descending order
        });

        string ans = "";
        for(auto v : vec) {
            ans += string(v.second, v.first);
        }
        return ans;
    }
};