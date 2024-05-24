class Solution {
public:
    int subsetScore(vector<int>& subsetLetters, vector<int>& score, vector<int>& freq) {
        int totalScore = 0;
        for(int c = 0; c < 26; c++) {
            if(subsetLetters[c] > freq[c]) {
                return 0;
            }
            totalScore += subsetLetters[c] * score[c];
        }
        return totalScore;
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int n = words.size();
        vector<int> freq(26, 0);
        for(char c : letters) {
            freq[c - 'a']++;
        }
        int maxScore = 0;
        vector<int> subsetLetters(26, 0);
        
        for(int i = 0; i < (1 << n); i++) {
            fill(subsetLetters.begin(), subsetLetters.end(), 0);
            for(int k = 0; k < n; k++) {
                if((i >> k) & 1) {
                    for(char c : words[k]) {
                        subsetLetters[c - 'a']++;
                    }
                }
            }
            maxScore = max(maxScore, subsetScore(subsetLetters, score, freq));
        }
        return maxScore;
    }
};
