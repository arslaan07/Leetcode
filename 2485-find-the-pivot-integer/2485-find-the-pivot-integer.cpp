class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefix(n+1, 0);
        vector<int> suffix(n+1,0);
        for(int i=1; i<=n; i++) {
            prefix[i] = i + prefix[i-1];
        }
        for(int i=n-1; i>=0; i--) {
            suffix[i] = (i+1) + suffix[i+1];
        }
        for(auto x : prefix) {
            cout << x << " ";
        }
        cout << endl;
        for(auto x : suffix) {
            cout << x << " ";
        }
        cout << endl;
        for(int i=1; i<=n; i++) {
            if(prefix[i] == suffix[i-1]) {
                return i;
            }
        }
        return -1;
        
    }
};