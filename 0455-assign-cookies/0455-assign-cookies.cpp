class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int mg = g.size();
        int ns = s.size();
        if(ns == 0) return 0;
        int i = mg-1;
        int j = ns-1;
        int cnt = 0;
        while(i >= 0 && j >= 0) {
            if(s[j] >= g[i]) {
                cnt++;
                j--;
            }
            i--;
        }
        return cnt;
    }
};