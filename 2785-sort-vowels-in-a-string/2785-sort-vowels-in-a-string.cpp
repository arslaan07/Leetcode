class Solution {
public:
    string sortVowels(string s) {
        vector<char> a;
        vector<int> idx;
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
              || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                a.push_back(s[i]);
                idx.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        int j=0;
        for(int i=0; i<idx.size(); i++){
            s[idx[i]] = a[j];
            j++;
        }
        return s;
    }
};