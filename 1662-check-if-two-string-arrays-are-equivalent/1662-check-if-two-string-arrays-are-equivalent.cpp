class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int word1Idx = 0;
        int word2Idx = 0;
        int idx1 = 0;
        int idx2 = 0;
        while(1) {
            char a = word1[word1Idx][idx1];
            char b = word2[word2Idx][idx2];
            if(a != b) return false;
            idx1++;
            idx2++;
            if(idx1 == word1[word1Idx].size()) {
                idx1 = 0;
                word1Idx++;
            }
            if(idx2 == word2[word2Idx].size()) {
                idx2 = 0;
                word2Idx++;
            }
            if(word1Idx == word1.size() && word2Idx == word2.size()) return true;
            if(word1Idx == word1.size() || word2Idx == word2.size()) return false;
        }
        return false;
    }
};