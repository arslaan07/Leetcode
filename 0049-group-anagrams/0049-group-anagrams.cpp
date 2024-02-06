class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;
        for(int i=0; i<n; i++) {
            vector<int> temp(26, 0);
            for(char ch : strs[i]) {
                temp[ch-'a']++;
            }
            string s = "";
            for(int x = 0; x < 26; x++) {
                int freq = temp[x];
                if(temp[x] > 0) {
                    s += string(freq, x+'a');
                }
            }
            mpp[s].push_back(strs[i]);
        }
        for(auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};