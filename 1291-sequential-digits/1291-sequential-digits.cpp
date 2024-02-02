class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        int cntL = 0;
        int cntH = 0;
        int tempL = low;
        int tempH = high;
        while(tempL != 0) {
            tempL /= 10;
            cntL++;
        }
        while(tempH != 0) {
            tempH /= 10;
            cntH++;
        }
        vector<int> ans;
        while(cntL <= cntH) {
        for(int i=0; i<=9-cntL; i++) {
            string num = s.substr(i, cntL);
            if(stoi(num) >= low && stoi(num) <= high)
                ans.push_back(stoi(num));
        }
            cntL++;
        }
        return ans;
    }
};