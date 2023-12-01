class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "";
        while(a && b) {
            if(a > b) {
                ans += "aab";
                a -= 2;
                b -= 1;
            }
            else if(b > a) {
                ans += "bba";
                b -= 2;
                a -= 1;
            }
            else {
                ans += "ab";
                a -= 1;
                b -= 1;
            }
        }
        for(int i=0; i<a; i++) {
            ans += "a";
        }
        for(int i=0; i<b; i++) {
            ans += "b";
        }
        return ans;
    }
};