class Solution {
public:
    static bool myComparator(int a,int b){
    string s_a=to_string(a);
    string s_b=to_string(b);
    string s_a_b=s_a + s_b;
    string s_b_a=s_b + s_a;
    if(s_a_b > s_b_a){
        return true;
    }
    return false;
}
    
    string largestNumber(vector<int>& nums) {
        string result;
        long long sum=0;
        for(auto it:nums){
            sum=sum+it;
        }
        if(sum==0){
            return "0";
        }
        sort(nums.begin(), nums.end(), myComparator);
        
        for (auto it : nums) {
        result += to_string(it);
        }
        return result;
        
    }
};