class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> answer;
        for(int i=0; i<l.size(); i++) {
            vector<int> temp = nums;
            int s = l[i];
            int e = r[i];
            sort(temp.begin()+s, temp.begin()+e+1);
            bool flag = true;
            int diff = temp[e] - temp[e-1];
            for(int j=e-1; j>s; j--) {
                if(temp[j] - temp[j-1] != diff) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                answer.push_back(1);
            }
            else {
                answer.push_back(0);
            }
            
        }
        return answer;
    }
};