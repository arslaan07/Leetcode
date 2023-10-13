class Solution {
public:
    int countSubstrings(string str) {
    int n=str.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        // Counting odd-length palindromes
        int j=0;
        while(i-j>=0 && i+j<=n-1 && str[i-j]==str[i+j]){
            count++;
            j++;
        }
    }
    for (double i = 0.5; i < n; i++) {
        // Counting even-length palindromes
        double j=0.5;
        while(i-j>=0 && i+j<=n-1 && str[int(i-j)]==str[int(i+j)]){
            count++;
            j++;
        }
    }
    return count;
    }
};