class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> temp;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0; j < bank[i].size(); j++) {
                sum += bank[i][j] - '0';
            }
            if(sum != 0)
                temp.push_back(sum);
        }

        int mul = 1;
        int add = 0;

       
        if(temp.size() >= 2)
        for(int i = 0; i < temp.size() - 1; i++) {
            mul = temp[i] * temp[i+1];
            add += mul;
        }

        return add;
    }
};
