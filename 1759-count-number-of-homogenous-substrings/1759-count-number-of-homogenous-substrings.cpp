class Solution {
public:
    int countHomogenous(string s) {
        long long count = 0;
        int i=0;
        int j=0;
        while(s[i] != '\0') {
            if(s[i] == s[j]){
                count = count + i - j + 1;
                i++;
            }
            else{
                j++;
            }
            
        }
        long long mod = 1e9 + 7;
        return count % mod;
    }
};
