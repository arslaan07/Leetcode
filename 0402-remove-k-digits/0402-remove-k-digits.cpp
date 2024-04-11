#include <string>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        int n = num.length();
        
        // Edge case: if k is equal to the length of num, return "0"
        if (k == n) return "0";
        
        int i = 0;
        while (k > 0 && i < num.length() - 1) {
            // If the current digit is greater than the next digit, remove it
            if (num[i] > num[i + 1]) {
                num.erase(i, 1);
                k--;
                // Adjust i to prevent out of range error
                if (i > 0) i--;
            } else {
                i++;
            }
        }
        
        // If there are remaining removals, remove the last k digits
        num.erase(num.length() - k, k);
        
        // Remove leading zeroes
        int j = 0;
        while (j < num.length() && num[j] == '0') {
            j++;
        }
        
        num = num.substr(j);
        
        // If result is empty, return "0"
        if (num == "") {
            return "0";
        }
        
        return num;
    }
};
