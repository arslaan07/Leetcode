class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        if(num[n-1] % 2 == 1) return num;
        for(int i=num.size()-2; i>=0; i--) {
            if(num[i] % 2 == 1) return num.substr(0, i+1);
        }
        return "";
    }
};