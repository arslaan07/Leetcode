class Solution {
public:
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
          c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int firstHalf = 0;
        int secondHalf = 0;
        for(int i=0; i<n; i++) {
            if(i < n/2) {
                if(isVowel(s[i])) {
                    firstHalf++;
                }
            } 
            else {
                if(isVowel(s[i])) {
                    secondHalf++;
                }
            }
        }
        return firstHalf == secondHalf;
    }
};