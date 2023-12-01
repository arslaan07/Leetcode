class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        vector<char> w1;
        vector<char> w2;
        for(int i=0; i<word1.size(); i++) {
            for(size_t ch=0; ch<word1[i].size(); ch++) {
                w1.push_back(word1[i][ch]);
            }
        }
        for(int i=0; i<word2.size(); i++) {
            for(size_t ch=0; ch<word2[i].size(); ch++) {
                w2.push_back(word2[i][ch]);
            }
        }
        if(w1.size() != w2.size()) return false;
        int i=0;
        while(i<w1.size()) {
            if(w1[i] != w2[i]) return false;
            i++;
        }
        return true;
    }
};