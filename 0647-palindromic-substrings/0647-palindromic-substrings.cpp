class Solution {
    int oddSubstr(string s, int n) {
        int cnt = 0;
        for(int i=0; i<n; i++) {
            int j = 0;
            while(i-j >= 0 && i+j <= n-1 && s[i-j] == s[i+j]) {
                cnt++;
                j++;
            }
        }
        return cnt;
    }
    int evenSubstr(string s, int n) {
        int cnt = 0;
        for(double i=0.5; i<n; i++) {
            double j = 0.5;
            while(i-j >= 0 && i+j <= n-1 && s[i-j] == s[i+j]) {
                cnt++;
                j++;
            }
        }
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int n = s.size();
        int o = oddSubstr(s, n);
        int e = evenSubstr(s, n);
        return o+e;
    }
};