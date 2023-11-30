class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> nums(n1+n2, 0);
        for(int i=n1-1; i>=0; i--) {
            for(int j=n2-1; j>=0; j--) {
                nums[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                nums[i+j] += nums[i+j+1] / 10;
                nums[i+j+1] %= 10;
            }
        }
        string ans = "";
        //skip leading zeros
        int i = 0;
        bool flag = true;
        while(i < nums.size() && nums[i] == 0) {
           i++;
        }
        while(i < nums.size()) {
            ans += to_string(nums[i]);
            i++;
        }
        
        return ans;
    }
};