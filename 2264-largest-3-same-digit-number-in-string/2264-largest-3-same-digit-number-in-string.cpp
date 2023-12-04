class Solution {
public:
    string largestGoodInteger(string num) {
        string good = "";
        int count = 1;
        for(int i=1; i<num.size(); i++) {
            if(num[i] == num[i-1]) {
                count++;
            }
            else{
                count = 1;
            }
            if(count == 3 && num.substr(i-2, 3) > good) {
                good = num.substr(i-2, 3);
                count = 1;
            }
        }
        return good;
    }
};