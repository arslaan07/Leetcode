class Solution {
public:
    typedef long long ll;
    long long wonderfulSubstrings(string word) {
        
        unordered_map<ll, ll> mpp;
        mpp[0] = 1;
        
        ll cXor = 0;
        ll result = 0;
        
        for(char ch : word) {
            int shift = ch - 'a';
            cXor ^= (1 << shift);
            result += mpp[cXor];
            for(char ch1='a'; ch1<='j'; ch1++) {
                shift = ch1 - 'a';
                ll checkXor = (cXor ^ (1 << shift));
                result += mpp[checkXor];
            }
            mpp[cXor]++;
        }
        return result;
    }
};