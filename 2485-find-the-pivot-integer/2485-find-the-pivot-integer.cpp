class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        int prefix = 0;
        int suffix = 0;
        for(int i=1; i<=n; i++) {
            suffix = sum - prefix;
            prefix = i + prefix;
            if(prefix == suffix) return i;
        }
        return -1;
    }
};