class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxCount = 0;
        for(int i=0; s[i]!='\0'; i++) {
            if(s[i] == '(') {
                count++;
                maxCount = max(maxCount, count);
            }
            else if(s[i] == ')') {
                count--;
            }
        }
        return maxCount;
    }
};