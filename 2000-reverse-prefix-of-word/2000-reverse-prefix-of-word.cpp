class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int i = 0;
        for(; i<n; i++) {
            if(word[i] == ch) break;
        }
        if(i == n) return word;
        for(int j=0; j<=i; j++) {
            if(i == j) break;
            swap(word[j], word[i]);
            i--;
        }
        return word;
    }
};