class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mpp;
        for(int i=0; chars[i]!='\0'; i++) {
            mpp[chars[i]]++;
        }
        int length = 0;
        for(int i=0; i<words.size(); i++) {
            unordered_map<char, int> temp(mpp);
            bool flag = true;
            for(int j=0; j<words[i].size(); j++) {
                char ch = words[i][j];
                if(temp[ch] == 0) {
                    flag = false;
                    break;
                }
                else {
                    temp[ch]--;
                }
            }
            if(flag == true) {
                cout<<i<<" ";
                length += words[i].size();
            }
        }
        return length;
    }
};