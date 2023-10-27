class Solution {
public:
    string oddLengthPalindrome(string s){
        int n=s.size();
        string longestString="";
        int maxCount=0; 
        for(int i=0;s[i]!='\0';i++){
            int j=0;
            int count=0;
            while(i-j>=0 && i+j<=n-1 && s[i-j]==s[i+j]){
                count++;
                if(count>maxCount){
                    maxCount=count;
                    longestString=s.substr(i-j,2*j+1);
                }
                j++;     
            }
        }
        return longestString;
    }
        string evenLengthPalindrome(string s){
        int n=s.size();
        int maxCount=0;
        string longestString="";
        for(double i=0.5;s[i]!='\0';i++){
            double j=0.5;
            int count=0;
            while(i-j>=0 && i+j<=n-1 && s[i-j]==s[i+j]){
                count++;
                if(count>maxCount){
                    maxCount=count;
                    longestString=s.substr(i-j,2*j+1);
                }
                j++;     
            }
        }
            return longestString;
        
    }
    string longestPalindrome(string s) {
        string s1=oddLengthPalindrome(s);
        string s2=evenLengthPalindrome(s);
        return s1.size() > s2.size() ? s1 : s2;
    }
};