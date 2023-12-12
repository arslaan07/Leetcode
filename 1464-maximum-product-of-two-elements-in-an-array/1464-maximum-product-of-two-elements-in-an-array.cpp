class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int prod;
        int maxProd = 0;
        while(i < j) {
            prod = (nums[i]-1) * (nums[j]-1);
            maxProd = max(maxProd, prod);
            if(nums[j] < nums[i]) {
                j--;
            }
            else{
                i++;
            }
        }
        return maxProd;
    }
};