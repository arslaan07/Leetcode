class Solution {
public:
    bool isVowel(char c) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A'
              || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou";
        map<char,int> mpp;                             
        for(int i=0; s[i]!='\0'; i++) {
            if(isVowel(s[i])){
            mpp[s[i]]++;
            }
        }
        string ans = "";
        int i = 0;
        int j = 0;
        while (i != s.size()) {
            if(isVowel(s[i])) {
                if(mpp.find(vowel[j]) != mpp.end()) {
                    ans.push_back(vowel[j]);
                    mpp[vowel[j]]--;
                    if(mpp[vowel[j]] == 0)
                    j++;
                }
                else{
                    j++;
                    continue;
                }
                
            }
            else{
                ans.push_back(s[i]);
            }
        i++;
        }
        return ans;
    }
};