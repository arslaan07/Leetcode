class Solution {
public:
    string strWithout3a3b(int a, int b) {
        int n = a+b;
        string s(n, '0');
        int i = 2;
        bool flagA = false;
        bool flagB = false;
        while(i >= 0) {
            int j = i;
            while(j < s.size()) {
                if(a < b) {
                    s[j] = 'a';
                    flagA = true;
                    a--;
                    if(a == 0) break;
                }
                else{
                    s[j] = 'b';
                    flagB = true;
                    b--;
                    if(b == 0) break;
                }
                j += 3;
            }
            if(a == 0) break;
            if(b == 0) break;
            i -= 2;
        }
        for(int i=0; i<s.size(); i++) {
            if(flagB == true) {
                if(s[i] == '0') {
                    s[i] = 'a';
                }
            }
            else {
                if(s[i] == '0') {
                    s[i] = 'b';
                }
            }
        }
        
        return s;
    }
};