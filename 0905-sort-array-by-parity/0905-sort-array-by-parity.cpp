class Solution {
public:
    static bool myComparator(int a, int b){
        if(a%2==0 && b%2==1){
            return true;
        }
        return false;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),myComparator);
        return nums;
    }
};