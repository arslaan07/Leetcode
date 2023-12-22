class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int maxm = 0;
        int i = 1;
        while(i != n) {
            int cnt0 = 0;
            int cnt1 = 0;
            for(int j=0; j<i; j++) {
                if(s[j] == '0') {
                    cnt0++;
                }
            }
            for(int j=i; j<n; j++) {
                if(s[j] == '1') {
                    cnt1++;
                }
            }
            maxm = max(cnt0+cnt1, maxm);
            i++;
        }
        return maxm;
    }
};