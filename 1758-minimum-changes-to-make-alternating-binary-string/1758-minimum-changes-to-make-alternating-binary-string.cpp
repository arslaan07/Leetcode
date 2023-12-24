class Solution {
public:
    int minOperations(string s) {
        //formats: 0 1 0 1 0 1 0 1 ....
        //         1 0 1 0 1 0 1 0 ....
        // int n = s.size();
        // int startWithZero = 0;
        // int startWithOne = 0;
        // for(int i=0; i<n; i++) {
        //     if(i%2 == 0) {
        //         s[i] == '0' ? startWithZero++ : startWithOne++;
        //     }
        //     else {
        //         s[i] == '1' ? startWithZero++ : startWithOne++;
        //     }
        // }
        // return min(startWithZero, startWithOne);
        
        //Optimised approach
        int n = s.size();
        int startWithZero = 0;
        for(int i=0; i<n; i++) {
            if(i%2 == 0) {
                if(s[i] == '0') {
                  startWithZero++;  
                }
            }
            else {
                if(s[i] == '1') {
                  startWithZero++;  
                }
            }
        }
        int startWithOne = n - startWithZero;
        return min(startWithZero, startWithOne);
        
    }
};