class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int k=n-1;
        vector<int> square(n);
        while(i<=j){
            int squareI=nums[i]*nums[i];
            int squareJ=nums[j]*nums[j];
            if(squareI<squareJ){
                square[k]=squareJ;
                k--;
                j--;
            }
            else{
                square[k]=squareI;
                k--;
                i++;
            }
        }
        return square;
    }
};