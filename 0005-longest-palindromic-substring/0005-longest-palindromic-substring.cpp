class Solution {
public:
    string longestPalindrome(string str) {
    int n=str.length();
    int length=0;
    int maxLength=0;
    string longString="";
    for (int i = 0; i < n; i++) {
        // Counting odd-length palindromes
        int j=0;
        while(i-j>=0 && i+j<=n-1 && str[i-j]==str[i+j]){
            length=2*j+1;
            if(length>maxLength){
                maxLength=length;
                longString=str.substr(i-j,2*j+1);
            }
            j++;
        }
    }
    for (double i = 0.5; i < n; i++) {
        // Counting even-length palindromes
        double j=0.5;
        while(i-j>=0 && i+j<=n-1 && str[int(i-j)]==str[int(i+j)]){
            length=2*j+1;
             if(length>maxLength){
                maxLength=length;
                longString=str.substr(i-j,2*j+1);
            }
            j++;
        }
    }
    return longString;
    }
};