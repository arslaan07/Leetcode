class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        cout << n << endl;
        int l = 0;
        int r = n-1;
        int deleted = 0; 
        while(l < r) {
            if(s[l] == s[r]) {
                deleted += 2;
                while(l+1 != r && s[l+1] == s[l]) {
                    l++;
                    deleted++;
                    cout << deleted << " ";

                }
                while(r-1 != l && s[r-1] == s[r]) {
                    r--;
                    deleted++;
                    cout << deleted << " ";
                }
                l++;
                r--;
            }
            else {
                break;
            }
               
        }
        return s.size()-deleted;
    }
};