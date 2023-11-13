class Solution {
public:
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou";
        map<char,int> mpp;                             
        for(int i=0; s[i]!='\0'; i++) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
              || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            mpp[s[i]]++;
        }
        string ans = "";
        int i = 0;
        int j = 0;
        while (i != s.size()) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
              || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
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