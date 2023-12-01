class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int totalBeauty = 0;
        for(int i=0; i<n; i++) {
            unordered_map<char,int> mpp;
            for(int j=i; j<n; j++) {
                mpp[s[j]]++;
                if(j-i+1 <= 2) continue;
                int minfreq = INT_MAX;
                int maxfreq = INT_MIN;
                for(auto it : mpp) {
                    minfreq = min(minfreq, it.second);
                    maxfreq = max(maxfreq, it.second);
                }
                totalBeauty += maxfreq-minfreq;
            }
        }
        return totalBeauty;
    }
};