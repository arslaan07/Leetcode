class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> answer;
        for(int i=0; i<l.size(); i++) {
            int s = l[i];
            int e = r[i];
            vector<int> temp(nums.begin()+s, nums.begin()+e+1);
            int first = INT_MAX;
            int last = INT_MIN;
            for(auto num : temp) {
                first = min(first,num);
                last = max(last, num);
            }
            if( (last - first) % (temp.size() - 1) != 0) {  //agar divisible nahi h to false return 
                answer.push_back(0);
                continue;
            }
            int d = (last - first) / (temp.size() - 1);
            set<int> hashset(temp.begin(), temp.end());
            while(first < last) {
                if(hashset.find(first) == hashset.end()) {
                    break;
                }
                first += d;
            }
            if(first == last) answer.push_back(1);
            else answer.push_back(0);
        }
        return answer;
    }
};